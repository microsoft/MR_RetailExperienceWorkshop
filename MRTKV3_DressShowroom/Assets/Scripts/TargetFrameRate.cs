using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TargetFrameRate : MonoBehaviour
{
    public TextMeshProUGUI frameRate;
    float loopdeltaTime;
    int targetFrame = 60;
    // Start is called before the first frame update
    void Start()
    {
        QualitySettings.vSyncCount = 0;
        //Application.targetFrameRate = 40;
    }

    // Update is called once per frame
    void Update()
    {
        loopdeltaTime += (Time.deltaTime - loopdeltaTime) * 0.1f;
        float fpsnew = 1.0f / loopdeltaTime;
        Debug.Log(fpsnew);
        frameRate.text = "" +fpsnew;
        //Debug.Log(Application.targetFrameRate);
        //if (targetFrame > Application.targetFrameRate)
        //{
        //    Application.targetFrameRate = targetFrame;
        //    Debug.Log(Application.targetFrameRate);
        //}
    }
}
