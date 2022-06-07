// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using UEditor = UnityEditor.Editor;

namespace Microsoft.MixedReality.GraphicsTools.Editor
{
    /// <summary>
    /// Helper class to get ScaleMeshEffect onto Canvas objects.
    /// </summary>

    [CanEditMultipleObjects]
    [CustomEditor(typeof(CanvasRenderer))]
    public class CanvasRendererInspector : UEditor
    {
        private readonly List<Graphic> graphicsWhichRequireScaleMeshEffect = new List<Graphic>();
        private Type canvasEditorType = null;
        private UEditor internalEditor = null;
        private CanvasRenderer canvasRenderer = null;
        
        private void OnEnable()
        {
            canvasEditorType = Type.GetType("UnityEditor.CanvasRendererEditor, UnityEditor");
            if (canvasEditorType != null)
            {
                internalEditor = CreateEditor(targets, canvasEditorType);
                canvasRenderer = target as CanvasRenderer;            
            }
        }

        private void OnDisable()
        {
            if (canvasEditorType != null)
            {
                MethodInfo onDisable = canvasEditorType.GetMethod("OnDisable", BindingFlags.Instance | BindingFlags.NonPublic);
                if (onDisable != null)
                {
                    onDisable.Invoke(internalEditor, null);
                }
                DestroyImmediate(internalEditor);
            }
        }

        public override void OnInspectorGUI()
        {          
            List<Graphic> graphics = GetGraphicsWhichRequireScaleMeshEffect(targets);
           
                if (graphics.Count != 0)
                {
                    EditorGUILayout.HelpBox($"This gameobject requires a {typeof(ScaleMeshEffect).Name} component to work with the {StandardShaderUtility.GraphicsToolsStandardCanvasShaderName} or {StandardShaderUtility.GraphicsToolsStandardShaderName} shader", MessageType.Warning);
                    if (GUILayout.Button($"Add {typeof(ScaleMeshEffect).Name}(s)"))
                    { foreach (var graphic in graphics)
                    {
                        Undo.AddComponent<ScaleMeshEffect>(graphic.gameObject);
                    }
                    }
                }
            
            EditorGUILayout.Space();
            if (internalEditor != null)
            {
                internalEditor.OnInspectorGUI();
            }

        }


        private List<Graphic> GetGraphicsWhichRequireScaleMeshEffect(UnityEngine.Object[] t)
        {
            graphicsWhichRequireScaleMeshEffect.Clear();

            foreach (UnityEngine.Object target in t)
            {
                Graphic[] graphics = (target as CanvasRenderer).GetComponents<Graphic>();

                foreach (Graphic graphic in graphics)
                {
                    if (StandardShaderUtility.IsUsingGraphicsToolsStandardShader(graphic.material) && graphic.GetComponent<ScaleMeshEffect>() == null)
                    {
                        graphicsWhichRequireScaleMeshEffect.Add(graphic);
                    }
                }
            }

            return graphicsWhichRequireScaleMeshEffect;
        }
    }

}