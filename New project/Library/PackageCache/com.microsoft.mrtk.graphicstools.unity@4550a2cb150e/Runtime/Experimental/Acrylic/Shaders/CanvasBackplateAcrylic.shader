// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Experimental/Acrylic/Canvas Backplate" {

Properties {

    [Header(Round Rect)]
        _Base_Color_("Base Color", Color) = (0,0,0,1)
        [Toggle(_LINE_DISABLED_)] _Line_Disabled_("Line Disabled", Float) = 0
        _Line_Width_("Line Width", Range(0,10)) = 1
        _Line_Color_("Line Color", Color) = (0,0,0,1)
        _Filter_Width_("Filter Width", Range(0,4)) = 1
     
    [Header(Line Highlight)]
        _Rate_("Rate", Range(0,1)) = 0
        _Highlight_Color_("Highlight Color", Color) = (0.98,0.98,0.98,1)
        _Highlight_Width_("Highlight Width", Range(0,2)) = 0.25
        _Highlight_Transform_("Highlight Transform", Vector) = (1, 1, 0, 0)
        _Highlight_("Highlight", Range(0,1)) = 1
     
    [Header(Iridescence)]
        [Toggle(_IRIDESCENCE_ENABLE_)] _Iridescence_Enable_("Iridescence Enable", Float) = 1
        _Iridescence_Intensity_("Iridescence Intensity", Range(0,1)) = 0
        _Iridescence_Edge_Intensity_("Iridescence Edge Intensity", Range(0,1)) = 0.56
        _Iridescence_Tint_("Iridescence Tint", Color) = (1,1,1,1)
        [NoScaleOffset] _Iridescent_Map_("Iridescent Map", 2D) = "" {}
        _Angle_("Angle", Range(-90,90)) = -45
        [Toggle] _Reflected_("Reflected", Float) = 1
        _Frequency_("Frequency", Range(0,10)) = 1
        _Vertical_Offset_("Vertical Offset", Range(0,2)) = 0
     
    [Header(Gradient)]
        [Toggle(_GRADIENT_DISABLED_)] _Gradient_Disabled_("Gradient Disabled", Float) = 0
        _Gradient_Color_("Gradient Color", Color) = (0.631373,0.631373,0.631373,1)
        _Top_Left_("Top Left", Color) = (1,0.690196,0.976471,1)
        _Top_Right_("Top Right", Color) = (0.0,0.33,0.88,1)
        _Bottom_Left_("Bottom Left", Color) = (0.0,0.33,0.88,1)
        _Bottom_Right_("Bottom Right", Color) = (1,1,1,1)
        [Toggle(_EDGE_ONLY_)] _Edge_Only_("Edge Only", Float) = 0
        _Edge_Width_("Edge Width", Range(0,1)) = 0.5
        _Edge_Power_("Edge Power", Range(0,10)) = 2.0
        _Line_Gradient_Blend_("Line Gradient Blend", Range(0,1)) = 0.36
     
    [Header(Fade)]
        _Fade_Out_("Fade Out", Range(0,1)) = 1
     
    [Header(Blur Textures)]
        [Toggle(_BLUR_TEXTURE_ENABLE_)] _Blur_Texture_Enable_("Blur Texture Enable", Float) = 1
        [Toggle(_BLUR_TEXTURE_2_ENABLE_)] _Blur_Texture_2_Enable_("Blur Texture 2 Enable", Float) = 0
        _Blur_Texture_Intensity_("Blur Texture Intensity", Range(0,1)) = 1.0
        _Blur_Edge_Intensity_("Blur Edge Intensity", Range(0,1)) = 0.0
        _Fallback_Color_("Fallback Color", Color) = (0,0,0,1)
     
    [Header(Color Texture)]
        [Toggle(_NOISE_ENABLE_)] _Noise_Enable_("Noise Enable", Float) = 0
        _Noise_("Noise", Range(0,1)) = 0.05
        _Noise_Frequency_("Noise Frequency", Range(0,10)) = 1.0
        [NoScaleOffset] _Noise_Texture_("Noise Texture", 2D) = "" {}
     
    [Header(Scale Color)]
        _Occluded_Intensity_("Occluded Intensity", Range(0,1)) = 1
        _Occluded_Blur_Intensity_("Occluded Blur Intensity", Range(0,1)) = 0
        _Occluded_Blur_Edge_Intensity_("Occluded Blur Edge Intensity", Range(0,1)) = 0.0
     
    [Header(Occlusion)]
        [NoScaleOffset] _OccludedTex("OccludedTex", 2D) = "" {}
        _OccludedColor("OccludedColor", Color) = (0,0.5,1,1)
        _GridScale("GridScale", Float) = 0.02
     

    [Header(Blending)]
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend("Source Blend", Float) = 1       // "One"
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend("Destination Blend", Float) = 0  // "Zero"

    [Header(Stencil)]
        _StencilReference("Stencil Reference", Range(0, 255)) = 0
        [Enum(UnityEngine.Rendering.CompareFunction)]_StencilComparison("Stencil Comparison", Int) = 0
        [Enum(UnityEngine.Rendering.StencilOp)]_StencilOperation("Stencil Operation", Int) = 0

    [Header(Depth)]
        [Enum(UnityEngine.Rendering.CompareFunction)] _ZTest("Depth Test", Float) = 4 // "LessEqual"
        [Enum(DepthWrite)] _ZWrite("Depth Write", Float) = 1 // "On"

    [HideInInspector] _MainTex("Texture", 2D) = "white" {} // Added to avoid UnityUI warnings.
    [HideInInspector] _ClipRect("Clip Rect", Vector) = (-32767.0, -32767.0, 32767.0, 32767.0) // Added to avoid SRP warnings.
    [HideInInspector] _ClipRectRadii("Clip Rect Radii", Vector) = (10.0, 10.0, 10.0, 10.0) // Added to avoid SRP warnings.
}

