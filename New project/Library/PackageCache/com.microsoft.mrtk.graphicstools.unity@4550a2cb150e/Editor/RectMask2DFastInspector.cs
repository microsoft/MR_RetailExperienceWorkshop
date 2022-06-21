// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEditor;
using UnityEditor.UI;

namespace Microsoft.MixedReality.GraphicsTools.Editor
{
    /// <summary>
    /// Custom editor for the RectMask2DFast component.
    /// </summary>
    [CustomEditor(typeof(RectMask2DFast), true)]
    [CanEditMultipleObjects]
    public class RectMask2DFastInspector : RectMask2DEditor
    {
        [MenuItem("GameObject/UI/Rect Mask Fast - Graphics Tools")]
        private static void CreateCanvasElement(MenuCommand menuCommand)
        {
            InspectorUtilities.CreateGameObjectFromMenu<RectMask2DFast>(menuCommand);
        }
    }
}
