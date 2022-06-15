#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>>
struct Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>
struct HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.IClippable>
struct IEqualityComparer_1_t8F24B96A9AEBA31A84C739A93E0877C47C5ED373;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.MaskableGraphic>
struct IEqualityComparer_1_tFA57A7615B8AB45A707124969BFDAA5AFA226073;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer>
struct List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.ProximityLight>
struct List_1_t048A084A8BC9D8FB0D71744626F15FFD1CF84DEF;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings>
struct List_1_tF9BAFA91E4E428DC73194C4E3AC92C0106BA7D86;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.UI.IClippable>[]
struct SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.UI.MaskableGraphic>[]
struct SlotU5BU5D_t066D56076031AAE0AB314333A7DF791691E07BC6;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// Microsoft.MixedReality.GraphicsTools.AcrylicLayer[]
struct AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.RectMask2D[]
struct RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState[]
struct PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B;
// Microsoft.MixedReality.GraphicsTools.AcrylicBlurFeature
struct AcrylicBlurFeature_tF0E0D332E2116497D8C4389A0733B6B0DCB095A7;
// Microsoft.MixedReality.GraphicsTools.AcrylicFilterDual
struct AcrylicFilterDual_t6A82F5CE79D31AA22D7B42BEE71EC0AB1B814685;
// Microsoft.MixedReality.GraphicsTools.AcrylicLayer
struct AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9;
// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager
struct AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.Rendering.Universal.ForwardRendererData
struct ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679;
// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse
struct FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.IClippable
struct IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rendering.Universal.PostProcessData
struct PostProcessData_t0A8C54238A50BC5196EA369470ABDF437961B730;
// Microsoft.MixedReality.GraphicsTools.ProximityLight
struct ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// Microsoft.MixedReality.GraphicsTools.RectMask2DFast
struct RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D
struct RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.GraphicsTools.ScaleMeshEffect
struct ScaleMeshEffect_tC68771701EE5BC495CEE9B7E629FE4862E794C97;
// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// UnityEngine.Rendering.Universal.StencilStateData
struct StencilStateData_t49B1D046B05EEE4E918C97E232CE16CED1D5FC39;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Universal.XRSystemData
struct XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035;
// Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings
struct Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535;
// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76
struct U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.GraphicsTools.CameraController/CameraState
struct CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings
struct PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16;
// UnityEngine.Rendering.Universal.ForwardRendererData/ShaderResources
struct ShaderResources_t3DD80DE8BD2EF668BB5F66AA7AE103871955BE46;
// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15
struct U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733;
// Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference
struct MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A;
// Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24
struct U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7;
// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings
struct LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshSmoother_t9D9360415602066031DD763B0CF1B98C12FFAEE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2149D0F5F9C18D4239820B5167B31AA23FCDF4B1;
IL2CPP_EXTERN_C String_t* _stringLiteral2E39E305880BBC27E02C3428DD84CF747A64FB16;
IL2CPP_EXTERN_C String_t* _stringLiteral3C295ED4531659F44F6CFFF78FA843D6EF493A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral3D92A6DC18E9957DDB0234923996F1FA0868D2A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3FE3DC592A56079E8904D32159D96EF96893DCF3;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5B8ACB8190E84E27D67B689F7A739E72872780;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB39F5BBB1F55FFE3E67DE0502C760FF7FEA7E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral73151A161BF5580F9BCB22BCDF8B3FD51DBA5C01;
IL2CPP_EXTERN_C String_t* _stringLiteral9F74F0A2DBE24A1C803BE5000C6FB5D6657767EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C88F9A8D4666BE640789DD02A218E643FBCC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralCCB58BBE9D6BF89A221BE403D968DDE26EDD09B7;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB4AEB723C603CFE3FB9237AD0E7BE54C3C5A40;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE09C8E7D7D322256589C65D0CA069948C87226C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0122F916881428CFF7FAB3A25FABA25C14BE5F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE29302DAC82620EA1FBB306824B20D8A57027860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m618EE6681E16FCA629C2D77265499E24B0ED8F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPulseRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m515CDE2655E36A91A835E1706917B51F1B3162CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePulseU3Ed__15_System_Collections_IEnumerator_Reset_m5AA779FDD670C3B169F01BE92FEC7EFE51988F05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateRoutineU3Ed__76_System_Collections_IEnumerator_Reset_mB332E15DA1CE01D7AD89806E7B5AF42BE425D367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____slots_8)); }
	inline SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>
struct HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t066D56076031AAE0AB314333A7DF791691E07BC6* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____slots_8)); }
	inline SlotU5BU5D_t066D56076031AAE0AB314333A7DF791691E07BC6* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t066D56076031AAE0AB314333A7DF791691E07BC6** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t066D56076031AAE0AB314333A7DF791691E07BC6* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer>
struct List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F, ____items_1)); }
	inline AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* get__items_1() const { return ____items_1; }
	inline AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F_StaticFields, ____emptyArray_5)); }
	inline AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AcrylicLayerU5BU5D_t7D02BBADB9A0B2E4EE3D574F83ECDD0FA2D563DC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0, ____items_1)); }
	inline RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* get__items_1() const { return ____items_1; }
	inline RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0_StaticFields, ____emptyArray_5)); }
	inline RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayer
struct AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer::activeCount
	int32_t ___activeCount_0;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer::frameCount
	int32_t ___frameCount_1;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::firstFrameRendered
	bool ___firstFrameRendered_2;
	// UnityEngine.Camera Microsoft.MixedReality.GraphicsTools.AcrylicLayer::targetCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___targetCamera_3;
	// Microsoft.MixedReality.GraphicsTools.AcrylicBlurFeature Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blur
	AcrylicBlurFeature_tF0E0D332E2116497D8C4389A0733B6B0DCB095A7 * ___blur_4;
	// UnityEngine.Rendering.Universal.ScriptableRendererFeature Microsoft.MixedReality.GraphicsTools.AcrylicLayer::renderOpaque
	ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * ___renderOpaque_5;
	// UnityEngine.Rendering.Universal.ScriptableRendererFeature Microsoft.MixedReality.GraphicsTools.AcrylicLayer::renderTransparent
	ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * ___renderTransparent_6;
	// UnityEngine.RenderTexture Microsoft.MixedReality.GraphicsTools.AcrylicLayer::renderTarget1
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTarget1_7;
	// UnityEngine.RenderTexture Microsoft.MixedReality.GraphicsTools.AcrylicLayer::renderTarget2
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTarget2_8;
	// UnityEngine.RenderTexture[] Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blendSource
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ___blendSource_9;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blendSourceIndex
	int32_t ___blendSourceIndex_10;
	// UnityEngine.RenderTexture Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blendTarget
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___blendTarget_11;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blurred
	bool ___blurred_12;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::immediateBlur
	bool ___immediateBlur_13;
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings Microsoft.MixedReality.GraphicsTools.AcrylicLayer::settings
	Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535 * ___settings_14;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer::index
	int32_t ___index_15;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer::depthBits
	int32_t ___depthBits_16;
	// UnityEngine.Material Microsoft.MixedReality.GraphicsTools.AcrylicLayer::kawaseBlur
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___kawaseBlur_17;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::useDualBlur
	bool ___useDualBlur_18;
	// Microsoft.MixedReality.GraphicsTools.AcrylicFilterDual Microsoft.MixedReality.GraphicsTools.AcrylicLayer::dualBlur
	AcrylicFilterDual_t6A82F5CE79D31AA22D7B42BEE71EC0AB1B814685 * ___dualBlur_19;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.GraphicsTools.AcrylicLayer::blitProperties
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___blitProperties_21;

public:
	inline static int32_t get_offset_of_activeCount_0() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___activeCount_0)); }
	inline int32_t get_activeCount_0() const { return ___activeCount_0; }
	inline int32_t* get_address_of_activeCount_0() { return &___activeCount_0; }
	inline void set_activeCount_0(int32_t value)
	{
		___activeCount_0 = value;
	}

	inline static int32_t get_offset_of_frameCount_1() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___frameCount_1)); }
	inline int32_t get_frameCount_1() const { return ___frameCount_1; }
	inline int32_t* get_address_of_frameCount_1() { return &___frameCount_1; }
	inline void set_frameCount_1(int32_t value)
	{
		___frameCount_1 = value;
	}

	inline static int32_t get_offset_of_firstFrameRendered_2() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___firstFrameRendered_2)); }
	inline bool get_firstFrameRendered_2() const { return ___firstFrameRendered_2; }
	inline bool* get_address_of_firstFrameRendered_2() { return &___firstFrameRendered_2; }
	inline void set_firstFrameRendered_2(bool value)
	{
		___firstFrameRendered_2 = value;
	}

	inline static int32_t get_offset_of_targetCamera_3() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___targetCamera_3)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_targetCamera_3() const { return ___targetCamera_3; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_targetCamera_3() { return &___targetCamera_3; }
	inline void set_targetCamera_3(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___targetCamera_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetCamera_3), (void*)value);
	}

	inline static int32_t get_offset_of_blur_4() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blur_4)); }
	inline AcrylicBlurFeature_tF0E0D332E2116497D8C4389A0733B6B0DCB095A7 * get_blur_4() const { return ___blur_4; }
	inline AcrylicBlurFeature_tF0E0D332E2116497D8C4389A0733B6B0DCB095A7 ** get_address_of_blur_4() { return &___blur_4; }
	inline void set_blur_4(AcrylicBlurFeature_tF0E0D332E2116497D8C4389A0733B6B0DCB095A7 * value)
	{
		___blur_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blur_4), (void*)value);
	}

	inline static int32_t get_offset_of_renderOpaque_5() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___renderOpaque_5)); }
	inline ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * get_renderOpaque_5() const { return ___renderOpaque_5; }
	inline ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 ** get_address_of_renderOpaque_5() { return &___renderOpaque_5; }
	inline void set_renderOpaque_5(ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * value)
	{
		___renderOpaque_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderOpaque_5), (void*)value);
	}

	inline static int32_t get_offset_of_renderTransparent_6() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___renderTransparent_6)); }
	inline ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * get_renderTransparent_6() const { return ___renderTransparent_6; }
	inline ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 ** get_address_of_renderTransparent_6() { return &___renderTransparent_6; }
	inline void set_renderTransparent_6(ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * value)
	{
		___renderTransparent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTransparent_6), (void*)value);
	}

	inline static int32_t get_offset_of_renderTarget1_7() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___renderTarget1_7)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_renderTarget1_7() const { return ___renderTarget1_7; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_renderTarget1_7() { return &___renderTarget1_7; }
	inline void set_renderTarget1_7(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___renderTarget1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTarget1_7), (void*)value);
	}

	inline static int32_t get_offset_of_renderTarget2_8() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___renderTarget2_8)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_renderTarget2_8() const { return ___renderTarget2_8; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_renderTarget2_8() { return &___renderTarget2_8; }
	inline void set_renderTarget2_8(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___renderTarget2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTarget2_8), (void*)value);
	}

	inline static int32_t get_offset_of_blendSource_9() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blendSource_9)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get_blendSource_9() const { return ___blendSource_9; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of_blendSource_9() { return &___blendSource_9; }
	inline void set_blendSource_9(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		___blendSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_blendSourceIndex_10() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blendSourceIndex_10)); }
	inline int32_t get_blendSourceIndex_10() const { return ___blendSourceIndex_10; }
	inline int32_t* get_address_of_blendSourceIndex_10() { return &___blendSourceIndex_10; }
	inline void set_blendSourceIndex_10(int32_t value)
	{
		___blendSourceIndex_10 = value;
	}

	inline static int32_t get_offset_of_blendTarget_11() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blendTarget_11)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_blendTarget_11() const { return ___blendTarget_11; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_blendTarget_11() { return &___blendTarget_11; }
	inline void set_blendTarget_11(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___blendTarget_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendTarget_11), (void*)value);
	}

	inline static int32_t get_offset_of_blurred_12() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blurred_12)); }
	inline bool get_blurred_12() const { return ___blurred_12; }
	inline bool* get_address_of_blurred_12() { return &___blurred_12; }
	inline void set_blurred_12(bool value)
	{
		___blurred_12 = value;
	}

	inline static int32_t get_offset_of_immediateBlur_13() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___immediateBlur_13)); }
	inline bool get_immediateBlur_13() const { return ___immediateBlur_13; }
	inline bool* get_address_of_immediateBlur_13() { return &___immediateBlur_13; }
	inline void set_immediateBlur_13(bool value)
	{
		___immediateBlur_13 = value;
	}

	inline static int32_t get_offset_of_settings_14() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___settings_14)); }
	inline Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535 * get_settings_14() const { return ___settings_14; }
	inline Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535 ** get_address_of_settings_14() { return &___settings_14; }
	inline void set_settings_14(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535 * value)
	{
		___settings_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_14), (void*)value);
	}

	inline static int32_t get_offset_of_index_15() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___index_15)); }
	inline int32_t get_index_15() const { return ___index_15; }
	inline int32_t* get_address_of_index_15() { return &___index_15; }
	inline void set_index_15(int32_t value)
	{
		___index_15 = value;
	}

	inline static int32_t get_offset_of_depthBits_16() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___depthBits_16)); }
	inline int32_t get_depthBits_16() const { return ___depthBits_16; }
	inline int32_t* get_address_of_depthBits_16() { return &___depthBits_16; }
	inline void set_depthBits_16(int32_t value)
	{
		___depthBits_16 = value;
	}

	inline static int32_t get_offset_of_kawaseBlur_17() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___kawaseBlur_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_kawaseBlur_17() const { return ___kawaseBlur_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_kawaseBlur_17() { return &___kawaseBlur_17; }
	inline void set_kawaseBlur_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___kawaseBlur_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kawaseBlur_17), (void*)value);
	}

	inline static int32_t get_offset_of_useDualBlur_18() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___useDualBlur_18)); }
	inline bool get_useDualBlur_18() const { return ___useDualBlur_18; }
	inline bool* get_address_of_useDualBlur_18() { return &___useDualBlur_18; }
	inline void set_useDualBlur_18(bool value)
	{
		___useDualBlur_18 = value;
	}

	inline static int32_t get_offset_of_dualBlur_19() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___dualBlur_19)); }
	inline AcrylicFilterDual_t6A82F5CE79D31AA22D7B42BEE71EC0AB1B814685 * get_dualBlur_19() const { return ___dualBlur_19; }
	inline AcrylicFilterDual_t6A82F5CE79D31AA22D7B42BEE71EC0AB1B814685 ** get_address_of_dualBlur_19() { return &___dualBlur_19; }
	inline void set_dualBlur_19(AcrylicFilterDual_t6A82F5CE79D31AA22D7B42BEE71EC0AB1B814685 * value)
	{
		___dualBlur_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dualBlur_19), (void*)value);
	}

	inline static int32_t get_offset_of_blitProperties_21() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9, ___blitProperties_21)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_blitProperties_21() const { return ___blitProperties_21; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_blitProperties_21() { return &___blitProperties_21; }
	inline void set_blitProperties_21(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___blitProperties_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blitProperties_21), (void*)value);
	}
};

struct AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9_StaticFields
{
public:
	// UnityEngine.Rendering.CommandBuffer Microsoft.MixedReality.GraphicsTools.AcrylicLayer::cmd
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd_20;

public:
	inline static int32_t get_offset_of_cmd_20() { return static_cast<int32_t>(offsetof(AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9_StaticFields, ___cmd_20)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_cmd_20() const { return ___cmd_20; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_cmd_20() { return &___cmd_20; }
	inline void set_cmd_20(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___cmd_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_20), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.GraphicsTools.StandardShaderUtility
struct StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1  : public RuntimeObject
{
public:

public:
};

struct StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields
{
public:
	// System.String Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::GraphicsToolsStandardShaderName
	String_t* ___GraphicsToolsStandardShaderName_0;
	// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::graphicsToolsStandardShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___graphicsToolsStandardShader_1;
	// System.String Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::GraphicsToolsStandardCanvasShaderName
	String_t* ___GraphicsToolsStandardCanvasShaderName_2;
	// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::graphicsToolsStandardCanvasShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___graphicsToolsStandardCanvasShader_3;
	// System.String Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::GraphicsToolsTextMeshProShaderName
	String_t* ___GraphicsToolsTextMeshProShaderName_4;
	// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::graphicsToolsTextMeshProShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___graphicsToolsTextMeshProShader_5;

public:
	inline static int32_t get_offset_of_GraphicsToolsStandardShaderName_0() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___GraphicsToolsStandardShaderName_0)); }
	inline String_t* get_GraphicsToolsStandardShaderName_0() const { return ___GraphicsToolsStandardShaderName_0; }
	inline String_t** get_address_of_GraphicsToolsStandardShaderName_0() { return &___GraphicsToolsStandardShaderName_0; }
	inline void set_GraphicsToolsStandardShaderName_0(String_t* value)
	{
		___GraphicsToolsStandardShaderName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsToolsStandardShaderName_0), (void*)value);
	}

	inline static int32_t get_offset_of_graphicsToolsStandardShader_1() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___graphicsToolsStandardShader_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_graphicsToolsStandardShader_1() const { return ___graphicsToolsStandardShader_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_graphicsToolsStandardShader_1() { return &___graphicsToolsStandardShader_1; }
	inline void set_graphicsToolsStandardShader_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___graphicsToolsStandardShader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicsToolsStandardShader_1), (void*)value);
	}

	inline static int32_t get_offset_of_GraphicsToolsStandardCanvasShaderName_2() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___GraphicsToolsStandardCanvasShaderName_2)); }
	inline String_t* get_GraphicsToolsStandardCanvasShaderName_2() const { return ___GraphicsToolsStandardCanvasShaderName_2; }
	inline String_t** get_address_of_GraphicsToolsStandardCanvasShaderName_2() { return &___GraphicsToolsStandardCanvasShaderName_2; }
	inline void set_GraphicsToolsStandardCanvasShaderName_2(String_t* value)
	{
		___GraphicsToolsStandardCanvasShaderName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsToolsStandardCanvasShaderName_2), (void*)value);
	}

	inline static int32_t get_offset_of_graphicsToolsStandardCanvasShader_3() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___graphicsToolsStandardCanvasShader_3)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_graphicsToolsStandardCanvasShader_3() const { return ___graphicsToolsStandardCanvasShader_3; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_graphicsToolsStandardCanvasShader_3() { return &___graphicsToolsStandardCanvasShader_3; }
	inline void set_graphicsToolsStandardCanvasShader_3(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___graphicsToolsStandardCanvasShader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicsToolsStandardCanvasShader_3), (void*)value);
	}

	inline static int32_t get_offset_of_GraphicsToolsTextMeshProShaderName_4() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___GraphicsToolsTextMeshProShaderName_4)); }
	inline String_t* get_GraphicsToolsTextMeshProShaderName_4() const { return ___GraphicsToolsTextMeshProShaderName_4; }
	inline String_t** get_address_of_GraphicsToolsTextMeshProShaderName_4() { return &___GraphicsToolsTextMeshProShaderName_4; }
	inline void set_GraphicsToolsTextMeshProShaderName_4(String_t* value)
	{
		___GraphicsToolsTextMeshProShaderName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsToolsTextMeshProShaderName_4), (void*)value);
	}

	inline static int32_t get_offset_of_graphicsToolsTextMeshProShader_5() { return static_cast<int32_t>(offsetof(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields, ___graphicsToolsTextMeshProShader_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_graphicsToolsTextMeshProShader_5() const { return ___graphicsToolsTextMeshProShader_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_graphicsToolsTextMeshProShader_5() { return &___graphicsToolsTextMeshProShader_5; }
	inline void set_graphicsToolsTextMeshProShader_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___graphicsToolsTextMeshProShader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicsToolsTextMeshProShader_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76
struct U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::<>4__this
	AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E, ___U3CU3E4__this_2)); }
	inline AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15
struct U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::<>4__this
	FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80, ___U3CU3E4__this_2)); }
	inline FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_0;
	// UnityEngine.Vector3[] Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_1;
	// UnityEngine.Mesh Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733, ___vertices_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_normals_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733, ___normals_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_1() const { return ___normals_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_1() { return &___normals_1; }
	inline void set_normals_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_1), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733, ___mesh_2)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_2), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference
