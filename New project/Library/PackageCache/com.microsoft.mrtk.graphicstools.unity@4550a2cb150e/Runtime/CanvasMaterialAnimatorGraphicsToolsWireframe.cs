// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.GraphicsTools
{
    /// <summary>
    /// This class was auto generated via Assets > Graphics Tools > Generate Canvas Material Animator.
    /// Use Unity's animation system to animate fields on this class to drive material properties on CanvasRenderers.
    /// Version=0.1.0
    /// </summary>
    public class CanvasMaterialAnimatorGraphicsToolsWireframe : CanvasMaterialAnimatorBase
    {
        public Color _BaseColor = Color.white;
        public static int _BaseColorID = Shader.PropertyToID("_BaseColor");
        public Color _WireColor = Color.white;
        public static int _WireColorID = Shader.PropertyToID("_WireColor");
        [Range(0f, 800f)] public float _WireThickness = 100f;
        public static int _WireThicknessID = Shader.PropertyToID("_WireThickness");
        public float _Mode = 0f;
        public static int _ModeID = Shader.PropertyToID("_Mode");
        public float _CustomMode = 0f;
        public static int _CustomModeID = Shader.PropertyToID("_CustomMode");
        public float _SrcBlend = 1f;
        public static int _SrcBlendID = Shader.PropertyToID("_SrcBlend");
        public float _DstBlend = 0f;
        public static int _DstBlendID = Shader.PropertyToID("_DstBlend");
        public float _BlendOp = 0f;
        public static int _BlendOpID = Shader.PropertyToID("_BlendOp");
        public float _ZTest = 4f;
        public static int _ZTestID = Shader.PropertyToID("_ZTest");
        public float _ZWrite = 1f;
        public static int _ZWriteID = Shader.PropertyToID("_ZWrite");
        public float _ZOffsetFactor = 50f;
        public static int _ZOffsetFactorID = Shader.PropertyToID("_ZOffsetFactor");
        public float _ZOffsetUnits = 100f;
        public static int _ZOffsetUnitsID = Shader.PropertyToID("_ZOffsetUnits");
        public float _ColorWriteMask = 15f;
        public static int _ColorWriteMaskID = Shader.PropertyToID("_ColorWriteMask");
        public float _CullMode = 2f;
        public static int _CullModeID = Shader.PropertyToID("_CullMode");
        [Range(-1f, 5000f)] public float _RenderQueueOverride = -1f;
        public static int _RenderQueueOverrideID = Shader.PropertyToID("_RenderQueueOverride");

        /// <inheritdoc/>
        public override void InitializeFromMaterial(Material material)
        {
            _BaseColor = material.GetColor(_BaseColorID);
            _WireColor = material.GetColor(_WireColorID);
            _WireThickness = material.GetFloat(_WireThicknessID);
            _Mode = material.GetFloat(_ModeID);
            _CustomMode = material.GetFloat(_CustomModeID);
            _SrcBlend = material.GetFloat(_SrcBlendID);
            _DstBlend = material.GetFloat(_DstBlendID);
            _BlendOp = material.GetFloat(_BlendOpID);
            _ZTest = material.GetFloat(_ZTestID);
            _ZWrite = material.GetFloat(_ZWriteID);
            _ZOffsetFactor = material.GetFloat(_ZOffsetFactorID);
            _ZOffsetUnits = material.GetFloat(_ZOffsetUnitsID);
            _ColorWriteMask = material.GetFloat(_ColorWriteMaskID);
            _CullMode = material.GetFloat(_CullModeID);
            _RenderQueueOverride = material.GetFloat(_RenderQueueOverrideID);
        }

        /// <inheritdoc/>
        public override void ApplyToMaterial(Material material)
        {
            material.SetColor(_BaseColorID, _BaseColor);
            material.SetColor(_WireColorID, _WireColor);
            material.SetFloat(_WireThicknessID, _WireThickness);
            material.SetFloat(_ModeID, _Mode);
            material.SetFloat(_CustomModeID, _CustomMode);
            material.SetFloat(_SrcBlendID, _SrcBlend);
            material.SetFloat(_DstBlendID, _DstBlend);
            material.SetFloat(_BlendOpID, _BlendOp);
            material.SetFloat(_ZTestID, _ZTest);
            material.SetFloat(_ZWriteID, _ZWrite);
            material.SetFloat(_ZOffsetFactorID, _ZOffsetFactor);
            material.SetFloat(_ZOffsetUnitsID, _ZOffsetUnits);
            material.SetFloat(_ColorWriteMaskID, _ColorWriteMask);
            material.SetFloat(_CullModeID, _CullMode);
            material.SetFloat(_RenderQueueOverrideID, _RenderQueueOverride);
        }

        /// <inheritdoc/>
        public override string GetTargetShaderName()
        {
            return "Graphics Tools/Wireframe";
        }
    }
}
