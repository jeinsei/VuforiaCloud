using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// FONCTIONS PERMETTANT DE LIES LES INTERACTIONS AUX BOUTONS
public class JsonInteractions : MonoBehaviour
{
    public JsonManager _jsonManager;


    public void LoadText()
    {
        _jsonManager.objetTexte.text = (_jsonManager.textUrlJson);
    }

    public void LoadUrl()
    {
        Application.OpenURL(_jsonManager.buttonUrlJson);
    }

    public void LoadAudio()
    {
        _jsonManager.StartCoroutine(_jsonManager.ReadAudio());
    }

    public void LoadImage()
    {
        _jsonManager.StartCoroutine(_jsonManager.ReadImage());
    }

    public void LoadVideo()
    {
        StartCoroutine(_jsonManager.ReadVideo());
    }
}
