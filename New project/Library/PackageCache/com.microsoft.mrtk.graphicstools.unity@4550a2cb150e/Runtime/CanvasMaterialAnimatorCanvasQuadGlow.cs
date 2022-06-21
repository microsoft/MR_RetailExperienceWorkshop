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
    public class CanvasMaterialAnimatorCanvasQuadGlow : CanvasMaterialAnimatorBase
    {
        public Color _Color_ = Color.white;
        public static int _Color_ID = Shader.PropertyToID("_Color_");
        public float _Radius_ = 0.5f;
        public static int _Radius_ID = Shader.PropertyToID("_Radius_");
        public float _Fixed_Radius_ = 0f;
        public static int _Fixed_Radius_ID = Shader.PropertyToID("_Fixed_Radius_");
        public float _Fixed_Unit_Multiplier_ = 1000f;
        public static int _Fixed_Unit_Multiplier_ID = Shader.PropertyToID("_Fixed_Unit_Multiplier_");
        [Range(0f, 4f)] public float _Filter_Width_ = 2f;
        public static int _Filter_Width_ID = Shader.PropertyToID("_Filter_Width_");
        [Range(0.01f, 0.99f)] public float _Glow_Fraction_ = 0.5f;
        public static int _Glow_Fraction_ID = Shader.PropertyToID("_Glow_Fraction_");
        [Range(0f, 1f)] public float _Glow_Max_ = 0.5f;
        public static int _Glow_Max_ID = Shader.PropertyToID("_Glow_Max_");
        [Range(0f, 5f)] public float _Glow_Falloff_ = 2f;
        public static int _Glow_Falloff_ID = Shader.PropertyToID("_Glow_Falloff_");
        public float _SrcBlend = 1f;
        public static int _SrcBlendID = Shader.PropertyToID("_SrcBlend");
        public float _DstBlend = 10f;
        public static int _DstBlendID = Shader.PropertyToID("_DstBlend");
        [Range(0f, 255f)] public float _StencilReference = 0f;
        public static int _StencilReferenceID = Shader.PropertyToID("_StencilReference");
        public float _StencilComparison = 0f;
        public static int _StencilComparisonID = Shader.PropertyToID("_StencilComparison");
        public float _StencilOperation = 0f;
        public static int _StencilOperationID = Shader.PropertyToID("_StencilOperation");
        public float _ZTest = 4f;
        public static int _ZTestID = Shader.PropertyToID("_ZTest");
        public float _ZWrite = 0f;
        public static int _ZWriteID = Shader.PropertyToID("_ZWrite");
        public Texture2D _MainTex = null;
        public static int _MainTexID = Shader.PropertyToID("_MainTex");
        public Vector3 _ClipRect = Vector3.zero;
        public static int _ClipRectID = Shader.PropertyToID("_ClipRect");
        public Vector3 _ClipRectRadii = Vector3.zero;
        public static int _ClipRectRadiiID = Shader.PropertyToID("_ClipRectRadii");

        /// <inheritdoc/>
        public override void InitializeFromMaterial(Material material)
        {
            _Color_ = material.GetColor(_Color_ID);
            _Radius_ = material.GetFloat(_Radius_ID);
            _Fixed_Radius_ = material.GetFloat(_Fixed_Radius_ID);
            _Fixed_Unit_Multiplier_ = material.GetFloat(_Fixed_Unit_Multiplier_ID);
            _Filter_Width_ = material.GetFloat(_Filter_Width_ID);
            _Glow_Fraction_ = material.GetFloat(_Glow_Fraction_ID);
            _Glow_Max_ = material.GetFloat(_Glow_Max_ID);
            _Glow_Falloff_ = material.GetFloat(_Glow_Falloff_ID);
            _SrcBlend = material.GetFloat(_SrcBlendID);
            _DstBlend = material.GetFloat(_DstBlendID);
            _StencilReference = material.GetFloat(_StencilReferenceID);
            _StencilComparison = material.GetFloat(_StencilComparisonID);
            _StencilOperation = material.GetFloat(_StencilOperationID);
            _ZTest = material.GetFloat(_ZTestID);
            _ZWrite = material.GetFloat(_ZWriteID);
            _MainTex = (Texture2D)material.GetTexture(_MainTexID);
            _ClipRect = material.GetVector(_ClipRectID);
            _ClipRectRadii = material.GetVector(_ClipRectRadiiID);
        }

        /// <inheritdoc/>
        public override void ApplyToMaterial(Material material)
        {
            material.SetColor(_Color_ID, _Color_);
            material.SetFloat(_Radius_ID, _Radius_);
            material.SetFloat(_Fixed_Radius_ID, _Fixed_Radius_);
            material.SetFloat(_Fixed_Unit_Multiplier_ID, _Fixed_Unit_Multiplier_);
            material.SetFloat(_Filter_Width_ID, _Filter_Width_);
            material.SetFloat(_Glow_Fraction_ID, _Glow_Fraction_);
            material.SetFloat(_Glow_Max_ID, _Glow_Max_);
            material.SetFloat(_Glow_Falloff_ID, _Glow_Falloff_);
            material.SetFloat(_SrcBlendID, _SrcBlend);
            material.SetFloat(_DstBlendID, _DstBlend);
            material.SetFloat(_StencilReferenceID, _StencilReference);
            material.SetFloat(_StencilComparisonID, _StencilComparison);
            material.SetFloat(_StencilOperationID, _StencilOperation);
            material.SetFloat(_ZTestID, _ZTest);
            material.SetFloat(_ZWriteID, _ZWrite);
            material.SetTexture(_MainTexID, (Texture2D)_MainTex);
            material.SetVector(_ClipRectID, _ClipRect);
            material.SetVector(_ClipRectRadiiID, _ClipRectRadii);
        }

        /// <inheritdoc/>
        public override string GetTargetShaderName()
        {
            return "Graphics Tools/Canvas/Quad Glow";
        }
    }
}
