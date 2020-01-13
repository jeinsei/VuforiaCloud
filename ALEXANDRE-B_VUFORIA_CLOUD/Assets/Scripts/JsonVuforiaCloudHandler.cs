using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using UnityEngine.Video;


public class JsonVuforiaCloudHandler : MonoBehaviour,IObjectRecoEventHandler

{
    /* DEFINITION DES VARIABLES */

    public static string metaData; // variable pour lecture du lien contenu en metadata dans le marqueur
    public ImageTargetBehaviour ImageTargetTemplate; // variable pour detection du marqueur
   
    private CloudRecoBehaviour mcloudRecoBehaviour; // variable pour le reconnaissance cloud
    private GameObject assetBundleGameObject; // Variable pour exploter l'assetBundle comme GameObject
    AssetBundle myLoadAssetBundle; // Gestion de l'AssetBundle

    private bool mIsScanning = false; // booléen pour savoir quand le marqueur est scanné
    private bool stopAssetBundleoCoroutine = false; // booléen pour stopper le chargement de l'assetBundles une fois chargé
 

    //FONCTION AU DEBUT DU SCRIPT//
    void Start()
    {
        CloudRecoBehaviour cloudRecoBehaviour = GetComponent<CloudRecoBehaviour>(); // lancement de la reconnaissance cloud
        if(cloudRecoBehaviour)
        {
            cloudRecoBehaviour.RegisterEventHandler(this); // lancement des dectections d'évenements selon le scan du marqueur
        }
        mcloudRecoBehaviour = cloudRecoBehaviour;

     
    }
    //FONCTION A CHAQUE FRAME//
    void Update()
    {
        StartCoroutine(LoadAssetBundles()); // chargement de la coroutine pour l'assetBundle
    }

    //COROUTINE DE L'ASSETBUNDLES//
    IEnumerator LoadAssetBundles()
    {
        /*
    //IMPORTATION DE L'ASSETBUNDLES VIA LE LIEN URL CONTENU DANS LE JSON//
      WWW wwwBundles = new WWW(JsonManager.model3dJson); // Lecture du lien URL pour récupération de l'asset bundle
      yield return wwwBundles;

      if (wwwBundles.error == null && stopAssetBundleoCoroutine == false)
      {

          AssetBundle assetBundle = wwwBundles.assetBundle; // récupération de l'asset bundle
          assetBundleGameObject = (assetBundle.LoadAsset(JsonManager.nameOfAssetBundle)) as GameObject; // et récupération de l'Asset bundle et selection du model 3D par "nom"/string
          Debug.Log(myLoadAssetBundle == true ? "echec de chargement des données" : "les données ont été importées avec succès");
          stopAssetBundleoCoroutine = true;
      }
      else
      {
          Debug.Log(wwwBundles.error);
      } 
      */

        yield break;
    }

    public void OnInitError(TargetFinder.InitState initError) // si il y a une erreur
    {

    }

    public void OnInitialized(TargetFinder targetFinder) // quand la tergat est initialisée
    {
    
    }

    public void OnStateChanged(bool scanning) // Début du scan
    {
        mIsScanning = scanning;
        if(scanning) // si l'image est scannée
        {

            ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>(); // The ObjectTracker encapsulates methods to manage DataSets and provides access to
                                                                                         ///       the ImageTargetBuilder and TargetFinder classes
            //  tracker.TargetFinder.ClearTrackables(false); 2018.1
            tracker.GetTargetFinder<ImageTargetFinder>(); // 2018.4
           
        }
    }

    //FONCTION DE RECHERCHE DE L'IMAGE TARGET DANS LE VUFORIA CLOUD//
    public void OnNewSearchResult(TargetFinder.TargetSearchResult targetSearchResult)
    {
       // TargetFinder.TargetSearchResult cloudResult = (TargetFinder.TargetSearchResult)targetSearchResult; // 2018.1
        TargetFinder.CloudRecoSearchResult cloudResult = (TargetFinder.CloudRecoSearchResult)targetSearchResult; // 2018.4
        Debug.Log(cloudResult.MetaData);

        metaData = (cloudResult.MetaData);
     

        GameObject newImageTarget = Instantiate(assetBundleGameObject) as GameObject; // instantiation de l'imagetarget
        GameObject augmentation = null;
        if (augmentation != null) // lorsque l'image est augmentée
            augmentation.transform.SetParent(newImageTarget.transform); //l'ojet 3D est calée sur la position de l'imagetarget
        if(ImageTargetTemplate)
        {
            ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
            //ImageTargetBehaviour imageTargetBehaviour = (ImageTargetBehaviour)tracker.TargetFinder.EnableTracking(targetSearchResult, newImageTarget);
            ImageTargetBehaviour imageTargetBehaviour = (ImageTargetBehaviour)tracker.GetTargetFinder<TargetFinder>().EnableTracking(targetSearchResult, newImageTarget);


        }

        if(!mIsScanning)
        {
            mcloudRecoBehaviour.CloudRecoEnabled = true;

        }
    }

    public void OnUpdateError(TargetFinder.UpdateState updateError)
    {
        throw new System.NotImplementedException();
    }

    // Update is called once per frame
   
}