struct MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A  : public RuntimeObject
{
public:
	// UnityEngine.Mesh Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___Mesh_0;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::referenceCount
	int32_t ___referenceCount_1;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A, ___Mesh_0)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_Mesh_0() const { return ___Mesh_0; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_referenceCount_1() { return static_cast<int32_t>(offsetof(MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A, ___referenceCount_1)); }
	inline int32_t get_referenceCount_1() const { return ___referenceCount_1; }
	inline int32_t* get_address_of_referenceCount_1() { return &___referenceCount_1; }
	inline void set_referenceCount_1(int32_t value)
	{
		___referenceCount_1 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24
struct U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.GraphicsTools.ProximityLight Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>4__this
	ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::pulseDuration
	float ___pulseDuration_3;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::fadeBegin
	float ___fadeBegin_4;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::fadeSpeed
	float ___fadeSpeed_5;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<pulseTimer>5__2
	float ___U3CpulseTimerU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E4__this_2)); }
	inline ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pulseDuration_3() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___pulseDuration_3)); }
	inline float get_pulseDuration_3() const { return ___pulseDuration_3; }
	inline float* get_address_of_pulseDuration_3() { return &___pulseDuration_3; }
	inline void set_pulseDuration_3(float value)
	{
		___pulseDuration_3 = value;
	}

	inline static int32_t get_offset_of_fadeBegin_4() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___fadeBegin_4)); }
	inline float get_fadeBegin_4() const { return ___fadeBegin_4; }
	inline float* get_address_of_fadeBegin_4() { return &___fadeBegin_4; }
	inline void set_fadeBegin_4(float value)
	{
		___fadeBegin_4 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_5() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___fadeSpeed_5)); }
	inline float get_fadeSpeed_5() const { return ___fadeSpeed_5; }
	inline float* get_address_of_fadeSpeed_5() { return &___fadeSpeed_5; }
	inline void set_fadeSpeed_5(float value)
	{
		___fadeSpeed_5 = value;
	}

	inline static int32_t get_offset_of_U3CpulseTimerU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CpulseTimerU3E5__2_6)); }
	inline float get_U3CpulseTimerU3E5__2_6() const { return ___U3CpulseTimerU3E5__2_6; }
	inline float* get_address_of_U3CpulseTimerU3E5__2_6() { return &___U3CpulseTimerU3E5__2_6; }
	inline void set_U3CpulseTimerU3E5__2_6(float value)
	{
		___U3CpulseTimerU3E5__2_6 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.IClippable>
struct Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB, ____set_0)); }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.MaskableGraphic>
struct Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26, ____set_0)); }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * get__set_0() const { return ____set_0; }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26, ____current_3)); }
	inline MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * get__current_3() const { return ____current_3; }
	inline MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t4AAE99C02C56701CE9CF03A679F2459133B37160 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t4AAE99C02C56701CE9CF03A679F2459133B37160__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tE75A67D3BA14E5D64A5CE747621C8485FAF7736E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tE75A67D3BA14E5D64A5CE747621C8485FAF7736E__padding[20];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_tDCBC61798B2E9FFD4075964F1670DDEC4ED5F13F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_tDCBC61798B2E9FFD4075964F1670DDEC4ED5F13F__padding[28];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_tF1AFC792E27B0D96108772C203A327E99A7CAE21 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tF1AFC792E27B0D96108772C203A327E99A7CAE21__padding[40];
	};

public:
};


// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
struct PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 
{
public:
	// System.String Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::useGlobalBlob
	String_t* ___useGlobalBlob_0;
	// System.String Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::blobPosition
	String_t* ___blobPosition_1;
	// System.String Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::blobPulse
	String_t* ___blobPulse_2;
	// System.String Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::blobFade
	String_t* ___blobFade_3;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::pulseActive
	bool ___pulseActive_4;
	// System.Single Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_useGlobalBlob_0() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___useGlobalBlob_0)); }
	inline String_t* get_useGlobalBlob_0() const { return ___useGlobalBlob_0; }
	inline String_t** get_address_of_useGlobalBlob_0() { return &___useGlobalBlob_0; }
	inline void set_useGlobalBlob_0(String_t* value)
	{
		___useGlobalBlob_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___useGlobalBlob_0), (void*)value);
	}

	inline static int32_t get_offset_of_blobPosition_1() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___blobPosition_1)); }
	inline String_t* get_blobPosition_1() const { return ___blobPosition_1; }
	inline String_t** get_address_of_blobPosition_1() { return &___blobPosition_1; }
	inline void set_blobPosition_1(String_t* value)
	{
		___blobPosition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blobPosition_1), (void*)value);
	}

	inline static int32_t get_offset_of_blobPulse_2() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___blobPulse_2)); }
	inline String_t* get_blobPulse_2() const { return ___blobPulse_2; }
	inline String_t** get_address_of_blobPulse_2() { return &___blobPulse_2; }
	inline void set_blobPulse_2(String_t* value)
	{
		___blobPulse_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blobPulse_2), (void*)value);
	}

	inline static int32_t get_offset_of_blobFade_3() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___blobFade_3)); }
	inline String_t* get_blobFade_3() const { return ___blobFade_3; }
	inline String_t** get_address_of_blobFade_3() { return &___blobFade_3; }
	inline void set_blobFade_3(String_t* value)
	{
		___blobFade_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blobFade_3), (void*)value);
	}

	inline static int32_t get_offset_of_pulseActive_4() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___pulseActive_4)); }
	inline bool get_pulseActive_4() const { return ___pulseActive_4; }
	inline bool* get_address_of_pulseActive_4() { return &___pulseActive_4; }
	inline void set_pulseActive_4(bool value)
	{
		___pulseActive_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
struct PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_pinvoke
{
	char* ___useGlobalBlob_0;
	char* ___blobPosition_1;
	char* ___blobPulse_2;
	char* ___blobFade_3;
	int32_t ___pulseActive_4;
	float ___startTime_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
struct PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_com
{
	Il2CppChar* ___useGlobalBlob_0;
	Il2CppChar* ___blobPosition_1;
	Il2CppChar* ___blobPulse_2;
	Il2CppChar* ___blobFade_3;
	int32_t ___pulseActive_4;
	float ___startTime_5;
};

// UnityEngine.AdditionalCanvasShaderChannels
struct AdditionalCanvasShaderChannels_t72A9ACBEE2E5AB5834D5F978421028757954396C 
{
public:
	// System.Int32 UnityEngine.AdditionalCanvasShaderChannels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdditionalCanvasShaderChannels_t72A9ACBEE2E5AB5834D5F978421028757954396C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.RenderPassEvent
struct RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderPassEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.RenderingMode
struct RenderingMode_t43959439684F445F793BCE2150B693AFAB951361 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderingMode_t43959439684F445F793BCE2150B693AFAB951361, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/AcrylicMethod
struct AcrylicMethod_t64E7349FF4E912C83B7A93A68768A883D2920A94 
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/AcrylicMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AcrylicMethod_t64E7349FF4E912C83B7A93A68768A883D2920A94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/BlurMethod
struct BlurMethod_t0582A6534298AC6309D7B0A12416BAC1F90EFBF5 
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/BlurMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurMethod_t0582A6534298AC6309D7B0A12416BAC1F90EFBF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.CameraController/CameraState
struct CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::Rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Rotation_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67, ___Rotation_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Rotation_1() const { return ___Rotation_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Rotation_1 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ClippingPrimitive/Side
struct Side_t5727115E81298E471F661DBA99A5A16350A14946 
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ClippingPrimitive/Side::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Side_t5727115E81298E471F661DBA99A5A16350A14946, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings/AddMode
struct AddMode_t77C2CE8781CAFCAA2395F311183F04EA39374DD4 
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings/AddMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddMode_t77C2CE8781CAFCAA2395F311183F04EA39374DD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings/Handedness
struct Handedness_t06AD6A854F3B7BA6D0C5662F4BF741948040904E 
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings/Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t06AD6A854F3B7BA6D0C5662F4BF741948040904E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B, ___m_result_22)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_result_22() const { return ___m_result_22; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings
struct Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.Universal.RenderPassEvent Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::captureEvent
	int32_t ___captureEvent_0;
	// UnityEngine.LayerMask Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::renderLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___renderLayers_1;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::blurPasses
	int32_t ___blurPasses_2;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::downSample
	int32_t ___downSample_3;
	// System.String Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::blurTextureName
	String_t* ___blurTextureName_4;
	// System.String Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::targetRenderFeatureName
	String_t* ___targetRenderFeatureName_5;
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings/AddMode Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::targetRenderFeatureAddMode
	int32_t ___targetRenderFeatureAddMode_6;

public:
	inline static int32_t get_offset_of_captureEvent_0() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___captureEvent_0)); }
	inline int32_t get_captureEvent_0() const { return ___captureEvent_0; }
	inline int32_t* get_address_of_captureEvent_0() { return &___captureEvent_0; }
	inline void set_captureEvent_0(int32_t value)
	{
		___captureEvent_0 = value;
	}

	inline static int32_t get_offset_of_renderLayers_1() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___renderLayers_1)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_renderLayers_1() const { return ___renderLayers_1; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_renderLayers_1() { return &___renderLayers_1; }
	inline void set_renderLayers_1(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___renderLayers_1 = value;
	}

	inline static int32_t get_offset_of_blurPasses_2() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___blurPasses_2)); }
	inline int32_t get_blurPasses_2() const { return ___blurPasses_2; }
	inline int32_t* get_address_of_blurPasses_2() { return &___blurPasses_2; }
	inline void set_blurPasses_2(int32_t value)
	{
		___blurPasses_2 = value;
	}

	inline static int32_t get_offset_of_downSample_3() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___downSample_3)); }
	inline int32_t get_downSample_3() const { return ___downSample_3; }
	inline int32_t* get_address_of_downSample_3() { return &___downSample_3; }
	inline void set_downSample_3(int32_t value)
	{
		___downSample_3 = value;
	}

	inline static int32_t get_offset_of_blurTextureName_4() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___blurTextureName_4)); }
	inline String_t* get_blurTextureName_4() const { return ___blurTextureName_4; }
	inline String_t** get_address_of_blurTextureName_4() { return &___blurTextureName_4; }
	inline void set_blurTextureName_4(String_t* value)
	{
		___blurTextureName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blurTextureName_4), (void*)value);
	}

	inline static int32_t get_offset_of_targetRenderFeatureName_5() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___targetRenderFeatureName_5)); }
	inline String_t* get_targetRenderFeatureName_5() const { return ___targetRenderFeatureName_5; }
	inline String_t** get_address_of_targetRenderFeatureName_5() { return &___targetRenderFeatureName_5; }
	inline void set_targetRenderFeatureName_5(String_t* value)
	{
		___targetRenderFeatureName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetRenderFeatureName_5), (void*)value);
	}

	inline static int32_t get_offset_of_targetRenderFeatureAddMode_6() { return static_cast<int32_t>(offsetof(Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535, ___targetRenderFeatureAddMode_6)); }
	inline int32_t get_targetRenderFeatureAddMode_6() const { return ___targetRenderFeatureAddMode_6; }
	inline int32_t* get_address_of_targetRenderFeatureAddMode_6() { return &___targetRenderFeatureAddMode_6; }
	inline void set_targetRenderFeatureAddMode_6(int32_t value)
	{
		___targetRenderFeatureAddMode_6 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings
struct PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.Universal.RenderPassEvent Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings::RenderPassEvent
	int32_t ___RenderPassEvent_0;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings::ClearDepth
	bool ___ClearDepth_1;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings::ClearColor
	bool ___ClearColor_2;
	// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings::BackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___BackgroundColor_3;

public:
	inline static int32_t get_offset_of_RenderPassEvent_0() { return static_cast<int32_t>(offsetof(PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16, ___RenderPassEvent_0)); }
	inline int32_t get_RenderPassEvent_0() const { return ___RenderPassEvent_0; }
	inline int32_t* get_address_of_RenderPassEvent_0() { return &___RenderPassEvent_0; }
	inline void set_RenderPassEvent_0(int32_t value)
	{
		___RenderPassEvent_0 = value;
	}

	inline static int32_t get_offset_of_ClearDepth_1() { return static_cast<int32_t>(offsetof(PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16, ___ClearDepth_1)); }
	inline bool get_ClearDepth_1() const { return ___ClearDepth_1; }
	inline bool* get_address_of_ClearDepth_1() { return &___ClearDepth_1; }
	inline void set_ClearDepth_1(bool value)
	{
		___ClearDepth_1 = value;
	}

	inline static int32_t get_offset_of_ClearColor_2() { return static_cast<int32_t>(offsetof(PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16, ___ClearColor_2)); }
	inline bool get_ClearColor_2() const { return ___ClearColor_2; }
	inline bool* get_address_of_ClearColor_2() { return &___ClearColor_2; }
	inline void set_ClearColor_2(bool value)
	{
		___ClearColor_2 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_3() { return static_cast<int32_t>(offsetof(PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16, ___BackgroundColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_BackgroundColor_3() const { return ___BackgroundColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_BackgroundColor_3() { return &___BackgroundColor_3; }
	inline void set_BackgroundColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___BackgroundColor_3 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings
struct LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings/Handedness Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::handedness
	int32_t ___handedness_0;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::nearRadius
	float ___nearRadius_1;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::farRadius
	float ___farRadius_2;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::nearDistance
	float ___nearDistance_3;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::minNearSizePercentage
	float ___minNearSizePercentage_4;
	// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::centerColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___centerColor_5;
	// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::middleColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___middleColor_6;
	// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::outerColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outerColor_7;

public:
	inline static int32_t get_offset_of_handedness_0() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___handedness_0)); }
	inline int32_t get_handedness_0() const { return ___handedness_0; }
	inline int32_t* get_address_of_handedness_0() { return &___handedness_0; }
	inline void set_handedness_0(int32_t value)
	{
		___handedness_0 = value;
	}

	inline static int32_t get_offset_of_nearRadius_1() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___nearRadius_1)); }
	inline float get_nearRadius_1() const { return ___nearRadius_1; }
	inline float* get_address_of_nearRadius_1() { return &___nearRadius_1; }
	inline void set_nearRadius_1(float value)
	{
		___nearRadius_1 = value;
	}

	inline static int32_t get_offset_of_farRadius_2() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___farRadius_2)); }
	inline float get_farRadius_2() const { return ___farRadius_2; }
	inline float* get_address_of_farRadius_2() { return &___farRadius_2; }
	inline void set_farRadius_2(float value)
	{
		___farRadius_2 = value;
	}

	inline static int32_t get_offset_of_nearDistance_3() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___nearDistance_3)); }
	inline float get_nearDistance_3() const { return ___nearDistance_3; }
	inline float* get_address_of_nearDistance_3() { return &___nearDistance_3; }
	inline void set_nearDistance_3(float value)
	{
		___nearDistance_3 = value;
	}

	inline static int32_t get_offset_of_minNearSizePercentage_4() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___minNearSizePercentage_4)); }
	inline float get_minNearSizePercentage_4() const { return ___minNearSizePercentage_4; }
	inline float* get_address_of_minNearSizePercentage_4() { return &___minNearSizePercentage_4; }
	inline void set_minNearSizePercentage_4(float value)
	{
		___minNearSizePercentage_4 = value;
	}

	inline static int32_t get_offset_of_centerColor_5() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___centerColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_centerColor_5() const { return ___centerColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_centerColor_5() { return &___centerColor_5; }
	inline void set_centerColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___centerColor_5 = value;
	}

	inline static int32_t get_offset_of_middleColor_6() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___middleColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_middleColor_6() const { return ___middleColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_middleColor_6() { return &___middleColor_6; }
	inline void set_middleColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___middleColor_6 = value;
	}

	inline static int32_t get_offset_of_outerColor_7() { return static_cast<int32_t>(offsetof(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965, ___outerColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_outerColor_7() const { return ___outerColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_outerColor_7() { return &___outerColor_7; }
	inline void set_outerColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___outerColor_7 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererData::<isInvalidated>k__BackingField
	bool ___U3CisInvalidatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatures
	List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * ___m_RendererFeatures_5;
	// System.Collections.Generic.List`1<System.Int64> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatureMap
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___m_RendererFeatureMap_6;

public:
	inline static int32_t get_offset_of_U3CisInvalidatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150, ___U3CisInvalidatedU3Ek__BackingField_4)); }
	inline bool get_U3CisInvalidatedU3Ek__BackingField_4() const { return ___U3CisInvalidatedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisInvalidatedU3Ek__BackingField_4() { return &___U3CisInvalidatedU3Ek__BackingField_4; }
	inline void set_U3CisInvalidatedU3Ek__BackingField_4(bool value)
	{
		___U3CisInvalidatedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_RendererFeatures_5() { return static_cast<int32_t>(offsetof(ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150, ___m_RendererFeatures_5)); }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * get_m_RendererFeatures_5() const { return ___m_RendererFeatures_5; }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 ** get_address_of_m_RendererFeatures_5() { return &___m_RendererFeatures_5; }
	inline void set_m_RendererFeatures_5(List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * value)
	{
		___m_RendererFeatures_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererFeatures_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererFeatureMap_6() { return static_cast<int32_t>(offsetof(ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150, ___m_RendererFeatureMap_6)); }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * get_m_RendererFeatureMap_6() const { return ___m_RendererFeatureMap_6; }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 ** get_address_of_m_RendererFeatureMap_6() { return &___m_RendererFeatureMap_6; }
	inline void set_m_RendererFeatureMap_6(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * value)
	{
		___m_RendererFeatureMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererFeatureMap_6), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ForwardRendererData
struct ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679  : public ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150
{
public:
	// UnityEngine.Rendering.Universal.PostProcessData UnityEngine.Rendering.Universal.ForwardRendererData::postProcessData
	PostProcessData_t0A8C54238A50BC5196EA369470ABDF437961B730 * ___postProcessData_7;
	// UnityEngine.Rendering.Universal.XRSystemData UnityEngine.Rendering.Universal.ForwardRendererData::xrSystemData
	XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * ___xrSystemData_8;
	// UnityEngine.Rendering.Universal.ForwardRendererData/ShaderResources UnityEngine.Rendering.Universal.ForwardRendererData::shaders
	ShaderResources_t3DD80DE8BD2EF668BB5F66AA7AE103871955BE46 * ___shaders_9;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.ForwardRendererData::m_OpaqueLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_OpaqueLayerMask_10;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.ForwardRendererData::m_TransparentLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_TransparentLayerMask_11;
	// UnityEngine.Rendering.Universal.StencilStateData UnityEngine.Rendering.Universal.ForwardRendererData::m_DefaultStencilState
	StencilStateData_t49B1D046B05EEE4E918C97E232CE16CED1D5FC39 * ___m_DefaultStencilState_12;
	// System.Boolean UnityEngine.Rendering.Universal.ForwardRendererData::m_ShadowTransparentReceive
	bool ___m_ShadowTransparentReceive_13;
	// UnityEngine.Rendering.Universal.RenderingMode UnityEngine.Rendering.Universal.ForwardRendererData::m_RenderingMode
	int32_t ___m_RenderingMode_14;
	// System.Boolean UnityEngine.Rendering.Universal.ForwardRendererData::m_AccurateGbufferNormals
	bool ___m_AccurateGbufferNormals_15;

public:
	inline static int32_t get_offset_of_postProcessData_7() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___postProcessData_7)); }
	inline PostProcessData_t0A8C54238A50BC5196EA369470ABDF437961B730 * get_postProcessData_7() const { return ___postProcessData_7; }
	inline PostProcessData_t0A8C54238A50BC5196EA369470ABDF437961B730 ** get_address_of_postProcessData_7() { return &___postProcessData_7; }
	inline void set_postProcessData_7(PostProcessData_t0A8C54238A50BC5196EA369470ABDF437961B730 * value)
	{
		___postProcessData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postProcessData_7), (void*)value);
	}

	inline static int32_t get_offset_of_xrSystemData_8() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___xrSystemData_8)); }
	inline XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * get_xrSystemData_8() const { return ___xrSystemData_8; }
	inline XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 ** get_address_of_xrSystemData_8() { return &___xrSystemData_8; }
	inline void set_xrSystemData_8(XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * value)
	{
		___xrSystemData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrSystemData_8), (void*)value);
	}

	inline static int32_t get_offset_of_shaders_9() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___shaders_9)); }
	inline ShaderResources_t3DD80DE8BD2EF668BB5F66AA7AE103871955BE46 * get_shaders_9() const { return ___shaders_9; }
	inline ShaderResources_t3DD80DE8BD2EF668BB5F66AA7AE103871955BE46 ** get_address_of_shaders_9() { return &___shaders_9; }
	inline void set_shaders_9(ShaderResources_t3DD80DE8BD2EF668BB5F66AA7AE103871955BE46 * value)
	{
		___shaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_OpaqueLayerMask_10() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_OpaqueLayerMask_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_OpaqueLayerMask_10() const { return ___m_OpaqueLayerMask_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_OpaqueLayerMask_10() { return &___m_OpaqueLayerMask_10; }
	inline void set_m_OpaqueLayerMask_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_OpaqueLayerMask_10 = value;
	}

	inline static int32_t get_offset_of_m_TransparentLayerMask_11() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_TransparentLayerMask_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_TransparentLayerMask_11() const { return ___m_TransparentLayerMask_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_TransparentLayerMask_11() { return &___m_TransparentLayerMask_11; }
	inline void set_m_TransparentLayerMask_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_TransparentLayerMask_11 = value;
	}

	inline static int32_t get_offset_of_m_DefaultStencilState_12() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_DefaultStencilState_12)); }
	inline StencilStateData_t49B1D046B05EEE4E918C97E232CE16CED1D5FC39 * get_m_DefaultStencilState_12() const { return ___m_DefaultStencilState_12; }
	inline StencilStateData_t49B1D046B05EEE4E918C97E232CE16CED1D5FC39 ** get_address_of_m_DefaultStencilState_12() { return &___m_DefaultStencilState_12; }
	inline void set_m_DefaultStencilState_12(StencilStateData_t49B1D046B05EEE4E918C97E232CE16CED1D5FC39 * value)
	{
		___m_DefaultStencilState_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultStencilState_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShadowTransparentReceive_13() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_ShadowTransparentReceive_13)); }
	inline bool get_m_ShadowTransparentReceive_13() const { return ___m_ShadowTransparentReceive_13; }
	inline bool* get_address_of_m_ShadowTransparentReceive_13() { return &___m_ShadowTransparentReceive_13; }
	inline void set_m_ShadowTransparentReceive_13(bool value)
	{
		___m_ShadowTransparentReceive_13 = value;
	}

	inline static int32_t get_offset_of_m_RenderingMode_14() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_RenderingMode_14)); }
	inline int32_t get_m_RenderingMode_14() const { return ___m_RenderingMode_14; }
	inline int32_t* get_address_of_m_RenderingMode_14() { return &___m_RenderingMode_14; }
	inline void set_m_RenderingMode_14(int32_t value)
	{
		___m_RenderingMode_14 = value;
	}

	inline static int32_t get_offset_of_m_AccurateGbufferNormals_15() { return static_cast<int32_t>(offsetof(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679, ___m_AccurateGbufferNormals_15)); }
	inline bool get_m_AccurateGbufferNormals_15() const { return ___m_AccurateGbufferNormals_15; }
	inline bool* get_address_of_m_AccurateGbufferNormals_15() { return &___m_AccurateGbufferNormals_15; }
	inline void set_m_AccurateGbufferNormals_15(bool value)
	{
		___m_AccurateGbufferNormals_15 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager
struct AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::acrylicSupported
	bool ___acrylicSupported_5;
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/AcrylicMethod Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::captureMethod
	int32_t ___captureMethod_6;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::_24BitDepthBuffer
	bool ____24BitDepthBuffer_7;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::useOnlyMainCamera
	bool ___useOnlyMainCamera_8;
	// UnityEngine.Camera Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::targetCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___targetCamera_9;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::rendererIndex
	int32_t ___rendererIndex_10;
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/BlurMethod Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::filterMethod
	int32_t ___filterMethod_11;
	// UnityEngine.Material Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::kawaseFilterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___kawaseFilterMaterial_12;
	// UnityEngine.Material Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::dualFilterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___dualFilterMaterial_13;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::autoUpdateBlurMap
	bool ___autoUpdateBlurMap_14;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::updatePeriod
	int32_t ___updatePeriod_15;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::blendFrames
	int32_t ___blendFrames_16;
	// UnityEngine.Material Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::blendMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___blendMaterial_17;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings> Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::layers
	List_1_tF9BAFA91E4E428DC73194C4E3AC92C0106BA7D86 * ___layers_18;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::enableLayersOnStart
	bool ___enableLayersOnStart_19;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::retainInEditor
	bool ___retainInEditor_20;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer> Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::layerData
	List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * ___layerData_21;
	// UnityEngine.Rendering.Universal.ForwardRendererData Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::rendererData
	ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * ___rendererData_22;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::initialized
	bool ___initialized_23;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::acrylicActive
	bool ___acrylicActive_24;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::ExecuteBeforeRenderAdded
	bool ___ExecuteBeforeRenderAdded_26;
	// UnityEngine.Coroutine Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::updateRoutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___updateRoutine_27;

public:
	inline static int32_t get_offset_of_acrylicSupported_5() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___acrylicSupported_5)); }
	inline bool get_acrylicSupported_5() const { return ___acrylicSupported_5; }
	inline bool* get_address_of_acrylicSupported_5() { return &___acrylicSupported_5; }
	inline void set_acrylicSupported_5(bool value)
	{
		___acrylicSupported_5 = value;
	}

	inline static int32_t get_offset_of_captureMethod_6() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___captureMethod_6)); }
	inline int32_t get_captureMethod_6() const { return ___captureMethod_6; }
	inline int32_t* get_address_of_captureMethod_6() { return &___captureMethod_6; }
	inline void set_captureMethod_6(int32_t value)
	{
		___captureMethod_6 = value;
	}

	inline static int32_t get_offset_of__24BitDepthBuffer_7() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ____24BitDepthBuffer_7)); }
	inline bool get__24BitDepthBuffer_7() const { return ____24BitDepthBuffer_7; }
	inline bool* get_address_of__24BitDepthBuffer_7() { return &____24BitDepthBuffer_7; }
	inline void set__24BitDepthBuffer_7(bool value)
	{
		____24BitDepthBuffer_7 = value;
	}

	inline static int32_t get_offset_of_useOnlyMainCamera_8() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___useOnlyMainCamera_8)); }
	inline bool get_useOnlyMainCamera_8() const { return ___useOnlyMainCamera_8; }
	inline bool* get_address_of_useOnlyMainCamera_8() { return &___useOnlyMainCamera_8; }
	inline void set_useOnlyMainCamera_8(bool value)
	{
		___useOnlyMainCamera_8 = value;
	}

	inline static int32_t get_offset_of_targetCamera_9() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___targetCamera_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_targetCamera_9() const { return ___targetCamera_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_targetCamera_9() { return &___targetCamera_9; }
	inline void set_targetCamera_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___targetCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_rendererIndex_10() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___rendererIndex_10)); }
	inline int32_t get_rendererIndex_10() const { return ___rendererIndex_10; }
	inline int32_t* get_address_of_rendererIndex_10() { return &___rendererIndex_10; }
	inline void set_rendererIndex_10(int32_t value)
	{
		___rendererIndex_10 = value;
	}

	inline static int32_t get_offset_of_filterMethod_11() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___filterMethod_11)); }
	inline int32_t get_filterMethod_11() const { return ___filterMethod_11; }
	inline int32_t* get_address_of_filterMethod_11() { return &___filterMethod_11; }
	inline void set_filterMethod_11(int32_t value)
	{
		___filterMethod_11 = value;
	}

	inline static int32_t get_offset_of_kawaseFilterMaterial_12() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___kawaseFilterMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_kawaseFilterMaterial_12() const { return ___kawaseFilterMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_kawaseFilterMaterial_12() { return &___kawaseFilterMaterial_12; }
	inline void set_kawaseFilterMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___kawaseFilterMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kawaseFilterMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_dualFilterMaterial_13() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___dualFilterMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_dualFilterMaterial_13() const { return ___dualFilterMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_dualFilterMaterial_13() { return &___dualFilterMaterial_13; }
	inline void set_dualFilterMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___dualFilterMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dualFilterMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_autoUpdateBlurMap_14() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___autoUpdateBlurMap_14)); }
	inline bool get_autoUpdateBlurMap_14() const { return ___autoUpdateBlurMap_14; }
	inline bool* get_address_of_autoUpdateBlurMap_14() { return &___autoUpdateBlurMap_14; }
	inline void set_autoUpdateBlurMap_14(bool value)
	{
		___autoUpdateBlurMap_14 = value;
	}

	inline static int32_t get_offset_of_updatePeriod_15() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___updatePeriod_15)); }
	inline int32_t get_updatePeriod_15() const { return ___updatePeriod_15; }
	inline int32_t* get_address_of_updatePeriod_15() { return &___updatePeriod_15; }
	inline void set_updatePeriod_15(int32_t value)
	{
		___updatePeriod_15 = value;
	}

	inline static int32_t get_offset_of_blendFrames_16() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___blendFrames_16)); }
	inline int32_t get_blendFrames_16() const { return ___blendFrames_16; }
	inline int32_t* get_address_of_blendFrames_16() { return &___blendFrames_16; }
	inline void set_blendFrames_16(int32_t value)
	{
		___blendFrames_16 = value;
	}

	inline static int32_t get_offset_of_blendMaterial_17() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___blendMaterial_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_blendMaterial_17() const { return ___blendMaterial_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_blendMaterial_17() { return &___blendMaterial_17; }
	inline void set_blendMaterial_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___blendMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_layers_18() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___layers_18)); }
	inline List_1_tF9BAFA91E4E428DC73194C4E3AC92C0106BA7D86 * get_layers_18() const { return ___layers_18; }
	inline List_1_tF9BAFA91E4E428DC73194C4E3AC92C0106BA7D86 ** get_address_of_layers_18() { return &___layers_18; }
	inline void set_layers_18(List_1_tF9BAFA91E4E428DC73194C4E3AC92C0106BA7D86 * value)
	{
		___layers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layers_18), (void*)value);
	}

	inline static int32_t get_offset_of_enableLayersOnStart_19() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___enableLayersOnStart_19)); }
	inline bool get_enableLayersOnStart_19() const { return ___enableLayersOnStart_19; }
	inline bool* get_address_of_enableLayersOnStart_19() { return &___enableLayersOnStart_19; }
	inline void set_enableLayersOnStart_19(bool value)
	{
		___enableLayersOnStart_19 = value;
	}

	inline static int32_t get_offset_of_retainInEditor_20() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___retainInEditor_20)); }
	inline bool get_retainInEditor_20() const { return ___retainInEditor_20; }
	inline bool* get_address_of_retainInEditor_20() { return &___retainInEditor_20; }
	inline void set_retainInEditor_20(bool value)
	{
		___retainInEditor_20 = value;
	}

	inline static int32_t get_offset_of_layerData_21() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___layerData_21)); }
	inline List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * get_layerData_21() const { return ___layerData_21; }
	inline List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F ** get_address_of_layerData_21() { return &___layerData_21; }
	inline void set_layerData_21(List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * value)
	{
		___layerData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerData_21), (void*)value);
	}

	inline static int32_t get_offset_of_rendererData_22() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___rendererData_22)); }
	inline ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * get_rendererData_22() const { return ___rendererData_22; }
	inline ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 ** get_address_of_rendererData_22() { return &___rendererData_22; }
	inline void set_rendererData_22(ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * value)
	{
		___rendererData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererData_22), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_23() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___initialized_23)); }
	inline bool get_initialized_23() const { return ___initialized_23; }
	inline bool* get_address_of_initialized_23() { return &___initialized_23; }
	inline void set_initialized_23(bool value)
	{
		___initialized_23 = value;
	}

	inline static int32_t get_offset_of_acrylicActive_24() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___acrylicActive_24)); }
	inline bool get_acrylicActive_24() const { return ___acrylicActive_24; }
	inline bool* get_address_of_acrylicActive_24() { return &___acrylicActive_24; }
	inline void set_acrylicActive_24(bool value)
	{
		___acrylicActive_24 = value;
	}

	inline static int32_t get_offset_of_ExecuteBeforeRenderAdded_26() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___ExecuteBeforeRenderAdded_26)); }
	inline bool get_ExecuteBeforeRenderAdded_26() const { return ___ExecuteBeforeRenderAdded_26; }
	inline bool* get_address_of_ExecuteBeforeRenderAdded_26() { return &___ExecuteBeforeRenderAdded_26; }
	inline void set_ExecuteBeforeRenderAdded_26(bool value)
	{
		___ExecuteBeforeRenderAdded_26 = value;
	}

	inline static int32_t get_offset_of_updateRoutine_27() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327, ___updateRoutine_27)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_updateRoutine_27() const { return ___updateRoutine_27; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_updateRoutine_27() { return &___updateRoutine_27; }
	inline void set_updateRoutine_27(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___updateRoutine_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateRoutine_27), (void*)value);
	}
};

