using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepositionObject : MonoBehaviour
{
    Vector3 originalTransform;
    Quaternion originRot;

    void Start()
    {
        originalTransform = transform.position;
        originRot = transform.rotation;
    }

    public void ProductLeft()
    {
        gameObject.transform.position = originalTransform;
        transform.rotation = originRot;
    }
}
