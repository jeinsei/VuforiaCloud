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
    public static string mTargetMetadata = "";
    public ImageTargetBehaviour ImageTargetTemplate;
    public JsonManager jsonManager;

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
            Debug.Log("SCAN STOP");
            var tracker = TrackerManager.Instance.GetTracker<ObjectTracker>(); // The ObjectTracker encapsulates methods to manage DataSets and provides access to                                                                         ///       the ImageTargetBuilder and TargetFinder classe
            tracker.GetTargetFinder<ImageTargetFinder>().ClearTrackables(false); // 2018.4
            jsonManager.readData = false; // desactive le boolean pour arrêter de lire la coroutine dans le script JsonManager afin de ne pas surcharger la mémoire


        }
    }

    //FONCTION DE RECHERCHE DE L'IMAGE TARGET DANS LE VUFORIA CLOUD//
    public void OnNewSearchResult(TargetFinder.TargetSearchResult targetSearchResult)
    {
      
        TargetFinder.CloudRecoSearchResult cloudResult = (TargetFinder.CloudRecoSearchResult)targetSearchResult; // 2018.4

        mTargetMetadata = cloudResult.MetaData;

        mcloudRecoBehaviour.CloudRecoEnabled = false;

        if (!mIsScanning)
        {
            Debug.Log("SCAN START");
            mcloudRecoBehaviour.CloudRecoEnabled = true;
            jsonManager.readData = true; // Active le boolean pour lire la coroutine une seule fois pour mapper les datas
        }


        if (ImageTargetTemplate)
        {

            ObjectTracker tracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
            tracker.GetTargetFinder<ImageTargetFinder>().EnableTracking(targetSearchResult, ImageTargetTemplate.gameObject);
           
        }
       
    }
    /*
    #region DEBUG INTERFACE
    // DEBUG INTERFACE       
    void OnGUI()
    {
        // Display current 'scanning' status
        GUI.Box(new Rect(100, 100, 200, 50), mIsScanning ? "Scanning" : "Not scanning");
        // Display metadata of latest detected cloud-target
        GUI.Box(new Rect(100, 200, 200, 50), "Metadata: " + mTargetMetadata);
        // If not scanning, show button
        // so that user can restart cloud scanning
        if (!mIsScanning)
        {
            if (GUI.Button(new Rect(100, 300, 200, 50), "Restart Scanning"))
            {
                // Restart TargetFinder
                mcloudRecoBehaviour.CloudRecoEnabled = true;
            }
        } 
    }
    #endregion DEBUG INTERFACE
    */
}