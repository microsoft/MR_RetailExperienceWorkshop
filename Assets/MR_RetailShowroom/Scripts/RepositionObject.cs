using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepositionObject : MonoBehaviour
{
    Vector3 originalTransform;
    //Vector3 originalScale;
    Quaternion originRot;

    void Start()
    {
        originalTransform = transform.position;
       originRot = transform.rotation;
       //originalScale = transform.localScale;
       // Debug.Log(gameObject.name + " " + originalScale);
    }

    public void ProductLeft()
    {
        gameObject.transform.position = originalTransform;
        transform.rotation = originRot;
       // transform.localScale = originalScale;
    }
}