SubShader {
    Tags{ "RenderType" = "Opaque" }
    Blend[_SrcBlend][_DstBlend]
    Tags {"DisableBatching" = "True"}
    Stencil
    {
        Ref[_StencilReference]
        Comp[_StencilComparison]
        Pass[_StencilOperation]
    }

    LOD 100

    CGINCLUDE

    #pragma target 4.0
    #pragma shader_feature_local _ _IRIDESCENCE_ENABLE_
    #pragma shader_feature_local _ _LINE_DISABLED_
    #pragma shader_feature_local _ _GRADIENT_DISABLED_
    #pragma shader_feature_local _ _EDGE_ONLY_
    #pragma shader_feature_local _ _NOISE_ENABLE_

    #pragma multi_compile_local _ _BLUR_TEXTURE_ENABLE_
    #pragma multi_compile_local _ _BLUR_TEXTURE_2_ENABLE_

    #pragma multi_compile_local _ UNITY_UI_CLIP_RECT
    #pragma multi_compile_local _ _UI_CLIP_RECT_ROUNDED _UI_CLIP_RECT_ROUNDED_INDEPENDENT

    #include "UnityCG.cginc"
    #include "../../../Shaders/GraphicsToolsCommon.hlsl"



CBUFFER_START(UnityPerMaterial)
    half4 _Base_Color_;
    //bool _Line_Disabled_;
    float _Line_Width_;
    half4 _Line_Color_;
    half _Filter_Width_;
    float _Rate_;
    half4 _Highlight_Color_;
    half _Highlight_Width_;
    float4 _Highlight_Transform_;
    half _Highlight_;
    //bool _Iridescence_Enable_;
    float _Iridescence_Intensity_;
    float _Iridescence_Edge_Intensity_;
    half4 _Iridescence_Tint_;
    sampler2D _Iridescent_Map_;
    float _Angle_;
    bool _Reflected_;
    float _Frequency_;
    float _Vertical_Offset_;
    //bool _Gradient_Disabled_;
    half4 _Gradient_Color_;
    half4 _Top_Left_;
    half4 _Top_Right_;
    half4 _Bottom_Left_;
    half4 _Bottom_Right_;
    //bool _Edge_Only_;
    half _Edge_Width_;
    half _Edge_Power_;
    half _Line_Gradient_Blend_;
    half _Fade_Out_;
    //bool _Blur_Texture_Enable_;
    //bool _Blur_Texture_2_Enable_;
    half _Blur_Texture_Intensity_;
    half _Blur_Edge_Intensity_;
    half4 _Fallback_Color_;
    //bool _Noise_Enable_;
    float _Noise_;
    float _Noise_Frequency_;
    sampler2D _Noise_Texture_;
    half _Occluded_Intensity_;
    half _Occluded_Blur_Intensity_;
    half _Occluded_Blur_Edge_Intensity_;
    sampler2D _OccludedTex;
    half4 _OccludedColor;
    float _GridScale;
    // #if defined(UNITY_UI_CLIP_RECT)
    float4 _ClipRect;
    // #if defined(_UI_CLIP_RECT_ROUNDED) || defined(_UI_CLIP_RECT_ROUNDED_INDEPENDENT)
    float4 _ClipRectRadii;

CBUFFER_END


    struct VertexInput {
        float4 vertex : POSITION;
        half3 normal : NORMAL;
        float2 uv0 : TEXCOORD0;
        float2 uv2 : TEXCOORD2;
        float2 uv3 : TEXCOORD3;
        float4 color : COLOR;
        UNITY_VERTEX_INPUT_INSTANCE_ID
    };

    struct VertexOutput {
        float4 pos : SV_POSITION;
#ifdef UNITY_UI_CLIP_RECT
        float3 posLocal : TEXCOORD8;
#endif
        half4 normalWorld : TEXCOORD5;
        float2 uv : TEXCOORD0;
        float3 posWorld : TEXCOORD7;
        float4 tangent : TANGENT;
        float4 binormal : TEXCOORD6;
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
        float4 extra2 : TEXCOORD3;
        float4 extra3 : TEXCOORD2;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    UNITY_DECLARE_SCREENSPACE_TEXTURE(_blurTexture);
    UNITY_DECLARE_SCREENSPACE_TEXTURE(_blurTexture2);
    
    //BLOCK_BEGIN Round_Rect_Vertex 549

    void Round_Rect_Vertex_B549(
        float2 UV,
        float Radius,
        float Anisotropy,
        out float2 Rect_UV,
        out float4 Rect_Parms,
        out float2 Scale_XY,
        out float2 Line_UV    )
    {
        Scale_XY = float2(Anisotropy,1.0);
        Line_UV = (UV - float2(0.5,0.5));
        Rect_UV = Line_UV * Scale_XY;
        Rect_Parms.xy = Scale_XY*0.5-float2(Radius,Radius);
        Rect_Parms.z = 0.0;
        Rect_Parms.w = 0.0;
        
    }
    //BLOCK_END Round_Rect_Vertex

    //BLOCK_BEGIN IridescenceDir 550

    void IridescenceDir_B550(
        float Degrees,
        out float3 Dir    )
    {
        float3 DirX = normalize((mul((float3x3)UNITY_MATRIX_M, float3(1,0,0))));
        float3 DirY = normalize((mul((float3x3)UNITY_MATRIX_M, float3(0,1,0))));
        float a = Degrees*3.14159/180.0;
        Dir = cos(a)*DirX+sin(a)*DirY;
    }
    //BLOCK_END IridescenceDir

    //BLOCK_BEGIN Line_Vertex 556

    void Line_Vertex_B556(
        float2 Scale_XY,
        float2 UV,
        float Time,
        float Rate,
        float4 Highlight_Transform,
        out float4 Line_Vertex    )
    {
        float angle2 = (Rate*Time) * 2.0 * 3.1416;
        float sinAngle2 = sin(angle2);
        float cosAngle2 = cos(angle2);
        float2 xformUV = UV * Highlight_Transform.xy + Highlight_Transform.zw;
        Line_Vertex.x = 0.0;
        Line_Vertex.y = 0.0;
        Line_Vertex.z = cosAngle2*xformUV.x-sinAngle2*xformUV.y;
        Line_Vertex.w = 0.0; //sinAngle2*xformUV.x+cosAngle2*xformUV.y;
    }
    //BLOCK_END Line_Vertex

    //BLOCK_BEGIN RelativeOrAbsoluteDetail 576

    void RelativeOrAbsoluteDetail_B576(
        float Nominal_Radius,
        float Nominal_LineWidth,
        bool Absolute_Measurements,
        float Height,
        out float Radius,
        out float Line_Width    )
    {
        float scale = Absolute_Measurements ? 1.0/Height : 1.0;
        Radius = Nominal_Radius * scale;
        Line_Width = Nominal_LineWidth * scale;
    }
    //BLOCK_END RelativeOrAbsoluteDetail


    VertexOutput vert(VertexInput vertInput)
    {
        UNITY_SETUP_INSTANCE_ID(vertInput);
        VertexOutput o;
        UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

        // Object_To_World_Pos (#545)
        float3 Pos_World_Q545=(mul(UNITY_MATRIX_M, float4(vertInput.vertex.xyz*float3(float2(1,1).x, float2(1,1).y, 1.0), 1)));

        // Object_To_World_Dir (#551)
        float3 Nrm_World_Q551;
        #if defined(_IRIDESCENCE_ENABLE_)
          Nrm_World_Q551 = normalize((mul((float3x3)UNITY_MATRIX_M, vertInput.normal)));
          
        #else
          Nrm_World_Q551 = float3(0,0,1);
        #endif

        float3 Dir_Q550;
        #if defined(_IRIDESCENCE_ENABLE_)
          IridescenceDir_B550(_Angle_,Dir_Q550);
        #else
          Dir_Q550 = float3(0,0,0);
        #endif

        // ScreenPosition (#575)
        float4 ScreenPos_Q575;
        ScreenPos_Q575 = ComputeScreenPos(mul(UNITY_MATRIX_VP, float4(Pos_World_Q545, 1)));
        ScreenPos_Q575.y = unity_OrthoParams.w ? 1.0 - ScreenPos_Q575.y : ScreenPos_Q575.y;

        // To_XY (#539)
        float X_Q539;
        float Y_Q539;
        X_Q539 = vertInput.uv3.x;
        Y_Q539 = vertInput.uv3.y;

        // To_XY (#534)
        float X_Q534;
        float Y_Q534;
        X_Q534 = vertInput.uv0.x;
        Y_Q534 = vertInput.uv0.y;

        // To_XY (#536)
        float X_Q536;
        float Y_Q536;
        X_Q536 = vertInput.uv2.x;
        Y_Q536 = vertInput.uv2.y;

        // Divide (#524)
        float Anisotropy_Q524 = X_Q536 / Y_Q536;

        float Radius_Q576;
        float Line_Width_Q576;
        RelativeOrAbsoluteDetail_B576(0.0,_Line_Width_,true,Y_Q536,Radius_Q576,Line_Width_Q576);

        float2 Rect_UV_Q549;
        float4 Rect_Parms_Q549;
        float2 Scale_XY_Q549;
        float2 Line_UV_Q549;
        Round_Rect_Vertex_B549(vertInput.uv0,X_Q539,Anisotropy_Q524,Rect_UV_Q549,Rect_Parms_Q549,Scale_XY_Q549,Line_UV_Q549);

        // From_XYZW (#533)
        float4 Vec4_Q533 = float4(X_Q534, Y_Q534, X_Q539, Line_Width_Q576);

        float4 Line_Vertex_Q556;
        #if defined(_LINE_DISABLED_)
          Line_Vertex_Q556 = float4(0,0,0,0);
        #else
          Line_Vertex_B556(Scale_XY_Q549,Line_UV_Q549,_Time.y,_Rate_,_Highlight_Transform_,Line_Vertex_Q556);
        #endif

        // Add4 (#548)
        float4 Sum4_Q548 = Rect_Parms_Q549 + Line_Vertex_Q556;

        float3 Position = Pos_World_Q545;
        float3 Normal = Nrm_World_Q551;
        float2 UV = Rect_UV_Q549;
        float3 Tangent = Dir_Q550;
        float3 Binormal = vertInput.vertex.xyz;
        float4 Color = vertInput.color;
        float4 Extra1 = Sum4_Q548;
        float4 Extra2 = Vec4_Q533;
        float4 Extra3 = ScreenPos_Q575;

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
#ifdef UNITY_UI_CLIP_RECT
        o.posLocal = vertInput.vertex.xyz;
#endif
        o.posWorld = Position;
        o.normalWorld.xyz = Normal; o.normalWorld.w=1.0;
        o.uv = UV;
        o.tangent.xyz = Tangent; o.tangent.w=1.0;
        o.binormal.xyz = Binormal; o.binormal.w=1.0;
        o.vertexColor = Color;
        o.extra1=Extra1;
        o.extra2=Extra2;
        o.extra3=Extra3;

        return o;
    }

    ENDCG

    Pass
    {
        Name "Default"
    ZWrite[_ZWrite]
    ZTest[_ZTest]

        CGPROGRAM
        #pragma vertex vert
        #pragma fragment frag

    //BLOCK_BEGIN Round_Rect_Fragment 555

    void Round_Rect_Fragment_B555(
        half Radius,
        half Line_Width,
        half Filter_Width,
        float2 UV,
        float4 Rect_Parms,
        out half InLine    )
    {
        half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
        half dx = max(fwidth(d)*Filter_Width,0.00001);
        InLine = saturate((d+dx*0.5-max(Radius-Line_Width,d-dx*0.5))/dx);
        
    }
    //BLOCK_END Round_Rect_Fragment

    //BLOCK_BEGIN Scale_RGB 567

    void Scale_RGB_B567(
        half Scalar,
        half4 Color,
        out half4 Result    )
    {
        Result = float4(Scalar,Scalar,Scalar,1) * Color;
    }
    //BLOCK_END Scale_RGB

    //BLOCK_BEGIN Iridescence 540

    void Iridescence_B540(
        half3 Position,
        half3 Normal,
        half2 UV,
        half3 Axis,
        half3 Eye,
        half4 Tint,
        sampler2D Texture,
        bool Reflected,
        half Frequency,
        half Vertical_Offset,
        out half4 Color    )
    {
        
        half3 i = normalize(Position-Eye);
        half3 r = reflect(i,Normal);
        half idota = dot(i,Axis);
        half idotr = dot(i,r);
        
        half x = Reflected ? idotr : idota;
        
        half2 xy;
        xy.x = frac((x*Frequency+1.0)*0.5 + UV.y*Vertical_Offset);
        xy.y = 0.5;
        
        Color = tex2D(Texture,xy);
        Color.rgb*=Tint.rgb;
    }
    //BLOCK_END Iridescence

    //BLOCK_BEGIN Line_Fragment 554

    void Line_Fragment_B554(
        half4 Base_Color,
        half4 Highlight_Color,
        half Highlight_Width,
        half4 Line_Vertex,
        half Highlight,
        out half4 Line_Color    )
    {
        half k2 = 1.0-saturate(abs(Line_Vertex.z/Highlight_Width));
        Line_Color = lerp(Base_Color,Highlight_Color,float4(Highlight*k2,Highlight*k2,Highlight*k2,Highlight*k2));
    }
    //BLOCK_END Line_Fragment

    //BLOCK_BEGIN Gradient 557

    void Gradient_B557(
        half4 Gradient_Color,
        half4 Top_Left,
        half4 Top_Right,
        half4 Bottom_Left,
        half4 Bottom_Right,
        half2 UV,
        out half4 Result    )
    {
        half3 top = Top_Left.rgb + (Top_Right.rgb - Top_Left.rgb)*UV.x;
        half3 bottom = Bottom_Left.rgb + (Bottom_Right.rgb - Bottom_Left.rgb)*UV.x;
        Result.rgb = Gradient_Color.rgb * (bottom + (top - bottom)*UV.y);
        Result.a = 1.0;
    }
    //BLOCK_END Gradient

    //BLOCK_BEGIN Edge 547

    void Edge_B547(
        float4 Rect_Parms,
        half Radius,
        half Line_Width,
        float2 UV,
        half Edge_Width,
        half Edge_Power,
        out half Result    )
    {
        half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
        half edge = 1.0-saturate((1.0-d/(Radius-Line_Width))/Edge_Width);
        Result = pow(edge, Edge_Power);
    }
    //BLOCK_END Edge


    half4 frag(VertexOutput fragInput) : SV_Target
    {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(fragInput);
        half4 result;

        // To_XYZW (#525)
        float X_Q525;
        float Y_Q525;
        float Z_Q525;
        float W_Q525;
        X_Q525=fragInput.extra2.x;
        Y_Q525=fragInput.extra2.y;
        Z_Q525=fragInput.extra2.z;
        W_Q525=fragInput.extra2.w;

        half4 Color_Q540;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B540(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,fragInput.tangent.xyz,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Reflected_,_Frequency_,_Vertical_Offset_,Color_Q540);
        #else
          Color_Q540 = half4(0,0,0,1);
        #endif

        // Scale_RGB (#544)
        half4 Result_Q544 = float4(_Iridescence_Intensity_,_Iridescence_Intensity_,_Iridescence_Intensity_,1) * Color_Q540;

        // Color_Texture (#562)
        half Result_Q562;
        #if defined(_NOISE_ENABLE_)
          Result_Q562 = 1.0 - _Noise_ * tex2D(_Noise_Texture_, fragInput.uv * _Noise_Frequency_).r;
        #else
          Result_Q562 = 1.0;
        #endif

        half4 Line_Color_Q554;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q554 = half4(0,0,0,1);
        #else
          Line_Fragment_B554(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q554);
        #endif

        half Result_Q547;
        #if defined(_EDGE_ONLY_)
          Edge_B547(fragInput.extra1,Z_Q525,W_Q525,fragInput.uv,_Edge_Width_,_Edge_Power_,Result_Q547);
        #else
          Result_Q547 = 1;
        #endif

        // From_XY (#526)
        float2 Vec2_Q526 = float2(X_Q525,Y_Q525);

        // ScreenUV (#570)
        float2 ScreenUV_Q570;
        ScreenUV_Q570 = fragInput.extra3.xy/fragInput.extra3.w;
        
        half InLine_Q555;
        #if defined(_LINE_DISABLED_)
          InLine_Q555 = 0.0;
        #else
          Round_Rect_Fragment_B555(Z_Q525,W_Q525,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q555);
        #endif

        half4 Result_Q557;
        #if defined(_GRADIENT_DISABLED_)
          Result_Q557 = half4(0,0,0,0);
        #else
          Gradient_B557(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q526,Result_Q557);
        #endif

        // Color_Texture (#572)
        half4 Color_Q572;
        half Used_Q572;
        #if defined(_BLUR_TEXTURE_ENABLE_)
          Color_Q572 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture, ScreenUV_Q570);
          Used_Q572 = 1.0;
        #else
          Color_Q572 = half4(0,0,0,0);
          Used_Q572 = 0;
        #endif

        // Color_Texture (#574)
        half4 Color_Q574;
        half Used_Q574;
        #if defined(_BLUR_TEXTURE_2_ENABLE_)
          Color_Q574 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture2, ScreenUV_Q570);
          Used_Q574 = 1.0;
        #else
          Color_Q574 = half4(0,0,0,0);
          Used_Q574 = 0.0;
        #endif

        // Scale_RGB (#543)
        half4 Result_Q543 = float4(Result_Q547,Result_Q547,Result_Q547,1) * Result_Q557;

        // Add_Colors (#561)
        half4 Sum_Q561 = Color_Q572 + Color_Q574;

        // Max (#563)
        half MaxAB_Q563=max(Used_Q572,Used_Q574);

        // Add_Colors (#528)
        half4 Sum_Q528 = Result_Q543 + Result_Q544;

        // Mix_Colors (#529)
        half4 Color_At_T_Q529 = lerp(Line_Color_Q554, Result_Q543,float4( _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_));

        // Mix_Colors (#564)
        half4 Color_At_T_Q564 = lerp(_Fallback_Color_, Sum_Q561,float4( MaxAB_Q563, MaxAB_Q563, MaxAB_Q563, MaxAB_Q563));

        // Add_Colors (#541)
        half4 Base_And_Iridescent_Q541;
        Base_And_Iridescent_Q541 = _Base_Color_ + float4(Sum_Q528.rgb,0.0);
        
        // Add_Scaled_Color (#530)
        half4 Sum_Q530 = Color_At_T_Q529 + _Iridescence_Edge_Intensity_ * Color_Q540;

        half4 Result_Q565;
        Scale_RGB_B567(Result_Q562,Color_At_T_Q564,Result_Q565);

        half4 Result_Q567;
        Scale_RGB_B567(_Blur_Texture_Intensity_,Result_Q565,Result_Q567);

        half4 Result_Q559;
        Scale_RGB_B567(_Blur_Edge_Intensity_,Result_Q565,Result_Q559);

        // Add_Colors (#568)
        half4 Sum_Q568 = Base_And_Iridescent_Q541 + Result_Q567;

        // Add_Colors (#569)
        half4 Sum_Q569 = Sum_Q530 + Result_Q559;

        // Mix_Colors (#546)
        half4 Color_At_T_Q546 = lerp(Sum_Q568, Sum_Q569,float4( InLine_Q555, InLine_Q555, InLine_Q555, InLine_Q555));

        // Set_Alpha (#537)
        half4 Result_Q537 = Color_At_T_Q546; Result_Q537.a = 1;

        // Scale_Color (#532)
        half4 Result_Q532 = _Fade_Out_ * Result_Q537;

        // Multiply_Colors (#600)
        half4 Product_Q600 = fragInput.vertexColor * Result_Q532;

        float4 Out_Color = Product_Q600;
        float Clip_Threshold = 0.001;

        result = Out_Color;
        return result;
    }

    ENDCG
  }

    Pass
    {
        Name "Occluded"
        Tags { "LightMode" = "UIOccluded" }
        ZTest Greater

        CGPROGRAM
        #pragma vertex vert
        #pragma fragment secondFragment

        //BLOCK_BEGIN Round_Rect_Fragment 555

        void Round_Rect_Fragment_B555(
            half Radius,
            half Line_Width,
            half Filter_Width,
            float2 UV,
            float4 Rect_Parms,
            out half InLine        )
        {
            half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
            half dx = max(fwidth(d)*Filter_Width,0.00001);
            InLine = saturate((d+dx*0.5-max(Radius-Line_Width,d-dx*0.5))/dx);
            
        }
        //BLOCK_END Round_Rect_Fragment

        //BLOCK_BEGIN Scale_RGB 565

        void Scale_RGB_B565(
            half Scalar,
            half4 Color,
            out half4 Result        )
        {
            Result = float4(Scalar,Scalar,Scalar,1) * Color;
        }
        //BLOCK_END Scale_RGB

        //BLOCK_BEGIN Iridescence 540

        void Iridescence_B540(
            half3 Position,
            half3 Normal,
            half2 UV,
            half3 Axis,
            half3 Eye,
            half4 Tint,
            sampler2D Texture,
            bool Reflected,
            half Frequency,
            half Vertical_Offset,
            out half4 Color        )
        {
            
            half3 i = normalize(Position-Eye);
            half3 r = reflect(i,Normal);
            half idota = dot(i,Axis);
            half idotr = dot(i,r);
            
            half x = Reflected ? idotr : idota;
            
            half2 xy;
            xy.x = frac((x*Frequency+1.0)*0.5 + UV.y*Vertical_Offset);
            xy.y = 0.5;
            
            Color = tex2D(Texture,xy);
            Color.rgb*=Tint.rgb;
        }
        //BLOCK_END Iridescence

        //BLOCK_BEGIN Line_Fragment 554

        void Line_Fragment_B554(
            half4 Base_Color,
            half4 Highlight_Color,
            half Highlight_Width,
            half4 Line_Vertex,
            half Highlight,
            out half4 Line_Color        )
        {
            half k2 = 1.0-saturate(abs(Line_Vertex.z/Highlight_Width));
            Line_Color = lerp(Base_Color,Highlight_Color,float4(Highlight*k2,Highlight*k2,Highlight*k2,Highlight*k2));
        }
        //BLOCK_END Line_Fragment

        //BLOCK_BEGIN Gradient 557

        void Gradient_B557(
            half4 Gradient_Color,
            half4 Top_Left,
            half4 Top_Right,
            half4 Bottom_Left,
            half4 Bottom_Right,
            half2 UV,
            out half4 Result        )
        {
            half3 top = Top_Left.rgb + (Top_Right.rgb - Top_Left.rgb)*UV.x;
            half3 bottom = Bottom_Left.rgb + (Bottom_Right.rgb - Bottom_Left.rgb)*UV.x;
            Result.rgb = Gradient_Color.rgb * (bottom + (top - bottom)*UV.y);
            Result.a = 1.0;
        }
        //BLOCK_END Gradient

        //BLOCK_BEGIN Edge 547

        void Edge_B547(
            float4 Rect_Parms,
            half Radius,
            half Line_Width,
            float2 UV,
            half Edge_Width,
            half Edge_Power,
            out half Result        )
        {
            half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
            half edge = 1.0-saturate((1.0-d/(Radius-Line_Width))/Edge_Width);
            Result = pow(edge, Edge_Power);
        }
        //BLOCK_END Edge


        half4 secondFragment(VertexOutput fragInput) : SV_Target
        {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(fragInput);
        half4 result;

        // To_XYZW (#525)
        float X_Q525;
        float Y_Q525;
        float Z_Q525;
        float W_Q525;
        X_Q525=fragInput.extra2.x;
        Y_Q525=fragInput.extra2.y;
        Z_Q525=fragInput.extra2.z;
        W_Q525=fragInput.extra2.w;

        // Color_Texture (#562)
        half Result_Q562;
        #if defined(_NOISE_ENABLE_)
          Result_Q562 = 1.0 - _Noise_ * tex2D(_Noise_Texture_, fragInput.uv * _Noise_Frequency_).r;
        #else
          Result_Q562 = 1.0;
        #endif

        half4 Color_Q540;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B540(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,fragInput.tangent.xyz,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Reflected_,_Frequency_,_Vertical_Offset_,Color_Q540);
        #else
          Color_Q540 = half4(0,0,0,1);
        #endif

        // To_XYZ (#587)
        float X_Q587;
        float Y_Q587;
        float Z_Q587;
        X_Q587=fragInput.binormal.xyz.x;
        Y_Q587=fragInput.binormal.xyz.y;
        Z_Q587=fragInput.binormal.xyz.z;
        
        // Scale_RGB (#544)
        half4 Result_Q544 = float4(_Iridescence_Intensity_,_Iridescence_Intensity_,_Iridescence_Intensity_,1) * Color_Q540;

        half4 Line_Color_Q554;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q554 = half4(0,0,0,1);
        #else
          Line_Fragment_B554(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q554);
        #endif

        half Result_Q547;
        #if defined(_EDGE_ONLY_)
          Edge_B547(fragInput.extra1,Z_Q525,W_Q525,fragInput.uv,_Edge_Width_,_Edge_Power_,Result_Q547);
        #else
          Result_Q547 = 1;
        #endif

        // From_XY (#526)
        float2 Vec2_Q526 = float2(X_Q525,Y_Q525);

        // ScreenUV (#570)
        float2 ScreenUV_Q570;
        ScreenUV_Q570 = fragInput.extra3.xy/fragInput.extra3.w;
        
        half InLine_Q555;
        #if defined(_LINE_DISABLED_)
          InLine_Q555 = 0.0;
        #else
          Round_Rect_Fragment_B555(Z_Q525,W_Q525,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q555);
        #endif

        // From_XY (#588)
        float2 Vec2_Q588 = float2(X_Q587,Y_Q587);

        half4 Result_Q557;
        #if defined(_GRADIENT_DISABLED_)
          Result_Q557 = half4(0,0,0,0);
        #else
          Gradient_B557(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q526,Result_Q557);
        #endif

        // Color_Texture (#572)
        half4 Color_Q572;
        half Used_Q572;
        #if defined(_BLUR_TEXTURE_ENABLE_)
          Color_Q572 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture, ScreenUV_Q570);
          Used_Q572 = 1.0;
        #else
          Color_Q572 = half4(0,0,0,0);
          Used_Q572 = 0;
        #endif

        // Color_Texture (#574)
        half4 Color_Q574;
        half Used_Q574;
        #if defined(_BLUR_TEXTURE_2_ENABLE_)
          Color_Q574 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture2, ScreenUV_Q570);
          Used_Q574 = 1.0;
        #else
          Color_Q574 = half4(0,0,0,0);
          Used_Q574 = 0.0;
        #endif

        // Scale2 (#590)
        float2 Result_Q590 = Vec2_Q588 * _GridScale;

        // Scale_RGB (#543)
        half4 Result_Q543 = float4(Result_Q547,Result_Q547,Result_Q547,1) * Result_Q557;

        // Add_Colors (#561)
        half4 Sum_Q561 = Color_Q572 + Color_Q574;

        // Max (#563)
        half MaxAB_Q563=max(Used_Q572,Used_Q574);

        // Color_Texture (#589)
        float4 Color_Q589 = tex2D(_OccludedTex,Result_Q590);

        // Add_Colors (#528)
        half4 Sum_Q528 = Result_Q543 + Result_Q544;

        // Mix_Colors (#564)
        half4 Color_At_T_Q564 = lerp(_Fallback_Color_, Sum_Q561,float4( MaxAB_Q563, MaxAB_Q563, MaxAB_Q563, MaxAB_Q563));

        // Mix_Colors (#529)
        half4 Color_At_T_Q529 = lerp(Line_Color_Q554, Result_Q543,float4( _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_));

        // Multiply_Colors (#591)
        half4 Product_Q591 = _OccludedColor * Color_Q589;

        // Add_Colors (#541)
        half4 Base_And_Iridescent_Q541;
        Base_And_Iridescent_Q541 = _Base_Color_ + float4(Sum_Q528.rgb,0.0);
        
        half4 Result_Q565;
        Scale_RGB_B565(Result_Q562,Color_At_T_Q564,Result_Q565);

        // Add_Scaled_Color (#530)
        half4 Sum_Q530 = Color_At_T_Q529 + _Iridescence_Edge_Intensity_ * Color_Q540;

        // Add_Scaled_Color (#584)
        half4 Sum_Q584 = Base_And_Iridescent_Q541 + _Occluded_Blur_Intensity_ * Result_Q565;

        // Add_Scaled_Color (#585)
        half4 Sum_Q585 = Sum_Q530 + _Occluded_Blur_Edge_Intensity_ * Result_Q565;

        // Mix_Colors (#582)
        half4 Color_At_T_Q582 = lerp(Sum_Q584, Sum_Q585,float4( InLine_Q555, InLine_Q555, InLine_Q555, InLine_Q555));

        // Scale_Color (#583)
        half4 Result_Q583 = _Occluded_Intensity_ * Color_At_T_Q582;

        // Add_Colors (#593)
        half4 Sum_Q593 = Result_Q583 + Product_Q591;

        // Set_Alpha (#581)
        half4 Result_Q581 = Sum_Q593; Result_Q581.a = 1;

        // Scale_Color (#592)
        half4 Result_Q592 = _Fade_Out_ * Result_Q581;

        // Multiply_Colors (#602)
        half4 Product_Q602 = fragInput.vertexColor * Result_Q592;

        half4 Out_Color = Product_Q602;


        result = Out_Color;
        return result;
        }
        ENDCG
    }

 }
}
