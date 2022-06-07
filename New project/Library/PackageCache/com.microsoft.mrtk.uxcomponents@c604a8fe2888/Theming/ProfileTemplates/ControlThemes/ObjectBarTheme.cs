// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.UX
{
    /// <summary>
    /// All themable elements of a MRTK UX Dialog slate.
    ///
    /// Note that by default the CoreUXBindingProfile only maps
    /// to UX.Common.xxx instead of UX.ObjectBar.xxx for any
    /// element that is common across all UX elements.
    /// </summary>
    [Serializable]
    public class ObjectBarTheme
    {

        [Tooltip("Backplate material for a object bar.")]
        [SerializeField]
        private Material backplateMaterial;
        public Material BackplateMaterial => backplateMaterial;

    }
}