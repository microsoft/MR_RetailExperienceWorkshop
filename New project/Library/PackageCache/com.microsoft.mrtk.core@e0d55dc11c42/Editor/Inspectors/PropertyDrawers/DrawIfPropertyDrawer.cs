// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEditor;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit
{
    /// <summary>
    /// Conditionally draws a property based on the bool value associated
    /// with the <see cref="DrawIfAttribute"/> attribute.
    /// </summary>
    /// <remarks>
    /// Based on: https://forum.unity.com/threads/draw-a-field-only-if-a-condition-is-met.448855/
    /// </remarks>
    [CustomPropertyDrawer(typeof(DrawIfAttribute))]
    public class DrawIfPropertyDrawer : PropertyDrawer
    {
        /// <inheritdoc />
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            if (ShouldShow(property))
            {
                EditorGUI.PropertyField(position, property, label);
            }
        }

        /// <inheritdoc />
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            if (!ShouldShow(property))
            {
                return 0f;
            }

            return base.GetPropertyHeight(property, label);
        }

        private bool ShouldShow(SerializedProperty property)
        {
            DrawIfAttribute drawIf = attribute as DrawIfAttribute;
            if (drawIf == null) { return true; }
            
            SerializedProperty propertyToCheck = property.serializedObject.FindProperty(drawIf.ComparedPropertyName);
            if (propertyToCheck == null) { return true; }

            return propertyToCheck.boolValue == drawIf.ComparedValue;
        }
    }
}