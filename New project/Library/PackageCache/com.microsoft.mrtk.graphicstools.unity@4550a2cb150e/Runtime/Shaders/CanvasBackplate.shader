// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Canvas/Backplate" {

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
     
    [Header(Blending)]
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend("Source Blend", Float) = 1       // "One"
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend("Destination Blend", Float) = 0  // "Zero"

    [Header(Depth)]
        [Enum(UnityEngine.Rendering.CompareFunction)] _ZTest("Depth Test", Float) = 4 // "LessEqual"
        [Enum(DepthWrite)] _ZWrite("Depth Write", Float) = 1 // "On"

    [Header(Stencil)]
        _StencilReference("Stencil Reference", Range(0, 255)) = 0
        [Enum(UnityEngine.Rendering.CompareFunction)]_StencilComparison("Stencil Comparison", Int) = 0
        [Enum(UnityEngine.Rendering.StencilOp)]_StencilOperation("Stencil Operation", Int) = 0

    [Header(Occlusion)]
        _OccludedTex("Occluded Texture", 2D) = "white" {}
        _OccludedColor("Occluded Color", Color) = (0.0, 0.5, 1.0, 1.0)
        _GridScale("Grid Scale", Float) = 0.02

    [HideInInspector] _MainTex("Texture", 2D) = "white" {} // Added to avoid UnityUI warnings.
    [HideInInspector] _ClipRect("Clip Rect", Vector) = (-32767.0, -32767.0, 32767.0, 32767.0) // Added to avoid SRP warnings.
    [HideInInspector] _ClipRectRadii("Clip Rect Radii", Vector) = (10.0, 10.0, 10.0, 10.0) // Added to avoid SRP warnings.
}

