// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#if GT_USE_URP
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Microsoft.MixedReality.GraphicsTools
{
    /// <summary>
    /// Helper component that automatically enables/disables the specified acrylic layer when an object is enabled/disabled
    /// (notifying the acrylic layer manager and updating the object's material).  Attach to any object that uses an acrylic material.
    /// EnableLayer() & DisableLayer() methods can be used to explicitly enable or disable the designated layer.
    /// </summary>

    public class AcrylicHelper : MonoBehaviour
    {
        [SerializeField]
        [Range(0, 1)]
        private int blurLayer = 0;

#region Monobehavior methods

        private void Awake()
        {
            UpdateMaterialState();
        }

        private void OnEnable()
        {
            EnableLayer();
        }

        private void OnDisable()
        {
            DisableLayer();
        }

#endregion

#region public methods

        public void EnableLayer()
        {
            if (AcrylicLayerManager.Instance != null)
            {
                AcrylicLayerManager.Instance.EnableLayer(blurLayer);
            }
        }

        public void DisableLayer()
        {
            if (AcrylicLayerManager.Instance != null)
            {
                AcrylicLayerManager.Instance.DisableLayer(blurLayer);
            }
        }

#endregion

#region private methods

        private void UpdateMaterialState()
        {
            Graphic graphic = GetComponent<Graphic>();
            if (graphic != null)
            {
                bool useAcrylic = AcrylicLayerManager.Instance != null && AcrylicLayerManager.Instance.AcrylicActive;
                SetMaterialState(graphic.material, "_BLUR_TEXTURE_ENABLE_", useAcrylic && blurLayer == 0);
                SetMaterialState(graphic.material, "_BLUR_TEXTURE_2_ENABLE_", useAcrylic && blurLayer == 1);
                graphic.SetMaterialDirty();
            }
        }

        private void SetMaterialState(Material m, string keyword, bool enable)
        {
            if (enable)
            {
                m.EnableKeyword(keyword);
            }
            else
            {
                m.DisableKeyword(keyword);
            }
        }
#endregion
    }
}
#endif // GT_USE_URP
