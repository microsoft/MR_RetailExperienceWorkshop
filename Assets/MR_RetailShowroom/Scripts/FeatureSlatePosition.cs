using UnityEngine;

public class FeatureSlatePosition : MonoBehaviour
{
    private Transform mainCameraTransform;
    private Transform myTransform;

    private void Awake()
    {
        FindCamera();
        myTransform = this.gameObject.transform;
    }

    private void OnEnable()
    {
        if(mainCameraTransform == null)
        {
            FindCamera();
            if (mainCameraTransform == null) return;
        }

        myTransform.position = mainCameraTransform.position + mainCameraTransform.forward;
        myTransform.forward = mainCameraTransform.forward;
    }

    private void FindCamera()
    {
        Camera mainCamera = Camera.main;
        if (mainCamera != null)
        {
            mainCameraTransform = mainCamera.transform;
        }
    }
}
