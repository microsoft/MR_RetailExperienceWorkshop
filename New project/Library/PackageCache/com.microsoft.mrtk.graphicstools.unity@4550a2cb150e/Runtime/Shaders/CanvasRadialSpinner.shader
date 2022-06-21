// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Canvas/Radial Spinner" {

Properties {

    [Header(Animation)]
        [Toggle(_CYCLE_)] _Cycle_("Cycle", Float) = 0
        _Cycle_Rate_("Cycle Rate", Range(0,1)) = .7
        _Rate_Vary_("Rate Vary", Range(0,1)) = 0.6
        _Fill_Vary_("Fill Vary", Range(0,1)) = 1
        _Period_("Period", Float) = 1
        _Cycle_Offset_("Cycle Offset", Range(0,10)) = 0
     
    [Header(Colors)]
        _Circle_Color_("Circle Color", Color) = (0.239216,0.239216,0.239216,1)
        _Fill_1_("Fill 1", Color) = (0.364706,0.356863,0.831373,1)
        _Fill_2_("Fill 2", Color) = (0.623529,0.635294,0.988235,1)
     
    [Header(Circle)]
        _Circle_Width_("Circle Width", Range(0,1)) = 0.3
        _Filled_Fraction_("Filled Fraction", Range(0,1)) = 0.1
     
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
    //bool _Cycle_;
    float _Cycle_Rate_;
    float _Rate_Vary_;
    float _Fill_Vary_;
    float _Period_;
    float _Cycle_Offset_;
    half4 _Circle_Color_;
    half4 _Fill_1_;
    half4 _Fill_2_;
    float _Circle_Width_;
    float _Filled_Fraction_;
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
        float4 color : COLOR;
        UNITY_VERTEX_INPUT_INSTANCE_ID
    };

    struct VertexOutput {
        float4 pos : SV_POSITION;
#ifdef UNITY_UI_CLIP_RECT
        float3 posLocal : TEXCOORD8;
#endif
        float2 uv : TEXCOORD0;
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    //BLOCK_BEGIN Object_To_World_Pos 743

    void Object_To_World_Pos_B743(
        float3 Pos_Object,
        out float3 Pos_World    )
    {
        Pos_World=(mul(UNITY_MATRIX_M, float4(Pos_Object, 1)));
        
    }
    //BLOCK_END Object_To_World_Pos

    //BLOCK_BEGIN Timing 770

    void Timing_B770(
        float Time,
        float Rate,
        float Rate_Vary,
        float Fill_Vary,
        float Period,
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

        float3 Pos_World_Q743;
        Object_To_World_Pos_B743(vertInput.vertex.xyz,Pos_World_Q743);

        // Subtract2 (#744)
        float2 Difference2_Q744 = vertInput.uv0 - float2(0.5,0.5);

        // ToCanvasSpace (#748)
        float2 Result_Q748 = float2((vertInput.vertex.xyz.x-_BlurBackgroundRect.x)/(_BlurBackgroundRect.z-_BlurBackgroundRect.x), (vertInput.vertex.xyz.y-_BlurBackgroundRect.y)/(_BlurBackgroundRect.w-_BlurBackgroundRect.y));

        float Result_Q770;
        float Fill_Offset_Q770;
        #if defined(_CYCLE_)
          Timing_B770(_Time.y,_Cycle_Rate_,_Rate_Vary_,_Fill_Vary_,_Period_,Result_Q770,Fill_Offset_Q770);
        #else
          Result_Q770 = 0.0;
          Fill_Offset_Q770 = 0.0;
        #endif

        // To_XY (#750)
        float X_Q750;
        float Y_Q750;
        X_Q750 = Result_Q748.x;
        Y_Q750 = Result_Q748.y;

        // Add (#745)
        float Sum_Q745 = Result_Q770 + _Cycle_Offset_;

        // Add (#769)
        float Sum_Q769 = Fill_Offset_Q770 + _Filled_Fraction_;

        // From_XYZW (#749)
        float4 Vec4_Q749 = float4(X_Q750, Y_Q750, Sum_Q745, Sum_Q769);

        float3 Position = Pos_World_Q743;
        float3 Normal = float3(0,0,0);
        float2 UV = Difference2_Q744;
        float3 Tangent = float3(0,0,0);
        float3 Binormal = float3(0,0,0);
        float4 Color = vertInput.color;
        float4 Extra1 = Vec4_Q749;

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
#ifdef UNITY_UI_CLIP_RECT
        o.posLocal = vertInput.vertex.xyz;
#endif
        o.uv = UV;
        o.vertexColor = Color;
        o.extra1=Extra1;

        return o;
    }

    //BLOCK_BEGIN Spinner 767

    float2 rotate2d(float2 uv, float angle)
    {
        float cosa = cos(angle);
        float sina = sin(angle);
        return float2(cosa*uv.x-sina*uv.y, sina*uv.x+cosa*uv.y);
    }
    
    float Circle(float2 center, float radius, float2 xy)
    {
        float d = distance(center,xy);
        return saturate((radius-d)/fwidth(d));
    }
    
    void Spinner_B767(
        float Circle_Width,
        half4 Circle_Color,
        float2 UV,
        half4 Start_Color,
        half4 End_Color,
        float Cycle,
        float Segment_Width,
        bool CycleOn,
        out half4 Result    )
    {
        float cycleAngle = Cycle * 6.283;
        float dir = CycleOn ? -1.0 : 1.0;
        float2 xy = rotate2d(UV, cycleAngle + dir * Segment_Width*3.14159);
        half angle = atan2(xy.x,xy.y)/3.14159;
        
        float r = (length(UV)*2.0);
        float dr = fwidth(r);
        float inCircle = saturate((1-r)/dr)-(1-saturate((r-(1-Circle_Width))/dr));
        float inSegment = inCircle;
        
        half inArc = step(-Segment_Width,angle)-step(Segment_Width,angle);
        inSegment *= inArc;
        
        float segmentAngle = Segment_Width*3.14159;
        
        float2 endpt = rotate2d(float2(0,0.5-Circle_Width*0.25), segmentAngle);
        
        float circle1 = Circle(endpt, Circle_Width*0.25, xy);
        float circle2 = Circle(float2(-endpt.x,endpt.y), Circle_Width*0.25, xy);
        
        inSegment = max(max(circle1,circle2),inSegment);
        
        half endToEndWidth = (Segment_Width+Circle_Width/3.14159*0.5)*2;
        half t = saturate(angle/endToEndWidth+0.5);
        half4 segmentColor = lerp(Start_Color, End_Color,float4( t, t, t, t));
        Result = Circle_Color * (inCircle * (1-inSegment)) + inSegment * segmentColor;
    }
    //BLOCK_END Spinner

    //BLOCK_BEGIN Permutation_To_Bool 768

    void Permutation_To_Bool_B768(
        out bool Bool    )
    {
          Bool = true;
    }
    //BLOCK_END Permutation_To_Bool


    half4 frag(VertexOutput fragInput) : SV_Target
    {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        half4 result;

        // To_XYZW (#752)
        float X_Q752;
        float Y_Q752;
        float Z_Q752;
        float W_Q752;
        X_Q752=fragInput.extra1.x;
        Y_Q752=fragInput.extra1.y;
        Z_Q752=fragInput.extra1.z;
        W_Q752=fragInput.extra1.w;

        bool Bool_Q768;
        #if defined(_CYCLE_)
          Permutation_To_Bool_B768(Bool_Q768);
        #else
          Bool_Q768 = false;
        #endif

        // Permutation_To_Bool (#754)
        bool Use_Blur_Map_Q754;
        #if defined(_BLUR_CIRCLE_)
          Use_Blur_Map_Q754 = true;
        #else
          Use_Blur_Map_Q754 = false;
        #endif

        // From_XY (#751)
        float2 Vec2_Q751 = float2(X_Q752,Y_Q752);

        // Circle_Color (#764)
        half4 Color_Q764;
        if (Use_Blur_Map_Q754) {
            Color_Q764 = tex2D(_blurTexture,Vec2_Q751);
        } else {
            Color_Q764 = _Circle_Color_;
        }

        half4 Result_Q767;
        Spinner_B767(_Circle_Width_,Color_Q764,fragInput.uv,_Fill_2_,_Fill_1_,Z_Q752,W_Q752,Bool_Q768,Result_Q767);

        // Multiply_Colors (#756)
        half4 Product_Q756 = fragInput.vertexColor * Result_Q767;

        half4 Out_Color = Product_Q756;
        half Clip_Threshold = 0;

        result = Out_Color;
        return result;
    }

    ENDCG
  }
 }
}
