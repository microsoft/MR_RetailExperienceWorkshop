using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportHeight : MonoBehaviour
{
    void Update()
    {
        gameObject.transform.position = new Vector3(gameObject.transform.position.x,5 , gameObject.transform.position.z);
    }
}