struct AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327_StaticFields
{
public:
	// Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::instance
	AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327_StaticFields, ___instance_4)); }
	inline AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * get_instance_4() const { return ___instance_4; }
	inline AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse
struct FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::duration
	float ___duration_4;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::isInitialized
	bool ___isInitialized_5;
	// UnityEngine.Renderer Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____renderer_6;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::materialProperty
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___materialProperty_7;
	// UnityEngine.UI.Graphic Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_8;
	// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState[] Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::states
	PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B* ___states_9;

public:
	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_isInitialized_5() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ___isInitialized_5)); }
	inline bool get_isInitialized_5() const { return ___isInitialized_5; }
	inline bool* get_address_of_isInitialized_5() { return &___isInitialized_5; }
	inline void set_isInitialized_5(bool value)
	{
		___isInitialized_5 = value;
	}

	inline static int32_t get_offset_of__renderer_6() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ____renderer_6)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__renderer_6() const { return ____renderer_6; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__renderer_6() { return &____renderer_6; }
	inline void set__renderer_6(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____renderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____renderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_materialProperty_7() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ___materialProperty_7)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_materialProperty_7() const { return ___materialProperty_7; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_materialProperty_7() { return &___materialProperty_7; }
	inline void set_materialProperty_7(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___materialProperty_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialProperty_7), (void*)value);
	}

	inline static int32_t get_offset_of_graphic_8() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ___graphic_8)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_8() const { return ___graphic_8; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_8() { return &___graphic_8; }
	inline void set_graphic_8(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_8), (void*)value);
	}

	inline static int32_t get_offset_of_states_9() { return static_cast<int32_t>(offsetof(FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277, ___states_9)); }
	inline PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B* get_states_9() const { return ___states_9; }
	inline PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B** get_address_of_states_9() { return &___states_9; }
	inline void set_states_9(PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B* value)
	{
		___states_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_9), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.ProximityLight
struct ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings Microsoft.MixedReality.GraphicsTools.ProximityLight::settings
	LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * ___settings_12;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight::pulseTime
	float ___pulseTime_13;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight::pulseFade
	float ___pulseFade_14;

public:
	inline static int32_t get_offset_of_settings_12() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF, ___settings_12)); }
	inline LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * get_settings_12() const { return ___settings_12; }
	inline LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 ** get_address_of_settings_12() { return &___settings_12; }
	inline void set_settings_12(LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * value)
	{
		___settings_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_12), (void*)value);
	}

	inline static int32_t get_offset_of_pulseTime_13() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF, ___pulseTime_13)); }
	inline float get_pulseTime_13() const { return ___pulseTime_13; }
	inline float* get_address_of_pulseTime_13() { return &___pulseTime_13; }
	inline void set_pulseTime_13(float value)
	{
		___pulseTime_13 = value;
	}

	inline static int32_t get_offset_of_pulseFade_14() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF, ___pulseFade_14)); }
	inline float get_pulseFade_14() const { return ___pulseFade_14; }
	inline float* get_address_of_pulseFade_14() { return &___pulseFade_14; }
	inline void set_pulseFade_14(float value)
	{
		___pulseFade_14 = value;
	}
};

struct ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.ProximityLight> Microsoft.MixedReality.GraphicsTools.ProximityLight::activeProximityLights
	List_1_t048A084A8BC9D8FB0D71744626F15FFD1CF84DEF * ___activeProximityLights_6;
	// UnityEngine.Vector4[] Microsoft.MixedReality.GraphicsTools.ProximityLight::proximityLightData
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___proximityLightData_7;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight::proximityLightDataID
	int32_t ___proximityLightDataID_8;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight::globalPositionLeftID
	int32_t ___globalPositionLeftID_9;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight::globalPositionRightID
	int32_t ___globalPositionRightID_10;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight::lastProximityLightUpdate
	int32_t ___lastProximityLightUpdate_11;

public:
	inline static int32_t get_offset_of_activeProximityLights_6() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___activeProximityLights_6)); }
	inline List_1_t048A084A8BC9D8FB0D71744626F15FFD1CF84DEF * get_activeProximityLights_6() const { return ___activeProximityLights_6; }
	inline List_1_t048A084A8BC9D8FB0D71744626F15FFD1CF84DEF ** get_address_of_activeProximityLights_6() { return &___activeProximityLights_6; }
	inline void set_activeProximityLights_6(List_1_t048A084A8BC9D8FB0D71744626F15FFD1CF84DEF * value)
	{
		___activeProximityLights_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProximityLights_6), (void*)value);
	}

	inline static int32_t get_offset_of_proximityLightData_7() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___proximityLightData_7)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_proximityLightData_7() const { return ___proximityLightData_7; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_proximityLightData_7() { return &___proximityLightData_7; }
	inline void set_proximityLightData_7(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___proximityLightData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proximityLightData_7), (void*)value);
	}

	inline static int32_t get_offset_of_proximityLightDataID_8() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___proximityLightDataID_8)); }
	inline int32_t get_proximityLightDataID_8() const { return ___proximityLightDataID_8; }
	inline int32_t* get_address_of_proximityLightDataID_8() { return &___proximityLightDataID_8; }
	inline void set_proximityLightDataID_8(int32_t value)
	{
		___proximityLightDataID_8 = value;
	}

	inline static int32_t get_offset_of_globalPositionLeftID_9() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___globalPositionLeftID_9)); }
	inline int32_t get_globalPositionLeftID_9() const { return ___globalPositionLeftID_9; }
	inline int32_t* get_address_of_globalPositionLeftID_9() { return &___globalPositionLeftID_9; }
	inline void set_globalPositionLeftID_9(int32_t value)
	{
		___globalPositionLeftID_9 = value;
	}

	inline static int32_t get_offset_of_globalPositionRightID_10() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___globalPositionRightID_10)); }
	inline int32_t get_globalPositionRightID_10() const { return ___globalPositionRightID_10; }
	inline int32_t* get_address_of_globalPositionRightID_10() { return &___globalPositionRightID_10; }
	inline void set_globalPositionRightID_10(int32_t value)
	{
		___globalPositionRightID_10 = value;
	}

	inline static int32_t get_offset_of_lastProximityLightUpdate_11() { return static_cast<int32_t>(offsetof(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF_StaticFields, ___lastProximityLightUpdate_11)); }
	inline int32_t get_lastProximityLightUpdate_11() const { return ___lastProximityLightUpdate_11; }
	inline int32_t* get_address_of_lastProximityLightUpdate_11() { return &___lastProximityLightUpdate_11; }
	inline void set_lastProximityLightUpdate_11(int32_t value)
	{
		___lastProximityLightUpdate_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * ___m_VertexClipper_4;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> UnityEngine.UI.RectMask2D::m_MaskableTargets
	HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * ___m_MaskableTargets_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * ___m_ClipTargets_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * ___m_Clippers_9;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_LastClipRectCanvasSpace_10;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_11;
	// UnityEngine.Vector4 UnityEngine.UI.RectMask2D::m_Padding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Padding_12;
	// UnityEngine.Vector2Int UnityEngine.UI.RectMask2D::m_Softness
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Softness_13;
	// UnityEngine.Canvas UnityEngine.UI.RectMask2D::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// UnityEngine.Vector3[] UnityEngine.UI.RectMask2D::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_15;

public:
	inline static int32_t get_offset_of_m_VertexClipper_4() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_VertexClipper_4)); }
	inline RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * get_m_VertexClipper_4() const { return ___m_VertexClipper_4; }
	inline RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 ** get_address_of_m_VertexClipper_4() { return &___m_VertexClipper_4; }
	inline void set_m_VertexClipper_4(RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * value)
	{
		___m_VertexClipper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VertexClipper_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_5() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_RectTransform_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_5() const { return ___m_RectTransform_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_5() { return &___m_RectTransform_5; }
	inline void set_m_RectTransform_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaskableTargets_6() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_MaskableTargets_6)); }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * get_m_MaskableTargets_6() const { return ___m_MaskableTargets_6; }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB ** get_address_of_m_MaskableTargets_6() { return &___m_MaskableTargets_6; }
	inline void set_m_MaskableTargets_6(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * value)
	{
		___m_MaskableTargets_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskableTargets_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipTargets_7() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ClipTargets_7)); }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * get_m_ClipTargets_7() const { return ___m_ClipTargets_7; }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 ** get_address_of_m_ClipTargets_7() { return &___m_ClipTargets_7; }
	inline void set_m_ClipTargets_7(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * value)
	{
		___m_ClipTargets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipTargets_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculateClipRects_8() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ShouldRecalculateClipRects_8)); }
	inline bool get_m_ShouldRecalculateClipRects_8() const { return ___m_ShouldRecalculateClipRects_8; }
	inline bool* get_address_of_m_ShouldRecalculateClipRects_8() { return &___m_ShouldRecalculateClipRects_8; }
	inline void set_m_ShouldRecalculateClipRects_8(bool value)
	{
		___m_ShouldRecalculateClipRects_8 = value;
	}

	inline static int32_t get_offset_of_m_Clippers_9() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Clippers_9)); }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * get_m_Clippers_9() const { return ___m_Clippers_9; }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 ** get_address_of_m_Clippers_9() { return &___m_Clippers_9; }
	inline void set_m_Clippers_9(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * value)
	{
		___m_Clippers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clippers_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastClipRectCanvasSpace_10() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_LastClipRectCanvasSpace_10)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_LastClipRectCanvasSpace_10() const { return ___m_LastClipRectCanvasSpace_10; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_LastClipRectCanvasSpace_10() { return &___m_LastClipRectCanvasSpace_10; }
	inline void set_m_LastClipRectCanvasSpace_10(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_LastClipRectCanvasSpace_10 = value;
	}

	inline static int32_t get_offset_of_m_ForceClip_11() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ForceClip_11)); }
	inline bool get_m_ForceClip_11() const { return ___m_ForceClip_11; }
	inline bool* get_address_of_m_ForceClip_11() { return &___m_ForceClip_11; }
	inline void set_m_ForceClip_11(bool value)
	{
		___m_ForceClip_11 = value;
	}

	inline static int32_t get_offset_of_m_Padding_12() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Padding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Padding_12() const { return ___m_Padding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Padding_12() { return &___m_Padding_12; }
	inline void set_m_Padding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Padding_12 = value;
	}

	inline static int32_t get_offset_of_m_Softness_13() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Softness_13)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Softness_13() const { return ___m_Softness_13; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Softness_13() { return &___m_Softness_13; }
	inline void set_m_Softness_13(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Softness_13 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Corners_15() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Corners_15)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_15() const { return ___m_Corners_15; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_15() { return &___m_Corners_15; }
	inline void set_m_Corners_15(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_15), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.RectMask2DFast
struct RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979  : public RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> Microsoft.MixedReality.GraphicsTools.RectMask2DFast::clipTargets
	HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * ___clipTargets_16;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> Microsoft.MixedReality.GraphicsTools.RectMask2DFast::maskableTargets
	HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * ___maskableTargets_17;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.RectMask2DFast::lastclipTargetsCount
	int32_t ___lastclipTargetsCount_18;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.RectMask2DFast::lastmaskableTargetsCount
	int32_t ___lastmaskableTargetsCount_19;
	// System.Boolean Microsoft.MixedReality.GraphicsTools.RectMask2DFast::shouldRecalculateClipRects
	bool ___shouldRecalculateClipRects_20;
	// UnityEngine.Canvas Microsoft.MixedReality.GraphicsTools.RectMask2DFast::cachedCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___cachedCanvas_21;
	// UnityEngine.Vector3[] Microsoft.MixedReality.GraphicsTools.RectMask2DFast::cachedCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___cachedCorners_22;
	// UnityEngine.Rect Microsoft.MixedReality.GraphicsTools.RectMask2DFast::lastClipRectCanvasSpace
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lastClipRectCanvasSpace_23;
	// UnityEngine.Vector2Int Microsoft.MixedReality.GraphicsTools.RectMask2DFast::lastSoftness
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lastSoftness_24;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> Microsoft.MixedReality.GraphicsTools.RectMask2DFast::clippers
	List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * ___clippers_25;

public:
	inline static int32_t get_offset_of_clipTargets_16() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___clipTargets_16)); }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * get_clipTargets_16() const { return ___clipTargets_16; }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 ** get_address_of_clipTargets_16() { return &___clipTargets_16; }
	inline void set_clipTargets_16(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * value)
	{
		___clipTargets_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipTargets_16), (void*)value);
	}

	inline static int32_t get_offset_of_maskableTargets_17() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___maskableTargets_17)); }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * get_maskableTargets_17() const { return ___maskableTargets_17; }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB ** get_address_of_maskableTargets_17() { return &___maskableTargets_17; }
	inline void set_maskableTargets_17(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * value)
	{
		___maskableTargets_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maskableTargets_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastclipTargetsCount_18() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___lastclipTargetsCount_18)); }
	inline int32_t get_lastclipTargetsCount_18() const { return ___lastclipTargetsCount_18; }
	inline int32_t* get_address_of_lastclipTargetsCount_18() { return &___lastclipTargetsCount_18; }
	inline void set_lastclipTargetsCount_18(int32_t value)
	{
		___lastclipTargetsCount_18 = value;
	}

	inline static int32_t get_offset_of_lastmaskableTargetsCount_19() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___lastmaskableTargetsCount_19)); }
	inline int32_t get_lastmaskableTargetsCount_19() const { return ___lastmaskableTargetsCount_19; }
	inline int32_t* get_address_of_lastmaskableTargetsCount_19() { return &___lastmaskableTargetsCount_19; }
	inline void set_lastmaskableTargetsCount_19(int32_t value)
	{
		___lastmaskableTargetsCount_19 = value;
	}

	inline static int32_t get_offset_of_shouldRecalculateClipRects_20() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___shouldRecalculateClipRects_20)); }
	inline bool get_shouldRecalculateClipRects_20() const { return ___shouldRecalculateClipRects_20; }
	inline bool* get_address_of_shouldRecalculateClipRects_20() { return &___shouldRecalculateClipRects_20; }
	inline void set_shouldRecalculateClipRects_20(bool value)
	{
		___shouldRecalculateClipRects_20 = value;
	}

	inline static int32_t get_offset_of_cachedCanvas_21() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___cachedCanvas_21)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_cachedCanvas_21() const { return ___cachedCanvas_21; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_cachedCanvas_21() { return &___cachedCanvas_21; }
	inline void set_cachedCanvas_21(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___cachedCanvas_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCanvas_21), (void*)value);
	}

	inline static int32_t get_offset_of_cachedCorners_22() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___cachedCorners_22)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_cachedCorners_22() const { return ___cachedCorners_22; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_cachedCorners_22() { return &___cachedCorners_22; }
	inline void set_cachedCorners_22(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___cachedCorners_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCorners_22), (void*)value);
	}

	inline static int32_t get_offset_of_lastClipRectCanvasSpace_23() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___lastClipRectCanvasSpace_23)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_lastClipRectCanvasSpace_23() const { return ___lastClipRectCanvasSpace_23; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_lastClipRectCanvasSpace_23() { return &___lastClipRectCanvasSpace_23; }
	inline void set_lastClipRectCanvasSpace_23(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___lastClipRectCanvasSpace_23 = value;
	}

	inline static int32_t get_offset_of_lastSoftness_24() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___lastSoftness_24)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_lastSoftness_24() const { return ___lastSoftness_24; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_lastSoftness_24() { return &___lastSoftness_24; }
	inline void set_lastSoftness_24(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___lastSoftness_24 = value;
	}

	inline static int32_t get_offset_of_clippers_25() { return static_cast<int32_t>(offsetof(RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979, ___clippers_25)); }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * get_clippers_25() const { return ___clippers_25; }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 ** get_address_of_clippers_25() { return &___clippers_25; }
	inline void set_clippers_25(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * value)
	{
		___clippers_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clippers_25), (void*)value);
	}
};