SubShader {
    Tags{ "RenderType" = "Opaque" }
    Blend[_SrcBlend][_DstBlend]
    ZWrite[_ZWrite]
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

    #pragma multi_compile_local _ UNITY_UI_CLIP_RECT
    #pragma multi_compile_local _ _UI_CLIP_RECT_ROUNDED _UI_CLIP_RECT_ROUNDED_INDEPENDENT

    #include "UnityCG.cginc"
    #include "GraphicsToolsCommon.hlsl"

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
    float _Fade_Out_;
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
        float3 posLocal : TEXCOORD8;
        half4 normalWorld : TEXCOORD5;
        float2 uv : TEXCOORD0;
        float3 posWorld : TEXCOORD7;
        float4 tangent : TANGENT;
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
        float4 extra2 : TEXCOORD3;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    //BLOCK_BEGIN Round_Rect_Vertex 654

    void Round_Rect_Vertex_B654(
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

    //BLOCK_BEGIN IridescenceDir 655

    void IridescenceDir_B655(
        float Degrees,
        out float3 Dir    )
    {
        float3 DirX = normalize((mul((float3x3)UNITY_MATRIX_M, float3(1,0,0))));
        float3 DirY = normalize((mul((float3x3)UNITY_MATRIX_M, float3(0,1,0))));
        float a = Degrees*3.14159/180.0;
        Dir = cos(a)*DirX+sin(a)*DirY;
    }
    //BLOCK_END IridescenceDir

    //BLOCK_BEGIN Line_Vertex 662

    void Line_Vertex_B662(
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

    //BLOCK_BEGIN RelativeOrAbsoluteDetail 647

    void RelativeOrAbsoluteDetail_B647(
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

        // Object_To_World_Pos (#650)
        float3 Pos_World_Q650=(mul(UNITY_MATRIX_M, float4(vertInput.vertex.xyz*float3(float2(1,1).x, float2(1,1).y, 1.0), 1)));

        // Object_To_World_Dir (#656)
        float3 Nrm_World_Q656;
        #if defined(_IRIDESCENCE_ENABLE_)
          Nrm_World_Q656 = normalize((mul((float3x3)UNITY_MATRIX_M, vertInput.normal)));
          
        #else
          Nrm_World_Q656 = float3(0,0,1);
        #endif

        float3 Dir_Q655;
        #if defined(_IRIDESCENCE_ENABLE_)
          IridescenceDir_B655(_Angle_,Dir_Q655);
        #else
          Dir_Q655 = float3(0,0,0);
        #endif

        // Scale_Color (#666)
        float4 Result_Q666 = _Fade_Out_ * vertInput.color;

        // To_XY (#643)
        float X_Q643;
        X_Q643 = vertInput.uv3.x;

        // To_XY (#638)
        float X_Q638;
        float Y_Q638;
        X_Q638 = vertInput.uv0.x;
        Y_Q638 = vertInput.uv0.y;

        // To_XY (#640)
        float X_Q640;
        float Y_Q640;
        X_Q640 = vertInput.uv2.x;
        Y_Q640 = vertInput.uv2.y;

        // Divide (#629)
        float Anisotropy_Q629 = X_Q640 / Y_Q640;

        float Radius_Q647;
        float Line_Width_Q647;
        RelativeOrAbsoluteDetail_B647(0.0,_Line_Width_,true,Y_Q640,Radius_Q647,Line_Width_Q647);

        float2 Rect_UV_Q654;
        float4 Rect_Parms_Q654;
        float2 Scale_XY_Q654;
        float2 Line_UV_Q654;
        Round_Rect_Vertex_B654(vertInput.uv0,X_Q643,Anisotropy_Q629,Rect_UV_Q654,Rect_Parms_Q654,Scale_XY_Q654,Line_UV_Q654);

        // From_XYZW (#637)
        float4 Vec4_Q637 = float4(X_Q638, Y_Q638, X_Q643, Line_Width_Q647);

        float4 Line_Vertex_Q662;
        #if defined(_LINE_DISABLED_)
          Line_Vertex_Q662 = float4(0,0,0,0);
        #else
          Line_Vertex_B662(Scale_XY_Q654,Line_UV_Q654,_Time.y,_Rate_,_Highlight_Transform_,Line_Vertex_Q662);
        #endif

        // Add4 (#653)
        float4 Sum4_Q653 = Rect_Parms_Q654 + Line_Vertex_Q662;

        float3 Position = Pos_World_Q650;
        float3 Normal = Nrm_World_Q656;
        float2 UV = Rect_UV_Q654;
        float3 Tangent = Dir_Q655;
        float3 Binormal = float3(0,0,0);
        float4 Color = Result_Q666;
        float4 Extra1 = Sum4_Q653;
        float4 Extra2 = Vec4_Q637;
        float4 Extra3 = float4(0,0,0,0);

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
        o.posLocal = vertInput.vertex.xyz;
        o.posWorld = Position;
        o.normalWorld.xyz = Normal; o.normalWorld.w=1.0;
        o.uv = UV;
        o.tangent.xyz = Tangent; o.tangent.w=1.0;
        o.vertexColor = Color;
        o.extra1=Extra1;
        o.extra2=Extra2;

        return o;
    }

    //BLOCK_BEGIN Round_Rect_Fragment 661

    void Round_Rect_Fragment_B661(
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

    //BLOCK_BEGIN Iridescence 644

    void Iridescence_B644(
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

    //BLOCK_BEGIN Line_Fragment 660

    void Line_Fragment_B660(
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

    //BLOCK_BEGIN Gradient 663

    void Gradient_B663(
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

    //BLOCK_BEGIN Edge 652

    void Edge_B652(
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
        half4 result;

        half4 Color_Q644;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B644(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,fragInput.tangent.xyz,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Reflected_,_Frequency_,_Vertical_Offset_,Color_Q644);
        #else
          Color_Q644 = half4(0,0,0,1);
        #endif

        // To_XYZW (#630)
        float X_Q630;
        float Y_Q630;
        float Z_Q630;
        float W_Q630;
        X_Q630=fragInput.extra2.x;
        Y_Q630=fragInput.extra2.y;
        Z_Q630=fragInput.extra2.z;
        W_Q630=fragInput.extra2.w;

        // Scale_RGB (#649)
        half4 Result_Q649 = float4(_Iridescence_Intensity_,_Iridescence_Intensity_,_Iridescence_Intensity_,1) * Color_Q644;

        half4 Line_Color_Q660;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q660 = half4(0,0,0,1);
        #else
          Line_Fragment_B660(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q660);
        #endif

        half Result_Q652;
        #if defined(_EDGE_ONLY_)
          Edge_B652(fragInput.extra1,Z_Q630,W_Q630,fragInput.uv,_Edge_Width_,_Edge_Power_,Result_Q652);
        #else
          Result_Q652 = 1;
        #endif

        // From_XY (#631)
        float2 Vec2_Q631 = float2(X_Q630,Y_Q630);

        half InLine_Q661;
        #if defined(_LINE_DISABLED_)
          InLine_Q661 = 0.0;
        #else
          Round_Rect_Fragment_B661(Z_Q630,W_Q630,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q661);
        #endif

        half4 Result_Q663;
        #if defined(_GRADIENT_DISABLED_)
          Result_Q663 = half4(0,0,0,0);
        #else
          Gradient_B663(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q631,Result_Q663);
        #endif

        // Scale_RGB (#648)
        half4 Result_Q648 = float4(Result_Q652,Result_Q652,Result_Q652,1) * Result_Q663;

        // Add_Colors (#633)
        half4 Sum_Q633 = Result_Q648 + Result_Q649;

        // Mix_Colors (#634)
        half4 Color_At_T_Q634 = lerp(Line_Color_Q660, Result_Q648,float4( _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_, _Line_Gradient_Blend_));

        // Add_Colors (#645)
        half4 Base_And_Iridescent_Q645;
        Base_And_Iridescent_Q645 = _Base_Color_ + float4(Sum_Q633.rgb,0.0);
        
        // Add_Scaled_Color (#635)
        half4 Sum_Q635 = Color_At_T_Q634 + _Iridescence_Edge_Intensity_ * Color_Q644;

        // Mix_Colors (#651)
        half4 Color_At_T_Q651 = lerp(Base_And_Iridescent_Q645, Sum_Q635,float4( InLine_Q661, InLine_Q661, InLine_Q661, InLine_Q661));

        // Set_Alpha (#641)
        half4 Result_Q641 = Color_At_T_Q651; Result_Q641.a = 1;

        // Multiply_Colors (#668)
        half4 Product_Q668 = fragInput.vertexColor * Result_Q641;

        half4 Out_Color = Product_Q668;
        half Clip_Threshold = 0.001;
        bool To_sRGB = false;

        result = Out_Color;
        return result;
    }

    ENDCG

    Pass
    {
        Name "Default"
        ZTest[_ZTest]

        CGPROGRAM
        #pragma vertex vert
        #pragma fragment frag
        ENDCG
    }
    Pass
    {
        Name "Occluded"
        Tags { "LightMode" = "UIOccluded" }
        ZTest Greater

        CGPROGRAM
        #pragma vertex vertOccluded
        #pragma fragment fragOccluded

        VertexOutput vertOccluded(VertexInput input)
        {
            VertexOutput output = vert(input);
            return output;
        }

        half4 fragOccluded(VertexOutput input) : SV_Target
        {
            half4 output = frag(input);
            output += tex2D(_OccludedTex, input.posLocal.xy * _GridScale) * _OccludedColor;

            return output;
        }
        ENDCG
    }
 }
}
