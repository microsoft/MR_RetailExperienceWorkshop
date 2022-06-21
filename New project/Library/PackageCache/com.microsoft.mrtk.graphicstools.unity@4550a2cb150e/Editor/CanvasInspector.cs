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
    /// Helper class to show optimization warnings on Canvas objects.
    /// </summary>

    [CanEditMultipleObjects]
    [CustomEditor(typeof(Canvas))]
    public class CanvasInspector : UEditor
    {
        private readonly List<Graphic> graphicsWhichRequireScaleMeshEffect = new List<Graphic>();
        private readonly List<GameObject> gameObjectsWhichRequireRectMask2DFast = new List<GameObject>();
        private Type canvasEditorType = null;
        private UEditor internalEditor = null;
        private Canvas canvas = null;
        private bool isRootCanvas = false;
        private bool showWarnings = true;

        private void OnEnable()
        {
            canvasEditorType = Type.GetType("UnityEditor.CanvasEditor, UnityEditor");
            if (canvasEditorType != null)
            {
                internalEditor = CreateEditor(targets, canvasEditorType);
                canvas = target as Canvas;
                isRootCanvas = canvas.transform.parent == null || canvas.transform.parent.GetComponentInParent<Canvas>() == null;
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
            if (isRootCanvas && canvas != null)
            {
                List<Graphic> graphics = GetGraphicsWhichRequireScaleMeshEffect(targets);
                var gameObjects = GetChildGameObjectsThatRequireRectMask2DFast(targets);

                if (graphics.Count > 0 || gameObjects.Count > 0)
                {
                    showWarnings = EditorGUILayout.Foldout(showWarnings, "Warnings");
                    if (showWarnings)
                    {
                        if (graphics.Count != 0)
                        {
                            EditorGUILayout.HelpBox($"Canvas contains {graphics.Count} {typeof(Graphic).Name}(s) which require a {typeof(ScaleMeshEffect).Name} to work with the {StandardShaderUtility.GraphicsToolsStandardCanvasShaderName} or {StandardShaderUtility.GraphicsToolsStandardShaderName} shader.", MessageType.Warning);
                            if (GUILayout.Button($"Add {typeof(ScaleMeshEffect).Name}(s)"))
                            {
                                foreach (var graphic in graphics)
                                {
                                    Undo.AddComponent<ScaleMeshEffect>(graphic.gameObject);
                                }
                            }
                        }

                        EditorGUILayout.Space();

                        if (gameObjects.Count != 0)
                        {
                            EditorGUILayout.HelpBox($"Canvas contains {gameObjects.Count} {typeof(RectMask2D).Name}(s) which may be slow when masking many objects, consider switching to {typeof(RectMask2DFast).Name}", MessageType.Warning);
                            if (GUILayout.Button($"Replace with {typeof(RectMask2DFast).Name}"))
                            {
                                foreach (GameObject gameObject in gameObjects)
                                {
                                    RectMask2DInspector.ReplaceRectMaskWithRectMask2DFast(gameObject);
                                }
                            }
                        }

                        EditorGUILayout.Space();
                    }
                }
            }

            if (internalEditor != null)
            {
                internalEditor.OnInspectorGUI();
            }
        }

        private List<Graphic> GetGraphicsWhichRequireScaleMeshEffect(UnityEngine.Object[] targets)
        {
            graphicsWhichRequireScaleMeshEffect.Clear();

            foreach (UnityEngine.Object target in targets)
            {
                Graphic[] graphics = (target as Canvas).GetComponentsInChildren<Graphic>();

                foreach (Graphic graphic in graphics)
                {
                    if (StandardShaderUtility.IsUsingGraphicsToolsStandardShader(graphic.material) &&
                        graphic.GetComponent<ScaleMeshEffect>() == null)
                    {
                        graphicsWhichRequireScaleMeshEffect.Add(graphic);
                    }
                }
            }

            return graphicsWhichRequireScaleMeshEffect;
        }

        private List<GameObject> GetChildGameObjectsThatRequireRectMask2DFast(UnityEngine.Object[] targets)
        {
            gameObjectsWhichRequireRectMask2DFast.Clear();

            foreach (UnityEngine.Object target in targets)
            {
                var masks = (target as Canvas).GetComponentsInChildren<RectMask2D>();

                foreach (var mask in masks)
                {
                    if (mask as RectMask2DFast == null)
                    {
                        gameObjectsWhichRequireRectMask2DFast.Add(mask.gameObject);
                    }
                }
            }

            return gameObjectsWhichRequireRectMask2DFast;
        }
    }
}