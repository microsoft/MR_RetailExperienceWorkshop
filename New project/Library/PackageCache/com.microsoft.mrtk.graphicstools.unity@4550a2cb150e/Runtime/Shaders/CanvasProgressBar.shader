// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Canvas/Progress Bar" {

Properties {

    [Header(Bar)]
        _Back_Color_("Back Color", Color) = (0.223529,0.223529,0.223529,1)
        _Fill_1_("Fill 1", Color) = (0.364706,0.356863,0.831373,1)
        _Fill_2_("Fill 2", Color) = (0.623529,0.635294,0.988235,1)
        _Filled_Fraction_("Filled Fraction", Range(0,1)) = 0.2
     
    [Header(Animation)]
        [Toggle(_CYCLE_)] _Cycle_("Cycle", Float) = 0
        _Cycle_Rate_("Cycle Rate", Range(0,2)) = 0.7
        _Rate_Vary_("Rate Vary", Range(0,1)) = 0.5
        _Fill_Vary_("Fill Vary", Range(0,1)) = 0.7
        _Period_("Period", Float) = 1.0
        _Cycle_Offset_("Cycle Offset", Float) = -0.3
     
    [Header(Blurred Background)]
        [Toggle(_BLUR_CIRCLE_)] _Blur_Circle_("Blur Circle", Float) = 0
        [NoScaleOffset] _blurTexture("blurTexture", 2D) = "" {}
        _BlurBackgroundRect("BlurBackgroundRect", Vector) = (0, 0, 1, 1)
     

    [Header(Blending)]
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend("Source Blend", Float) = 1       // "One"
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend("Destination Blend", Float) = 10  // "OneMinusSrcAlpha"

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
    ZWrite[_ZWrite]
    ZTest[_ZTest]
    Tags {"DisableBatching" = "True"}
    Stencil
    {
        Ref[_StencilReference]
        Comp[_StencilComparison]
        Pass[_StencilOperation]
    }

    LOD 100


    Pass

    {

    CGPROGRAM

    #pragma vertex vert
    #pragma fragment frag
    #pragma target 4.0
    #pragma shader_feature_local _ _BLUR_CIRCLE_
    #pragma shader_feature_local _ _CYCLE_
    #pragma multi_compile_local _ UNITY_UI_CLIP_RECT
    #pragma multi_compile_local _ _UI_CLIP_RECT_ROUNDED _UI_CLIP_RECT_ROUNDED_INDEPENDENT

    #include "UnityCG.cginc"
    #include "GraphicsToolsCommon.hlsl"

CBUFFER_START(UnityPerMaterial)
    half4 _Back_Color_;
    half4 _Fill_1_;
    half4 _Fill_2_;
    float _Filled_Fraction_;
    //bool _Cycle_;
    float _Cycle_Rate_;
    float _Rate_Vary_;
    float _Fill_Vary_;
    float _Period_;
    float _Cycle_Offset_;
    //bool _Blur_Circle_;
    sampler2D _blurTexture;
    float4 _BlurBackgroundRect;
    // #if defined(UNITY_UI_CLIP_RECT)
    float4 _ClipRect;
    // #if defined(_UI_CLIP_RECT_ROUNDED) || defined(_UI_CLIP_RECT_ROUNDED_INDEPENDENT)
    float4 _ClipRectRadii;

CBUFFER_END


    struct VertexInput {
        float4 vertex : POSITION;
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
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    //BLOCK_BEGIN Timing 805

    void Timing_B805(
        float Time,
        float Rate,
        float Rate_Vary,
        float Fill_Vary,
        float Period,
        float Fill_Fraction,
        out float Result,
        out float Fill_Offset    )
    {
        float tr = Time * Rate / Period;
        float ft = frac(tr);
        float tri = 2*abs(ft-0.5);
        float wave = sin(tr*6.283);
        float delta = (1-wave)*Rate_Vary/3.4;
        Result = (lerp(ft,tri*tri*0.5*sign(ft-0.5)+0.5,Rate_Vary) + delta)*Period;
        Fill_Offset = delta*Fill_Vary;
    }
    //BLOCK_END Timing


    VertexOutput vert(VertexInput vertInput)
    {
        UNITY_SETUP_INSTANCE_ID(vertInput);
        VertexOutput o;
        UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

        // Object_To_World_Pos (#781)
        float3 Pos_World_Q781;
        Pos_World_Q781=(mul(UNITY_MATRIX_M, float4(vertInput.vertex.xyz, 1)));
        
        // Scale_Sizes (#791)
        float3 RadiusAniso_Q791;
        RadiusAniso_Q791.x = 0.0;
        RadiusAniso_Q791.y = vertInput.uv2.x / vertInput.uv2.y;  // anisotropy
        RadiusAniso_Q791.z = vertInput.uv0.x;

        // ScaleUVs (#779)
        float2 XY_Q779 = (vertInput.uv0 - float2(0.5,0.5))*float2(vertInput.uv2.x/vertInput.uv2.y,1.0);

        // ToCanvasSpace (#799)
        float2 Result_Q799 = float2((vertInput.vertex.xyz.x-_BlurBackgroundRect.x)/(_BlurBackgroundRect.z-_BlurBackgroundRect.x), (vertInput.vertex.xyz.y-_BlurBackgroundRect.y)/(_BlurBackgroundRect.w-_BlurBackgroundRect.y));

        float Result_Q805;
        float Fill_Offset_Q805;
        Timing_B805(_Time.y,_Cycle_Rate_,_Rate_Vary_,_Fill_Vary_,_Period_,_Filled_Fraction_,Result_Q805,Fill_Offset_Q805);

        // To_XY (#797)
        float X_Q797;
        float Y_Q797;
        X_Q797 = Result_Q799.x;
        Y_Q797 = Result_Q799.y;

        // Add (#790)
        float Sum_Q790 = Result_Q805 + _Cycle_Offset_;

        // Add (#802)
        float Sum_Q802 = Fill_Offset_Q805 + _Filled_Fraction_;

        // From_XYZW (#798)
        float4 Vec4_Q798 = float4(X_Q797, Y_Q797, Sum_Q790, Sum_Q802);

        float3 Position = Pos_World_Q781;
        float3 Normal = RadiusAniso_Q791;
        float2 UV = XY_Q779;
        float3 Tangent = float3(0,0,0);
        float3 Binormal = float3(0,0,0);
        float4 Color = vertInput.color;
        float4 Extra1 = Vec4_Q798;

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
#ifdef UNITY_UI_CLIP_RECT
        o.posLocal = vertInput.vertex.xyz;
#endif
        o.normalWorld.xyz = Normal; o.normalWorld.w=1.0;
        o.uv = UV;
        o.vertexColor = Color;
        o.extra1=Extra1;

        return o;
    }

    //BLOCK_BEGIN DeterminateBar 808

    void DeterminateBar_B808(
        float2 UV,
        float Length,
        half4 Line_Color,
        half4 Left_Color,
        half4 Right_Color,
        float Filled_Fraction,
        out half4 Result    )
    {
        float halfLength = Length * 0.5;
        float x = UV.x - clamp(UV.x,-halfLength+0.5,halfLength-0.5);
        float d = sqrt(x*x+UV.y*UV.y);
        half inLine = saturate((0.5-d)/fwidth(d));
        
        float fillEnd = (Length-1)*Filled_Fraction+0.5-halfLength;
        float fx = UV.x - clamp(UV.x,-halfLength+0.5,fillEnd);
        float fd = sqrt(fx*fx+UV.y*UV.y);
        half filled = saturate((0.5-fd)/fwidth(fd));
        
        half blend = saturate( (UV.x+halfLength)/(fillEnd+halfLength+0.5) );
        half4 fillColor = lerp(Left_Color, Right_Color,float4( blend, blend, blend, blend));
        
        Result = filled * fillColor + (1-filled)*inLine*Line_Color;
    }
    //BLOCK_END DeterminateBar

    //BLOCK_BEGIN IndeterminateBar 809

    half Line(float startX, float endX, float2 uv)
    {
        float x = uv.x - clamp(uv.x, startX, endX);
        half d = sqrt(x*x+uv.y*uv.y);
        return saturate((0.5-d)/fwidth(d));    
    }
    
    void IndeterminateBar_B809(
        float2 UV,
        float Length,
        half4 Line_Color,
        half4 Left_Color,
        half4 Right_Color,
        float Filled_Fraction,
        float Cycle,
        out half4 Result    )
    {
        float halfLength = Length * 0.5;
        half inLine = Line(-halfLength+0.5,halfLength-0.5,UV);
        
        float fcycle = frac(Cycle);
        float end = (fcycle)*(Length+1);
        float start = end - Filled_Fraction * (Length-1);
        float dir = end>Length*0.5 ? -1 : 1;
        float start2 = start + dir * (Length+1);
        float end2 = end + dir * (Length+1);
        half filled = max( Line(start,end,UV), Line(start2,end2,UV)) * inLine;
        
        //find gradient
        float inFirst = abs(UV.x-clamp(UV.x,start,end));
        float inSecond = abs(UV.x-clamp(UV.x,start2,end2));
        float2 segment = inFirst<inSecond ? float2(start,end) : float2(start2,end2);
        
        half blend = saturate( (UV.x-segment.x+0.5)/(segment.y-segment.x+1) );
        half4 fillColor = lerp(Left_Color, Right_Color,float4( blend, blend, blend, blend));
        
        Result = inLine * Line_Color * (1-filled) + filled * fillColor;
    }
    //BLOCK_END IndeterminateBar


    half4 frag(VertexOutput fragInput) : SV_Target
    {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        half4 result;

        // To_XYZ (#787)
        float X_Q787;
        float Y_Q787;
        float Z_Q787;
        X_Q787=fragInput.normalWorld.xyz.x;
        Y_Q787=fragInput.normalWorld.xyz.y;
        Z_Q787=fragInput.normalWorld.xyz.z;
        
        // To_XYZW (#795)
        float X_Q795;
        float Y_Q795;
        float Z_Q795;
        float W_Q795;
        X_Q795=fragInput.extra1.x;
        Y_Q795=fragInput.extra1.y;
        Z_Q795=fragInput.extra1.z;
        W_Q795=fragInput.extra1.w;

        // Permutation_To_Bool (#793)
        bool Use_Blur_Map_Q793;
        #if defined(_BLUR_CIRCLE_)
          Use_Blur_Map_Q793 = true;
        #else
          Use_Blur_Map_Q793 = false;
        #endif

        // From_XY (#794)
        float2 Vec2_Q794 = float2(X_Q795,Y_Q795);

        // Circle_Color (#800)
        half4 Color_Q800;
        if (Use_Blur_Map_Q793) {
            Color_Q800 = tex2D(_blurTexture,Vec2_Q794);
        } else {
            Color_Q800 = _Back_Color_;
        }

        half4 Result_Q808;
        #if defined(_CYCLE_)
          Result_Q808 = half4(0,0,0,0);
        #else
          DeterminateBar_B808(fragInput.uv,Y_Q787,Color_Q800,_Fill_2_,_Fill_1_,_Filled_Fraction_,Result_Q808);
        #endif

        half4 Result_Q809;
        #if defined(_CYCLE_)
          IndeterminateBar_B809(fragInput.uv,Y_Q787,Color_Q800,_Fill_2_,_Fill_1_,W_Q795,Z_Q795,Result_Q809);
        #else
          Result_Q809 = half4(0,0,0,0);
        #endif

        // Add_Colors (#789)
        half4 Sum_Q789 = Result_Q808 + Result_Q809;

        // Multiply_Colors (#783)
        half4 Product_Q783 = Sum_Q789 * fragInput.vertexColor;

        half4 Out_Color = Product_Q783;
        half Clip_Threshold = 0;

        result = Out_Color;
        return result;
    }

    ENDCG
  }
 }
}