// Microsoft.MixedReality.GraphicsTools.ScaleMeshEffect
struct ScaleMeshEffect_tC68771701EE5BC495CEE9B7E629FE4862E794C97  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:

public:
};


// Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D
struct RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0  : public RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979
{
public:
	// System.Boolean Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::independentRadii
	bool ___independentRadii_29;
	// UnityEngine.Vector4 Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::radii
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___radii_30;

public:
	inline static int32_t get_offset_of_independentRadii_29() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0, ___independentRadii_29)); }
	inline bool get_independentRadii_29() const { return ___independentRadii_29; }
	inline bool* get_address_of_independentRadii_29() { return &___independentRadii_29; }
	inline void set_independentRadii_29(bool value)
	{
		___independentRadii_29 = value;
	}

	inline static int32_t get_offset_of_radii_30() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0, ___radii_30)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_radii_30() const { return ___radii_30; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_radii_30() { return &___radii_30; }
	inline void set_radii_30(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___radii_30 = value;
	}
};

struct RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields
{
public:
	// System.String Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::RoundedKeyword
	String_t* ___RoundedKeyword_26;
	// System.String Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::RoundedIndependentKeyword
	String_t* ___RoundedIndependentKeyword_27;
	// System.String Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::RadiiPropertyName
	String_t* ___RadiiPropertyName_28;
	// System.Int32 Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::clipRectRadiiID
	int32_t ___clipRectRadiiID_31;

public:
	inline static int32_t get_offset_of_RoundedKeyword_26() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields, ___RoundedKeyword_26)); }
	inline String_t* get_RoundedKeyword_26() const { return ___RoundedKeyword_26; }
	inline String_t** get_address_of_RoundedKeyword_26() { return &___RoundedKeyword_26; }
	inline void set_RoundedKeyword_26(String_t* value)
	{
		___RoundedKeyword_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoundedKeyword_26), (void*)value);
	}

	inline static int32_t get_offset_of_RoundedIndependentKeyword_27() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields, ___RoundedIndependentKeyword_27)); }
	inline String_t* get_RoundedIndependentKeyword_27() const { return ___RoundedIndependentKeyword_27; }
	inline String_t** get_address_of_RoundedIndependentKeyword_27() { return &___RoundedIndependentKeyword_27; }
	inline void set_RoundedIndependentKeyword_27(String_t* value)
	{
		___RoundedIndependentKeyword_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoundedIndependentKeyword_27), (void*)value);
	}

	inline static int32_t get_offset_of_RadiiPropertyName_28() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields, ___RadiiPropertyName_28)); }
	inline String_t* get_RadiiPropertyName_28() const { return ___RadiiPropertyName_28; }
	inline String_t** get_address_of_RadiiPropertyName_28() { return &___RadiiPropertyName_28; }
	inline void set_RadiiPropertyName_28(String_t* value)
	{
		___RadiiPropertyName_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RadiiPropertyName_28), (void*)value);
	}

	inline static int32_t get_offset_of_clipRectRadiiID_31() { return static_cast<int32_t>(offsetof(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields, ___clipRectRadiiID_31)); }
	inline int32_t get_clipRectRadiiID_31() const { return ___clipRectRadiiID_31; }
	inline int32_t* get_address_of_clipRectRadiiID_31() { return &___clipRectRadiiID_31; }
	inline void set_clipRectRadiiID_31(int32_t value)
	{
		___clipRectRadiiID_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState[]
struct PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8  m_Items[1];

public:
	inline PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___useGlobalBlob_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobPosition_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobPulse_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobFade_3), (void*)NULL);
		#endif
	}
	inline PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___useGlobalBlob_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobPosition_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobPulse_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___blobFade_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInParent_TisRuntimeObject_m4D9AC647B13622CF251DFF2A5972DB1587B0A460_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Color>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.UI.RectMask2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2D_OnEnable_mFD84098C65DC9A4C58A3A9127079B6ED17F79A98 (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::set_ForceClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDidApplyAnimationProperties_mC4A4AF43FD946053995575D0899A4E1E4D444E16 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2D_OnTransformParentChanged_m6B083DD4655623AA054A02CFF269C0702A2605FC (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2D_OnCanvasHierarchyChanged_mA96030132A4CA47A6070562B402261C1CF27F98B (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_Initialize_m81863988ADAD0CB1DCF8A2A821E71DF28E2E3395 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// UnityEngine.Canvas Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_ForceClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectMask2DFast_get_ForceClip_mB6365F2B1D06B48E7E451816E3F7CB6F0616D7E0 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskUtilities_GetRectMasksForClip_m31F2BA016331F4237EB53BB6BD6A966A95CEC891 (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___clipper0, List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * ___masks1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Clipping_FindCullAndClipWorldRect_m40F50F70E63D0BD4203290446C8FB6412187E1B2 (List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * ___rectMaskParents0, bool* ___validRect1, const RuntimeMethod* method);
// UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Rect Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_RootCanvasRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectMask2DFast_get_RootCanvasRect_mB3CB7790F78E02A284DEE8B2D4E2253E2C72FAA8 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_m4B186F55121E25A8D498AEFECCE973AEE62E7EDD (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___other0, bool ___allowInverse1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.UI.RectMask2D::get_softness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::op_Inequality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Inequality_mA7251CAFA736D75B2EFACE5B22B642FD0E49EC5A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>::GetEnumerator()
inline Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB  HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5 (HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB  (*) (HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.IClippable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_inline (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___v0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.IClippable>::MoveNext()
inline bool Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.IClippable>::Dispose()
inline void Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16 (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>::GetEnumerator()
inline Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F (HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  (*) (HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.MaskableGraphic>::get_Current()
inline MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_inline (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 * __this, const RuntimeMethod* method)
{
	return ((  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * (*) (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.MaskableGraphic>::MoveNext()
inline bool Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703 (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.MaskableGraphic>::Dispose()
inline void Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasRenderer_get_hasMoved_m7CF5BF1CD654A0CB0DAC1C4E4EF8C83AD9DED82A (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>::get_Count()
inline int32_t HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_inline (HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>::get_Count()
inline int32_t HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_inline (HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInParent<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* GameObject_GetComponentsInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE09C8E7D7D322256589C65D0CA069948C87226C7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, bool, const RuntimeMethod*))GameObject_GetComponentsInParent_TisRuntimeObject_m4D9AC647B13622CF251DFF2A5972DB1587B0A460_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * RectMask2D_get_rectTransform_mF0BAAE5A88C9390C41E5CEB4A2D944A4F69DC33D (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m5351A825540654FFDBD0837AC37D2139F64A4FD8 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___fourCornersArray0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>::.ctor()
inline void List_1__ctor_m0122F916881428CFF7FAB3A25FABA25C14BE5F36 (List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RectMask2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2D__ctor_mE0AA40ADEDAD189C28C17B038732C249C54F2C43 (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskUtilities_Notify2DMaskStateChanged_mBA146FF6CF616448B3AB517AE67E5968F952D68B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___mask0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::PerformClipping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_PerformClipping_m4E79E7CD74410A611B86BBABABDA2073105C124C (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::get_IndependentRadii()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoundedRectMask2D_get_IndependentRadii_m285D61DFB7B6323EE9C277D6E193B871A339226A_inline (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Vector4 Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::get_Radii()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  RoundedRectMask2D_get_Radii_m3FC4E2C9472F6D676826F1E903F6F19C72549713_inline (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast__ctor_mFDE4F62097CE609E31F88F23E970D43E244CFB56 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_m7334773773C9454A7A6E95613E60762E68B728F7 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B (BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsStandardShader_m49C5CC64F663AF62834FE08036BFBFB15E214F76 (const RuntimeMethod* method);
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsStandardCanvasShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsStandardCanvasShader_mA17A2EEF94D35F7CE49EFDCE19AAF546ABB54FBE (const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsGraphicsToolsStandardShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsGraphicsToolsStandardShader_mDE6F670A57185214C6A711CF6224E90766F225B0 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsTextMeshProShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsTextMeshProShader_mAD29AEFC077B05483C67B89442942865F6422F89 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsGraphicsToolsTextMeshProShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsGraphicsToolsTextMeshProShader_mE565E017EB0E8038F697FEB098C70D0656FE69AE (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_mDC3A14DCF9D4A898AF97613CD07D94BFF8402194 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rgbColor0, float* ___H1, float* ___S2, float* ___V3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::ColorShiftHSV(UnityEngine.Color,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___source0, float ___hueOffset1, float ___saturationtOffset2, float ___valueOffset3, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m9037DBF7895B78147B9F5931DA0AA9D2CBD8C3F0 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373 (String_t* ___s0, float* ___result1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::<TryParseCSSGradient>g__NormalizeColorChannel|21_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108 (float ___channel0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD (String_t* __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
inline void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared)(__this, ___item0, method);
}
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, float, const RuntimeMethod*))List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
inline int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Color>::ToArray()
inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	return ((  ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer>::get_Item(System.Int32)
inline AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline (List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * (*) (List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::get_UseOnlyMainCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AcrylicLayerManager_get_UseOnlyMainCamera_mE948C5CA913900B180F6DDD841FDEBD4FF6EE73C_inline (AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayer::SetTargetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcrylicLayer_SetTargetCamera_m4A23DC0A4FB1F0B188BBF7F02A7FDF1A6460F400 (AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newtargetCamera0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayer::UpdateFrame(UnityEngine.Rendering.Universal.ForwardRendererData,System.Boolean,System.Int32,System.Int32,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcrylicLayer_UpdateFrame_m6C0EE968B094E44487A72C71AD60DDC66B155ABF (AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * __this, ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * ___rendererData0, bool ___copyFramebuffer1, int32_t ___updatePeriod2, int32_t ___blendFrames3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___blendMaterial4, bool ___autoUpdate5, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::InFeaturesList(UnityEngine.Rendering.Universal.ForwardRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcrylicLayer_InFeaturesList_m99371FE2BA3E67A350A2C4FBFCA605BA5F342476 (AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * __this, ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * ___rendererData0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayer::get_CaptureNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcrylicLayer_get_CaptureNextFrame_m0A10C5F7E547E0708629C8AD08F8A2FF968F4175 (AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayer::ForceCaptureNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcrylicLayer_ForceCaptureNextFrame_m5072842832823F6CA5733075518051D43441A6F1 (AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.GraphicsTools.AcrylicLayer>::get_Count()
inline int32_t List_1_get_Count_mE29302DAC82620EA1FBB306824B20D8A57027860_inline (List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::UpdateActiveLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcrylicLayerManager_UpdateActiveLayers_m9B9497ECFCA7FBF96B3BF1750750366C20171268 (AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager::AnyLayersNeedUpdating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcrylicLayerManager_AnyLayersNeedUpdating_m2414C9D11501B6EA38462DD9E964D49262736DEA (AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::UpdateState(Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrontPlatePulse_UpdateState_m666E20335960487FB0A5912B5DE9AFDD0458CC9F (FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * __this, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * ___state0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.GraphicsTools.FrontPlatePulse::IsPulsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrontPlatePulse_IsPulsing_m28BDB760D822CCD1270DE7530C84E0F4E8CE7263 (FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulseState__ctor_mD8B396706D06AF489988C78FACD80DC501B6232A (PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * __this, String_t* ___useGlobalBlob0, String_t* ___blobPosition1, String_t* ___blobPulse2, String_t* ___blobFade3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.GraphicsTools.MeshSmoother::CalculateSmoothNormals(UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * MeshSmoother_CalculateSmoothNormals_mB8A580B57C364FA7C5A5F63F5B097747FBB061F3 (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::get_Result()
inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * Task_1_get_Result_m618EE6681E16FCA629C2D77265499E24B0ED8F6A (Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B * __this, const RuntimeMethod* method)
{
	return ((  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * (*) (Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___uvs1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::op_Equality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m00B7F2874DE276B3F10044CED9F633AFE80D366D_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_OnEnable_mC0283E65CC1DED03752E6CC4ABB8B14086062B70 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		RectMask2D_OnEnable_mFD84098C65DC9A4C58A3A9127079B6ED17F79A98(__this, /*hidden argument*/NULL);
		// shouldRecalculateClipRects = true;
		__this->set_shouldRecalculateClipRects_20((bool)1);
		// ForceClip = true;
		RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_OnDidApplyAnimationProperties_m8A92C829DF85E0A176F586E4BF0D86B4ACAFCAD4 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	{
		// base.OnDidApplyAnimationProperties();
		UIBehaviour_OnDidApplyAnimationProperties_mC4A4AF43FD946053995575D0899A4E1E4D444E16(__this, /*hidden argument*/NULL);
		// shouldRecalculateClipRects = true;
		__this->set_shouldRecalculateClipRects_20((bool)1);
		// ForceClip = true;
		RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_OnTransformParentChanged_mBF2B44D1F7B0D1B398864BBABC1AB7D1CB84EBD7 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	{
		// base.OnTransformParentChanged();
		RectMask2D_OnTransformParentChanged_m6B083DD4655623AA054A02CFF269C0702A2605FC(__this, /*hidden argument*/NULL);
		// shouldRecalculateClipRects = true;
		__this->set_shouldRecalculateClipRects_20((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_OnCanvasHierarchyChanged_m41CDB0F500F65A39E464BD4930BBF327982170E2 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	{
		// cachedCanvas = null;
		__this->set_cachedCanvas_21((Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *)NULL);
		// base.OnCanvasHierarchyChanged();
		RectMask2D_OnCanvasHierarchyChanged_mA96030132A4CA47A6070562B402261C1CF27F98B(__this, /*hidden argument*/NULL);
		// shouldRecalculateClipRects = true;
		__this->set_shouldRecalculateClipRects_20((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::PerformClipping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_PerformClipping_m4E79E7CD74410A611B86BBABABDA2073105C124C (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * V_5 = NULL;
	MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * V_6 = NULL;
	MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B9_0 = 0;
	{
		// Initialize();
		RectMask2DFast_Initialize_m81863988ADAD0CB1DCF8A2A821E71DF28E2E3395(__this, /*hidden argument*/NULL);
		// if (ReferenceEquals(Canvas, null))
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0;
		L_0 = RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (shouldRecalculateClipRects || ForceClip)
		bool L_1 = __this->get_shouldRecalculateClipRects_20();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2;
		L_2 = RectMask2DFast_get_ForceClip_mB6365F2B1D06B48E7E451816E3F7CB6F0616D7E0(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}

IL_001f:
	{
		// MaskUtilities.GetRectMasksForClip(this, clippers);
		List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * L_3 = __this->get_clippers_25();
		MaskUtilities_GetRectMasksForClip_m31F2BA016331F4237EB53BB6BD6A966A95CEC891(__this, L_3, /*hidden argument*/NULL);
		// shouldRecalculateClipRects = false;
		__this->set_shouldRecalculateClipRects_20((bool)0);
	}

IL_0032:
	{
		// bool validRect = true;
		V_0 = (bool)1;
		// Rect clipRect = Clipping.FindCullAndClipWorldRect(clippers, out validRect);
		List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * L_4 = __this->get_clippers_25();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		L_5 = Clipping_FindCullAndClipWorldRect_m40F50F70E63D0BD4203290446C8FB6412187E1B2(L_4, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		// RenderMode renderMode = Canvas.rootCanvas.renderMode;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6;
		L_6 = RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7;
		L_7 = Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// bool maskIsCulled =
		//     (renderMode == RenderMode.ScreenSpaceCamera || renderMode == RenderMode.ScreenSpaceOverlay) &&
		//     !clipRect.Overlaps(RootCanvasRect, true);
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_006d;
		}
	}

IL_005a:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		L_11 = RectMask2DFast_get_RootCanvasRect_mB3CB7790F78E02A284DEE8B2D4E2253E2C72FAA8(__this, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Rect_Overlaps_m4B186F55121E25A8D498AEFECCE973AEE62E7EDD((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), L_11, (bool)1, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B9_0 = 0;
	}

IL_006e:
	{
		// if (maskIsCulled)
		if (!G_B9_0)
		{
			goto IL_0078;
		}
	}
	{
		// clipRect = Rect.zero;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		L_13 = Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589(/*hidden argument*/NULL);
		V_1 = L_13;
		// validRect = false;
		V_0 = (bool)0;
	}

IL_0078:
	{
		// if (clipRect != lastClipRectCanvasSpace || softness != lastSoftness)
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15 = __this->get_lastClipRectCanvasSpace_23();
		bool L_16;
		L_16 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_14, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_009c;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_17;
		L_17 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_18 = __this->get_lastSoftness_24();
		bool L_19;
		L_19 = Vector2Int_op_Inequality_mA7251CAFA736D75B2EFACE5B22B642FD0E49EC5A_inline(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0142;
		}
	}

IL_009c:
	{
		// foreach (IClippable clipTarget in clipTargets)
		HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * L_20 = __this->get_clipTargets_16();
		NullCheck(L_20);
		Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB  L_21;
		L_21 = HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5(L_20, /*hidden argument*/HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5_RuntimeMethod_var);
		V_3 = L_21;
	}

IL_00a8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_00aa:
		{
			// foreach (IClippable clipTarget in clipTargets)
			RuntimeObject* L_22;
			L_22 = Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_inline((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_RuntimeMethod_var);
			// clipTarget.SetClipRect(clipRect, validRect);
			RuntimeObject* L_23 = L_22;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24 = V_1;
			bool L_25 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(4 /* System.Void UnityEngine.UI.IClippable::SetClipRect(UnityEngine.Rect,System.Boolean) */, IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var, L_23, L_24, L_25);
			// clipTarget.SetClipSoftness(softness);
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_26;
			L_26 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
			L_27 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_26, /*hidden argument*/NULL);
			NullCheck(L_23);
			InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(5 /* System.Void UnityEngine.UI.IClippable::SetClipSoftness(UnityEngine.Vector2) */, IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var, L_23, L_27);
		}

IL_00c9:
		{
			// foreach (IClippable clipTarget in clipTargets)
			bool L_28;
			L_28 = Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_00aa;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xE2, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16_RuntimeMethod_var);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
	}

IL_00e2:
	{
		// foreach (MaskableGraphic maskableTarget in maskableTargets)
		HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * L_29 = __this->get_maskableTargets_17();
		NullCheck(L_29);
		Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  L_30;
		L_30 = HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F(L_29, /*hidden argument*/HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F_RuntimeMethod_var);
		V_4 = L_30;
	}

IL_00ef:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0126;
		}

IL_00f1:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_31;
			L_31 = Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_inline((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_RuntimeMethod_var);
			V_5 = L_31;
			// maskableTarget.SetClipRect(clipRect, validRect);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_32 = V_5;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_33 = V_1;
			bool L_34 = V_0;
			NullCheck(L_32);
			VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(60 /* System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean) */, L_32, L_33, L_34);
			// maskableTarget.SetClipSoftness(softness);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_35 = V_5;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_36;
			L_36 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
			L_37 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_36, /*hidden argument*/NULL);
			NullCheck(L_35);
			VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(61 /* System.Void UnityEngine.UI.MaskableGraphic::SetClipSoftness(UnityEngine.Vector2) */, L_35, L_37);
			// OnSetClipRect(maskableTarget);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_38 = V_5;
			VirtActionInvoker1< MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * >::Invoke(22 /* System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnSetClipRect(UnityEngine.UI.MaskableGraphic) */, __this, L_38);
			// maskableTarget.Cull(clipRect, validRect);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_39 = V_5;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_40 = V_1;
			bool L_41 = V_0;
			NullCheck(L_39);
			VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(59 /* System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean) */, L_39, L_40, L_41);
		}

IL_0126:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			bool L_42;
			L_42 = Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_00f1;
			}
		}

IL_012f:
		{
			IL2CPP_LEAVE(0x246, FINALLY_0134);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0134;
	}

FINALLY_0134:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(308)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(308)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x246, IL_0246)
	}

IL_0142:
	{
		// else if (ForceClip)
		bool L_43;
		L_43 = RectMask2DFast_get_ForceClip_mB6365F2B1D06B48E7E451816E3F7CB6F0616D7E0(__this, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01fe;
		}
	}
	{
		// foreach (IClippable clipTarget in clipTargets)
		HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * L_44 = __this->get_clipTargets_16();
		NullCheck(L_44);
		Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB  L_45;
		L_45 = HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5(L_44, /*hidden argument*/HashSet_1_GetEnumerator_m92D3A9B247A770B26D0C5C04E4D077E333DADEC5_RuntimeMethod_var);
		V_3 = L_45;
	}

IL_0159:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017a;
		}

IL_015b:
		{
			// foreach (IClippable clipTarget in clipTargets)
			RuntimeObject* L_46;
			L_46 = Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_inline((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m3A838EB39ACF305E8B1684DF17C6CA94A2D6645E_RuntimeMethod_var);
			// clipTarget.SetClipRect(clipRect, validRect);
			RuntimeObject* L_47 = L_46;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_48 = V_1;
			bool L_49 = V_0;
			NullCheck(L_47);
			InterfaceActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(4 /* System.Void UnityEngine.UI.IClippable::SetClipRect(UnityEngine.Rect,System.Boolean) */, IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var, L_47, L_48, L_49);
			// clipTarget.SetClipSoftness(softness);
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_50;
			L_50 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
			L_51 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_50, /*hidden argument*/NULL);
			NullCheck(L_47);
			InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(5 /* System.Void UnityEngine.UI.IClippable::SetClipSoftness(UnityEngine.Vector2) */, IClippable_t39F88693A32E8ED74E8607F8EDB8A2A2915E08D5_il2cpp_TypeInfo_var, L_47, L_51);
		}

IL_017a:
		{
			// foreach (IClippable clipTarget in clipTargets)
			bool L_52;
			L_52 = Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mFA59DE8D40855862889A5FB6D77FC05ACA13B8BF_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_015b;
			}
		}

IL_0183:
		{
			IL2CPP_LEAVE(0x193, FINALLY_0185);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0185;
	}

FINALLY_0185:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16((Enumerator_t0D80485D8152F33E11C1B31555CBD82296214BDB *)(&V_3), /*hidden argument*/Enumerator_Dispose_m3F76B6B3DAAF596F7288FBFBDDD8BD7F74DF5C16_RuntimeMethod_var);
		IL2CPP_END_FINALLY(389)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(389)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x193, IL_0193)
	}

IL_0193:
	{
		// foreach (MaskableGraphic maskableTarget in maskableTargets)
		HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * L_53 = __this->get_maskableTargets_17();
		NullCheck(L_53);
		Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  L_54;
		L_54 = HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F(L_53, /*hidden argument*/HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F_RuntimeMethod_var);
		V_4 = L_54;
	}

IL_01a0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e5;
		}

IL_01a2:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_55;
			L_55 = Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_inline((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_RuntimeMethod_var);
			V_6 = L_55;
			// maskableTarget.SetClipRect(clipRect, validRect);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_56 = V_6;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_57 = V_1;
			bool L_58 = V_0;
			NullCheck(L_56);
			VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(60 /* System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean) */, L_56, L_57, L_58);
			// maskableTarget.SetClipSoftness(softness);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_59 = V_6;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_60;
			L_60 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
			L_61 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_60, /*hidden argument*/NULL);
			NullCheck(L_59);
			VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(61 /* System.Void UnityEngine.UI.MaskableGraphic::SetClipSoftness(UnityEngine.Vector2) */, L_59, L_61);
			// OnSetClipRect(maskableTarget);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_62 = V_6;
			VirtActionInvoker1< MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * >::Invoke(22 /* System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnSetClipRect(UnityEngine.UI.MaskableGraphic) */, __this, L_62);
			// if (maskableTarget.canvasRenderer.hasMoved)
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_63 = V_6;
			NullCheck(L_63);
			CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_64;
			L_64 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_63, /*hidden argument*/NULL);
			NullCheck(L_64);
			bool L_65;
			L_65 = CanvasRenderer_get_hasMoved_m7CF5BF1CD654A0CB0DAC1C4E4EF8C83AD9DED82A(L_64, /*hidden argument*/NULL);
			if (!L_65)
			{
				goto IL_01e5;
			}
		}

IL_01dc:
		{
			// maskableTarget.Cull(clipRect, validRect);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_66 = V_6;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_67 = V_1;
			bool L_68 = V_0;
			NullCheck(L_66);
			VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(59 /* System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean) */, L_66, L_67, L_68);
		}

IL_01e5:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			bool L_69;
			L_69 = Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_01a2;
			}
		}

IL_01ee:
		{
			IL2CPP_LEAVE(0x246, FINALLY_01f0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f0;
	}

FINALLY_01f0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(496)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(496)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x246, IL_0246)
	}

IL_01fe:
	{
		// foreach (MaskableGraphic maskableTarget in maskableTargets)
		HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * L_70 = __this->get_maskableTargets_17();
		NullCheck(L_70);
		Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26  L_71;
		L_71 = HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F(L_70, /*hidden argument*/HashSet_1_GetEnumerator_mB0DB459D03E0D897425E4AF451BC578B3DF1282F_RuntimeMethod_var);
		V_4 = L_71;
	}

IL_020b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_022d;
		}

IL_020d:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_72;
			L_72 = Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_inline((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7D0144CA95382B58123824FD68F9EF593436BD31_RuntimeMethod_var);
			V_7 = L_72;
			// if (!maskableTarget.canvasRenderer.hasMoved)
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_73 = V_7;
			NullCheck(L_73);
			CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_74;
			L_74 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_73, /*hidden argument*/NULL);
			NullCheck(L_74);
			bool L_75;
			L_75 = CanvasRenderer_get_hasMoved_m7CF5BF1CD654A0CB0DAC1C4E4EF8C83AD9DED82A(L_74, /*hidden argument*/NULL);
			if (!L_75)
			{
				goto IL_022d;
			}
		}

IL_0224:
		{
			// maskableTarget.Cull(clipRect, validRect);
			MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_76 = V_7;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_77 = V_1;
			bool L_78 = V_0;
			NullCheck(L_76);
			VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , bool >::Invoke(59 /* System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean) */, L_76, L_77, L_78);
		}

IL_022d:
		{
			// foreach (MaskableGraphic maskableTarget in maskableTargets)
			bool L_79;
			L_79 = Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0187595958793ACE53A0D82A563BCA8D7A284703_RuntimeMethod_var);
			if (L_79)
			{
				goto IL_020d;
			}
		}

IL_0236:
		{
			IL2CPP_LEAVE(0x246, FINALLY_0238);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0238;
	}

FINALLY_0238:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E((Enumerator_t52795888234F5322AB4684EF231328DBAFBA2B26 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m7462BC00219D13F9A0CCDA17677F45F855665C2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(568)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(568)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x246, IL_0246)
	}

IL_0246:
	{
		// ForceClip = false;
		RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0(__this, (bool)0, /*hidden argument*/NULL);
		// lastClipRectCanvasSpace = clipRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_80 = V_1;
		__this->set_lastClipRectCanvasSpace_23(L_80);
		// lastSoftness = softness;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_81;
		L_81 = RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline(__this, /*hidden argument*/NULL);
		__this->set_lastSoftness_24(L_81);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_ForceClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectMask2DFast_get_ForceClip_mB6365F2B1D06B48E7E451816E3F7CB6F0616D7E0 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return clipTargets.Count != lastclipTargetsCount ||
		//        maskableTargets.Count != lastmaskableTargetsCount;
		HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * L_0 = __this->get_clipTargets_16();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_inline(L_0, /*hidden argument*/HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_RuntimeMethod_var);
		int32_t L_2 = __this->get_lastclipTargetsCount_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * L_3 = __this->get_maskableTargets_17();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_inline(L_3, /*hidden argument*/HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_RuntimeMethod_var);
		int32_t L_5 = __this->get_lastmaskableTargetsCount_19();
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::set_ForceClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == true)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// lastclipTargetsCount = 0;
		__this->set_lastclipTargetsCount_18(0);
		// lastmaskableTargetsCount = 0;
		__this->set_lastmaskableTargetsCount_19(0);
		// }
		return;
	}

IL_0012:
	{
		// Initialize();
		RectMask2DFast_Initialize_m81863988ADAD0CB1DCF8A2A821E71DF28E2E3395(__this, /*hidden argument*/NULL);
		// lastclipTargetsCount = clipTargets.Count;
		HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * L_1 = __this->get_clipTargets_16();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_inline(L_1, /*hidden argument*/HashSet_1_get_Count_m2971A775E1FDD7A9268E14D09EAFE0F1B32FD63B_RuntimeMethod_var);
		__this->set_lastclipTargetsCount_18(L_2);
		// lastmaskableTargetsCount = maskableTargets.Count;
		HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * L_3 = __this->get_maskableTargets_17();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_inline(L_3, /*hidden argument*/HashSet_1_get_Count_m64FBB90B051522692A22EC558C0996EAD622DDC6_RuntimeMethod_var);
		__this->set_lastmaskableTargetsCount_19(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::OnSetClipRect(UnityEngine.UI.MaskableGraphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_OnSetClipRect_m2E66A641E17F61970B1C24135850B326F860F296 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * ___maskableTarget0, const RuntimeMethod* method)
{
	{
		// protected virtual void OnSetClipRect(MaskableGraphic maskableTarget) {}
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast_Initialize_m81863988ADAD0CB1DCF8A2A821E71DF28E2E3395 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2149D0F5F9C18D4239820B5167B31AA23FCDF4B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E39E305880BBC27E02C3428DD84CF747A64FB16);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (clipTargets != null)
		HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * L_0 = __this->get_clipTargets_16();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// BindingFlags bindFlags = BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static;
		V_0 = ((int32_t)60);
		// clipTargets = (HashSet<IClippable>)typeof(RectMask2D).GetField("m_ClipTargets", bindFlags).GetValue(this);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		FieldInfo_t * L_4;
		L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_2, _stringLiteral2E39E305880BBC27E02C3428DD84CF747A64FB16, L_3);
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_4, __this);
		__this->set_clipTargets_16(((HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 *)CastclassClass((RuntimeObject*)L_5, HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_il2cpp_TypeInfo_var)));
		// maskableTargets = (HashSet<MaskableGraphic>)typeof(RectMask2D).GetField("m_MaskableTargets", bindFlags).GetValue(this);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		FieldInfo_t * L_9;
		L_9 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_7, _stringLiteral2149D0F5F9C18D4239820B5167B31AA23FCDF4B1, L_8);
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_9, __this);
		__this->set_maskableTargets_17(((HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB *)CastclassClass((RuntimeObject*)L_10, HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// UnityEngine.Canvas Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE09C8E7D7D322256589C65D0CA069948C87226C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_0 = NULL;
	{
		// if (cachedCanvas == null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_cachedCanvas_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// var list = gameObject.GetComponentsInParent<Canvas>(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_3;
		L_3 = GameObject_GetComponentsInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE09C8E7D7D322256589C65D0CA069948C87226C7(L_2, (bool)0, /*hidden argument*/GameObject_GetComponentsInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE09C8E7D7D322256589C65D0CA069948C87226C7_RuntimeMethod_var);
		V_0 = L_3;
		// if (list.Length > 0)
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_4 = V_0;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_002e;
		}
	}
	{
		// cachedCanvas = list[list.Length - 1];
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_5 = V_0;
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1));
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_cachedCanvas_21(L_8);
		goto IL_0035;
	}

IL_002e:
	{
		// cachedCanvas = null;
		__this->set_cachedCanvas_21((Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *)NULL);
	}

IL_0035:
	{
		// return cachedCanvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9 = __this->get_cachedCanvas_21();
		return L_9;
	}
}
// UnityEngine.Rect Microsoft.MixedReality.GraphicsTools.RectMask2DFast::get_RootCanvasRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectMask2DFast_get_RootCanvasRect_mB3CB7790F78E02A284DEE8B2D4E2253E2C72FAA8 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// rectTransform.GetWorldCorners(cachedCorners);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = RectMask2D_get_rectTransform_mF0BAAE5A88C9390C41E5CEB4A2D944A4F69DC33D(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_cachedCorners_22();
		NullCheck(L_0);
		RectTransform_GetWorldCorners_m5351A825540654FFDBD0837AC37D2139F64A4FD8(L_0, L_1, /*hidden argument*/NULL);
		// if (!ReferenceEquals(Canvas, null))
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2;
		L_2 = RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// Canvas rootCanvas = Canvas.rootCanvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = RectMask2DFast_get_Canvas_m4341873BB2B9ECE5BA46D566AA1396FF7B06585D(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4;
		L_4 = Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int i = 0; i < 4; ++i)
		V_1 = 0;
		goto IL_0050;
	}

IL_0029:
	{
		// cachedCorners[i] = rootCanvas.transform.InverseTransformPoint(cachedCorners[i]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_cachedCorners_22();
		int32_t L_6 = V_1;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7 = V_0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = __this->get_cachedCorners_22();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		// for (int i = 0; i < 4; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < 4; ++i)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0029;
		}
	}

IL_0054:
	{
		// return new Rect(cachedCorners[0].x, cachedCorners[0].y, cachedCorners[2].x - cachedCorners[0].x, cachedCorners[2].y - cachedCorners[0].y);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = __this->get_cachedCorners_22();
		NullCheck(L_16);
		float L_17 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = __this->get_cachedCorners_22();
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = __this->get_cachedCorners_22();
		NullCheck(L_20);
		float L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = __this->get_cachedCorners_22();
		NullCheck(L_22);
		float L_23 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = __this->get_cachedCorners_22();
		NullCheck(L_24);
		float L_25 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_y_3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = __this->get_cachedCorners_22();
		NullCheck(L_26);
		float L_27 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_28), L_17, L_19, ((float)il2cpp_codegen_subtract((float)L_21, (float)L_23)), ((float)il2cpp_codegen_subtract((float)L_25, (float)L_27)), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RectMask2DFast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectMask2DFast__ctor_mFDE4F62097CE609E31F88F23E970D43E244CFB56 (RectMask2DFast_t6D8A38E8BB55FCBA3C6A50D172AB2164E6F8C979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0122F916881428CFF7FAB3A25FABA25C14BE5F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3[] cachedCorners = new Vector3[4];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_cachedCorners_22(L_0);
		// private List<RectMask2D> clippers = new List<RectMask2D>();
		List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * L_1 = (List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 *)il2cpp_codegen_object_new(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0_il2cpp_TypeInfo_var);
		List_1__ctor_m0122F916881428CFF7FAB3A25FABA25C14BE5F36(L_1, /*hidden argument*/List_1__ctor_m0122F916881428CFF7FAB3A25FABA25C14BE5F36_RuntimeMethod_var);
		__this->set_clippers_25(L_1);
		RectMask2D__ctor_mE0AA40ADEDAD189C28C17B038732C249C54F2C43(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::get_IndependentRadii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoundedRectMask2D_get_IndependentRadii_m285D61DFB7B6323EE9C277D6E193B871A339226A (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	{
		// get => independentRadii;
		bool L_0 = __this->get_independentRadii_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::set_IndependentRadii(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D_set_IndependentRadii_mBCAB324D053ED571EA2240C3177031666F0BE312 (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// independentRadii = value;
		bool L_0 = ___value0;
		__this->set_independentRadii_29(L_0);
		// MaskUtilities.Notify2DMaskStateChanged(this);
		MaskUtilities_Notify2DMaskStateChanged_mBA146FF6CF616448B3AB517AE67E5968F952D68B(__this, /*hidden argument*/NULL);
		// ForceClip = true;
		RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector4 Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::get_Radii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  RoundedRectMask2D_get_Radii_m3FC4E2C9472F6D676826F1E903F6F19C72549713 (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	{
		// get => radii;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = __this->get_radii_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::set_Radii(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D_set_Radii_mF2020C5994FE9B8EBA4EC419D4586DDDFE69F3A9 (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, const RuntimeMethod* method)
{
	{
		// radii = value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___value0;
		__this->set_radii_30(L_0);
		// MaskUtilities.Notify2DMaskStateChanged(this);
		MaskUtilities_Notify2DMaskStateChanged_mBA146FF6CF616448B3AB517AE67E5968F952D68B(__this, /*hidden argument*/NULL);
		// ForceClip = true;
		RectMask2DFast_set_ForceClip_mEC5DD36404BD7484FBFBCFF2F135035A6637C9C0(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::PerformClipping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D_PerformClipping_m59562BDEE990F90AEB6F4432252109EA35755F2C (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clipRectRadiiID == 0)
		IL2CPP_RUNTIME_CLASS_INIT(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_clipRectRadiiID_31();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// clipRectRadiiID = Shader.PropertyToID(RadiiPropertyName);
		IL2CPP_RUNTIME_CLASS_INIT(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		String_t* L_1 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_RadiiPropertyName_28();
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(L_1, /*hidden argument*/NULL);
		((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->set_clipRectRadiiID_31(L_2);
	}

IL_0016:
	{
		// base.PerformClipping();
		RectMask2DFast_PerformClipping_m4E79E7CD74410A611B86BBABABDA2073105C124C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::OnSetClipRect(UnityEngine.UI.MaskableGraphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D_OnSetClipRect_mADB66C109EB21C6A6BAAEAF774E2D437CFDCE1C8 (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * ___maskableTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	{
		// Material targetMaterial = maskableTarget.materialForRendering;
		MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * L_0 = ___maskableTarget0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(34 /* UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering() */, L_0);
		V_0 = L_1;
		// if (targetMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// if (IndependentRadii)
		bool L_4;
		L_4 = RoundedRectMask2D_get_IndependentRadii_m285D61DFB7B6323EE9C277D6E193B871A339226A_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// targetMaterial.EnableKeyword(RoundedIndependentKeyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		String_t* L_6 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_RoundedIndependentKeyword_27();
		NullCheck(L_5);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_5, L_6, /*hidden argument*/NULL);
		// targetMaterial.DisableKeyword(RoundedKeyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_0;
		String_t* L_8 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_RoundedKeyword_26();
		NullCheck(L_7);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_7, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0046;
	}

IL_0030:
	{
		// targetMaterial.DisableKeyword(RoundedIndependentKeyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		String_t* L_10 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_RoundedIndependentKeyword_27();
		NullCheck(L_9);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_9, L_10, /*hidden argument*/NULL);
		// targetMaterial.EnableKeyword(RoundedKeyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = V_0;
		String_t* L_12 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_RoundedKeyword_26();
		NullCheck(L_11);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// targetMaterial.SetVector(clipRectRadiiID, Radii);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		int32_t L_14 = ((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->get_clipRectRadiiID_31();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = RoundedRectMask2D_get_Radii_m3FC4E2C9472F6D676826F1E903F6F19C72549713_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D__ctor_mFEB09F3A865203D5015C10BDCA0456359FAE2276 (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	{
		// protected Vector4 radii = Vector4.one * 10.0f;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4(/*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_0, (10.0f), /*hidden argument*/NULL);
		__this->set_radii_30(L_1);
		RectMask2DFast__ctor_mFDE4F62097CE609E31F88F23E970D43E244CFB56(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.RoundedRectMask2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedRectMask2D__cctor_m69362B88321952226DB8D56A83E520E34FFB39AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EB39F5BBB1F55FFE3E67DE0502C760FF7FEA7E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73151A161BF5580F9BCB22BCDF8B3FD51DBA5C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDB4AEB723C603CFE3FB9237AD0E7BE54C3C5A40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string RoundedKeyword = "_UI_CLIP_RECT_ROUNDED";
		((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->set_RoundedKeyword_26(_stringLiteral4EB39F5BBB1F55FFE3E67DE0502C760FF7FEA7E4);
		// public static readonly string RoundedIndependentKeyword = "_UI_CLIP_RECT_ROUNDED_INDEPENDENT";
		((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->set_RoundedIndependentKeyword_27(_stringLiteral73151A161BF5580F9BCB22BCDF8B3FD51DBA5C01);
		// public static readonly string RadiiPropertyName = "_ClipRectRadii";
		((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->set_RadiiPropertyName_28(_stringLiteralCDB4AEB723C603CFE3FB9237AD0E7BE54C3C5A40);
		// private static int clipRectRadiiID = 0;
		((RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_StaticFields*)il2cpp_codegen_static_fields_for(RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0_il2cpp_TypeInfo_var))->set_clipRectRadiiID_31(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.ScaleMeshEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_Start_mC3C380ED0C87963A4470383F3DE1AB52D20B5D97 (ScaleMeshEffect_tC68771701EE5BC495CEE9B7E629FE4862E794C97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_0 = NULL;
	{
		// base.Start();
		UIBehaviour_Start_m7334773773C9454A7A6E95613E60762E68B728F7(__this, /*hidden argument*/NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0;
		L_0 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		V_0 = L_0;
		// if (canvas != null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord2;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD(L_4, ((int32_t)((int32_t)L_5|(int32_t)2)), /*hidden argument*/NULL);
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord3;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206(L_7, /*hidden argument*/NULL);
		NullCheck(L_7);
		Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD(L_7, ((int32_t)((int32_t)L_8|(int32_t)4)), /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ScaleMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_ModifyMesh_m4FBBDFCDC3380445AF6219801373C2914B5A696E (ScaleMeshEffect_tC68771701EE5BC495CEE9B7E629FE4862E794C97 * __this, VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// var rectTransform = transform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// var scale = new Vector2(rectTransform.rect.width * rectTransform.localScale.x,
		//                         rectTransform.rect.height * rectTransform.localScale.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = V_0;
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_1, /*hidden argument*/NULL);
		V_4 = L_2;
		float L_3;
		L_3 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = V_0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = V_0;
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = V_0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_6)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)), /*hidden argument*/NULL);
		// var depth = new Vector2(Mathf.Min(scale.x, scale.y), -1.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		float L_14 = L_13.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		float L_16 = L_15.get_y_1();
		float L_17;
		L_17 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_14, L_16, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_17, (-1.0f), /*hidden argument*/NULL);
		// var vertex = new UIVertex();
		il2cpp_codegen_initobj((&V_3), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
		// for (var i = 0; i < vh.currentVertCount; ++i)
		V_5 = 0;
		goto IL_00a6;
	}

IL_0073:
	{
		// vh.PopulateUIVertex(ref vertex, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_18 = ___vh0;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555(L_18, (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *)(&V_3), L_19, /*hidden argument*/NULL);
		// vertex.uv2 = scale;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		L_21 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_20, /*hidden argument*/NULL);
		(&V_3)->set_uv2_6(L_21);
		// vertex.uv3 = depth;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_22, /*hidden argument*/NULL);
		(&V_3)->set_uv3_7(L_23);
		// vh.SetUIVertex(vertex, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_24 = ___vh0;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_24);
		VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E(L_24, L_25, L_26, /*hidden argument*/NULL);
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a6:
	{
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_28 = V_5;
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_29 = ___vh0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0073;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ScaleMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect__ctor_mC9B31906F401C2432A714EDFB7239853549B3071 (ScaleMeshEffect_tC68771701EE5BC495CEE9B7E629FE4862E794C97 * __this, const RuntimeMethod* method)
{
	{
		BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsStandardShader_m49C5CC64F663AF62834FE08036BFBFB15E214F76 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (graphicsToolsStandardShader == null)
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsStandardShader_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// graphicsToolsStandardShader = Shader.Find(GraphicsToolsStandardShaderName);
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		String_t* L_2 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_GraphicsToolsStandardShaderName_0();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_2, /*hidden argument*/NULL);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardShader_1(L_3);
	}

IL_001c:
	{
		// return graphicsToolsStandardShader;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsStandardShader_1();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::set_GraphicsToolsStandardShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardShaderUtility_set_GraphicsToolsStandardShader_mE08909DDAA60204A62C3B894763A2B14EDD836BA (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// graphicsToolsStandardShader = value;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardShader_1(L_0);
		// }
		return;
	}
}
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsStandardCanvasShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsStandardCanvasShader_mA17A2EEF94D35F7CE49EFDCE19AAF546ABB54FBE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (graphicsToolsStandardCanvasShader == null)
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsStandardCanvasShader_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// graphicsToolsStandardCanvasShader = Shader.Find(GraphicsToolsStandardCanvasShaderName);
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		String_t* L_2 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_GraphicsToolsStandardCanvasShaderName_2();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_2, /*hidden argument*/NULL);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardCanvasShader_3(L_3);
	}

IL_001c:
	{
		// return graphicsToolsStandardCanvasShader;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsStandardCanvasShader_3();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::set_GraphicsToolsStandardCanvasShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardShaderUtility_set_GraphicsToolsStandardCanvasShader_mE49CF396AF1A4F5A02063CCE188AE25FAE06E655 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// graphicsToolsStandardCanvasShader = value;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardCanvasShader_3(L_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsGraphicsToolsStandardShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsGraphicsToolsStandardShader_mDE6F670A57185214C6A711CF6224E90766F225B0 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return shader == GraphicsToolsStandardShader ||
		//        shader == GraphicsToolsStandardCanvasShader;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___shader0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = StandardShaderUtility_get_GraphicsToolsStandardShader_m49C5CC64F663AF62834FE08036BFBFB15E214F76(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = ___shader0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4;
		L_4 = StandardShaderUtility_get_GraphicsToolsStandardCanvasShader_mA17A2EEF94D35F7CE49EFDCE19AAF546ABB54FBE(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsUsingGraphicsToolsStandardShader(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsUsingGraphicsToolsStandardShader_mA4F9448C302C5D4A050E97C1542BB2F22AB1CFA2 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B3_0 = NULL;
	{
		// return IsGraphicsToolsStandardShader((material != null) ? material.shader : null);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___material0;
		NullCheck(L_2);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = StandardShaderUtility_IsGraphicsToolsStandardShader_mDE6F670A57185214C6A711CF6224E90766F225B0(G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Shader Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::get_GraphicsToolsTextMeshProShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * StandardShaderUtility_get_GraphicsToolsTextMeshProShader_mAD29AEFC077B05483C67B89442942865F6422F89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (graphicsToolsTextMeshProShader == null)
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsTextMeshProShader_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// graphicsToolsTextMeshProShader = Shader.Find(GraphicsToolsTextMeshProShaderName);
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		String_t* L_2 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_GraphicsToolsTextMeshProShaderName_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_2, /*hidden argument*/NULL);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsTextMeshProShader_5(L_3);
	}

IL_001c:
	{
		// return graphicsToolsTextMeshProShader;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->get_graphicsToolsTextMeshProShader_5();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::set_GraphicsToolsTextMeshProShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardShaderUtility_set_GraphicsToolsTextMeshProShader_m2D694BF58FC4E059475EA6AF95D7A265B4FA9A24 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// graphicsToolsTextMeshProShader = value;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsTextMeshProShader_5(L_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsGraphicsToolsTextMeshProShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsGraphicsToolsTextMeshProShader_mE565E017EB0E8038F697FEB098C70D0656FE69AE (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return shader == GraphicsToolsTextMeshProShader;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___shader0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = StandardShaderUtility_get_GraphicsToolsTextMeshProShader_mAD29AEFC077B05483C67B89442942865F6422F89(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::IsUsingGraphicsToolsTextMeshProShader(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_IsUsingGraphicsToolsTextMeshProShader_m691EBB45EF69F3FB3980E196CC82537B18A71EB7 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B3_0 = NULL;
	{
		// return IsGraphicsToolsTextMeshProShader((material != null) ? material.shader : null);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___material0;
		NullCheck(L_2);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = StandardShaderUtility_IsGraphicsToolsTextMeshProShader_mE565E017EB0E8038F697FEB098C70D0656FE69AE(G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::ColorShiftHSV(UnityEngine.Color,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___source0, float ___hueOffset1, float ___saturationtOffset2, float ___valueOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Color.RGBToHSV(source, out hue, out saturation, out value);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___source0;
		Color_RGBToHSV_mDC3A14DCF9D4A898AF97613CD07D94BFF8402194(L_0, (float*)(&V_0), (float*)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
		// hue = hue + hueOffset;
		float L_1 = V_0;
		float L_2 = ___hueOffset1;
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
		// saturation = Mathf.Clamp01(saturation + saturationtOffset);
		float L_3 = V_1;
		float L_4 = ___saturationtOffset2;
		float L_5;
		L_5 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_add((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		// value = Mathf.Clamp01(value + valueOffset);
		float L_6 = V_2;
		float L_7 = ___valueOffset3;
		float L_8;
		L_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_2 = L_8;
		// Color output = Color.HSVToRGB(hue, saturation, value);
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF(L_9, L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// output.a = source.a;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = ___source0;
		float L_14 = L_13.get_a_3();
		(&V_3)->set_a_3(L_14);
		// return output;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = V_3;
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::AutofillFourPointGradient(UnityEngine.Color,UnityEngine.Color&,UnityEngine.Color&,UnityEngine.Color&,UnityEngine.Color&,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardShaderUtility_AutofillFourPointGradient_m7004C97563DA70746DE4A16AF221C0369229B43E (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___topLeft1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___topRight2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___bottomLeft3, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___bottomRight4, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___stroke5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// topLeft = source;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_0 = ___topLeft1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___source0;
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_0 = L_1;
		// topRight = ColorShiftHSV(source, 0.02f, -0.2f, -0.1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_2 = ___topRight2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C(L_3, (0.0199999996f), (-0.200000003f), (-0.100000001f), /*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_2 = L_4;
		// bottomLeft = ColorShiftHSV(source, -0.03f, 0.1f, 0.3f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_5 = ___bottomLeft3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___source0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C(L_6, (-0.0299999993f), (0.100000001f), (0.300000012f), /*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_5 = L_7;
		// bottomRight = ColorShiftHSV(source, 0.01f, -0.1f, 0.2f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_8 = ___bottomRight4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___source0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C(L_9, (0.00999999978f), (-0.100000001f), (0.200000003f), /*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_8 = L_10;
		// stroke = ColorShiftHSV(source, 0.01f, -0.2f, 0.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_11 = ___stroke5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ___source0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = StandardShaderUtility_ColorShiftHSV_m737EE847473A8318CDEF62388CD2FD090EB0EA5C(L_12, (0.00999999978f), (-0.200000003f), (0.0f), /*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_11 = L_13;
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::TryParseCSSGradient(System.String,UnityEngine.Color[]&,System.Single[]&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardShaderUtility_TryParseCSSGradient_m3EB061D403778987C217AE466F7A1A72999D3B57 (String_t* ___cssGradient0, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** ___gradientColors1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___gradientStops2, float* ___gradientAngle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D92A6DC18E9957DDB0234923996F1FA0868D2A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5B8ACB8190E84E27D67B689F7A739E72872780);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F74F0A2DBE24A1C803BE5000C6FB5D6657767EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCB58BBE9D6BF89A221BE403D968DDE26EDD09B7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	float V_4 = 0.0f;
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * V_5 = NULL;
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * V_6 = NULL;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_12 = NULL;
	float V_13 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	float G_B30_0 = 0.0f;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int start = cssGradient.IndexOf(prefix) + prefix.Length;
			String_t* L_0 = ___cssGradient0;
			NullCheck(L_0);
			int32_t L_1;
			L_1 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_0, _stringLiteral9F74F0A2DBE24A1C803BE5000C6FB5D6657767EE, /*hidden argument*/NULL);
			NullCheck(_stringLiteral9F74F0A2DBE24A1C803BE5000C6FB5D6657767EE);
			int32_t L_2;
			L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral9F74F0A2DBE24A1C803BE5000C6FB5D6657767EE, /*hidden argument*/NULL);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
			// int end = cssGradient.IndexOf(postfix, start);
			String_t* L_3 = ___cssGradient0;
			int32_t L_4 = V_1;
			NullCheck(L_3);
			int32_t L_5;
			L_5 = String_IndexOf_m9037DBF7895B78147B9F5931DA0AA9D2CBD8C3F0(L_3, _stringLiteral4C5B8ACB8190E84E27D67B689F7A739E72872780, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// string gradient = cssGradient.Substring(start, end - start);
			String_t* L_6 = ___cssGradient0;
			int32_t L_7 = V_1;
			int32_t L_8 = V_2;
			int32_t L_9 = V_1;
			NullCheck(L_6);
			String_t* L_10;
			L_10 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_6, L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/NULL);
			// string[] parameters = gradient.Split(',');
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = L_11;
			NullCheck(L_12);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_10);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13;
			L_13 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_10, L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			// float angle = defaultCSSAngle;
			V_4 = (180.0f);
			// List<Color> colorKeys = new List<Color>();
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_14 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
			List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_14, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
			V_5 = L_14;
			// List<float> stopKeys = new List<float>();
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_15 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
			List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_15, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
			V_6 = L_15;
			// for (int i = 0; i < parameters.Length; ++i)
			V_7 = 0;
			goto IL_01fc;
		}

IL_005c:
		{
			// if (parameters[i].Contains("deg"))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_3;
			int32_t L_17 = V_7;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_19);
			bool L_20;
			L_20 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_19, _stringLiteral3D92A6DC18E9957DDB0234923996F1FA0868D2A1, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_008c;
			}
		}

IL_006c:
		{
			// float.TryParse(parameters[i].Replace("deg", string.Empty), out angle);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_3;
			int32_t L_22 = V_7;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			NullCheck(L_24);
			String_t* L_26;
			L_26 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_24, _stringLiteral3D92A6DC18E9957DDB0234923996F1FA0868D2A1, L_25, /*hidden argument*/NULL);
			bool L_27;
			L_27 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_26, (float*)(&V_4), /*hidden argument*/NULL);
			// }
			goto IL_01f6;
		}

IL_008c:
		{
			// if (parameters[i].Contains("rgba("))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = V_3;
			int32_t L_29 = V_7;
			NullCheck(L_28);
			int32_t L_30 = L_29;
			String_t* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			NullCheck(L_31);
			bool L_32;
			L_32 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_31, _stringLiteralCCB58BBE9D6BF89A221BE403D968DDE26EDD09B7, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0189;
			}
		}

IL_009f:
		{
			// float red, green, blue, alpha = 1.0f;
			V_11 = (1.0f);
			// if (float.TryParse(parameters[i].Replace("rgba(", string.Empty), out red))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = V_3;
			int32_t L_34 = V_7;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			String_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			NullCheck(L_36);
			String_t* L_38;
			L_38 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_36, _stringLiteralCCB58BBE9D6BF89A221BE403D968DDE26EDD09B7, L_37, /*hidden argument*/NULL);
			bool L_39;
			L_39 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_38, (float*)(&V_8), /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_00cb;
			}
		}

IL_00c2:
		{
			// red = NormalizeColorChannel(red);
			float L_40 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
			float L_41;
			L_41 = StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108(L_40, /*hidden argument*/NULL);
			V_8 = L_41;
		}

IL_00cb:
		{
			// if (float.TryParse(parameters[i + 1], out green))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = V_3;
			int32_t L_43 = V_7;
			NullCheck(L_42);
			int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
			String_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
			bool L_46;
			L_46 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_45, (float*)(&V_9), /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_00e3;
			}
		}

IL_00da:
		{
			// green = NormalizeColorChannel(green);
			float L_47 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
			float L_48;
			L_48 = StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108(L_47, /*hidden argument*/NULL);
			V_9 = L_48;
		}

IL_00e3:
		{
			// if (float.TryParse(parameters[i + 2], out blue))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = V_3;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)2));
			String_t* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
			bool L_53;
			L_53 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_52, (float*)(&V_10), /*hidden argument*/NULL);
			if (!L_53)
			{
				goto IL_00fb;
			}
		}

IL_00f2:
		{
			// blue = NormalizeColorChannel(blue);
			float L_54 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
			float L_55;
			L_55 = StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108(L_54, /*hidden argument*/NULL);
			V_10 = L_55;
		}

IL_00fb:
		{
			// string[] colorStop = parameters[i + 3].Split(new string[] { ") " }, StringSplitOptions.RemoveEmptyEntries);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = V_3;
			int32_t L_57 = V_7;
			NullCheck(L_56);
			int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)3));
			String_t* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
			NullCheck(L_59);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62;
			L_62 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_59, L_61, 1, /*hidden argument*/NULL);
			V_12 = L_62;
			// if (float.TryParse(colorStop[0], out alpha))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = V_12;
			NullCheck(L_63);
			int32_t L_64 = 0;
			String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			bool L_66;
			L_66 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_65, (float*)(&V_11), /*hidden argument*/NULL);
			if (!L_66)
			{
				goto IL_012d;
			}
		}

IL_0124:
		{
			// alpha = NormalizeColorChannel(alpha);
			float L_67 = V_11;
			IL2CPP_RUNTIME_CLASS_INIT(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
			float L_68;
			L_68 = StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108(L_67, /*hidden argument*/NULL);
			V_11 = L_68;
		}

IL_012d:
		{
			// colorKeys.Add(new Color(red, green, blue, alpha));
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_69 = V_5;
			float L_70 = V_8;
			float L_71 = V_9;
			float L_72 = V_10;
			float L_73 = V_11;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_74;
			memset((&L_74), 0, sizeof(L_74));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_74), L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
			NullCheck(L_69);
			List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_69, L_74, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
			// if (colorStop.Length > 1 &&
			//     float.TryParse(colorStop[1].Replace("%", string.Empty), out stop))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = V_12;
			NullCheck(L_75);
			if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))) <= ((int32_t)1)))
			{
				goto IL_0175;
			}
		}

IL_0148:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = V_12;
			NullCheck(L_76);
			int32_t L_77 = 1;
			String_t* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
			String_t* L_79 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			NullCheck(L_78);
			String_t* L_80;
			L_80 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_78, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, L_79, /*hidden argument*/NULL);
			bool L_81;
			L_81 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_80, (float*)(&V_13), /*hidden argument*/NULL);
			if (!L_81)
			{
				goto IL_0175;
			}
		}

IL_0164:
		{
			// stopKeys.Add(stop / 100);
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_82 = V_6;
			float L_83 = V_13;
			NullCheck(L_82);
			List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_82, ((float)((float)L_83/(float)(100.0f))), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
			// }
			goto IL_0181;
		}

IL_0175:
		{
			// stopKeys.Add(-1.0f); // Signal that we need to generate a stop value.
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_84 = V_6;
			NullCheck(L_84);
			List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_84, (-1.0f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		}

IL_0181:
		{
			// i += 3;
			int32_t L_85 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)3));
			// }
			goto IL_01f6;
		}

IL_0189:
		{
			// string[] colorStop = parameters[i].Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = V_3;
			int32_t L_87 = V_7;
			NullCheck(L_86);
			int32_t L_88 = L_87;
			String_t* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_90 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_91 = L_90;
			NullCheck(L_91);
			(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
			NullCheck(L_89);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92;
			L_92 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_89, L_91, 1, /*hidden argument*/NULL);
			V_14 = L_92;
			// if (ColorUtility.TryParseHtmlString(colorStop[0], out color))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = V_14;
			NullCheck(L_93);
			int32_t L_94 = 0;
			String_t* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
			bool L_96;
			L_96 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_95, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_15), /*hidden argument*/NULL);
			if (!L_96)
			{
				goto IL_01f6;
			}
		}

IL_01ad:
		{
			// colorKeys.Add(color);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_97 = V_5;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98 = V_15;
			NullCheck(L_97);
			List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_97, L_98, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
			// if (colorStop.Length > 1 &&
			//     float.TryParse(colorStop[1].Replace("%", string.Empty), out stop))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = V_14;
			NullCheck(L_99);
			if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))) <= ((int32_t)1)))
			{
				goto IL_01ea;
			}
		}

IL_01bd:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = V_14;
			NullCheck(L_100);
			int32_t L_101 = 1;
			String_t* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
			String_t* L_103 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			NullCheck(L_102);
			String_t* L_104;
			L_104 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_102, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, L_103, /*hidden argument*/NULL);
			bool L_105;
			L_105 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_104, (float*)(&V_16), /*hidden argument*/NULL);
			if (!L_105)
			{
				goto IL_01ea;
			}
		}

IL_01d9:
		{
			// stopKeys.Add(stop / 100);
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_106 = V_6;
			float L_107 = V_16;
			NullCheck(L_106);
			List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_106, ((float)((float)L_107/(float)(100.0f))), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
			// }
			goto IL_01f6;
		}

IL_01ea:
		{
			// stopKeys.Add(-1.0f); // Signal that we need to generate a stop value.
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_108 = V_6;
			NullCheck(L_108);
			List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_108, (-1.0f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		}

IL_01f6:
		{
			// for (int i = 0; i < parameters.Length; ++i)
			int32_t L_109 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		}

IL_01fc:
		{
			// for (int i = 0; i < parameters.Length; ++i)
			int32_t L_110 = V_7;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = V_3;
			NullCheck(L_111);
			if ((((int32_t)L_110) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length))))))
			{
				goto IL_005c;
			}
		}

IL_0206:
		{
			// if (stopKeys.Count >= 2)
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_112 = V_6;
			NullCheck(L_112);
			int32_t L_113;
			L_113 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_112, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
			if ((((int32_t)L_113) < ((int32_t)2)))
			{
				goto IL_027f;
			}
		}

IL_0210:
		{
			// for (int i = 0; i < stopKeys.Count; ++i)
			V_17 = 0;
			goto IL_025b;
		}

IL_0215:
		{
			// float stop = stopKeys[i];
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_114 = V_6;
			int32_t L_115 = V_17;
			NullCheck(L_114);
			float L_116;
			L_116 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_114, L_115, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
			V_18 = L_116;
			// if (stop < 0)
			float L_117 = V_18;
			if ((!(((float)L_117) < ((float)(0.0f)))))
			{
				goto IL_0255;
			}
		}

IL_0229:
		{
			// stop = (stopKeys.Count != 1) ? (float)i / (stopKeys.Count - 1) : 0.0f;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_118 = V_6;
			NullCheck(L_118);
			int32_t L_119;
			L_119 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_118, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
			if ((!(((uint32_t)L_119) == ((uint32_t)1))))
			{
				goto IL_023a;
			}
		}

IL_0233:
		{
			G_B30_0 = (0.0f);
			goto IL_0248;
		}

IL_023a:
		{
			int32_t L_120 = V_17;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_121 = V_6;
			NullCheck(L_121);
			int32_t L_122;
			L_122 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_121, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
			G_B30_0 = ((float)((float)((float)((float)L_120))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)1))))));
		}

IL_0248:
		{
			V_18 = G_B30_0;
			// stopKeys[i] = stop;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_123 = V_6;
			int32_t L_124 = V_17;
			float L_125 = V_18;
			NullCheck(L_123);
			List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5(L_123, L_124, L_125, /*hidden argument*/List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_RuntimeMethod_var);
		}

IL_0255:
		{
			// for (int i = 0; i < stopKeys.Count; ++i)
			int32_t L_126 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		}

IL_025b:
		{
			// for (int i = 0; i < stopKeys.Count; ++i)
			int32_t L_127 = V_17;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_128 = V_6;
			NullCheck(L_128);
			int32_t L_129;
			L_129 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_128, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
			if ((((int32_t)L_127) < ((int32_t)L_129)))
			{
				goto IL_0215;
			}
		}

IL_0266:
		{
			// stopKeys[colorKeys.Count - 1] = 1.0f;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_130 = V_6;
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_131 = V_5;
			NullCheck(L_131);
			int32_t L_132;
			L_132 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_131, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
			NullCheck(L_130);
			List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5(L_130, ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1)), (1.0f), /*hidden argument*/List_1_set_Item_m7AF79486E9A2A87808FAFA4C977268E90F63BDB5_RuntimeMethod_var);
			// success = true;
			V_0 = (bool)1;
			// }
			goto IL_0281;
		}

IL_027f:
		{
			// success = false;
			V_0 = (bool)0;
		}

IL_0281:
		{
			// gradientColors = colorKeys.ToArray();
			ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** L_133 = ___gradientColors1;
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_134 = V_5;
			NullCheck(L_134);
			ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_135;
			L_135 = List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909(L_134, /*hidden argument*/List_1_ToArray_m4FAB59B174076AA2A2E1B877332F9056659E3909_RuntimeMethod_var);
			*((RuntimeObject **)L_133) = (RuntimeObject *)L_135;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_133, (void*)(RuntimeObject *)L_135);
			// gradientStops = stopKeys.ToArray();
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_136 = ___gradientStops2;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_137 = V_6;
			NullCheck(L_137);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_138;
			L_138 = List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4(L_137, /*hidden argument*/List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
			*((RuntimeObject **)L_136) = (RuntimeObject *)L_138;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_136, (void*)(RuntimeObject *)L_138);
			// gradientAngle = angle;
			float* L_139 = ___gradientAngle3;
			float L_140 = V_4;
			*((float*)L_139) = (float)L_140;
			// }
			goto IL_02ab;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0299;
		}
		throw e;
	}

CATCH_0299:
	{ // begin catch(System.Object)
		// catch
		// success = false;
		V_0 = (bool)0;
		// gradientColors = null;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** L_141 = ___gradientColors1;
		*((RuntimeObject **)L_141) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_141, (void*)(RuntimeObject *)NULL);
		// gradientStops = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_142 = ___gradientStops2;
		*((RuntimeObject **)L_142) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_142, (void*)(RuntimeObject *)NULL);
		// gradientAngle = defaultCSSAngle;
		float* L_143 = ___gradientAngle3;
		*((float*)L_143) = (float)(180.0f);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ab;
	} // end catch (depth: 1)

IL_02ab:
	{
		// return success;
		bool L_144 = V_0;
		return L_144;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardShaderUtility__cctor_mF4B39597E819D637D736F23EB752DCDD3BC7A6C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C295ED4531659F44F6CFFF78FA843D6EF493A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FE3DC592A56079E8904D32159D96EF96893DCF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C88F9A8D4666BE640789DD02A218E643FBCC2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string GraphicsToolsStandardShaderName = "Graphics Tools/Standard";
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_GraphicsToolsStandardShaderName_0(_stringLiteral3FE3DC592A56079E8904D32159D96EF96893DCF3);
		// private static Shader graphicsToolsStandardShader = null;
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardShader_1((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)NULL);
		// public static readonly string GraphicsToolsStandardCanvasShaderName = "Graphics Tools/Standard Canvas";
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_GraphicsToolsStandardCanvasShaderName_2(_stringLiteral3C295ED4531659F44F6CFFF78FA843D6EF493A9A);
		// private static Shader graphicsToolsStandardCanvasShader = null;
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsStandardCanvasShader_3((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)NULL);
		// public static readonly string GraphicsToolsTextMeshProShaderName = "Graphics Tools/Text Mesh Pro";
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_GraphicsToolsTextMeshProShaderName_4(_stringLiteralA6C88F9A8D4666BE640789DD02A218E643FBCC2B);
		// private static Shader graphicsToolsTextMeshProShader = null;
		((StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_StaticFields*)il2cpp_codegen_static_fields_for(StandardShaderUtility_t762B6EDC03E052A0A8871C36A3D4D2932B5B40A1_il2cpp_TypeInfo_var))->set_graphicsToolsTextMeshProShader_5((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)NULL);
		return;
	}
}
// System.Single Microsoft.MixedReality.GraphicsTools.StandardShaderUtility::<TryParseCSSGradient>g__NormalizeColorChannel|21_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandardShaderUtility_U3CTryParseCSSGradientU3Eg__NormalizeColorChannelU7C21_0_m1E64527533FC76815C4422E9C765D25630CFC108 (float ___channel0, const RuntimeMethod* method)
{
	{
		// if (channel > 1.0f)
		float L_0 = ___channel0;
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// channel = channel / 255;
		float L_1 = ___channel0;
		___channel0 = ((float)((float)L_1/(float)(255.0f)));
	}

IL_0011:
	{
		// return channel;
		float L_2 = ___channel0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayer/Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_mCE6875A17B2E47B867253B75E358E6EFAB5A9E64 (Settings_tC0EAD845F76911FDEC68421EBF368F3AEB5A2535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RenderPassEvent captureEvent = RenderPassEvent.AfterRenderingPostProcessing;
		__this->set_captureEvent_0(((int32_t)600));
		// public int blurPasses = 5;
		__this->set_blurPasses_2(5);
		// public int downSample = 2;
		__this->set_downSample_3(2);
		// public string targetRenderFeatureName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_targetRenderFeatureName_5(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoutineU3Ed__76__ctor_m02E41EFBFB0A0D2E3CC1D35C770FFF00EC4DA3B8 (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoutineU3Ed__76_System_IDisposable_Dispose_m60673C50B99273F38E2B5C3FAB256329250C940C (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateRoutineU3Ed__76_MoveNext_m507C96B1686A5A7E97789FDB03C1443AF11FDE02 (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE29302DAC82620EA1FBB306824B20D8A57027860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_012e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0135;
	}

IL_0026:
	{
		// bool updateActiveFeatures = false;
		V_2 = (bool)0;
		// for (int i = 0; i < layerData.Count; i++)
		V_3 = 0;
		goto IL_0104;
	}

IL_002f:
	{
		// if (layerData[i].activeCount > 0)
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_4 = V_1;
		NullCheck(L_4);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_5 = L_4->get_layerData_21();
		int32_t L_6 = V_3;
		NullCheck(L_5);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_7;
		L_7 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_activeCount_0();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		// if (UseOnlyMainCamera)
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10;
		L_10 = AcrylicLayerManager_get_UseOnlyMainCamera_mE948C5CA913900B180F6DDD841FDEBD4FF6EE73C_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// layerData[i].SetTargetCamera(Camera.main);
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_11 = V_1;
		NullCheck(L_11);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_12 = L_11->get_layerData_21();
		int32_t L_13 = V_3;
		NullCheck(L_12);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_14;
		L_14 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_14);
		AcrylicLayer_SetTargetCamera_m4A23DC0A4FB1F0B188BBF7F02A7FDF1A6460F400(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// layerData[i].UpdateFrame(rendererData, captureMethod == AcrylicMethod.CopyFramebuffer, updatePeriod, blendFrames, blendMaterial, autoUpdateBlurMap);
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_17 = L_16->get_layerData_21();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_19;
		L_19 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_20 = V_1;
		NullCheck(L_20);
		ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * L_21 = L_20->get_rendererData_22();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_captureMethod_6();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_updatePeriod_15();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_blendFrames_16();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_28 = V_1;
		NullCheck(L_28);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = L_28->get_blendMaterial_17();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_30 = V_1;
		NullCheck(L_30);
		bool L_31 = L_30->get_autoUpdateBlurMap_14();
		NullCheck(L_19);
		AcrylicLayer_UpdateFrame_m6C0EE968B094E44487A72C71AD60DDC66B155ABF(L_19, L_21, (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0), L_25, L_27, L_29, L_31, /*hidden argument*/NULL);
		// if (captureMethod==AcrylicMethod.CopyFramebuffer)
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_captureMethod_6();
		if (L_33)
		{
			goto IL_0100;
		}
	}
	{
		// bool inList = layerData[i].InFeaturesList(rendererData);
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_34 = V_1;
		NullCheck(L_34);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_35 = L_34->get_layerData_21();
		int32_t L_36 = V_3;
		NullCheck(L_35);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_37;
		L_37 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_38 = V_1;
		NullCheck(L_38);
		ForwardRendererData_tE463DBB477ED829F2B2884441B03958000B67679 * L_39 = L_38->get_rendererData_22();
		NullCheck(L_37);
		bool L_40;
		L_40 = AcrylicLayer_InFeaturesList_m99371FE2BA3E67A350A2C4FBFCA605BA5F342476(L_37, L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		// if (layerData[i].CaptureNextFrame)
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_41 = V_1;
		NullCheck(L_41);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_42 = L_41->get_layerData_21();
		int32_t L_43 = V_3;
		NullCheck(L_42);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_44;
		L_44 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		NullCheck(L_44);
		bool L_45;
		L_45 = AcrylicLayer_get_CaptureNextFrame_m0A10C5F7E547E0708629C8AD08F8A2FF968F4175(L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00fa;
		}
	}
	{
		// if (!inList) updateActiveFeatures = true;
		bool L_46 = V_4;
		if (L_46)
		{
			goto IL_00d6;
		}
	}
	{
		// if (!inList) updateActiveFeatures = true;
		V_2 = (bool)1;
	}

IL_00d6:
	{
		// if (updatePeriod == 1 && autoUpdateBlurMap) layerData[i].ForceCaptureNextFrame();  //needed if updatePeriod changed in editor
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_updatePeriod_15();
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0100;
		}
	}
	{
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->get_autoUpdateBlurMap_14();
		if (!L_50)
		{
			goto IL_0100;
		}
	}
	{
		// if (updatePeriod == 1 && autoUpdateBlurMap) layerData[i].ForceCaptureNextFrame();  //needed if updatePeriod changed in editor
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_51 = V_1;
		NullCheck(L_51);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_52 = L_51->get_layerData_21();
		int32_t L_53 = V_3;
		NullCheck(L_52);
		AcrylicLayer_tAE23F06B2A87D603C11D085C3EC1D9B7E225ABC9 * L_54;
		L_54 = List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_inline(L_52, L_53, /*hidden argument*/List_1_get_Item_m05127A161D62EDB288EA9A3F73EB482A5D0F4A77_RuntimeMethod_var);
		NullCheck(L_54);
		AcrylicLayer_ForceCaptureNextFrame_m5072842832823F6CA5733075518051D43441A6F1(L_54, /*hidden argument*/NULL);
		// }
		goto IL_0100;
	}

IL_00fa:
	{
		// if (inList) updateActiveFeatures = true;
		bool L_55 = V_4;
		if (!L_55)
		{
			goto IL_0100;
		}
	}
	{
		// if (inList) updateActiveFeatures = true;
		V_2 = (bool)1;
	}

IL_0100:
	{
		// for (int i = 0; i < layerData.Count; i++)
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0104:
	{
		// for (int i = 0; i < layerData.Count; i++)
		int32_t L_57 = V_3;
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_58 = V_1;
		NullCheck(L_58);
		List_1_t78BB911C1017856DF5CB90A5F77A5629A478F89F * L_59 = L_58->get_layerData_21();
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_mE29302DAC82620EA1FBB306824B20D8A57027860_inline(L_59, /*hidden argument*/List_1_get_Count_mE29302DAC82620EA1FBB306824B20D8A57027860_RuntimeMethod_var);
		if ((((int32_t)L_57) < ((int32_t)L_60)))
		{
			goto IL_002f;
		}
	}
	{
		// if (updateActiveFeatures) UpdateActiveLayers();
		bool L_61 = V_2;
		if (!L_61)
		{
			goto IL_011e;
		}
	}
	{
		// if (updateActiveFeatures) UpdateActiveLayers();
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_62 = V_1;
		NullCheck(L_62);
		AcrylicLayerManager_UpdateActiveLayers_m9B9497ECFCA7FBF96B3BF1750750366C20171268(L_62, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_012e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0135:
	{
		// while (AnyLayersNeedUpdating())
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_63 = V_1;
		NullCheck(L_63);
		bool L_64;
		L_64 = AcrylicLayerManager_AnyLayersNeedUpdating_m2414C9D11501B6EA38462DD9E964D49262736DEA(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0026;
		}
	}
	{
		// updateRoutine = null;
		AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * L_65 = V_1;
		NullCheck(L_65);
		L_65->set_updateRoutine_27((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRoutineU3Ed__76_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF23F2410D6041937CDB65C8C21798D21D05A4BFB (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoutineU3Ed__76_System_Collections_IEnumerator_Reset_mB332E15DA1CE01D7AD89806E7B5AF42BE425D367 (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateRoutineU3Ed__76_System_Collections_IEnumerator_Reset_mB332E15DA1CE01D7AD89806E7B5AF42BE425D367_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.AcrylicLayerManager/<UpdateRoutine>d__76::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRoutineU3Ed__76_System_Collections_IEnumerator_get_Current_mC1E1371F410A93894C8EE933FCC18D0D01250DDF (U3CUpdateRoutineU3Ed__76_t9ED0D1A9D5582697586C77C62120232A3143976E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m1C32D547D3EB24C9B2356562824CD13C0D04CFDA (CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// Position = t.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_Position_0(L_1);
		// Rotation = t.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___t0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		__this->set_Rotation_1(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mDE0AA09A7412BC37F8895806A8DF9A369DD09286 (CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(new Vector3(Rotation.y, Rotation.x, Rotation.z)) * translation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_Rotation_1();
		float L_1 = L_0->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_Rotation_1();
		float L_3 = L_2->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_Rotation_1();
		float L_5 = L_4->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___translation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Position += rotatedTranslation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_Position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		__this->set_Position_0(L_12);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::LerpTowards(Microsoft.MixedReality.GraphicsTools.CameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mDDEA44B112E0481B953458BEAC1BB53266C13ABD (CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * __this, CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * ___target0, float ___positionLerp1, float ___rotationLerp2, const RuntimeMethod* method)
{
	{
		// Rotation = Vector3.Lerp(Rotation, target.Rotation, rotationLerp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_Rotation_1();
		CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * L_1 = ___target0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_Rotation_1();
		float L_3 = ___rotationLerp2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_Rotation_1(L_4);
		// Position = Vector3.Lerp(Position, target.Position, positionLerp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_Position_0();
		CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * L_6 = ___target0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_Position_0();
		float L_8 = ___positionLerp1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_Position_0(L_9);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mC7CE100D9A43694C5AD6DC5A805A5F09F6558B0B (CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(Rotation.y, Rotation.x, Rotation.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_Rotation_1();
		float L_2 = L_1->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_Rotation_1();
		float L_4 = L_3->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_Rotation_1();
		float L_6 = L_5->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_2, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_7, /*hidden argument*/NULL);
		// t.position = Position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_Position_0();
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.CameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A7B2B53A29F0320C946FA08AE3903BF7F9606A6 (CameraState_t301E7CF2D20E69B26D15D953EDBF5171237FFA67 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.ClearRenderTarget/PassSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassSettings__ctor_mBB40B6576CCC7C2CA4D786DC21DC796AD269E375 (PassSettings_tD7FA78E47A78C8972428E98B09FAF720D1742E16 * __this, const RuntimeMethod* method)
{
	{
		// public RenderPassEvent RenderPassEvent = RenderPassEvent.AfterRenderingTransparents;
		__this->set_RenderPassEvent_0(((int32_t)500));
		// public bool ClearDepth = true;
		__this->set_ClearDepth_1((bool)1);
		// public bool ClearColor = true;
		__this->set_ClearColor_2((bool)1);
		// public Color BackgroundColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_BackgroundColor_3(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePulseU3Ed__15__ctor_m2000882B409880F814008FB8FBE31B5B1449FF31 (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePulseU3Ed__15_System_IDisposable_Dispose_m8E45034282E554878CF2B4BCDD487380D56D4664 (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePulseU3Ed__15_MoveNext_m3F365793262F3C0B335BC32BCBED0FDF23423419 (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (isInitialized)
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isInitialized_5();
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0064;
	}

IL_0028:
	{
		// for (int i = 0; i < states.Length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_002c:
	{
		// UpdateState(ref states[i]);
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_6 = V_1;
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_7 = V_1;
		NullCheck(L_7);
		PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B* L_8 = L_7->get_states_9();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		FrontPlatePulse_UpdateState_m666E20335960487FB0A5912B5DE9AFDD0458CC9F(L_6, (PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		// for (int i = 0; i < states.Length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < states.Length; ++i)
		int32_t L_11 = V_2;
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_12 = V_1;
		NullCheck(L_12);
		PulseStateU5BU5D_t76A7784FFF77C46EE054A7F29B69B526C4C8871B* L_13 = L_12->get_states_9();
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (IsPulsing())
		FrontPlatePulse_t3B87C02099158DB8A13ADE13BFF49BD91109E277 * L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = FrontPlatePulse_IsPulsing_m28BDB760D822CCD1270DE7530C84E0F4E8CE7263(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0028;
		}
	}

IL_006c:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePulseU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m800CE77776CA3F42772FAFC1ACD493580151E302 (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePulseU3Ed__15_System_Collections_IEnumerator_Reset_m5AA779FDD670C3B169F01BE92FEC7EFE51988F05 (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePulseU3Ed__15_System_Collections_IEnumerator_Reset_m5AA779FDD670C3B169F01BE92FEC7EFE51988F05_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/<UpdatePulse>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePulseU3Ed__15_System_Collections_IEnumerator_get_Current_m361B52BAE375CA20BC29FBB36C7E6372995A5B0A (U3CUpdatePulseU3Ed__15_tE133D6E0FD514F05418DCFBD3250A0FCE8986C80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_pinvoke(const PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8& unmarshaled, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_pinvoke& marshaled)
{
	marshaled.___useGlobalBlob_0 = il2cpp_codegen_marshal_string(unmarshaled.get_useGlobalBlob_0());
	marshaled.___blobPosition_1 = il2cpp_codegen_marshal_string(unmarshaled.get_blobPosition_1());
	marshaled.___blobPulse_2 = il2cpp_codegen_marshal_string(unmarshaled.get_blobPulse_2());
	marshaled.___blobFade_3 = il2cpp_codegen_marshal_string(unmarshaled.get_blobFade_3());
	marshaled.___pulseActive_4 = static_cast<int32_t>(unmarshaled.get_pulseActive_4());
	marshaled.___startTime_5 = unmarshaled.get_startTime_5();
}
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_pinvoke_back(const PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_pinvoke& marshaled, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8& unmarshaled)
{
	unmarshaled.set_useGlobalBlob_0(il2cpp_codegen_marshal_string_result(marshaled.___useGlobalBlob_0));
	unmarshaled.set_blobPosition_1(il2cpp_codegen_marshal_string_result(marshaled.___blobPosition_1));
	unmarshaled.set_blobPulse_2(il2cpp_codegen_marshal_string_result(marshaled.___blobPulse_2));
	unmarshaled.set_blobFade_3(il2cpp_codegen_marshal_string_result(marshaled.___blobFade_3));
	bool unmarshaled_pulseActive_temp_4 = false;
	unmarshaled_pulseActive_temp_4 = static_cast<bool>(marshaled.___pulseActive_4);
	unmarshaled.set_pulseActive_4(unmarshaled_pulseActive_temp_4);
	float unmarshaled_startTime_temp_5 = 0.0f;
	unmarshaled_startTime_temp_5 = marshaled.___startTime_5;
	unmarshaled.set_startTime_5(unmarshaled_startTime_temp_5);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_pinvoke_cleanup(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___useGlobalBlob_0);
	marshaled.___useGlobalBlob_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___blobPosition_1);
	marshaled.___blobPosition_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___blobPulse_2);
	marshaled.___blobPulse_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___blobFade_3);
	marshaled.___blobFade_3 = NULL;
}
// Conversion methods for marshalling of: Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_com(const PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8& unmarshaled, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_com& marshaled)
{
	marshaled.___useGlobalBlob_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_useGlobalBlob_0());
	marshaled.___blobPosition_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_blobPosition_1());
	marshaled.___blobPulse_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_blobPulse_2());
	marshaled.___blobFade_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_blobFade_3());
	marshaled.___pulseActive_4 = static_cast<int32_t>(unmarshaled.get_pulseActive_4());
	marshaled.___startTime_5 = unmarshaled.get_startTime_5();
}
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_com_back(const PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_com& marshaled, PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8& unmarshaled)
{
	unmarshaled.set_useGlobalBlob_0(il2cpp_codegen_marshal_bstring_result(marshaled.___useGlobalBlob_0));
	unmarshaled.set_blobPosition_1(il2cpp_codegen_marshal_bstring_result(marshaled.___blobPosition_1));
	unmarshaled.set_blobPulse_2(il2cpp_codegen_marshal_bstring_result(marshaled.___blobPulse_2));
	unmarshaled.set_blobFade_3(il2cpp_codegen_marshal_bstring_result(marshaled.___blobFade_3));
	bool unmarshaled_pulseActive_temp_4 = false;
	unmarshaled_pulseActive_temp_4 = static_cast<bool>(marshaled.___pulseActive_4);
	unmarshaled.set_pulseActive_4(unmarshaled_pulseActive_temp_4);
	float unmarshaled_startTime_temp_5 = 0.0f;
	unmarshaled_startTime_temp_5 = marshaled.___startTime_5;
	unmarshaled.set_startTime_5(unmarshaled_startTime_temp_5);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState
IL2CPP_EXTERN_C void PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshal_com_cleanup(PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___useGlobalBlob_0);
	marshaled.___useGlobalBlob_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___blobPosition_1);
	marshaled.___blobPosition_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___blobPulse_2);
	marshaled.___blobPulse_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___blobFade_3);
	marshaled.___blobFade_3 = NULL;
}
// System.Void Microsoft.MixedReality.GraphicsTools.FrontPlatePulse/PulseState::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulseState__ctor_mD8B396706D06AF489988C78FACD80DC501B6232A (PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * __this, String_t* ___useGlobalBlob0, String_t* ___blobPosition1, String_t* ___blobPulse2, String_t* ___blobFade3, const RuntimeMethod* method)
{
	{
		// pulseActive = false;
		__this->set_pulseActive_4((bool)0);
		// startTime = 0.0f;
		__this->set_startTime_5((0.0f));
		// this.useGlobalBlob = useGlobalBlob;
		String_t* L_0 = ___useGlobalBlob0;
		__this->set_useGlobalBlob_0(L_0);
		// this.blobPosition = blobPosition;
		String_t* L_1 = ___blobPosition1;
		__this->set_blobPosition_1(L_1);
		// this.blobPulse = blobPulse;
		String_t* L_2 = ___blobPulse2;
		__this->set_blobPulse_2(L_2);
		// this.blobFade = blobFade;
		String_t* L_3 = ___blobFade3;
		__this->set_blobFade_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PulseState__ctor_mD8B396706D06AF489988C78FACD80DC501B6232A_AdjustorThunk (RuntimeObject * __this, String_t* ___useGlobalBlob0, String_t* ___blobPosition1, String_t* ___blobPulse2, String_t* ___blobFade3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 * _thisAdjusted = reinterpret_cast<PulseState_tA0564A3B9A5E83755BDE2A10CD1A4E1D14E2D1C8 *>(__this + _offset);
	PulseState__ctor_mD8B396706D06AF489988C78FACD80DC501B6232A(_thisAdjusted, ___useGlobalBlob0, ___blobPosition1, ___blobPulse2, ___blobFade3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m882BDB06BC01602F583034B392E7E8E28AE43C59 (U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::<SmoothNormalsAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * U3CU3Ec__DisplayClass6_0_U3CSmoothNormalsAsyncU3Eb__0_m74E18696AC92399CA0CF615DBF98687E88876CA0 (U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshSmoother_t9D9360415602066031DD763B0CF1B98C12FFAEE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var asyncTask = Task.Run(() => CalculateSmoothNormals(vertices, normals));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_vertices_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_normals_1();
		IL2CPP_RUNTIME_CLASS_INIT(MeshSmoother_t9D9360415602066031DD763B0CF1B98C12FFAEE1_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2;
		L_2 = MeshSmoother_CalculateSmoothNormals_mB8A580B57C364FA7C5A5F63F5B097747FBB061F3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.MeshSmoother/<>c__DisplayClass6_0::<SmoothNormalsAsync>b__1(System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CSmoothNormalsAsyncU3Eb__1_mF7885FEAEF543007809350D199509C0B4893AE9C (U3CU3Ec__DisplayClass6_0_tC8ACEEE00F25CEAA8631114A823D412DE67CD733 * __this, Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m618EE6681E16FCA629C2D77265499E24B0ED8F6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh.SetUVs(smoothNormalUVChannel, i.Result);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_2();
		Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B * L_1 = ___i0;
		NullCheck(L_1);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2;
		L_2 = Task_1_get_Result_m618EE6681E16FCA629C2D77265499E24B0ED8F6A(L_1, /*hidden argument*/Task_1_get_Result_m618EE6681E16FCA629C2D77265499E24B0ED8F6A_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D(L_0, 2, L_2, /*hidden argument*/NULL);
		// }, TaskScheduler.FromCurrentSynchronizationContext());
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::.ctor(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshReference__ctor_mFCA2DF7877F021EDBA82C219933517D2D79D9EE0 (MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	{
		// public MeshReference(Mesh mesh)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Mesh = mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		__this->set_Mesh_0(L_0);
		// referenceCount = 1;
		__this->set_referenceCount_1(1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::Increment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshReference_Increment_m2ABBA830CD27403D9693A1C285FCBE02C1631DE2 (MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A * __this, const RuntimeMethod* method)
{
	{
		// ++referenceCount;
		int32_t L_0 = __this->get_referenceCount_1();
		__this->set_referenceCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::Decrement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshReference_Decrement_m33D27DBCF90F851CCD23BE4D1D59BACD31F207A9 (MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A * __this, const RuntimeMethod* method)
{
	{
		// --referenceCount;
		int32_t L_0 = __this->get_referenceCount_1();
		__this->set_referenceCount_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.MeshSmoother/MeshReference::IsReferenced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshReference_IsReferenced_m8FC9F008A4F6DDEA28EB70B64686457BB9AA6F7A (MeshReference_t1A4C0EB8B2CD0544F4575018C3631B31356F6F3A * __this, const RuntimeMethod* method)
{
	{
		// return referenceCount > 0;
		int32_t L_0 = __this->get_referenceCount_1();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseRoutineU3Ed__24__ctor_mCCE77E07DEA982CA08F980A06576CCBB4F393F3F (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseRoutineU3Ed__24_System_IDisposable_Dispose_m0041E2E088D96D199D92DBAC3AD62EDA45D33F32 (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPulseRoutineU3Ed__24_MoveNext_m6B94A422940629D085164EC1D1F855C0D8C707CB (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00cf;
			}
			case 3:
			{
				goto IL_0119;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float pulseTimer = 0.0f;
		__this->set_U3CpulseTimerU3E5__2_6((0.0f));
		goto IL_0096;
	}

IL_003a:
	{
		// pulseTimer += Time.deltaTime;
		float L_3 = __this->get_U3CpulseTimerU3E5__2_6();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CpulseTimerU3E5__2_6(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// pulseTime = pulseTimer / pulseDuration;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_5 = V_1;
		float L_6 = __this->get_U3CpulseTimerU3E5__2_6();
		float L_7 = __this->get_pulseDuration_3();
		NullCheck(L_5);
		L_5->set_pulseTime_13(((float)((float)L_6/(float)L_7)));
		// if (pulseTime > fadeBegin)
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_pulseTime_13();
		float L_10 = __this->get_fadeBegin_4();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_007f;
		}
	}
	{
		// pulseFade += Time.deltaTime;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_11 = V_1;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_pulseFade_14();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_pulseFade_14(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_007f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0096:
	{
		// while (pulseTimer < pulseDuration)
		float L_15 = __this->get_U3CpulseTimerU3E5__2_6();
		float L_16 = __this->get_pulseDuration_3();
		if ((((float)L_15) < ((float)L_16)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_00d6;
	}

IL_00a6:
	{
		// pulseFade += Time.deltaTime * fadeSpeed;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_17 = V_1;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_pulseFade_14();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21 = __this->get_fadeSpeed_5();
		NullCheck(L_17);
		L_17->set_pulseFade_14(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00cf:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d6:
	{
		// while (pulseFade < 1.0f)
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_pulseFade_14();
		if ((((float)L_23) < ((float)(1.0f))))
		{
			goto IL_00a6;
		}
	}
	{
		// pulseTime = 0.0f;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_24 = V_1;
		NullCheck(L_24);
		L_24->set_pulseTime_13((0.0f));
		goto IL_0120;
	}

IL_00f0:
	{
		// pulseFade -= Time.deltaTime * fadeSpeed;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_25 = V_1;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->get_pulseFade_14();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_29 = __this->get_fadeSpeed_5();
		NullCheck(L_25);
		L_25->set_pulseFade_14(((float)il2cpp_codegen_subtract((float)L_27, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)))));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0120:
	{
		// while (pulseFade > 0.0f)
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->get_pulseFade_14();
		if ((((float)L_31) > ((float)(0.0f))))
		{
			goto IL_00f0;
		}
	}
	{
		// pulseFade = 0.0f;
		ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * L_32 = V_1;
		NullCheck(L_32);
		L_32->set_pulseFade_14((0.0f));
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPulseRoutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEB3E63B0706ED9E536D3081E095CFBEAD65B6623 (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m515CDE2655E36A91A835E1706917B51F1B3162CD (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPulseRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m515CDE2655E36A91A835E1706917B51F1B3162CD_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPulseRoutineU3Ed__24_System_Collections_IEnumerator_get_Current_m82ACC89915A8D234D9CBA05FC84E2D29462C8A71 (U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings/Handedness Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LightSettings_get_HandednessType_mE22A8D01EA70751107D313B9EBEFDEEA1599EA81 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return handedness; }
		int32_t L_0 = __this->get_handedness_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_HandednessType(Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings/Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_HandednessType_mC2224E6790E5A3DF5E6539567632E832F77776C0 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { handedness = value; }
		int32_t L_0 = ___value0;
		__this->set_handedness_0(L_0);
		// set { handedness = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_NearRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightSettings_get_NearRadius_m924F764B8DFE24AFCFC19BCAE325962679D2493A (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return nearRadius; }
		float L_0 = __this->get_nearRadius_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_NearRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_NearRadius_m153AD075491FE5195CCCFF494959B8451AFB63F4 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { nearRadius = value; }
		float L_0 = ___value0;
		__this->set_nearRadius_1(L_0);
		// set { nearRadius = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_FarRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightSettings_get_FarRadius_mC735CD0888453AF245CB81A385EA65C1BCD9DD0A (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return farRadius; }
		float L_0 = __this->get_farRadius_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_FarRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_FarRadius_m1C568F7D5FE18DBF390F2168300FF1C4E3A1E0C4 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { farRadius = value; }
		float L_0 = ___value0;
		__this->set_farRadius_2(L_0);
		// set { farRadius = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_NearDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightSettings_get_NearDistance_m0D36E613023BDEBCBB21F890CF935BA46FADD694 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return nearDistance; }
		float L_0 = __this->get_nearDistance_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_NearDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_NearDistance_m4269F8479E64B032F4F7D3BF0B166ED620EA5A02 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { nearDistance = value; }
		float L_0 = ___value0;
		__this->set_nearDistance_3(L_0);
		// set { nearDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_MinNearSizePercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightSettings_get_MinNearSizePercentage_mE857D331067171DBF783DF0D4B55828E59D31CCE (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return minNearSizePercentage; }
		float L_0 = __this->get_minNearSizePercentage_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_MinNearSizePercentage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_MinNearSizePercentage_mAE7934B8B81AFD17C92CA645219655D363706921 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minNearSizePercentage = value; }
		float L_0 = ___value0;
		__this->set_minNearSizePercentage_4(L_0);
		// set { minNearSizePercentage = value; }
		return;
	}
}
// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_CenterColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LightSettings_get_CenterColor_m5BD76F568BC8FDF1F7D2E03FC263C6DDEB07FDC2 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return centerColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_centerColor_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_CenterColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_CenterColor_mBBEC505F656565CCA955B83800CB4477ECC2911C (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// set { centerColor = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_centerColor_5(L_0);
		// set { centerColor = value; }
		return;
	}
}
// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_MiddleColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LightSettings_get_MiddleColor_mAF5E90FF201C3961C63E694A1354145CD5DE433D (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return middleColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_middleColor_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_MiddleColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_MiddleColor_m28CF6B6F25D198D3495D442835C1943D4F15D499 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// set { middleColor = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_middleColor_6(L_0);
		// set { middleColor = value; }
		return;
	}
}
// UnityEngine.Color Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::get_OuterColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LightSettings_get_OuterColor_m8705C4AADE8CFDA41DFBD4A102CD4EDC547BAA45 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// get { return outerColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_outerColor_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::set_OuterColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings_set_OuterColor_mE5237C4A6627D68242BFEA4C5868E236A7016E8C (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// set { outerColor = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_outerColor_7(L_0);
		// set { outerColor = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.GraphicsTools.ProximityLight/LightSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings__ctor_mFF970AF62D6E3F3443547EBADDAAC8B1E4CD8CB0 (LightSettings_t5EB41D8C2F0F53DA8EC37AB35D8D43E7F910E965 * __this, const RuntimeMethod* method)
{
	{
		// private float nearRadius = 0.05f;
		__this->set_nearRadius_1((0.0500000007f));
		// private float farRadius = 0.2f;
		__this->set_farRadius_2((0.200000003f));
		// private float nearDistance = 0.02f;
		__this->set_nearDistance_3((0.0199999996f));
		// private float minNearSizePercentage = 0.35f;
		__this->set_minNearSizePercentage_4((0.349999994f));
		// private Color centerColor = new Color(54.0f / 255.0f, 142.0f / 255.0f, 250.0f / 255.0f, 0.0f / 255.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (0.211764708f), (0.556862772f), (0.980392158f), (0.0f), /*hidden argument*/NULL);
		__this->set_centerColor_5(L_0);
		// private Color middleColor = new Color(47.0f / 255.0f, 132.0f / 255.0f, 255.0f / 255.0f, 51.0f / 255.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.184313729f), (0.517647088f), (1.0f), (0.200000003f), /*hidden argument*/NULL);
		__this->set_middleColor_6(L_1);
		// private Color outerColor = new Color((82.0f * 3.0f) / 255.0f, (31.0f * 3.0f) / 255.0f, (191.0f * 3.0f) / 255.0f, 255.0f / 255.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.964705884f), (0.36470589f), (2.24705887f), (1.0f), /*hidden argument*/NULL);
		__this->set_outerColor_7(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  RectMask2D_get_softness_m2759F63DF0C023E1B7C442EEEC79B2EFED2F0766_inline (RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Softness;  }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_Softness_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Inequality_mA7251CAFA736D75B2EFACE5B22B642FD0E49EC5A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___lhs0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2Int_op_Equality_m00B7F2874DE276B3F10044CED9F633AFE80D366D_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoundedRectMask2D_get_IndependentRadii_m285D61DFB7B6323EE9C277D6E193B871A339226A_inline (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	{
		// get => independentRadii;
		bool L_0 = __this->get_independentRadii_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  RoundedRectMask2D_get_Radii_m3FC4E2C9472F6D676826F1E903F6F19C72549713_inline (RoundedRectMask2D_t723121DF31E04F0D0E65615FBB809975105033F0 * __this, const RuntimeMethod* method)
{
	{
		// get => radii;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = __this->get_radii_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AcrylicLayerManager_get_UseOnlyMainCamera_mE948C5CA913900B180F6DDD841FDEBD4FF6EE73C_inline (AcrylicLayerManager_t327B9021D0C01311AEE954BDDF7AE6D0009BF327 * __this, const RuntimeMethod* method)
{
	{
		// get { return useOnlyMainCamera; }
		bool L_0 = __this->get_useOnlyMainCamera_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m00B7F2874DE276B3F10044CED9F633AFE80D366D_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
