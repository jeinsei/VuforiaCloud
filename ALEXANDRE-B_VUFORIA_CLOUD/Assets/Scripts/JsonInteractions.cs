using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonInteractions : MonoBehaviour
{
    public JsonManager _jsonManager;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

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
