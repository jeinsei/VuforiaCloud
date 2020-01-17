using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using UnityEngine.Video;


public class JsonVuforiaCloudHandler : MonoBehaviour,IObjectRecoEventHandler

{
    /* DEFINITION DES VARIABLES */

    private CloudRecoBehaviour mcloudRecoBehaviour;
    private bool mIsScanning = false;
    private string mTargetMetadata = "";
    public ImageTargetBehaviour ImageTargetTemplate;
    public static string metaData; // variable pour lecture du lien contenu en metadata dans le marqueu
  
    //FONCTION AU DEBUT DU SCRIPT//
    void Start()
    {
        mcloudRecoBehaviour = GetComponent<CloudRecoBehaviour>(); // lancement de la reconnaissance cloud
        
        if(mcloudRecoBehaviour)
        {
            mcloudRecoBehaviour.RegisterEventHandler(this); // lancement des dectections d'évenements selon le scan du marqueur
        }
  

    } 

    public void OnInitError(TargetFinder.InitState initError) // si il y a une erreur
    {

    }

    public void OnInitialized(TargetFinder targetFinder) // quand la tergat est initialisée
    {
    
    }

    public void OnUpdateError(TargetFinder.UpdateState updateError)
    {
        throw new System.NotImplementedException();
    }

    public void OnStateChanged(bool scanning) // Début du scan
    {
        mIsScanning = scanning;

        if(scanning) // si l'image est scannée
        {

            var tracker = TrackerManager.Instance.GetTracker<ObjectTracker>(); // The ObjectTracker encapsulates methods to manage DataSets and provides access to                                                                         ///       the ImageTargetBuilder and TargetFinder classe
            tracker.GetTargetFinder<ImageTargetFinder>().ClearTrackables(false); // 2018.4

        }
    }

    //FONCTION DE RECHERCHE DE L'IMAGE TARGET DANS LE VUFORIA CLOUD//
    public void OnNewSearchResult(TargetFinder.TargetSearchResult targetSearchResult)
    {

        TargetFinder.CloudRecoSearchResult cloudResult = (TargetFinder.CloudRecoSearchResult)targetSearchResult; // 2018.4

        mTargetMetadata = cloudResult.MetaData;

        metaData = cloudResult.MetaData;    
        mcloudRecoBehaviour.CloudRecoEnabled = false;

        if (ImageTargetTemplate)
        {
            ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
            tracker.GetTargetFinder<ImageTargetFinder>().EnableTracking(targetSearchResult, ImageTargetTemplate.gameObject);
        
        }

    }


}