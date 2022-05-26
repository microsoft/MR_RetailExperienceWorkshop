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
       // originPos = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z);
        originRot = transform.rotation;
        Debug.Log(gameObject.name + " Pos : " +originalTransform + "R: " +originRot);
    }

    // Update is called once per frame
    void Update()
    {
        loopdeltaTime += (Time.deltaTime - loopdeltaTime) * 0.1f;
        float fpsnew = 1.0f / loopdeltaTime;
        Debug.Log(fpsnew);
    }

    public void ProductLeft()
    {
        //Debug.Log(originPos + "Rot - " + originRot.rotation);
        gameObject.transform.position = originalTransform;
            transform.rotation = originRot;
        //Debug.Log(gameObject.name + " R : " + gameObject.transform.rotation);
    }

    /*loopdeltaTime += (Time.deltaTime - deltaTime) * 0.1f;
float fpsnew = 1.0f / deltaTime;
Debug.Log(fpsnew);*/
}
