// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine;
using TMPro;

namespace Microsoft.MixedReality.Toolkit.UX
{
    [Serializable]
    public class CommonTheme
    {
        [SerializeField]
        private TMP_StyleSheet textStyleSheet;
        public TMP_StyleSheet TextStyleSheet => textStyleSheet;

        [SerializeField]
        private SpriteSetTheme spriteSet;
        public SpriteSetTheme SpriteSet => spriteSet;
    }
}