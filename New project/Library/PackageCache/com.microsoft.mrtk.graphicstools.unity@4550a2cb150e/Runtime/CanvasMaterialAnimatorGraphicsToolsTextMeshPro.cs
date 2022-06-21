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
    public class CanvasMaterialAnimatorGraphicsToolsTextMeshPro : CanvasMaterialAnimatorBase
    {
        public Color _FaceColor = Color.white;
        public static int _FaceColorID = Shader.PropertyToID("_FaceColor");
        [Range(-1f, 1f)] public float _FaceDilate = 0f;
        public static int _FaceDilateID = Shader.PropertyToID("_FaceDilate");
        public Color _OutlineColor = Color.white;
        public static int _OutlineColorID = Shader.PropertyToID("_OutlineColor");
        [Range(0f, 1f)] public float _OutlineWidth = 0f;
        public static int _OutlineWidthID = Shader.PropertyToID("_OutlineWidth");
        [Range(0f, 1f)] public float _OutlineSoftness = 0f;
        public static int _OutlineSoftnessID = Shader.PropertyToID("_OutlineSoftness");
        public Color _UnderlayColor = Color.white;
        public static int _UnderlayColorID = Shader.PropertyToID("_UnderlayColor");
        [Range(-1f, 1f)] public float _UnderlayOffsetX = 0f;
        public static int _UnderlayOffsetXID = Shader.PropertyToID("_UnderlayOffsetX");
        [Range(-1f, 1f)] public float _UnderlayOffsetY = 0f;
        public static int _UnderlayOffsetYID = Shader.PropertyToID("_UnderlayOffsetY");
        [Range(-1f, 1f)] public float _UnderlayDilate = 0f;
        public static int _UnderlayDilateID = Shader.PropertyToID("_UnderlayDilate");
        [Range(0f, 1f)] public float _UnderlaySoftness = 0f;
        public static int _UnderlaySoftnessID = Shader.PropertyToID("_UnderlaySoftness");
        public float _WeightNormal = 0f;
        public static int _WeightNormalID = Shader.PropertyToID("_WeightNormal");
        public float _WeightBold = 0.5f;
        public static int _WeightBoldID = Shader.PropertyToID("_WeightBold");
        public float _ShaderFlags = 0f;
        public static int _ShaderFlagsID = Shader.PropertyToID("_ShaderFlags");
        public float _ScaleRatioA = 1f;
        public static int _ScaleRatioAID = Shader.PropertyToID("_ScaleRatioA");
        public float _ScaleRatioB = 1f;
        public static int _ScaleRatioBID = Shader.PropertyToID("_ScaleRatioB");
        public float _ScaleRatioC = 1f;
        public static int _ScaleRatioCID = Shader.PropertyToID("_ScaleRatioC");
        public Texture2D _MainTex = null;
        public static int _MainTexID = Shader.PropertyToID("_MainTex");
        public float _TextureWidth = 512f;
        public static int _TextureWidthID = Shader.PropertyToID("_TextureWidth");
        public float _TextureHeight = 512f;
        public static int _TextureHeightID = Shader.PropertyToID("_TextureHeight");
        public float _GradientScale = 5f;
        public static int _GradientScaleID = Shader.PropertyToID("_GradientScale");
        public float _ScaleX = 1f;
        public static int _ScaleXID = Shader.PropertyToID("_ScaleX");
        public float _ScaleY = 1f;
        public static int _ScaleYID = Shader.PropertyToID("_ScaleY");
        [Range(0f, 1f)] public float _PerspectiveFilter = 0.875f;
        public static int _PerspectiveFilterID = Shader.PropertyToID("_PerspectiveFilter");
        [Range(-1f, 1f)] public float _Sharpness = 0f;
        public static int _SharpnessID = Shader.PropertyToID("_Sharpness");
        public float _VertexOffsetX = 0f;
        public static int _VertexOffsetXID = Shader.PropertyToID("_VertexOffsetX");
        public float _VertexOffsetY = 0f;
        public static int _VertexOffsetYID = Shader.PropertyToID("_VertexOffsetY");
        public Vector3 _ClipRect = Vector3.zero;
        public static int _ClipRectID = Shader.PropertyToID("_ClipRect");
        public Vector3 _ClipRectRadii = Vector3.zero;
        public static int _ClipRectRadiiID = Shader.PropertyToID("_ClipRectRadii");
        public float _MaskSoftnessX = 0f;
        public static int _MaskSoftnessXID = Shader.PropertyToID("_MaskSoftnessX");
        public float _MaskSoftnessY = 0f;
        public static int _MaskSoftnessYID = Shader.PropertyToID("_MaskSoftnessY");
        public float _StencilComp = 8f;
        public static int _StencilCompID = Shader.PropertyToID("_StencilComp");
        public float _Stencil = 0f;
        public static int _StencilID = Shader.PropertyToID("_Stencil");
        public float _StencilOp = 0f;
        public static int _StencilOpID = Shader.PropertyToID("_StencilOp");
        public float _StencilWriteMask = 255f;
        public static int _StencilWriteMaskID = Shader.PropertyToID("_StencilWriteMask");
        public float _StencilReadMask = 255f;
        public static int _StencilReadMaskID = Shader.PropertyToID("_StencilReadMask");
        public float _CullMode = 0f;
        public static int _CullModeID = Shader.PropertyToID("_CullMode");
        public float _ColorMask = 15f;
        public static int _ColorMaskID = Shader.PropertyToID("_ColorMask");
        public float _ZWrite = 0f;
        public static int _ZWriteID = Shader.PropertyToID("_ZWrite");
        public float _ZTest = 4f;
        public static int _ZTestID = Shader.PropertyToID("_ZTest");
        public float _SrcBlend = 1f;
        public static int _SrcBlendID = Shader.PropertyToID("_SrcBlend");
        public float _DstBlend = 10f;
        public static int _DstBlendID = Shader.PropertyToID("_DstBlend");

        /// <inheritdoc/>
        public override void InitializeFromMaterial(Material material)
        {
            _FaceColor = material.GetColor(_FaceColorID);
            _FaceDilate = material.GetFloat(_FaceDilateID);
            _OutlineColor = material.GetColor(_OutlineColorID);
            _OutlineWidth = material.GetFloat(_OutlineWidthID);
            _OutlineSoftness = material.GetFloat(_OutlineSoftnessID);
            _UnderlayColor = material.GetColor(_UnderlayColorID);
            _UnderlayOffsetX = material.GetFloat(_UnderlayOffsetXID);
            _UnderlayOffsetY = material.GetFloat(_UnderlayOffsetYID);
            _UnderlayDilate = material.GetFloat(_UnderlayDilateID);
            _UnderlaySoftness = material.GetFloat(_UnderlaySoftnessID);
            _WeightNormal = material.GetFloat(_WeightNormalID);
            _WeightBold = material.GetFloat(_WeightBoldID);
            _ShaderFlags = material.GetFloat(_ShaderFlagsID);
            _ScaleRatioA = material.GetFloat(_ScaleRatioAID);
            _ScaleRatioB = material.GetFloat(_ScaleRatioBID);
            _ScaleRatioC = material.GetFloat(_ScaleRatioCID);
            _MainTex = (Texture2D)material.GetTexture(_MainTexID);
            _TextureWidth = material.GetFloat(_TextureWidthID);
            _TextureHeight = material.GetFloat(_TextureHeightID);
            _GradientScale = material.GetFloat(_GradientScaleID);
            _ScaleX = material.GetFloat(_ScaleXID);
            _ScaleY = material.GetFloat(_ScaleYID);
            _PerspectiveFilter = material.GetFloat(_PerspectiveFilterID);
            _Sharpness = material.GetFloat(_SharpnessID);
            _VertexOffsetX = material.GetFloat(_VertexOffsetXID);
            _VertexOffsetY = material.GetFloat(_VertexOffsetYID);
            _ClipRect = material.GetVector(_ClipRectID);
            _ClipRectRadii = material.GetVector(_ClipRectRadiiID);
            _MaskSoftnessX = material.GetFloat(_MaskSoftnessXID);
            _MaskSoftnessY = material.GetFloat(_MaskSoftnessYID);
            _StencilComp = material.GetFloat(_StencilCompID);
            _Stencil = material.GetFloat(_StencilID);
            _StencilOp = material.GetFloat(_StencilOpID);
            _StencilWriteMask = material.GetFloat(_StencilWriteMaskID);
            _StencilReadMask = material.GetFloat(_StencilReadMaskID);
            _CullMode = material.GetFloat(_CullModeID);
            _ColorMask = material.GetFloat(_ColorMaskID);
            _ZWrite = material.GetFloat(_ZWriteID);
            _ZTest = material.GetFloat(_ZTestID);
            _SrcBlend = material.GetFloat(_SrcBlendID);
            _DstBlend = material.GetFloat(_DstBlendID);
        }

        /// <inheritdoc/>
        public override void ApplyToMaterial(Material material)
        {
            material.SetColor(_FaceColorID, _FaceColor);
            material.SetFloat(_FaceDilateID, _FaceDilate);
            material.SetColor(_OutlineColorID, _OutlineColor);
            material.SetFloat(_OutlineWidthID, _OutlineWidth);
            material.SetFloat(_OutlineSoftnessID, _OutlineSoftness);
            material.SetColor(_UnderlayColorID, _UnderlayColor);
            material.SetFloat(_UnderlayOffsetXID, _UnderlayOffsetX);
            material.SetFloat(_UnderlayOffsetYID, _UnderlayOffsetY);
            material.SetFloat(_UnderlayDilateID, _UnderlayDilate);
            material.SetFloat(_UnderlaySoftnessID, _UnderlaySoftness);
            material.SetFloat(_WeightNormalID, _WeightNormal);
            material.SetFloat(_WeightBoldID, _WeightBold);
            material.SetFloat(_ShaderFlagsID, _ShaderFlags);
            material.SetFloat(_ScaleRatioAID, _ScaleRatioA);
            material.SetFloat(_ScaleRatioBID, _ScaleRatioB);
            material.SetFloat(_ScaleRatioCID, _ScaleRatioC);
            material.SetTexture(_MainTexID, (Texture2D)_MainTex);
            material.SetFloat(_TextureWidthID, _TextureWidth);
            material.SetFloat(_TextureHeightID, _TextureHeight);
            material.SetFloat(_GradientScaleID, _GradientScale);
            material.SetFloat(_ScaleXID, _ScaleX);
            material.SetFloat(_ScaleYID, _ScaleY);
            material.SetFloat(_PerspectiveFilterID, _PerspectiveFilter);
            material.SetFloat(_SharpnessID, _Sharpness);
            material.SetFloat(_VertexOffsetXID, _VertexOffsetX);
            material.SetFloat(_VertexOffsetYID, _VertexOffsetY);
            material.SetVector(_ClipRectID, _ClipRect);
            material.SetVector(_ClipRectRadiiID, _ClipRectRadii);
            material.SetFloat(_MaskSoftnessXID, _MaskSoftnessX);
            material.SetFloat(_MaskSoftnessYID, _MaskSoftnessY);
            material.SetFloat(_StencilCompID, _StencilComp);
            material.SetFloat(_StencilID, _Stencil);
            material.SetFloat(_StencilOpID, _StencilOp);
            material.SetFloat(_StencilWriteMaskID, _StencilWriteMask);
            material.SetFloat(_StencilReadMaskID, _StencilReadMask);
            material.SetFloat(_CullModeID, _CullMode);
            material.SetFloat(_ColorMaskID, _ColorMask);
            material.SetFloat(_ZWriteID, _ZWrite);
            material.SetFloat(_ZTestID, _ZTest);
            material.SetFloat(_SrcBlendID, _SrcBlend);
            material.SetFloat(_DstBlendID, _DstBlend);
        }

        /// <inheritdoc/>
        public override string GetTargetShaderName()
        {
            return "Graphics Tools/Text Mesh Pro";
        }
    }
}
