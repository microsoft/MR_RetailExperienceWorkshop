// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEditor;
using UnityEngine;

namespace Microsoft.MixedReality.GraphicsTools.Editor
{
    /// <summary>
    /// Custom editor for the RoundedRectMask2D component.
    /// </summary>
    [CustomEditor(typeof(RoundedRectMask2D), true)]
    [CanEditMultipleObjects]
    public class RoundedRectMask2DInspector : RectMask2DFastInspector
    {
        private static GUIContent radiusContent = new GUIContent("Corner Radius", "Determines the radius of the rect mask's corners.");
        private static GUIContent radiiContent = new GUIContent("Corner Radii", "Determines the radius of each corner of the rect mask.");
        private static GUIContent topLeftContent = new GUIContent("Top Left", "Local -X, +Y corner.");
        private static GUIContent topRightContent = new GUIContent("Top Right", "Local +X, +Y corner.");
        private static GUIContent bottomLeftContent = new GUIContent("Bottom Left", "Local -X, -Y corner.");
        private static GUIContent bottomRightContent = new GUIContent("Bottom Right", "Local +X, -Y corner.");
        private static bool showRadii = false;

        private SerializedProperty independentRadii;
        private SerializedProperty radii;

        [MenuItem("GameObject/UI/Rounded Rect Mask - Graphics Tools")]
        private static void CreateCanvasElement(MenuCommand menuCommand)
        {
            InspectorUtilities.CreateGameObjectFromMenu<RoundedRectMask2D>(menuCommand);
        }

        protected override void OnEnable()
        {
            independentRadii = serializedObject.FindProperty("independentRadii");
            radii = serializedObject.FindProperty("radii");

            base.OnEnable();
        }

        public override void OnInspectorGUI()
        {
            EditorGUILayout.PropertyField(independentRadii);

            if (independentRadii.boolValue)
            {
                showRadii = EditorGUILayout.Foldout(showRadii, radiiContent, true);

                if (showRadii)
                {
                    using (var check = new EditorGUI.ChangeCheckScope())
                    {
                        EditorGUI.indentLevel++;
                        Vector4 newRadii = radii.vector4Value;

                        newRadii.x = Mathf.Max(0.0f, EditorGUILayout.FloatField(topLeftContent, newRadii.x));
                        newRadii.y = Mathf.Max(0.0f, EditorGUILayout.FloatField(topRightContent, newRadii.y));
                        newRadii.z = Mathf.Max(0.0f, EditorGUILayout.FloatField(bottomLeftContent, newRadii.z));
                        newRadii.w = Mathf.Max(0.0f, EditorGUILayout.FloatField(bottomRightContent, newRadii.w));

                        if (check.changed)
                        {
                            radii.vector4Value = newRadii;
                        }

                        EditorGUI.indentLevel--;
                    }
                }
            }
            else
            {
                using (var check = new EditorGUI.ChangeCheckScope())
                {
                    float newRadius = radii.vector4Value.x;

                    newRadius = Mathf.Max(0.0f, EditorGUILayout.FloatField(radiusContent, newRadius));

                    if (check.changed)
                    {
                        Vector4 newRadii = radii.vector4Value;
                        newRadii.x = newRadius;
                        radii.vector4Value = newRadii;
                    }
                }
            }

            base.OnInspectorGUI();
        }
    }
}
