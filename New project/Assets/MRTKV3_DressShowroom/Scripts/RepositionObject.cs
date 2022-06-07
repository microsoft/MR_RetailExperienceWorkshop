using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepositionObject : MonoBehaviour
{
    
    Vector3 originalTransform;
    Quaternion originRot;
    float loopdeltaTime;

    // Start is called before the first frame update
    void Start()
    {
        originalTransform = transform.position;
        originRot = transform.rotation;
        Debug.Log(gameObject.name + " Pos : " +originalTransform + "R: " +originRot);
    }

    // Update is called once per frame
    void Update()
    {
        //Frame rate check

        loopdeltaTime += (Time.deltaTime - loopdeltaTime) * 0.1f;
        float fpsnew = 1.0f / loopdeltaTime;
        Debug.Log(fpsnew);
    }

    public void ProductLeft()
    {
        
        gameObject.transform.position = originalTransform;
        transform.rotation = originRot;
        
    }

}
