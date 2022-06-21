// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Examples.Demos
{
    /// <summary>
    /// Helper script to respawn objects if they go too far from their original position. Useful for objects that will fall forever etc.
    /// </summary>
    internal class TetheredPlacement : MonoBehaviour
    {
        [SerializeField, Tooltip("The distance from the GameObject's spawn position at which will trigger a respawn.")]
        private float distanceThreshold = 20.0f;

        private Vector3 respawnPoint;
        private Quaternion respawnOrientation;
        private Rigidbody rigidBody;
        private float distanceThresholdSquared;

        private void Start()
        {
            rigidBody = GetComponent<Rigidbody>();
            LockSpawnPoint();
            distanceThresholdSquared = distanceThreshold * distanceThreshold;
        }

        private void LateUpdate()
        {
            float distanceSqr = (respawnPoint - transform.position).sqrMagnitude;

            if (distanceSqr > distanceThresholdSquared)
            {
                // Reset any velocity from falling or moving when respawning to original location
                if (rigidBody != null)
                {
                    rigidBody.velocity = Vector3.zero;
                    rigidBody.angularVelocity = Vector3.zero;
                }

                transform.SetPositionAndRotation(respawnPoint, respawnOrientation);
            }
        }

        private void LockSpawnPoint()
        {
            respawnPoint = transform.position;
            respawnOrientation = transform.rotation;
        }
    }
}
