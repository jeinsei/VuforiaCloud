using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.Networking;
using System;

public class JsonManager : MonoBehaviour
{
    #region VARIABLES

    [Header("récupération du lien URL du marqueur VuforiaCloud")]
    public string pathJsonData; // chemin visible ou se situe le fichier Json
    public string pathVuforiaMetaData; // récupération du string via flashage de l'imageTarget de Vuforia
    [Header ("Objets recevant les liens")]
    [Space(20)]
    public Text objetTexte; // Objet Texte modifié via le Json
    public RawImage objetImage; // Objet image modifié via le Json
    public GameObject objetVideo; // Objet avec le VideoPlayer sur lequel est jouée la vidéo via le Json
    public AudioSource objetAudio; // Source sur laquelle est jouée l'audio via le Json
    [Header("Liens de debug pour le fichier Json")]
    [Space(20)]
    public string textUrlJson; // stockage du string URL via le Json pour le text
    public string buttonUrlJson; // stockage du string URL via le Json pour le lien du button web
    public string imageUrlJson; // stockage du string URL via le Json pour l'image 2D
    public string videoUrlJson; // stockage du string URL via le Json pour la vidéo
    public string audioClipJson; // stockage du string URL via le Json pour l'audio
    public static string model3dJson; // Variable pour stocker le lien URL du model 3D via le Json
    public static string nameOfAssetBundle; // Variable public pour définir par un champ texte le nom du bundle de l'objet 3D

    #endregion

    //LANCEMENT DE LA FONCTION UDPATE A CHAQUE FRAME//
    private void Update()
    {

        pathVuforiaMetaData = JsonVuforiaCloudHandler.metaData; // récupération du chemin Json via le flashage de l'image via le script SimpleCloudHandler
        pathJsonData = pathVuforiaMetaData; // le chemin path devient celui détenu dans l'image du vuforia Cloud
        StartCoroutine(LinkDataJson(pathJsonData)); // Lancement de la coroutine pour lier les data du lien du Json récupéré
       
    }

    #region COROUTINES

    // COROUTINE PRINCIPALE POUR LIRE LE JSON
   public IEnumerator LinkDataJson(string pathURL)

    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(pathJsonData))

        {
            yield return webRequest.SendWebRequest();

            if (webRequest.isNetworkError)
            {
                Debug.Log(":Error mapping json coroutine:");
            }
            else
            {
                Debug.Log(":Validation mapping json coroutine:");
                WrapData(webRequest.downloadHandler.text);
            }

        }

    }
    // COROUTINE POUR LIRE L'AUDIO
   public IEnumerator ReadAudio()
   {
       Debug.Log("coroutine Audio");
       objetAudio = GetComponent<AudioSource>();
       using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip(audioClipJson, AudioType.MPEG))

       {
           yield return www.Send();
           if (www.isNetworkError)
           {
               Debug.Log(www.error);

           }
           else
           {
               objetAudio.clip = DownloadHandlerAudioClip.GetContent(www);
               objetAudio.Play();

           }

       }

   }
    // COROUTINE POUR CHARGER LE RAW IMAGE
   public IEnumerator ReadImage()
    {
        Debug.Log("coroutine Image");
        using (UnityWebRequest webRequestTexture = UnityWebRequestTexture.GetTexture(imageUrlJson))

        {
            yield return webRequestTexture.SendWebRequest();

            if (webRequestTexture.isNetworkError)
            {
                Debug.Log(":Error:");
            }
            else
            {
                Debug.Log(":Done:");
                objetImage.texture = DownloadHandlerTexture.GetContent(webRequestTexture);
            }
        }
    }
    // COROUTINE POUR CHARGER LE FICHIER VIDEO
   public IEnumerator ReadVideo()
   {
        Debug.Log("coroutine Video");
        objetVideo.GetComponent<VideoPlayer>().url = videoUrlJson; // application de l'url de la video sur le video player
        yield break;
   }

   #endregion

   #region PUBLIC VARIABLES

    // MAPPING DES DONNEES DU JSON AVEC LA CLASS C#
    public void WrapData (string _www)
    {
        Debug.Log("Mapping Data Json c#");
        jsonDataClass JsonBridge = JsonUtility.FromJson<jsonDataClass>(_www); // Association du dictionnaire "JsonBridge" avec le Json afin de faire la passerelle entre le C# et le Json
        textUrlJson = (JsonBridge.textURL);
        buttonUrlJson = (JsonBridge.buttonURL);
        imageUrlJson = (JsonBridge.imageURL);
        videoUrlJson = (JsonBridge.videoURL);
        audioClipJson = (JsonBridge.audioURL);
        model3dJson = (JsonBridge.modelURL);
        nameOfAssetBundle = "suite";

    }

    #endregion
}