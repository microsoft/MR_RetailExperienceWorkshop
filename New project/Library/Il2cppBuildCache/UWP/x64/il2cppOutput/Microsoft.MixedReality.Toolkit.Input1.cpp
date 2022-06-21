#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.StatefulInteractable>>
struct Dictionary_2_t8E7C61C07CFC4C64438E4B36263472A5C0AA5DA5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>
struct Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>
struct Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>
struct Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_tF6BC2B8B0620E4DF0BEEE501FCEC44042347B107;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_tDFB5CED1A4E6F4596865F0D1796182482075030E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.XRNode>
struct IEqualityComparer_1_t1B0EF1661DC6769EF5B0E0399FD4DA1473F73473;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>
struct IReadOnlyList_1_tBFDB0D54AD0BB459EB5F87AA9F0382F2874C8C32;
// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t285E9C786B1A45D5BFD6A6849B1197C2EB419477;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>
struct KeyCollection_tD52A1E29FEA055CEAAD2E591A61A2B2129F445F3;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>
struct KeyCollection_t34AB563B00D7830BAA94AFDA7460C2AB11D887F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>
struct KeyCollection_t91B0094F1028025D7B429EA43EB74AAFAEC19958;
// System.Collections.Generic.List`1<System.ValueTuple`2<Microsoft.MixedReality.Toolkit.StatefulInteractable,System.Single>>
struct List_1_t25BF073936CB015C219958850225F0884FD95F4A;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>
struct ValueCollection_t9AA99ADB5C3D2AE4BD22E9668AA73EB1417A0309;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>
struct ValueCollection_tB2A5BFCF0DD60ABEAFFAF953BBFBAC8136A7E689;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>
struct ValueCollection_t9AB06D238B57A27BE41C9FEC7276BDB5F5E3DEEB;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>[]
struct EntryU5BU5D_t06572FF637208A35D3E8549ABAA5FD38283A983F;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>[]
struct EntryU5BU5D_t127ED4CFD8A9D671EE4D57AE1D9506F267177DBE;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>[]
struct EntryU5BU5D_t91BF04F8230189BD2456BC702169D6E7AE4C8F28;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tCB425D76938373FC74EAB732333D66B5FFCD1D99;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
// Microsoft.MixedReality.OpenXR.HandJointLocation[]
struct HandJointLocationU5BU5D_t6E5590AC4D1AECBCECED8773359D0376B48BC8D7;
// Microsoft.MixedReality.Toolkit.HandJointPose[]
struct HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7;
// Microsoft.MixedReality.Toolkit.Input.HandDataContainer
struct HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565;
// Microsoft.MixedReality.OpenXR.HandTracker
struct HandTracker_tD88323F10E93C5EFD564485F4582A7E489E6E71E;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t6DEF4FD20BE3330B8877118E4ED4EF88320AC930;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF;
// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t895ECDE4D1F563E76A1BB9F73D4A1F3C809E32D4;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8;
// Microsoft.MixedReality.Toolkit.Input.SpeechInteractor
struct SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig
struct SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2;
// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tFDA061C6FC4A3E29ACC6254E1A5ED0F6C8A062D7;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider
struct Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78;
// Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer
struct OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4;
// Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider
struct OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E;
// Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider
struct SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer
struct SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8;
// Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer
struct XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23;
// Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider
struct XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84;

IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedArticulatedHandPoses_t57409903DC9FD506EA6DAA8B51392643083DDDB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2256155A1855B49E1A7FD8CD883D7CE44DCD76C8;
IL2CPP_EXTERN_C String_t* _stringLiteral31F25EAE9DA47D005FB450C7CA1C3CFA92E76A74;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB69D5646DE81D63A7B51E526658E010FF8DD60;
IL2CPP_EXTERN_C String_t* _stringLiteral47E24A8E86B3D4C2E3CD23FBEB5A0DBFAD881F41;
IL2CPP_EXTERN_C String_t* _stringLiteral501EF9B0208598BB44671BDC9D19349ADDC43D7C;
IL2CPP_EXTERN_C String_t* _stringLiteral6411DB54EC31BCA5045B0B5B61D5DFBEF587428D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF0D02B95C0F19FBA11ED78EEEC441DFA7002E5;
IL2CPP_EXTERN_C String_t* _stringLiteral9B706422E3E00B737B97ABDE257F4C3B06750939;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E1D8181795FC1940145EAFC842189B94364C01;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m56C38E8677F1863B44BD725927F761DE3646879C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE58765B8C8298043F1B4791654CA25D2E0B0D7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEEF7E60AC1706B667260F5E46B42436588E72AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisSyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2_TisSyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19_m313E77DEF53DEBC2DA7AD011BB3B685F98821DC4_RuntimeMethod_var;

struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
struct HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>
struct Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t06572FF637208A35D3E8549ABAA5FD38283A983F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD52A1E29FEA055CEAAD2E591A61A2B2129F445F3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9AA99ADB5C3D2AE4BD22E9668AA73EB1417A0309 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___entries_1)); }
	inline EntryU5BU5D_t06572FF637208A35D3E8549ABAA5FD38283A983F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t06572FF637208A35D3E8549ABAA5FD38283A983F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t06572FF637208A35D3E8549ABAA5FD38283A983F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___keys_7)); }
	inline KeyCollection_tD52A1E29FEA055CEAAD2E591A61A2B2129F445F3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD52A1E29FEA055CEAAD2E591A61A2B2129F445F3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD52A1E29FEA055CEAAD2E591A61A2B2129F445F3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ___values_8)); }
	inline ValueCollection_t9AA99ADB5C3D2AE4BD22E9668AA73EB1417A0309 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9AA99ADB5C3D2AE4BD22E9668AA73EB1417A0309 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9AA99ADB5C3D2AE4BD22E9668AA73EB1417A0309 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>
struct Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t127ED4CFD8A9D671EE4D57AE1D9506F267177DBE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t34AB563B00D7830BAA94AFDA7460C2AB11D887F7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB2A5BFCF0DD60ABEAFFAF953BBFBAC8136A7E689 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___entries_1)); }
	inline EntryU5BU5D_t127ED4CFD8A9D671EE4D57AE1D9506F267177DBE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t127ED4CFD8A9D671EE4D57AE1D9506F267177DBE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t127ED4CFD8A9D671EE4D57AE1D9506F267177DBE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___keys_7)); }
	inline KeyCollection_t34AB563B00D7830BAA94AFDA7460C2AB11D887F7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t34AB563B00D7830BAA94AFDA7460C2AB11D887F7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t34AB563B00D7830BAA94AFDA7460C2AB11D887F7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ___values_8)); }
	inline ValueCollection_tB2A5BFCF0DD60ABEAFFAF953BBFBAC8136A7E689 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB2A5BFCF0DD60ABEAFFAF953BBFBAC8136A7E689 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB2A5BFCF0DD60ABEAFFAF953BBFBAC8136A7E689 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>
struct Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t91BF04F8230189BD2456BC702169D6E7AE4C8F28* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t91B0094F1028025D7B429EA43EB74AAFAEC19958 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9AB06D238B57A27BE41C9FEC7276BDB5F5E3DEEB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___entries_1)); }
	inline EntryU5BU5D_t91BF04F8230189BD2456BC702169D6E7AE4C8F28* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t91BF04F8230189BD2456BC702169D6E7AE4C8F28** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t91BF04F8230189BD2456BC702169D6E7AE4C8F28* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___keys_7)); }
	inline KeyCollection_t91B0094F1028025D7B429EA43EB74AAFAEC19958 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t91B0094F1028025D7B429EA43EB74AAFAEC19958 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t91B0094F1028025D7B429EA43EB74AAFAEC19958 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ___values_8)); }
	inline ValueCollection_t9AB06D238B57A27BE41C9FEC7276BDB5F5E3DEEB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9AB06D238B57A27BE41C9FEC7276BDB5F5E3DEEB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9AB06D238B57A27BE41C9FEC7276BDB5F5E3DEEB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<Microsoft.MixedReality.Toolkit.HandJointPose>
struct EmptyArray_1_t91B4473C0BBCF98C8F197B3132F0C3B9482D044C  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t91B4473C0BBCF98C8F197B3132F0C3B9482D044C_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t91B4473C0BBCF98C8F197B3132F0C3B9482D044C_StaticFields, ___Value_0)); }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* get_Value_0() const { return ___Value_0; }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____items_1)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
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

// Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.SpeechInteractor Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0::<>4__this
	SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D * ___U3CU3E4__this_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0::keyword
	String_t* ___keyword_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241, ___U3CU3E4__this_0)); }
	inline SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241, ___keyword_1)); }
	inline String_t* get_keyword_1() const { return ___keyword_1; }
	inline String_t** get_address_of_keyword_1() { return &___keyword_1; }
	inline void set_keyword_1(String_t* value)
	{
		___keyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_1), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___firstValue_1)); }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___additionalValues_2)); }
	inline Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t285E9C786B1A45D5BFD6A6849B1197C2EB419477 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tCB425D76938373FC74EAB732333D66B5FFCD1D99* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567, ___firstValue_1)); }
	inline InputProcessor_1_t285E9C786B1A45D5BFD6A6849B1197C2EB419477 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t285E9C786B1A45D5BFD6A6849B1197C2EB419477 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t285E9C786B1A45D5BFD6A6849B1197C2EB419477 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tCB425D76938373FC74EAB732333D66B5FFCD1D99* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tCB425D76938373FC74EAB732333D66B5FFCD1D99** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tCB425D76938373FC74EAB732333D66B5FFCD1D99* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem>
struct SubsystemProvider_1_t860F212A6F7D02CD4E7A4BFC0BED3BBDABEF683D  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.XR.Hand
struct Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF * ___m_Reference_2;

public:
	inline static int32_t get_offset_of_m_UseReference_0() { return static_cast<int32_t>(offsetof(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF, ___m_UseReference_0)); }
	inline bool get_m_UseReference_0() const { return ___m_UseReference_0; }
	inline bool* get_address_of_m_UseReference_0() { return &___m_UseReference_0; }
	inline void set_m_UseReference_0(bool value)
	{
		___m_UseReference_0 = value;
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF, ___m_Action_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reference_2() { return static_cast<int32_t>(offsetof(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF, ___m_Reference_2)); }
	inline InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF * get_m_Reference_2() const { return ___m_Reference_2; }
	inline InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF ** get_address_of_m_Reference_2() { return &___m_Reference_2; }
	inline void set_m_Reference_2(InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF * value)
	{
		___m_Reference_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reference_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF * ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	InputActionReference_tD5FF01006B00062A59CB0A7EEBF2DDE2B5ADAEEF * ___m_Reference_2;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 
{
public:
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;

public:
	inline static int32_t get_offset_of_m_Bits_0() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Bits_0)); }
	inline uint32_t get_m_Bits_0() const { return ___m_Bits_0; }
	inline uint32_t* get_address_of_m_Bits_0() { return &___m_Bits_0; }
	inline void set_m_Bits_0(uint32_t value)
	{
		___m_Bits_0 = value;
	}

	inline static int32_t get_offset_of_m_Mask_1() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Mask_1)); }
	inline int32_t get_m_Mask_1() const { return ___m_Mask_1; }
	inline int32_t* get_address_of_m_Mask_1() { return &___m_Mask_1; }
	inline void set_m_Mask_1(int32_t value)
	{
		___m_Mask_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_Callbacks_1)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___list_0)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_list_0() const { return ___list_0; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___current_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_current_3() const { return ___current_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___current_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem>
struct MRTKSubsystemProvider_1_t050331FD31A947E3AE1DE64195173156127D4EFA  : public SubsystemProvider_1_t860F212A6F7D02CD4E7A4BFC0BED3BBDABEF683D
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.Hand>
struct Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 
{
public:
	// T System.Nullable`1::value
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818, ___value_0)); }
	inline Hand_tB64007EC8D01384426C93432737BA9C5F636A690  get_value_0() const { return ___value_0; }
	inline Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Hand_tB64007EC8D01384426C93432737BA9C5F636A690  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.HandFinger
struct HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct InputActionType_t676BBBF58C7BE3B3ED0D118DDB1FA6E3000EC335 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t676BBBF58C7BE3B3ED0D118DDB1FA6E3000EC335, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatBit_2)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatInt_6)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatShort_10)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatByte_14)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatLong_18)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatULong_20)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityPose
struct MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityPose Microsoft.MixedReality.Toolkit.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackedHandJoint
struct TrackedHandJoint_t39ECEF3295488E64B480D55E0E04960AB3596ADF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t39ECEF3295488E64B480D55E0E04960AB3596ADF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId
struct GestureId_tC632980B274CF8D4D0C44134F09F8FEF4005C990 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureId_tC632980B274CF8D4D0C44134F09F8FEF4005C990, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t7162F2244265BB84754F581B929DBFFC7E3E215A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_t7162F2244265BB84754F581B929DBFFC7E3E215A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.HandDataContainer
struct HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565  : public RuntimeObject
{
public:
	// UnityEngine.XR.XRNode Microsoft.MixedReality.Toolkit.Input.HandDataContainer::<HandNode>k__BackingField
	int32_t ___U3CHandNodeU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::<AlreadyFullQueried>k__BackingField
	bool ___U3CAlreadyFullQueriedU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::<FullQueryValid>k__BackingField
	bool ___U3CFullQueryValidU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.HandJointPose[] Microsoft.MixedReality.Toolkit.Input.HandDataContainer::handJoints
	HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* ___handJoints_3;

public:
	inline static int32_t get_offset_of_U3CHandNodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565, ___U3CHandNodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CHandNodeU3Ek__BackingField_0() const { return ___U3CHandNodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CHandNodeU3Ek__BackingField_0() { return &___U3CHandNodeU3Ek__BackingField_0; }
	inline void set_U3CHandNodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CHandNodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAlreadyFullQueriedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565, ___U3CAlreadyFullQueriedU3Ek__BackingField_1)); }
	inline bool get_U3CAlreadyFullQueriedU3Ek__BackingField_1() const { return ___U3CAlreadyFullQueriedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAlreadyFullQueriedU3Ek__BackingField_1() { return &___U3CAlreadyFullQueriedU3Ek__BackingField_1; }
	inline void set_U3CAlreadyFullQueriedU3Ek__BackingField_1(bool value)
	{
		___U3CAlreadyFullQueriedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFullQueryValidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565, ___U3CFullQueryValidU3Ek__BackingField_2)); }
	inline bool get_U3CFullQueryValidU3Ek__BackingField_2() const { return ___U3CFullQueryValidU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CFullQueryValidU3Ek__BackingField_2() { return &___U3CFullQueryValidU3Ek__BackingField_2; }
	inline void set_U3CFullQueryValidU3Ek__BackingField_2(bool value)
	{
		___U3CFullQueryValidU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_handJoints_3() { return static_cast<int32_t>(offsetof(HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565, ___handJoints_3)); }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* get_handJoints_3() const { return ___handJoints_3; }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101** get_address_of_handJoints_3() { return &___handJoints_3; }
	inline void set_handJoints_3(HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* value)
	{
		___handJoints_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJoints_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.HandJointPose
struct HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityPose Microsoft.MixedReality.Toolkit.HandJointPose::pose
	MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  ___pose_0;
	// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65, ___pose_0)); }
	inline MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  get_pose_0() const { return ___pose_0; }
	inline MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(MixedRealityPose_t44A4B929AC00EE94D504BB4106BE5591B06308B1  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.HandsUtils
struct HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A  : public RuntimeObject
{
public:

public:
};

struct HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.HandsUtils::handFingers
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* ___handFingers_0;
	// UnityEngine.XR.InputDeviceCharacteristics Microsoft.MixedReality.Toolkit.HandsUtils::LeftHandCharacteristics
	uint32_t ___LeftHandCharacteristics_1;
	// UnityEngine.XR.InputDeviceCharacteristics Microsoft.MixedReality.Toolkit.HandsUtils::RightHandCharacteristics
	uint32_t ___RightHandCharacteristics_2;

public:
	inline static int32_t get_offset_of_handFingers_0() { return static_cast<int32_t>(offsetof(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields, ___handFingers_0)); }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* get_handFingers_0() const { return ___handFingers_0; }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F** get_address_of_handFingers_0() { return &___handFingers_0; }
	inline void set_handFingers_0(HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* value)
	{
		___handFingers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_0), (void*)value);
	}

	inline static int32_t get_offset_of_LeftHandCharacteristics_1() { return static_cast<int32_t>(offsetof(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields, ___LeftHandCharacteristics_1)); }
	inline uint32_t get_LeftHandCharacteristics_1() const { return ___LeftHandCharacteristics_1; }
	inline uint32_t* get_address_of_LeftHandCharacteristics_1() { return &___LeftHandCharacteristics_1; }
	inline void set_LeftHandCharacteristics_1(uint32_t value)
	{
		___LeftHandCharacteristics_1 = value;
	}

	inline static int32_t get_offset_of_RightHandCharacteristics_2() { return static_cast<int32_t>(offsetof(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields, ___RightHandCharacteristics_2)); }
	inline uint32_t get_RightHandCharacteristics_2() const { return ___RightHandCharacteristics_2; }
	inline uint32_t* get_address_of_RightHandCharacteristics_2() { return &___RightHandCharacteristics_2; }
	inline void set_RightHandCharacteristics_2(uint32_t value)
	{
		___RightHandCharacteristics_2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider
struct Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78  : public MRTKSubsystemProvider_1_t050331FD31A947E3AE1DE64195173156127D4EFA
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_StateBlock_0)); }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Name_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Layout_7)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Variants_8)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Device_9)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Parent_10)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DefaultState_18)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MinValue_19)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MaxValue_20)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer
struct OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4  : public HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565
{
public:
	// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::handTracker
	HandTracker_tD88323F10E93C5EFD564485F4582A7E489E6E71E * ___handTracker_4;

public:
	inline static int32_t get_offset_of_handTracker_4() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4, ___handTracker_4)); }
	inline HandTracker_tD88323F10E93C5EFD564485F4582A7E489E6E71E * get_handTracker_4() const { return ___handTracker_4; }
	inline HandTracker_tD88323F10E93C5EFD564485F4582A7E489E6E71E ** get_address_of_handTracker_4() { return &___handTracker_4; }
	inline void set_handTracker_4(HandTracker_tD88323F10E93C5EFD564485F4582A7E489E6E71E * value)
	{
		___handTracker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTracker_4), (void*)value);
	}
};

struct OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.HandJointLocation[] Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::HandJointLocations
	HandJointLocationU5BU5D_t6E5590AC4D1AECBCECED8773359D0376B48BC8D7* ___HandJointLocations_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::TryGetEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetEntireHandPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::TryGetJointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetJointPerfMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::TryCalculateEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryCalculateEntireHandPerfMarker_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::TryUpdateJointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryUpdateJointPerfMarker_9;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::TrackedHandJointIndexFromHandJointIndex
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___TrackedHandJointIndexFromHandJointIndex_10;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::HandJointIndexFromTrackedHandJointIndex
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___HandJointIndexFromTrackedHandJointIndex_11;

public:
	inline static int32_t get_offset_of_HandJointLocations_5() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___HandJointLocations_5)); }
	inline HandJointLocationU5BU5D_t6E5590AC4D1AECBCECED8773359D0376B48BC8D7* get_HandJointLocations_5() const { return ___HandJointLocations_5; }
	inline HandJointLocationU5BU5D_t6E5590AC4D1AECBCECED8773359D0376B48BC8D7** get_address_of_HandJointLocations_5() { return &___HandJointLocations_5; }
	inline void set_HandJointLocations_5(HandJointLocationU5BU5D_t6E5590AC4D1AECBCECED8773359D0376B48BC8D7* value)
	{
		___HandJointLocations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandJointLocations_5), (void*)value);
	}

	inline static int32_t get_offset_of_TryGetEntireHandPerfMarker_6() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___TryGetEntireHandPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetEntireHandPerfMarker_6() const { return ___TryGetEntireHandPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetEntireHandPerfMarker_6() { return &___TryGetEntireHandPerfMarker_6; }
	inline void set_TryGetEntireHandPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetEntireHandPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_TryGetJointPerfMarker_7() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___TryGetJointPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetJointPerfMarker_7() const { return ___TryGetJointPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetJointPerfMarker_7() { return &___TryGetJointPerfMarker_7; }
	inline void set_TryGetJointPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetJointPerfMarker_7 = value;
	}

	inline static int32_t get_offset_of_TryCalculateEntireHandPerfMarker_8() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___TryCalculateEntireHandPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryCalculateEntireHandPerfMarker_8() const { return ___TryCalculateEntireHandPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryCalculateEntireHandPerfMarker_8() { return &___TryCalculateEntireHandPerfMarker_8; }
	inline void set_TryCalculateEntireHandPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryCalculateEntireHandPerfMarker_8 = value;
	}

	inline static int32_t get_offset_of_TryUpdateJointPerfMarker_9() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___TryUpdateJointPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryUpdateJointPerfMarker_9() const { return ___TryUpdateJointPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryUpdateJointPerfMarker_9() { return &___TryUpdateJointPerfMarker_9; }
	inline void set_TryUpdateJointPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryUpdateJointPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_TrackedHandJointIndexFromHandJointIndex_10() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___TrackedHandJointIndexFromHandJointIndex_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_TrackedHandJointIndexFromHandJointIndex_10() const { return ___TrackedHandJointIndexFromHandJointIndex_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_TrackedHandJointIndexFromHandJointIndex_10() { return &___TrackedHandJointIndexFromHandJointIndex_10; }
	inline void set_TrackedHandJointIndexFromHandJointIndex_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___TrackedHandJointIndexFromHandJointIndex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedHandJointIndexFromHandJointIndex_10), (void*)value);
	}

	inline static int32_t get_offset_of_HandJointIndexFromTrackedHandJointIndex_11() { return static_cast<int32_t>(offsetof(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_StaticFields, ___HandJointIndexFromTrackedHandJointIndex_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_HandJointIndexFromTrackedHandJointIndex_11() const { return ___HandJointIndexFromTrackedHandJointIndex_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_HandJointIndexFromTrackedHandJointIndex_11() { return &___HandJointIndexFromTrackedHandJointIndex_11; }
	inline void set_HandJointIndexFromTrackedHandJointIndex_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___HandJointIndexFromTrackedHandJointIndex_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandJointIndexFromTrackedHandJointIndex_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider
struct OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E  : public Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer> Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider::hands
	Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * ___hands_1;

public:
	inline static int32_t get_offset_of_hands_1() { return static_cast<int32_t>(offsetof(OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E, ___hands_1)); }
	inline Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * get_hands_1() const { return ___hands_1; }
	inline Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 ** get_address_of_hands_1() { return &___hands_1; }
	inline void set_hands_1(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * value)
	{
		___hands_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hands_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider
struct SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF  : public Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78
{
public:
	// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::config
	SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * ___config_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer> Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::hands
	Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * ___hands_2;

public:
	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF, ___config_1)); }
	inline SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * get_config_1() const { return ___config_1; }
	inline SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_1), (void*)value);
	}

	inline static int32_t get_offset_of_hands_2() { return static_cast<int32_t>(offsetof(SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF, ___hands_2)); }
	inline Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * get_hands_2() const { return ___hands_2; }
	inline Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 ** get_address_of_hands_2() { return &___hands_2; }
	inline void set_hands_2(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * value)
	{
		___hands_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hands_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer
struct SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8  : public HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565
{
public:
	// Microsoft.MixedReality.Toolkit.HandJointPose[] Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::currentGesture
	HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* ___currentGesture_4;
	// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::neutralHandPose
	int32_t ___neutralHandPose_5;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::positionAction
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___positionAction_6;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::rotationAction
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rotationAction_7;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::selectAction
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___selectAction_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::handPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handPosition_9;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::handRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handRotation_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::selectAmount
	float ___selectAmount_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::poseOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___poseOffset_12;

public:
	inline static int32_t get_offset_of_currentGesture_4() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___currentGesture_4)); }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* get_currentGesture_4() const { return ___currentGesture_4; }
	inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101** get_address_of_currentGesture_4() { return &___currentGesture_4; }
	inline void set_currentGesture_4(HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* value)
	{
		___currentGesture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGesture_4), (void*)value);
	}

	inline static int32_t get_offset_of_neutralHandPose_5() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___neutralHandPose_5)); }
	inline int32_t get_neutralHandPose_5() const { return ___neutralHandPose_5; }
	inline int32_t* get_address_of_neutralHandPose_5() { return &___neutralHandPose_5; }
	inline void set_neutralHandPose_5(int32_t value)
	{
		___neutralHandPose_5 = value;
	}

	inline static int32_t get_offset_of_positionAction_6() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___positionAction_6)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_positionAction_6() const { return ___positionAction_6; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_positionAction_6() { return &___positionAction_6; }
	inline void set_positionAction_6(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___positionAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___positionAction_6))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___positionAction_6))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rotationAction_7() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___rotationAction_7)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_rotationAction_7() const { return ___rotationAction_7; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_rotationAction_7() { return &___rotationAction_7; }
	inline void set_rotationAction_7(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___rotationAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rotationAction_7))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___rotationAction_7))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_selectAction_8() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___selectAction_8)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_selectAction_8() const { return ___selectAction_8; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_selectAction_8() { return &___selectAction_8; }
	inline void set_selectAction_8(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___selectAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___selectAction_8))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___selectAction_8))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_handPosition_9() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___handPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_handPosition_9() const { return ___handPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_handPosition_9() { return &___handPosition_9; }
	inline void set_handPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___handPosition_9 = value;
	}

	inline static int32_t get_offset_of_handRotation_10() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___handRotation_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_handRotation_10() const { return ___handRotation_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_handRotation_10() { return &___handRotation_10; }
	inline void set_handRotation_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___handRotation_10 = value;
	}

	inline static int32_t get_offset_of_selectAmount_11() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___selectAmount_11)); }
	inline float get_selectAmount_11() const { return ___selectAmount_11; }
	inline float* get_address_of_selectAmount_11() { return &___selectAmount_11; }
	inline void set_selectAmount_11(float value)
	{
		___selectAmount_11 = value;
	}

	inline static int32_t get_offset_of_poseOffset_12() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8, ___poseOffset_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_poseOffset_12() const { return ___poseOffset_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_poseOffset_12() { return &___poseOffset_12; }
	inline void set_poseOffset_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___poseOffset_12 = value;
	}
};

struct SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryGetEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetEntireHandPerfMarker_13;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryGetJointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetJointPerfMarker_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::JointCount
	int32_t ___JointCount_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryCalculateEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryCalculateEntireHandPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::UpdateGesturePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateGesturePerfMarker_17;

public:
	inline static int32_t get_offset_of_TryGetEntireHandPerfMarker_13() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields, ___TryGetEntireHandPerfMarker_13)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetEntireHandPerfMarker_13() const { return ___TryGetEntireHandPerfMarker_13; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetEntireHandPerfMarker_13() { return &___TryGetEntireHandPerfMarker_13; }
	inline void set_TryGetEntireHandPerfMarker_13(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetEntireHandPerfMarker_13 = value;
	}

	inline static int32_t get_offset_of_TryGetJointPerfMarker_14() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields, ___TryGetJointPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetJointPerfMarker_14() const { return ___TryGetJointPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetJointPerfMarker_14() { return &___TryGetJointPerfMarker_14; }
	inline void set_TryGetJointPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetJointPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_JointCount_15() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields, ___JointCount_15)); }
	inline int32_t get_JointCount_15() const { return ___JointCount_15; }
	inline int32_t* get_address_of_JointCount_15() { return &___JointCount_15; }
	inline void set_JointCount_15(int32_t value)
	{
		___JointCount_15 = value;
	}

	inline static int32_t get_offset_of_TryCalculateEntireHandPerfMarker_16() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields, ___TryCalculateEntireHandPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryCalculateEntireHandPerfMarker_16() const { return ___TryCalculateEntireHandPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryCalculateEntireHandPerfMarker_16() { return &___TryCalculateEntireHandPerfMarker_16; }
	inline void set_TryCalculateEntireHandPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryCalculateEntireHandPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_UpdateGesturePerfMarker_17() { return static_cast<int32_t>(offsetof(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields, ___UpdateGesturePerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateGesturePerfMarker_17() const { return ___UpdateGesturePerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateGesturePerfMarker_17() { return &___UpdateGesturePerfMarker_17; }
	inline void set_UpdateGesturePerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateGesturePerfMarker_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer
struct XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23  : public HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565
{
public:
	// System.Nullable`1<UnityEngine.XR.Hand> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::handDevice
	Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  ___handDevice_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::handDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___handDevices_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::fingerBones
	List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___fingerBones_9;

public:
	inline static int32_t get_offset_of_handDevice_4() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23, ___handDevice_4)); }
	inline Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  get_handDevice_4() const { return ___handDevice_4; }
	inline Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * get_address_of_handDevice_4() { return &___handDevice_4; }
	inline void set_handDevice_4(Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  value)
	{
		___handDevice_4 = value;
	}

	inline static int32_t get_offset_of_handDevices_7() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23, ___handDevices_7)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_handDevices_7() const { return ___handDevices_7; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_handDevices_7() { return &___handDevices_7; }
	inline void set_handDevices_7(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___handDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_9() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23, ___fingerBones_9)); }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * get_fingerBones_9() const { return ___fingerBones_9; }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 ** get_address_of_fingerBones_9() { return &___fingerBones_9; }
	inline void set_fingerBones_9(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * value)
	{
		___fingerBones_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_9), (void*)value);
	}
};

struct XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryGetEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetEntireHandPerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryGetJointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetJointPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::GetTrackedHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetTrackedHandPerfMarker_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryCalculateEntireHandPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryCalculateEntireHandPerfMarker_10;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryUpdateJointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryUpdateJointPerfMarker_11;

public:
	inline static int32_t get_offset_of_TryGetEntireHandPerfMarker_5() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields, ___TryGetEntireHandPerfMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetEntireHandPerfMarker_5() const { return ___TryGetEntireHandPerfMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetEntireHandPerfMarker_5() { return &___TryGetEntireHandPerfMarker_5; }
	inline void set_TryGetEntireHandPerfMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetEntireHandPerfMarker_5 = value;
	}

	inline static int32_t get_offset_of_TryGetJointPerfMarker_6() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields, ___TryGetJointPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetJointPerfMarker_6() const { return ___TryGetJointPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetJointPerfMarker_6() { return &___TryGetJointPerfMarker_6; }
	inline void set_TryGetJointPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetJointPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_GetTrackedHandPerfMarker_8() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields, ___GetTrackedHandPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetTrackedHandPerfMarker_8() const { return ___GetTrackedHandPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetTrackedHandPerfMarker_8() { return &___GetTrackedHandPerfMarker_8; }
	inline void set_GetTrackedHandPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetTrackedHandPerfMarker_8 = value;
	}

	inline static int32_t get_offset_of_TryCalculateEntireHandPerfMarker_10() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields, ___TryCalculateEntireHandPerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryCalculateEntireHandPerfMarker_10() const { return ___TryCalculateEntireHandPerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryCalculateEntireHandPerfMarker_10() { return &___TryCalculateEntireHandPerfMarker_10; }
	inline void set_TryCalculateEntireHandPerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryCalculateEntireHandPerfMarker_10 = value;
	}

	inline static int32_t get_offset_of_TryUpdateJointPerfMarker_11() { return static_cast<int32_t>(offsetof(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields, ___TryUpdateJointPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryUpdateJointPerfMarker_11() const { return ___TryUpdateJointPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryUpdateJointPerfMarker_11() { return &___TryUpdateJointPerfMarker_11; }
	inline void set_TryUpdateJointPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryUpdateJointPerfMarker_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider
struct XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84  : public Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider::hands
	Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * ___hands_1;

public:
	inline static int32_t get_offset_of_hands_1() { return static_cast<int32_t>(offsetof(XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84, ___hands_1)); }
	inline Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * get_hands_1() const { return ___hands_1; }
	inline Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E ** get_address_of_hands_1() { return &___hands_1; }
	inline void set_hands_1(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * value)
	{
		___hands_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hands_1), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t582C3637A932B5EBF01F902C9BF747A344400567  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_BindingMask_8)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_9() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_BindingsStartIndex_9)); }
	inline int32_t get_m_BindingsStartIndex_9() const { return ___m_BindingsStartIndex_9; }
	inline int32_t* get_address_of_m_BindingsStartIndex_9() { return &___m_BindingsStartIndex_9; }
	inline void set_m_BindingsStartIndex_9(int32_t value)
	{
		___m_BindingsStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_10() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_BindingsCount_10)); }
	inline int32_t get_m_BindingsCount_10() const { return ___m_BindingsCount_10; }
	inline int32_t* get_address_of_m_BindingsCount_10() { return &___m_BindingsCount_10; }
	inline void set_m_BindingsCount_10(int32_t value)
	{
		___m_BindingsCount_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_11() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_ControlStartIndex_11)); }
	inline int32_t get_m_ControlStartIndex_11() const { return ___m_ControlStartIndex_11; }
	inline int32_t* get_address_of_m_ControlStartIndex_11() { return &___m_ControlStartIndex_11; }
	inline void set_m_ControlStartIndex_11(int32_t value)
	{
		___m_ControlStartIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_12() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_ControlCount_12)); }
	inline int32_t get_m_ControlCount_12() const { return ___m_ControlCount_12; }
	inline int32_t* get_address_of_m_ControlCount_12() { return &___m_ControlCount_12; }
	inline void set_m_ControlCount_12(int32_t value)
	{
		___m_ControlCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_13() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_ActionIndexInState_13)); }
	inline int32_t get_m_ActionIndexInState_13() const { return ___m_ActionIndexInState_13; }
	inline int32_t* get_address_of_m_ActionIndexInState_13() { return &___m_ActionIndexInState_13; }
	inline void set_m_ActionIndexInState_13(int32_t value)
	{
		___m_ActionIndexInState_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_ActionMap_14)); }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_OnStarted_15)); }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  value)
	{
		___m_OnStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_16() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_OnCanceled_16)); }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  get_m_OnCanceled_16() const { return ___m_OnCanceled_16; }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E * get_address_of_m_OnCanceled_16() { return &___m_OnCanceled_16; }
	inline void set_m_OnCanceled_16(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  value)
	{
		___m_OnCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6, ___m_OnPerformed_17)); }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  value)
	{
		___m_OnPerformed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_Description_28)); }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig
struct SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2  : public BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::synthesizeWhenDevicePresent
	bool ___synthesizeWhenDevicePresent_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::poseOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___poseOffset_5;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::leftHandPosition
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___leftHandPosition_6;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::leftHandRotation
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___leftHandRotation_7;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::leftHandSelect
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___leftHandSelect_8;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::rightHandPosition
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rightHandPosition_9;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::rightHandRotation
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rightHandRotation_10;
	// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::rightHandSelect
	InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rightHandSelect_11;

public:
	inline static int32_t get_offset_of_synthesizeWhenDevicePresent_4() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___synthesizeWhenDevicePresent_4)); }
	inline bool get_synthesizeWhenDevicePresent_4() const { return ___synthesizeWhenDevicePresent_4; }
	inline bool* get_address_of_synthesizeWhenDevicePresent_4() { return &___synthesizeWhenDevicePresent_4; }
	inline void set_synthesizeWhenDevicePresent_4(bool value)
	{
		___synthesizeWhenDevicePresent_4 = value;
	}

	inline static int32_t get_offset_of_poseOffset_5() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___poseOffset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_poseOffset_5() const { return ___poseOffset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_poseOffset_5() { return &___poseOffset_5; }
	inline void set_poseOffset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___poseOffset_5 = value;
	}

	inline static int32_t get_offset_of_leftHandPosition_6() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___leftHandPosition_6)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_leftHandPosition_6() const { return ___leftHandPosition_6; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_leftHandPosition_6() { return &___leftHandPosition_6; }
	inline void set_leftHandPosition_6(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___leftHandPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandPosition_6))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandPosition_6))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_leftHandRotation_7() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___leftHandRotation_7)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_leftHandRotation_7() const { return ___leftHandRotation_7; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_leftHandRotation_7() { return &___leftHandRotation_7; }
	inline void set_leftHandRotation_7(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___leftHandRotation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandRotation_7))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandRotation_7))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_leftHandSelect_8() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___leftHandSelect_8)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_leftHandSelect_8() const { return ___leftHandSelect_8; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_leftHandSelect_8() { return &___leftHandSelect_8; }
	inline void set_leftHandSelect_8(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___leftHandSelect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandSelect_8))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftHandSelect_8))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rightHandPosition_9() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___rightHandPosition_9)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_rightHandPosition_9() const { return ___rightHandPosition_9; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_rightHandPosition_9() { return &___rightHandPosition_9; }
	inline void set_rightHandPosition_9(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___rightHandPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandPosition_9))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandPosition_9))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rightHandRotation_10() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___rightHandRotation_10)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_rightHandRotation_10() const { return ___rightHandRotation_10; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_rightHandRotation_10() { return &___rightHandRotation_10; }
	inline void set_rightHandRotation_10(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___rightHandRotation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandRotation_10))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandRotation_10))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rightHandSelect_11() { return static_cast<int32_t>(offsetof(SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2, ___rightHandSelect_11)); }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  get_rightHandSelect_11() const { return ___rightHandSelect_11; }
	inline InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * get_address_of_rightHandSelect_11() { return &___rightHandSelect_11; }
	inline void set_rightHandSelect_11(InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  value)
	{
		___rightHandSelect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandSelect_11))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightHandSelect_11))->___m_Reference_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328  : public InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75
{
public:

public:
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4  : public InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_tFDA061C6FC4A3E29ACC6254E1A5ED0F6C8A062D7 * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t895ECDE4D1F563E76A1BB9F73D4A1F3C809E32D4 * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_tFDA061C6FC4A3E29ACC6254E1A5ED0F6C8A062D7 * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_tFDA061C6FC4A3E29ACC6254E1A5ED0F6C8A062D7 ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_tFDA061C6FC4A3E29ACC6254E1A5ED0F6C8A062D7 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_t895ECDE4D1F563E76A1BB9F73D4A1F3C809E32D4 * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_t895ECDE4D1F563E76A1BB9F73D4A1F3C809E32D4 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_t895ECDE4D1F563E76A1BB9F73D4A1F3C809E32D4 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_HoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_HoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_SelectEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_SelectExited_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * ___U3CinteractablesHoveredU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * ___U3CinteractablesSelectedU3Ek__BackingField_20;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * ___m_AttachPoseOnSelect_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * ___m_LocalAttachPoseOnSelect_23;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_tF6BC2B8B0620E4DF0BEEE501FCEC44042347B107 * ___m_UnorderedInteractablesHovered_24;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_tDFB5CED1A4E6F4596865F0D1796182482075030E * ___m_UnorderedInteractablesSelected_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_26;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_RegisteredInteractionManager_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnHoverEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnHoverExited_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnSelectEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnSelectExited_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * ___U3ChoverTargetsU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_registered_4() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___registered_4)); }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * get_registered_4() const { return ___registered_4; }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D ** get_address_of_registered_4() { return &___registered_4; }
	inline void set_registered_4(Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * value)
	{
		___registered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registered_4), (void*)value);
	}

	inline static int32_t get_offset_of_unregistered_5() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___unregistered_5)); }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * get_unregistered_5() const { return ___unregistered_5; }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 ** get_address_of_unregistered_5() { return &___unregistered_5; }
	inline void set_unregistered_5(Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * value)
	{
		___unregistered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unregistered_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionManager_6() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionManager_6)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_InteractionManager_6() const { return ___m_InteractionManager_6; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_InteractionManager_6() { return &___m_InteractionManager_6; }
	inline void set_m_InteractionManager_6(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_InteractionManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionLayerMask_7() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionLayerMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_InteractionLayerMask_7() const { return ___m_InteractionLayerMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_InteractionLayerMask_7() { return &___m_InteractionLayerMask_7; }
	inline void set_m_InteractionLayerMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_InteractionLayerMask_7 = value;
	}

	inline static int32_t get_offset_of_m_InteractionLayers_8() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionLayers_8)); }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  get_m_InteractionLayers_8() const { return ___m_InteractionLayers_8; }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 * get_address_of_m_InteractionLayers_8() { return &___m_InteractionLayers_8; }
	inline void set_m_InteractionLayers_8(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  value)
	{
		___m_InteractionLayers_8 = value;
	}

	inline static int32_t get_offset_of_m_AttachTransform_9() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AttachTransform_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_AttachTransform_9() const { return ___m_AttachTransform_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_AttachTransform_9() { return &___m_AttachTransform_9; }
	inline void set_m_AttachTransform_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_AttachTransform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachTransform_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeepSelectedTargetValid_10() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_KeepSelectedTargetValid_10)); }
	inline bool get_m_KeepSelectedTargetValid_10() const { return ___m_KeepSelectedTargetValid_10; }
	inline bool* get_address_of_m_KeepSelectedTargetValid_10() { return &___m_KeepSelectedTargetValid_10; }
	inline void set_m_KeepSelectedTargetValid_10(bool value)
	{
		___m_KeepSelectedTargetValid_10 = value;
	}

	inline static int32_t get_offset_of_m_StartingSelectedInteractable_11() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_StartingSelectedInteractable_11)); }
	inline XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * get_m_StartingSelectedInteractable_11() const { return ___m_StartingSelectedInteractable_11; }
	inline XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF ** get_address_of_m_StartingSelectedInteractable_11() { return &___m_StartingSelectedInteractable_11; }
	inline void set_m_StartingSelectedInteractable_11(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * value)
	{
		___m_StartingSelectedInteractable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectedInteractable_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverEntered_12() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_HoverEntered_12)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_HoverEntered_12() const { return ___m_HoverEntered_12; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_HoverEntered_12() { return &___m_HoverEntered_12; }
	inline void set_m_HoverEntered_12(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_HoverEntered_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverEntered_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverExited_13() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_HoverExited_13)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_HoverExited_13() const { return ___m_HoverExited_13; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_HoverExited_13() { return &___m_HoverExited_13; }
	inline void set_m_HoverExited_13(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_HoverExited_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverExited_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectEntered_14() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_SelectEntered_14)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_SelectEntered_14() const { return ___m_SelectEntered_14; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_SelectEntered_14() { return &___m_SelectEntered_14; }
	inline void set_m_SelectEntered_14(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_SelectEntered_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectEntered_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectExited_15() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_SelectExited_15)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_SelectExited_15() const { return ___m_SelectExited_15; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_SelectExited_15() { return &___m_SelectExited_15; }
	inline void set_m_SelectExited_15(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_SelectExited_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectExited_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowHover_16() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AllowHover_16)); }
	inline bool get_m_AllowHover_16() const { return ___m_AllowHover_16; }
	inline bool* get_address_of_m_AllowHover_16() { return &___m_AllowHover_16; }
	inline void set_m_AllowHover_16(bool value)
	{
		___m_AllowHover_16 = value;
	}

	inline static int32_t get_offset_of_m_AllowSelect_17() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AllowSelect_17)); }
	inline bool get_m_AllowSelect_17() const { return ___m_AllowSelect_17; }
	inline bool* get_address_of_m_AllowSelect_17() { return &___m_AllowSelect_17; }
	inline void set_m_AllowSelect_17(bool value)
	{
		___m_AllowSelect_17 = value;
	}

	inline static int32_t get_offset_of_m_IsPerformingManualInteraction_18() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_IsPerformingManualInteraction_18)); }
	inline bool get_m_IsPerformingManualInteraction_18() const { return ___m_IsPerformingManualInteraction_18; }
	inline bool* get_address_of_m_IsPerformingManualInteraction_18() { return &___m_IsPerformingManualInteraction_18; }
	inline void set_m_IsPerformingManualInteraction_18(bool value)
	{
		___m_IsPerformingManualInteraction_18 = value;
	}

	inline static int32_t get_offset_of_U3CinteractablesHoveredU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CinteractablesHoveredU3Ek__BackingField_19)); }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * get_U3CinteractablesHoveredU3Ek__BackingField_19() const { return ___U3CinteractablesHoveredU3Ek__BackingField_19; }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 ** get_address_of_U3CinteractablesHoveredU3Ek__BackingField_19() { return &___U3CinteractablesHoveredU3Ek__BackingField_19; }
	inline void set_U3CinteractablesHoveredU3Ek__BackingField_19(List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * value)
	{
		___U3CinteractablesHoveredU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractablesHoveredU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractablesSelectedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CinteractablesSelectedU3Ek__BackingField_20)); }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * get_U3CinteractablesSelectedU3Ek__BackingField_20() const { return ___U3CinteractablesSelectedU3Ek__BackingField_20; }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E ** get_address_of_U3CinteractablesSelectedU3Ek__BackingField_20() { return &___U3CinteractablesSelectedU3Ek__BackingField_20; }
	inline void set_U3CinteractablesSelectedU3Ek__BackingField_20(List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * value)
	{
		___U3CinteractablesSelectedU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractablesSelectedU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfirstInteractableSelectedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CfirstInteractableSelectedU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CfirstInteractableSelectedU3Ek__BackingField_21() const { return ___U3CfirstInteractableSelectedU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CfirstInteractableSelectedU3Ek__BackingField_21() { return &___U3CfirstInteractableSelectedU3Ek__BackingField_21; }
	inline void set_U3CfirstInteractableSelectedU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CfirstInteractableSelectedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfirstInteractableSelectedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttachPoseOnSelect_22() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AttachPoseOnSelect_22)); }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * get_m_AttachPoseOnSelect_22() const { return ___m_AttachPoseOnSelect_22; }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 ** get_address_of_m_AttachPoseOnSelect_22() { return &___m_AttachPoseOnSelect_22; }
	inline void set_m_AttachPoseOnSelect_22(Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * value)
	{
		___m_AttachPoseOnSelect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachPoseOnSelect_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalAttachPoseOnSelect_23() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_LocalAttachPoseOnSelect_23)); }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * get_m_LocalAttachPoseOnSelect_23() const { return ___m_LocalAttachPoseOnSelect_23; }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 ** get_address_of_m_LocalAttachPoseOnSelect_23() { return &___m_LocalAttachPoseOnSelect_23; }
	inline void set_m_LocalAttachPoseOnSelect_23(Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * value)
	{
		___m_LocalAttachPoseOnSelect_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalAttachPoseOnSelect_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnorderedInteractablesHovered_24() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_UnorderedInteractablesHovered_24)); }
	inline HashSet_1_tF6BC2B8B0620E4DF0BEEE501FCEC44042347B107 * get_m_UnorderedInteractablesHovered_24() const { return ___m_UnorderedInteractablesHovered_24; }
	inline HashSet_1_tF6BC2B8B0620E4DF0BEEE501FCEC44042347B107 ** get_address_of_m_UnorderedInteractablesHovered_24() { return &___m_UnorderedInteractablesHovered_24; }
	inline void set_m_UnorderedInteractablesHovered_24(HashSet_1_tF6BC2B8B0620E4DF0BEEE501FCEC44042347B107 * value)
	{
		___m_UnorderedInteractablesHovered_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnorderedInteractablesHovered_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnorderedInteractablesSelected_25() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_UnorderedInteractablesSelected_25)); }
	inline HashSet_1_tDFB5CED1A4E6F4596865F0D1796182482075030E * get_m_UnorderedInteractablesSelected_25() const { return ___m_UnorderedInteractablesSelected_25; }
	inline HashSet_1_tDFB5CED1A4E6F4596865F0D1796182482075030E ** get_address_of_m_UnorderedInteractablesSelected_25() { return &___m_UnorderedInteractablesSelected_25; }
	inline void set_m_UnorderedInteractablesSelected_25(HashSet_1_tDFB5CED1A4E6F4596865F0D1796182482075030E * value)
	{
		___m_UnorderedInteractablesSelected_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnorderedInteractablesSelected_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManualInteractionInteractable_26() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_ManualInteractionInteractable_26)); }
	inline RuntimeObject* get_m_ManualInteractionInteractable_26() const { return ___m_ManualInteractionInteractable_26; }
	inline RuntimeObject** get_address_of_m_ManualInteractionInteractable_26() { return &___m_ManualInteractionInteractable_26; }
	inline void set_m_ManualInteractionInteractable_26(RuntimeObject* value)
	{
		___m_ManualInteractionInteractable_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManualInteractionInteractable_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredInteractionManager_27() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_RegisteredInteractionManager_27)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_RegisteredInteractionManager_27() const { return ___m_RegisteredInteractionManager_27; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_RegisteredInteractionManager_27() { return &___m_RegisteredInteractionManager_27; }
	inline void set_m_RegisteredInteractionManager_27(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_RegisteredInteractionManager_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredInteractionManager_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverEntered_29() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnHoverEntered_29)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnHoverEntered_29() const { return ___m_OnHoverEntered_29; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnHoverEntered_29() { return &___m_OnHoverEntered_29; }
	inline void set_m_OnHoverEntered_29(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnHoverEntered_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverEntered_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverExited_30() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnHoverExited_30)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnHoverExited_30() const { return ___m_OnHoverExited_30; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnHoverExited_30() { return &___m_OnHoverExited_30; }
	inline void set_m_OnHoverExited_30(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnHoverExited_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverExited_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectEntered_31() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnSelectEntered_31)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnSelectEntered_31() const { return ___m_OnSelectEntered_31; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnSelectEntered_31() { return &___m_OnSelectEntered_31; }
	inline void set_m_OnSelectEntered_31(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnSelectEntered_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectEntered_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectExited_32() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnSelectExited_32)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnSelectExited_32() const { return ___m_OnSelectExited_32; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnSelectExited_32() { return &___m_OnSelectExited_32; }
	inline void set_m_OnSelectExited_32(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnSelectExited_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectExited_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChoverTargetsU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3ChoverTargetsU3Ek__BackingField_33)); }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * get_U3ChoverTargetsU3Ek__BackingField_33() const { return ___U3ChoverTargetsU3Ek__BackingField_33; }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 ** get_address_of_U3ChoverTargetsU3Ek__BackingField_33() { return &___U3ChoverTargetsU3Ek__BackingField_33; }
	inline void set_U3ChoverTargetsU3Ek__BackingField_33(List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * value)
	{
		___U3ChoverTargetsU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChoverTargetsU3Ek__BackingField_33), (void*)value);
	}
};

struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___s_InteractionManagerCache_28;

public:
	inline static int32_t get_offset_of_s_InteractionManagerCache_28() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F_StaticFields, ___s_InteractionManagerCache_28)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_s_InteractionManagerCache_28() const { return ___s_InteractionManagerCache_28; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_s_InteractionManagerCache_28() { return &___s_InteractionManagerCache_28; }
	inline void set_s_InteractionManagerCache_28(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___s_InteractionManagerCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionManagerCache_28), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechInteractor
struct SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D  : public XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::voiceCommandTriggerTime
	float ___voiceCommandTriggerTime_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.StatefulInteractable>> Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::keywordDictionary
	Dictionary_2_t8E7C61C07CFC4C64438E4B36263472A5C0AA5DA5 * ___keywordDictionary_35;
	// System.Collections.Generic.List`1<System.ValueTuple`2<Microsoft.MixedReality.Toolkit.StatefulInteractable,System.Single>> Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::selectedInteractables
	List_1_t25BF073936CB015C219958850225F0884FD95F4A * ___selectedInteractables_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::exitingSelect
	bool ___exitingSelect_37;

public:
	inline static int32_t get_offset_of_voiceCommandTriggerTime_34() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D, ___voiceCommandTriggerTime_34)); }
	inline float get_voiceCommandTriggerTime_34() const { return ___voiceCommandTriggerTime_34; }
	inline float* get_address_of_voiceCommandTriggerTime_34() { return &___voiceCommandTriggerTime_34; }
	inline void set_voiceCommandTriggerTime_34(float value)
	{
		___voiceCommandTriggerTime_34 = value;
	}

	inline static int32_t get_offset_of_keywordDictionary_35() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D, ___keywordDictionary_35)); }
	inline Dictionary_2_t8E7C61C07CFC4C64438E4B36263472A5C0AA5DA5 * get_keywordDictionary_35() const { return ___keywordDictionary_35; }
	inline Dictionary_2_t8E7C61C07CFC4C64438E4B36263472A5C0AA5DA5 ** get_address_of_keywordDictionary_35() { return &___keywordDictionary_35; }
	inline void set_keywordDictionary_35(Dictionary_2_t8E7C61C07CFC4C64438E4B36263472A5C0AA5DA5 * value)
	{
		___keywordDictionary_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordDictionary_35), (void*)value);
	}

	inline static int32_t get_offset_of_selectedInteractables_36() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D, ___selectedInteractables_36)); }
	inline List_1_t25BF073936CB015C219958850225F0884FD95F4A * get_selectedInteractables_36() const { return ___selectedInteractables_36; }
	inline List_1_t25BF073936CB015C219958850225F0884FD95F4A ** get_address_of_selectedInteractables_36() { return &___selectedInteractables_36; }
	inline void set_selectedInteractables_36(List_1_t25BF073936CB015C219958850225F0884FD95F4A * value)
	{
		___selectedInteractables_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedInteractables_36), (void*)value);
	}

	inline static int32_t get_offset_of_exitingSelect_37() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D, ___exitingSelect_37)); }
	inline bool get_exitingSelect_37() const { return ___exitingSelect_37; }
	inline bool* get_address_of_exitingSelect_37() { return &___exitingSelect_37; }
	inline void set_exitingSelect_37(bool value)
	{
		___exitingSelect_37 = value;
	}
};

struct SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::OnKeywordRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnKeywordRecognizedPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::ProcessInteractorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessInteractorPerfMarker_39;

public:
	inline static int32_t get_offset_of_OnKeywordRecognizedPerfMarker_38() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D_StaticFields, ___OnKeywordRecognizedPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnKeywordRecognizedPerfMarker_38() const { return ___OnKeywordRecognizedPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnKeywordRecognizedPerfMarker_38() { return &___OnKeywordRecognizedPerfMarker_38; }
	inline void set_OnKeywordRecognizedPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnKeywordRecognizedPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ProcessInteractorPerfMarker_39() { return static_cast<int32_t>(offsetof(SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D_StaticFields, ___ProcessInteractorPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessInteractorPerfMarker_39() const { return ___ProcessInteractorPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessInteractorPerfMarker_39() { return &___ProcessInteractorPerfMarker_39; }
	inline void set_ProcessInteractorPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessInteractorPerfMarker_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.HandJointPose[]
struct HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  m_Items[1];

public:
	inline HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};


// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m68410B65EA4A21A8718A5DAA92AAAC7179719101_gshared (const RuntimeMethod* method);
// !!0[] System.Array::Empty<Microsoft.MixedReality.Toolkit.HandJointPose>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_gshared_inline (const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.InputControl`1<System.Int32>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_gshared (InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F_gshared (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D_gshared (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26_gshared (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.Hand>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_gshared_inline (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.Hand>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hand_tB64007EC8D01384426C93432737BA9C5F636A690  Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_gshared (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.Hand>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6_gshared (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);

// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>::get_Item(!0)
inline OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03 (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * (*) (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.HandDataContainer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>::.ctor()
inline void Dictionary_2__ctor_mE58765B8C8298043F1B4791654CA25D2E0B0D7F7 (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandContainer__ctor_mC0F8A01B14F6F171A5AF944D15A74760811219AC (OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * __this, int32_t ___handNode0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRHandContainer>::Add(!0,!1)
inline void Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * __this, int32_t ___key0, OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 *, int32_t, OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFA515785A4AA0E8EB6CD6EA178E5EEAEADFAEF9E (Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SpeechInteractor::OnKeywordRecognized(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechInteractor_OnKeywordRecognized_mA43B6D557A5AA22D42D8206F58E04E404B1D3331 (SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D * __this, String_t* ___keyword0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem>()
inline SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * XRSubsystemHelpers_GetConfiguration_TisSyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2_TisSyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19_m313E77DEF53DEBC2DA7AD011BB3B685F98821DC4 (const RuntimeMethod* method)
{
	return ((  SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m68410B65EA4A21A8718A5DAA92AAAC7179719101_gshared)(method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>::.ctor()
inline void Dictionary_2__ctor_m56C38E8677F1863B44BD725927F761DE3646879C (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_LeftHandPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandPosition_mFF008A01F3760205A6971D929247209FE7245645_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_LeftHandRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandRotation_mE406EB7320E86EE7BF2E2F2855E3E1DC648BD049_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_LeftHandSelect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandSelect_m6849A7F368205A854886EA3FAB5D762E9F3B149E_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_PoseOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SyntheticHandsConfig_get_PoseOffset_m051E935F5C1CB2D4DD9B2F8D4591FBF0B0F09DD2_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::.ctor(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId,UnityEngine.InputSystem.InputActionProperty,UnityEngine.InputSystem.InputActionProperty,UnityEngine.InputSystem.InputActionProperty,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer__ctor_m79C4B9DF6F289279767743C153E2924B4AF29836 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___handNode0, int32_t ___baseHandPose1, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___positionAction2, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rotationAction3, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___selectAction4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___poseOffset5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>::Add(!0,!1)
inline void Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * __this, int32_t ___key0, SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 *, int32_t, SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_RightHandPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandPosition_m0E8814CDCF1DEBC2CE81A0372705A3B1AA1FC2EF_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_RightHandRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandRotation_m654A33C8FA9C4E076607EC8F960F77BB8459A122_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionProperty Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::get_RightHandSelect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandSelect_mE29A9242E3BCFB2DED30DD372001D1F3645D37B7_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer>::get_Item(!0)
inline SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9 (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * (*) (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::get_NeutralPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SyntheticHandContainer_get_NeutralPose_mC690B74832D88168CC4C82EF17F36888D9D5DDD8_inline (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::set_NeutralPose(Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyntheticHandContainer_set_NeutralPose_mBFF16795B64C8070E83F8195BBAECBFE9AA0286F_inline (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsConfig::ShouldSynthesize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyntheticHandsConfig_ShouldSynthesize_m7F010126F8578C4AC3C7776854EB63973DE260BB (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Microsoft.MixedReality.Toolkit.HandJointPose>()
inline HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_inline (const RuntimeMethod* method)
{
	return ((  HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* (*) (const RuntimeMethod*))Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_gshared_inline)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.HandDataContainer::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandDataContainer__ctor_m0A536D41787496C108D46E75201F201BEC580F2B (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, int32_t ___handNode0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::get_AlreadyFullQueried()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryCalculateEntireHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer_TryCalculateEntireHand_m63A55ABE0F1AD41E55E36AF4AD77DA480EB871FF (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::get_FullQueryValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.HandsUtils::ConvertToIndex(Microsoft.MixedReality.Toolkit.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C (int32_t ___joint0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandDataContainer::set_FullQueryValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandDataContainer::set_AlreadyFullQueried(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataContainer_set_AlreadyFullQueried_m20E33DEF23CDBB79F33C7A28194133305A131619_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::UpdateGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer_UpdateGesture_m1DF3F6E56801B59661FDA0DCB3926F3B6DB53037 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD (InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputAction::get_activeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * InputAction_get_activeControl_m8DD0B3C976BAA15D07E21979F78257608D80E439 (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * InputControl_get_device_mA49E8B6B777505F88817C2C610BCBD2299AFD024_inline (InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * TrackedDevice_get_trackingState_mC0B4582ED67C221CDCE37C3FE814007622F4E2D6_inline (TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.InputControl`1<System.Int32>::ReadValue()
inline int32_t InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6 (InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControl_1_t026C0E1FEDDF6DB86DC656FCA29D51FCB45DEF75 *, const RuntimeMethod*))InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_gshared)(__this, method);
}
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 *, const RuntimeMethod*))InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F_gshared)(__this, method);
}
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 *, const RuntimeMethod*))InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D_gshared)(__this, method);
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.PlayspaceUtilities::get_ReferenceTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PlayspaceUtilities_get_ReferenceTransform_m6D5099E20E141CD3596741C12CFD368ECE7DD84F (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.HandJointPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointPose_get_Position_m46743626C84F363A029113BFC1F2A103D2B27B52 (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.HandJointPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  HandJointPose_get_Rotation_mABA16DD7601752C3853D62FF40C5DF3385156562 (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandJointPose_get_Radius_m8FEC90A8B988CC7B1798B668E15CA260D885DB80_inline (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.HandJointPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointPose__ctor_mA6DFCF7C4739E66180C661317D0AD4B685EA742F (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, float ___radius2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHandPoses::GetGesturePose(Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId,Microsoft.MixedReality.Toolkit.HandJointPose[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHandPoses_GetGesturePose_mE15C3FD72103E98C4E95D5736F1717CE67F37762 (int32_t ___gesture0, HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101** ___poseData1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26 (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 *, const RuntimeMethod*))InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.HandJointPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointPose_set_Position_m11C420FA7C0EB58BC257628DC9C678355B5EA592 (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.HandJointPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointPose_set_Rotation_m9C93F4D57994CB369148F0C4286A89DC49DDB105 (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.HandJointPose::set_Radius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandJointPose_set_Radius_m17B3DD227661069BC5991F562C41CFDAA66FE528_inline (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.XR.XRNode Microsoft.MixedReality.Toolkit.Input.HandDataContainer::get_HandNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandDataContainer_get_HandNode_mE88841B4535ABFBF488D28D1A9C62C12286366CC_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor(System.Int32)
inline void List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, int32_t, const RuntimeMethod*))List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared)(__this, method);
}
// System.Nullable`1<UnityEngine.XR.Hand> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::GetTrackedHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  XRSDKHandContainer_GetTrackedHand_mD7D276839E2509601ED8BDD54BB26AF5D63D26CF (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryCalculateEntireHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKHandContainer_TryCalculateEntireHand_mE4DEEBC3CED37D816405D2337097461F12AC86CB (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.Hand>::get_HasValue()
inline bool Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_inline (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *, const RuntimeMethod*))Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.Hand>::get_Value()
inline Hand_tB64007EC8D01384426C93432737BA9C5F636A690  Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87 (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, const RuntimeMethod* method)
{
	return ((  Hand_tB64007EC8D01384426C93432737BA9C5F636A690  (*) (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *, const RuntimeMethod*))Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.Hand::TryGetRootBone(UnityEngine.XR.Bone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetRootBone_m8E5DF1CA9963878F23AD9099E5E80399DAEC02AF (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * ___boneOut0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryUpdateJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.Bone,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91 (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, int32_t ___jointID0, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  ___bone1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playspaceTransform2, const RuntimeMethod* method);
// UnityEngine.XR.HandFinger Microsoft.MixedReality.Toolkit.HandsUtils::GetFingerFromJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandsUtils_GetFingerFromJoint_m1E268FEEB76E57E91ADC917E9ECE1D1D1D5CF14E (int32_t ___joint0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, int32_t ___finger0, List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___bonesOut1, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.HandsUtils::GetOffsetFromBase(Microsoft.MixedReality.Toolkit.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandsUtils_GetOffsetFromBase_mB3D81718E4825C552224194C90EEE1FBE5E54CE4 (int32_t ___joint0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___usage0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.Hand>::.ctor(!0)
inline void Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6 (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 , const RuntimeMethod*))Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.TrackedHandJoint Microsoft.MixedReality.Toolkit.HandsUtils::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandsUtils_ConvertToTrackedHandJoint_mFCB6375331144BFC0A3D2CCFDE8C5374ED21E9B2 (int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>::get_Item(!0)
inline XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293 (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * (*) (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>::.ctor()
inline void Dictionary_2__ctor_mEEF7E60AC1706B667260F5E46B42436588E72AAB (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKHandContainer__ctor_mFC4296B3E22CA3254BA76DB7AFA9A8DD9D637728 (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, int32_t ___handNode0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer>::Add(!0,!1)
inline void Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199 (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * __this, int32_t ___key0, XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E *, int32_t, XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Update_m924CE7656EF2864F8AC3B73C823C1107D6D8AC59 (OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hands[XRNode.LeftHand].Reset();
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_0 = __this->get_hands_1();
		NullCheck(L_0);
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_1;
		L_1 = Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03(L_0, 4, /*hidden argument*/Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		NullCheck(L_1);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_1, /*hidden argument*/NULL);
		// hands[XRNode.RightHand].Reset();
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_2 = __this->get_hands_1();
		NullCheck(L_2);
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_3;
		L_3 = Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03(L_2, 5, /*hidden argument*/Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		NullCheck(L_3);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider::TryGetEntireHand(UnityEngine.XR.XRNode,System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_TryGetEntireHand_mCA8BA2567D629C78DC59C23A9429E486E22F0DD1 (OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E * __this, int32_t ___handNode0, RuntimeObject** ___jointPoses1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return hands[handNode].TryGetEntireHand(out jointPoses);
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_0 = __this->get_hands_1();
		int32_t L_1 = ___handNode0;
		NullCheck(L_0);
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_2;
		L_2 = Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		RuntimeObject** L_3 = ___jointPoses1;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject** >::Invoke(4 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetEntireHand(System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&) */, L_2, (RuntimeObject**)L_3);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_TryGetJoint_m683BBCAFE33097C1ED00E656644DDEB784924AB4 (OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E * __this, int32_t ___joint0, int32_t ___handNode1, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___jointPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return hands[handNode].TryGetJoint(joint, out jointPose);
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_0 = __this->get_hands_1();
		int32_t L_1 = ___handNode1;
		NullCheck(L_0);
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_2;
		L_2 = Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m85A8297209B68E6D23F5D1102D959B1431165E03_RuntimeMethod_var);
		int32_t L_3 = ___joint0;
		HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_4 = ___jointPose2;
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtFuncInvoker2< bool, int32_t, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * >::Invoke(5 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,Microsoft.MixedReality.Toolkit.HandJointPose&) */, L_2, L_3, (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_4);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.OpenXRHandsSubsystem/OpenXRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider__ctor_mF873AD3C2FACB2AEDE989EFE511220AFF81DC6AA (OpenXRProvider_t2BB853FF52FBBF15F97907DA2573F66A914F4E1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE58765B8C8298043F1B4791654CA25D2E0B0D7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<XRNode, OpenXRHandContainer> hands = new Dictionary<XRNode, OpenXRHandContainer>
		// {
		//     { XRNode.LeftHand, new OpenXRHandContainer(XRNode.LeftHand) },
		//     { XRNode.RightHand, new OpenXRHandContainer(XRNode.RightHand) }
		// };
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_0 = (Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 *)il2cpp_codegen_object_new(Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE58765B8C8298043F1B4791654CA25D2E0B0D7F7(L_0, /*hidden argument*/Dictionary_2__ctor_mE58765B8C8298043F1B4791654CA25D2E0B0D7F7_RuntimeMethod_var);
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_1 = L_0;
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_2 = (OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 *)il2cpp_codegen_object_new(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_il2cpp_TypeInfo_var);
		OpenXRHandContainer__ctor_mC0F8A01B14F6F171A5AF944D15A74760811219AC(L_2, 4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA(L_1, 4, L_2, /*hidden argument*/Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA_RuntimeMethod_var);
		Dictionary_2_t5C470017FDF5197A30DA8587693272328DB0EB88 * L_3 = L_1;
		OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 * L_4 = (OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4 *)il2cpp_codegen_object_new(OpenXRHandContainer_tA09DED7C87B99010F4BEC4E78024B7C4A1DB17D4_il2cpp_TypeInfo_var);
		OpenXRHandContainer__ctor_mC0F8A01B14F6F171A5AF944D15A74760811219AC(L_4, 5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA(L_3, 5, L_4, /*hidden argument*/Dictionary_2_Add_m1F6404E2EBA4D5A647C07126DE025BAA845C00DA_RuntimeMethod_var);
		__this->set_hands_1(L_3);
		Provider__ctor_mFA515785A4AA0E8EB6CD6EA178E5EEAEADFAEF9E(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mFF6CB88534F2947745F5B5BFB84993E08925CCF8 (U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SpeechInteractor/<>c__DisplayClass6_0::<RegisterInteractable>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CRegisterInteractableU3Eb__0_m7E0B99E1ECABCE8438A77A69D44C160F7EA0C5B8 (U3CU3Ec__DisplayClass6_0_t29DA2E305CF542C13E7E390FB909D0C9FDA45241 * __this, const RuntimeMethod* method)
{
	{
		// subsystem.CreateOrGetEventForPhrase(keyword).AddListener(() => OnKeywordRecognized(keyword));
		SpeechInteractor_t242D91E24A4C636AFB9ED162ECF0389D3FFE072D * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_keyword_1();
		NullCheck(L_0);
		SpeechInteractor_OnKeywordRecognized_mA43B6D557A5AA22D42D8206F58E04E404B1D3331(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthesisProvider__ctor_m15BE629E12B2EBB40F117830BC72869B7E7CE999 (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m56C38E8677F1863B44BD725927F761DE3646879C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisSyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2_TisSyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19_m313E77DEF53DEBC2DA7AD011BB3B685F98821DC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SynthesisProvider() : base()
		Provider__ctor_mFA515785A4AA0E8EB6CD6EA178E5EEAEADFAEF9E(__this, /*hidden argument*/NULL);
		// config = XRSubsystemHelpers.GetConfiguration<SyntheticHandsConfig, SyntheticHandsSubsystem>();
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_0;
		L_0 = XRSubsystemHelpers_GetConfiguration_TisSyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2_TisSyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19_m313E77DEF53DEBC2DA7AD011BB3B685F98821DC4(/*hidden argument*/XRSubsystemHelpers_GetConfiguration_TisSyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2_TisSyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19_m313E77DEF53DEBC2DA7AD011BB3B685F98821DC4_RuntimeMethod_var);
		__this->set_config_1(L_0);
		// hands = new Dictionary<XRNode, SyntheticHandContainer>
		// {
		//     { XRNode.LeftHand, new SyntheticHandContainer(
		//                                                 XRNode.LeftHand,
		//                                                 GestureId.Flat,
		//                                                 config.LeftHandPosition,
		//                                                 config.LeftHandRotation,
		//                                                 config.LeftHandSelect,
		//                                                 config.PoseOffset) },
		//     { XRNode.RightHand, new SyntheticHandContainer(
		//                                                 XRNode.RightHand,
		//                                                 GestureId.Flat,
		//                                                 config.RightHandPosition,
		//                                                 config.RightHandRotation,
		//                                                 config.RightHandSelect,
		//                                                 config.PoseOffset) }
		// };
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_1 = (Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 *)il2cpp_codegen_object_new(Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m56C38E8677F1863B44BD725927F761DE3646879C(L_1, /*hidden argument*/Dictionary_2__ctor_m56C38E8677F1863B44BD725927F761DE3646879C_RuntimeMethod_var);
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_2 = L_1;
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_3 = __this->get_config_1();
		NullCheck(L_3);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_4;
		L_4 = SyntheticHandsConfig_get_LeftHandPosition_mFF008A01F3760205A6971D929247209FE7245645_inline(L_3, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_5 = __this->get_config_1();
		NullCheck(L_5);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_6;
		L_6 = SyntheticHandsConfig_get_LeftHandRotation_mE406EB7320E86EE7BF2E2F2855E3E1DC648BD049_inline(L_5, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_7 = __this->get_config_1();
		NullCheck(L_7);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_8;
		L_8 = SyntheticHandsConfig_get_LeftHandSelect_m6849A7F368205A854886EA3FAB5D762E9F3B149E_inline(L_7, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_9 = __this->get_config_1();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = SyntheticHandsConfig_get_PoseOffset_m051E935F5C1CB2D4DD9B2F8D4591FBF0B0F09DD2_inline(L_9, /*hidden argument*/NULL);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_11 = (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 *)il2cpp_codegen_object_new(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		SyntheticHandContainer__ctor_m79C4B9DF6F289279767743C153E2924B4AF29836(L_11, 4, 1, L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A(L_2, 4, L_11, /*hidden argument*/Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A_RuntimeMethod_var);
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_12 = L_2;
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_13 = __this->get_config_1();
		NullCheck(L_13);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_14;
		L_14 = SyntheticHandsConfig_get_RightHandPosition_m0E8814CDCF1DEBC2CE81A0372705A3B1AA1FC2EF_inline(L_13, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_15 = __this->get_config_1();
		NullCheck(L_15);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_16;
		L_16 = SyntheticHandsConfig_get_RightHandRotation_m654A33C8FA9C4E076607EC8F960F77BB8459A122_inline(L_15, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_17 = __this->get_config_1();
		NullCheck(L_17);
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_18;
		L_18 = SyntheticHandsConfig_get_RightHandSelect_mE29A9242E3BCFB2DED30DD372001D1F3645D37B7_inline(L_17, /*hidden argument*/NULL);
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_19 = __this->get_config_1();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = SyntheticHandsConfig_get_PoseOffset_m051E935F5C1CB2D4DD9B2F8D4591FBF0B0F09DD2_inline(L_19, /*hidden argument*/NULL);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_21 = (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 *)il2cpp_codegen_object_new(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		SyntheticHandContainer__ctor_m79C4B9DF6F289279767743C153E2924B4AF29836(L_21, 5, 1, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_12);
		Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A(L_12, 5, L_21, /*hidden argument*/Dictionary_2_Add_mB86F5E8F48D5C4BB842F300CA590F86C22E5AD6A_RuntimeMethod_var);
		__this->set_hands_2(L_12);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthesisProvider_Update_m1DEC9BF9BAE0ECF7BCEE2DB84C7672EA2ACC9BA8 (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hands[XRNode.LeftHand].Reset();
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_0 = __this->get_hands_2();
		NullCheck(L_0);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_1;
		L_1 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_0, 4, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		NullCheck(L_1);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_1, /*hidden argument*/NULL);
		// hands[XRNode.RightHand].Reset();
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_2 = __this->get_hands_2();
		NullCheck(L_2);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_3;
		L_3 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_2, 5, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		NullCheck(L_3);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::GetNeutralPose(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SynthesisProvider_GetNeutralPose_mAF8AD20596BE6F74A7C2BE10BD0EDD01988E7A36 (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, int32_t ___handNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return hands[handNode].NeutralPose;
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_0 = __this->get_hands_2();
		int32_t L_1 = ___handNode0;
		NullCheck(L_0);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_2;
		L_2 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SyntheticHandContainer_get_NeutralPose_mC690B74832D88168CC4C82EF17F36888D9D5DDD8_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::SetNeutralPose(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthesisProvider_SetNeutralPose_m1514FEC2B24F4E9EFB7BFD0CA1F35B9BC856136B (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, int32_t ___handNode0, int32_t ___poseId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hands[handNode].NeutralPose = poseId;
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_0 = __this->get_hands_2();
		int32_t L_1 = ___handNode0;
		NullCheck(L_0);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_2;
		L_2 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		int32_t L_3 = ___poseId1;
		NullCheck(L_2);
		SyntheticHandContainer_set_NeutralPose_mBFF16795B64C8070E83F8195BBAECBFE9AA0286F_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::TryGetEntireHand(UnityEngine.XR.XRNode,System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SynthesisProvider_TryGetEntireHand_m933E03F6E0E5CFF5D749DEB7D94A61D39FE1F0BD (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, int32_t ___handNode0, RuntimeObject** ___jointPoses1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!config.ShouldSynthesize())
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_0 = __this->get_config_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = SyntheticHandsConfig_ShouldSynthesize_m7F010126F8578C4AC3C7776854EB63973DE260BB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// jointPoses = System.Array.Empty<HandJointPose>();
		RuntimeObject** L_2 = ___jointPoses1;
		HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_3;
		L_3 = Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_inline(/*hidden argument*/Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_RuntimeMethod_var);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return hands[handNode].TryGetEntireHand(out jointPoses);
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_4 = __this->get_hands_2();
		int32_t L_5 = ___handNode0;
		NullCheck(L_4);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_6;
		L_6 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		RuntimeObject** L_7 = ___jointPoses1;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject** >::Invoke(4 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetEntireHand(System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&) */, L_6, (RuntimeObject**)L_7);
		return L_8;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SynthesisProvider::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SynthesisProvider_TryGetJoint_m340EA75EA953A8A9C3E42EA7AE039A45F03AB4CB (SynthesisProvider_t7F1A4E92E07712F05C7614C0D3C2DE881FE348EF * __this, int32_t ___joint0, int32_t ___handNode1, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___jointPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!config.ShouldSynthesize())
		SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * L_0 = __this->get_config_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = SyntheticHandsConfig_ShouldSynthesize_m7F010126F8578C4AC3C7776854EB63973DE260BB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// jointPose = default;
		HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_2 = ___jointPose2;
		il2cpp_codegen_initobj(L_2, sizeof(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 ));
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return hands[handNode].TryGetJoint(joint, out jointPose);
		Dictionary_2_tD5E8E533B9E2EF20696E0A5D0C337154694477E4 * L_3 = __this->get_hands_2();
		int32_t L_4 = ___handNode1;
		NullCheck(L_3);
		SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * L_5;
		L_5 = Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m9A0AC22AF7096D1EE1D38B29091E29B38CB127F9_RuntimeMethod_var);
		int32_t L_6 = ___joint0;
		HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_7 = ___jointPose2;
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtFuncInvoker2< bool, int32_t, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * >::Invoke(5 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,Microsoft.MixedReality.Toolkit.HandJointPose&) */, L_5, L_6, (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_7);
		return L_8;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::.ctor(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId,UnityEngine.InputSystem.InputActionProperty,UnityEngine.InputSystem.InputActionProperty,UnityEngine.InputSystem.InputActionProperty,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer__ctor_m79C4B9DF6F289279767743C153E2924B4AF29836 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___handNode0, int32_t ___baseHandPose1, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___positionAction2, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___rotationAction3, InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  ___selectAction4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___poseOffset5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HandJointPose[] currentGesture = new HandJointPose[(int)TrackedHandJoint.TotalJoints];
		HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_0 = (HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101*)(HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101*)SZArrayNew(HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->set_currentGesture_4(L_0);
		// private GestureId neutralHandPose = GestureId.Flat;
		__this->set_neutralHandPose_5(1);
		// Vector3 poseOffset) : base(handNode)
		int32_t L_1 = ___handNode0;
		HandDataContainer__ctor_m0A536D41787496C108D46E75201F201BEC580F2B(__this, L_1, /*hidden argument*/NULL);
		// this.neutralHandPose = baseHandPose;
		int32_t L_2 = ___baseHandPose1;
		__this->set_neutralHandPose_5(L_2);
		// this.positionAction = positionAction;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_3 = ___positionAction2;
		__this->set_positionAction_6(L_3);
		// this.rotationAction = rotationAction;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_4 = ___rotationAction3;
		__this->set_rotationAction_7(L_4);
		// this.selectAction = selectAction;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_5 = ___selectAction4;
		__this->set_selectAction_8(L_5);
		// this.poseOffset = poseOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___poseOffset5;
		__this->set_poseOffset_12(L_6);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::get_NeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyntheticHandContainer_get_NeutralPose_mC690B74832D88168CC4C82EF17F36888D9D5DDD8 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method)
{
	{
		// get => neutralHandPose;
		int32_t L_0 = __this->get_neutralHandPose_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::set_NeutralPose(Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer_set_NeutralPose_mBFF16795B64C8070E83F8195BBAECBFE9AA0286F (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => neutralHandPose = value;
		int32_t L_0 = ___value0;
		__this->set_neutralHandPose_5(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryGetEntireHand(System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyntheticHandContainer_TryGetEntireHand_mE66B26880D3511A8F05207006B418BFAF2FD6083 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, RuntimeObject** ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (TryGetEntireHandPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_TryGetEntireHandPerfMarker_13();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!AlreadyFullQueried)
			bool L_2;
			L_2 = HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_001c;
			}
		}

IL_0016:
		{
			// TryCalculateEntireHand();
			SyntheticHandContainer_TryCalculateEntireHand_m63A55ABE0F1AD41E55E36AF4AD77DA480EB871FF(__this, /*hidden argument*/NULL);
		}

IL_001c:
		{
			// result = handJoints;
			RuntimeObject** L_3 = ___result0;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_4 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			*((RuntimeObject **)L_3) = (RuntimeObject *)L_4;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_4);
			// return FullQueryValid;
			bool L_5;
			L_5 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			V_2 = L_5;
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyntheticHandContainer_TryGetJoint_mB54546B234A989C2222E00DEB101B5989C512471 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___joint0, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (TryGetJointPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_TryGetJointPerfMarker_14();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool thisQueryValid = false;
			V_2 = (bool)0;
			// if (!AlreadyFullQueried)
			bool L_2;
			L_2 = HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0027;
			}
		}

IL_0018:
		{
			// TryCalculateEntireHand();
			SyntheticHandContainer_TryCalculateEntireHand_m63A55ABE0F1AD41E55E36AF4AD77DA480EB871FF(__this, /*hidden argument*/NULL);
			// thisQueryValid = FullQueryValid;
			bool L_3;
			L_3 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			V_2 = L_3;
			// }
			goto IL_002e;
		}

IL_0027:
		{
			// thisQueryValid = FullQueryValid;
			bool L_4;
			L_4 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			V_2 = L_4;
		}

IL_002e:
		{
			// pose = handJoints[HandsUtils.ConvertToIndex(joint)];
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_5 = ___pose1;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_6 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_7 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_8;
			L_8 = HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_9 = L_8;
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			*(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_5 = L_10;
			// return thisQueryValid;
			bool L_11 = V_2;
			V_3 = L_11;
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::TryCalculateEntireHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer_TryCalculateEntireHand_m63A55ABE0F1AD41E55E36AF4AD77DA480EB871FF (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * V_2 = NULL;
	TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * V_3 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * G_B3_0 = NULL;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * G_B2_0 = NULL;
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * G_B6_0 = NULL;
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * G_B5_0 = NULL;
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * G_B4_0 = NULL;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * G_B13_0 = NULL;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * G_B12_0 = NULL;
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * G_B16_0 = NULL;
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * G_B15_0 = NULL;
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * G_B14_0 = NULL;
	{
		// using (TryCalculateEntireHandPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_TryCalculateEntireHandPerfMarker_16();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// FullQueryValid = true;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)1, /*hidden argument*/NULL);
			// AlreadyFullQueried = true;
			HandDataContainer_set_AlreadyFullQueried_m20E33DEF23CDBB79F33C7A28194133305A131619_inline(__this, (bool)1, /*hidden argument*/NULL);
			// UpdateGesture();
			SyntheticHandContainer_UpdateGesture_m1DF3F6E56801B59661FDA0DCB3926F3B6DB53037(__this, /*hidden argument*/NULL);
			// if (positionAction.action?.activeControl?.device is TrackedDevice positionTrackedDevice)
			InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * L_2 = __this->get_address_of_positionAction_6();
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_3;
			L_3 = InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD((InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF *)L_2, /*hidden argument*/NULL);
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_4 = L_3;
			G_B2_0 = L_4;
			if (L_4)
			{
				G_B3_0 = L_4;
				goto IL_0034;
			}
		}

IL_0030:
		{
			G_B6_0 = ((InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B *)(NULL));
			goto IL_0045;
		}

IL_0034:
		{
			NullCheck(G_B3_0);
			InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_5;
			L_5 = InputAction_get_activeControl_m8DD0B3C976BAA15D07E21979F78257608D80E439(G_B3_0, /*hidden argument*/NULL);
			InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_0040;
			}
		}

IL_003c:
		{
			G_B6_0 = ((InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B *)(NULL));
			goto IL_0045;
		}

IL_0040:
		{
			NullCheck(G_B5_0);
			InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * L_7;
			L_7 = InputControl_get_device_mA49E8B6B777505F88817C2C610BCBD2299AFD024_inline(G_B5_0, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0045:
		{
			V_2 = ((TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 *)IsInstClass((RuntimeObject*)G_B6_0, TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4_il2cpp_TypeInfo_var));
			TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_007e;
			}
		}

IL_004e:
		{
			// var trackingState = (InputTrackingState)positionTrackedDevice.trackingState.ReadValue();
			TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * L_9 = V_2;
			NullCheck(L_9);
			IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * L_10;
			L_10 = TrackedDevice_get_trackingState_mC0B4582ED67C221CDCE37C3FE814007622F4E2D6_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			int32_t L_11;
			L_11 = InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6(L_10, /*hidden argument*/InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_RuntimeMethod_var);
			// if ((trackingState & InputTrackingState.Position) != 0)
			if (!((int32_t)((int32_t)L_11&(int32_t)1)))
			{
				goto IL_0075;
			}
		}

IL_005d:
		{
			// handPosition = positionAction.action.ReadValue<Vector3>();
			InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * L_12 = __this->get_address_of_positionAction_6();
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_13;
			L_13 = InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD((InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF *)L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F(L_13, /*hidden argument*/InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE732A126768B55B4106CBA34819978C3AC68C96F_RuntimeMethod_var);
			__this->set_handPosition_9(L_14);
			// }
			goto IL_0085;
		}

IL_0075:
		{
			// FullQueryValid = false;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_0085;
		}

IL_007e:
		{
			// FullQueryValid = false;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0085:
		{
			// if (rotationAction.action?.activeControl?.device is TrackedDevice rotationTrackedDevice)
			InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * L_15 = __this->get_address_of_rotationAction_7();
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_16;
			L_16 = InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD((InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF *)L_15, /*hidden argument*/NULL);
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_17 = L_16;
			G_B12_0 = L_17;
			if (L_17)
			{
				G_B13_0 = L_17;
				goto IL_0097;
			}
		}

IL_0093:
		{
			G_B16_0 = ((InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B *)(NULL));
			goto IL_00a8;
		}

IL_0097:
		{
			NullCheck(G_B13_0);
			InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_18;
			L_18 = InputAction_get_activeControl_m8DD0B3C976BAA15D07E21979F78257608D80E439(G_B13_0, /*hidden argument*/NULL);
			InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_19 = L_18;
			G_B14_0 = L_19;
			if (L_19)
			{
				G_B15_0 = L_19;
				goto IL_00a3;
			}
		}

IL_009f:
		{
			G_B16_0 = ((InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B *)(NULL));
			goto IL_00a8;
		}

IL_00a3:
		{
			NullCheck(G_B15_0);
			InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * L_20;
			L_20 = InputControl_get_device_mA49E8B6B777505F88817C2C610BCBD2299AFD024_inline(G_B15_0, /*hidden argument*/NULL);
			G_B16_0 = L_20;
		}

IL_00a8:
		{
			V_3 = ((TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 *)IsInstClass((RuntimeObject*)G_B16_0, TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4_il2cpp_TypeInfo_var));
			TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * L_21 = V_3;
			if (!L_21)
			{
				goto IL_00e1;
			}
		}

IL_00b1:
		{
			// var trackingState = (InputTrackingState)rotationTrackedDevice.trackingState.ReadValue();
			TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * L_22 = V_3;
			NullCheck(L_22);
			IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * L_23;
			L_23 = TrackedDevice_get_trackingState_mC0B4582ED67C221CDCE37C3FE814007622F4E2D6_inline(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			int32_t L_24;
			L_24 = InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6(L_23, /*hidden argument*/InputControl_1_ReadValue_mA7E3FE679739E03C231447BD0D19953FD040F6E6_RuntimeMethod_var);
			// if ((trackingState & InputTrackingState.Position) != 0)
			if (!((int32_t)((int32_t)L_24&(int32_t)1)))
			{
				goto IL_00d8;
			}
		}

IL_00c0:
		{
			// handRotation = rotationAction.action.ReadValue<Quaternion>();
			InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * L_25 = __this->get_address_of_rotationAction_7();
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_26;
			L_26 = InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD((InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF *)L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
			L_27 = InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D(L_26, /*hidden argument*/InputAction_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB5E27418087D862D720D22C68977FCFBD423771D_RuntimeMethod_var);
			__this->set_handRotation_10(L_27);
			// }
			goto IL_00e8;
		}

IL_00d8:
		{
			// FullQueryValid = false;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_00e8;
		}

IL_00e1:
		{
			// FullQueryValid = false;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_00e8:
		{
			// Transform playspaceTransform = PlayspaceUtilities.ReferenceTransform;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = PlayspaceUtilities_get_ReferenceTransform_m6D5099E20E141CD3596741C12CFD368ECE7DD84F(/*hidden argument*/NULL);
			V_4 = L_28;
			// if (playspaceTransform == null)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_30;
			L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_00fe;
			}
		}

IL_00f9:
		{
			// return;
			IL2CPP_LEAVE(0x1A4, FINALLY_0196);
		}

IL_00fe:
		{
			// for (int i = 0; i < JointCount; i++)
			V_5 = 0;
			goto IL_0188;
		}

IL_0106:
		{
			// handJoints[i] = new HandJointPose(
			//     playspaceTransform.TransformPoint((handRotation * currentGesture[i].Position) + handPosition),
			//     playspaceTransform.rotation * (handRotation * currentGesture[i].Rotation),
			//     currentGesture[i].Radius);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_31 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_32 = V_5;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_4;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = __this->get_handRotation_10();
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_35 = __this->get_currentGesture_4();
			int32_t L_36 = V_5;
			NullCheck(L_35);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = HandJointPose_get_Position_m46743626C84F363A029113BFC1F2A103D2B27B52((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_34, L_37, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_handPosition_9();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
			L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_39, /*hidden argument*/NULL);
			NullCheck(L_33);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_33, L_40, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = V_4;
			NullCheck(L_42);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
			L_43 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_42, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44 = __this->get_handRotation_10();
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_45 = __this->get_currentGesture_4();
			int32_t L_46 = V_5;
			NullCheck(L_45);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
			L_47 = HandJointPose_get_Rotation_mABA16DD7601752C3853D62FF40C5DF3385156562((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
			L_48 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_44, L_47, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
			L_49 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_43, L_48, /*hidden argument*/NULL);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_50 = __this->get_currentGesture_4();
			int32_t L_51 = V_5;
			NullCheck(L_50);
			float L_52;
			L_52 = HandJointPose_get_Radius_m8FEC90A8B988CC7B1798B668E15CA260D885DB80_inline((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), /*hidden argument*/NULL);
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_53;
			memset((&L_53), 0, sizeof(L_53));
			HandJointPose__ctor_mA6DFCF7C4739E66180C661317D0AD4B685EA742F((&L_53), L_41, L_49, L_52, /*hidden argument*/NULL);
			NullCheck(L_31);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 )L_53);
			// for (int i = 0; i < JointCount; i++)
			int32_t L_54 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		}

IL_0188:
		{
			// for (int i = 0; i < JointCount; i++)
			int32_t L_55 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
			int32_t L_56 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_JointCount_15();
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_0106;
			}
		}

IL_0194:
		{
			// }
			IL2CPP_LEAVE(0x1A4, FINALLY_0196);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0196;
	}

FINALLY_0196:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(406)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(406)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A4, IL_01a4)
	}

IL_01a4:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::UpdateGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer_UpdateGesture_m1DF3F6E56801B59661FDA0DCB3926F3B6DB53037 (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedArticulatedHandPoses_t57409903DC9FD506EA6DAA8B51392643083DDDB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* V_2 = NULL;
	HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * G_B4_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * G_B5_2 = NULL;
	{
		// using (UpdateGesturePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_UpdateGesturePerfMarker_17();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// SimulatedArticulatedHandPoses.GetGesturePose(neutralHandPose, out HandJointPose[] baseData);
			int32_t L_2 = __this->get_neutralHandPose_5();
			IL2CPP_RUNTIME_CLASS_INIT(SimulatedArticulatedHandPoses_t57409903DC9FD506EA6DAA8B51392643083DDDB0_il2cpp_TypeInfo_var);
			SimulatedArticulatedHandPoses_GetGesturePose_mE15C3FD72103E98C4E95D5736F1717CE67F37762(L_2, (HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101**)(&V_2), /*hidden argument*/NULL);
			// SimulatedArticulatedHandPoses.GetGesturePose(GestureId.Pinch, out HandJointPose[] pinchData);
			SimulatedArticulatedHandPoses_GetGesturePose_mE15C3FD72103E98C4E95D5736F1717CE67F37762(3, (HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101**)(&V_3), /*hidden argument*/NULL);
			// selectAmount = selectAction.action.ReadValue<float>();
			InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF * L_3 = __this->get_address_of_selectAction_8();
			InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * L_4;
			L_4 = InputActionProperty_get_action_mE0482463D0C17219B5CE3BB6BA4D1178D27511FD((InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF *)L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			float L_5;
			L_5 = InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26(L_4, /*hidden argument*/InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m34CFA0797BB11CD32B4C8F26B1495BD75AA45B26_RuntimeMethod_var);
			__this->set_selectAmount_11(L_5);
			// for (int i = 0; i < JointCount; i++)
			V_4 = 0;
			goto IL_013d;
		}

IL_0041:
		{
			// currentGesture[i].Position = Vector3.Lerp(baseData[i].Position, pinchData[i].Position, selectAmount) + poseOffset;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_6 = __this->get_currentGesture_4();
			int32_t L_7 = V_4;
			NullCheck(L_6);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_8 = V_2;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = HandJointPose_get_Position_m46743626C84F363A029113BFC1F2A103D2B27B52((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_11 = V_3;
			int32_t L_12 = V_4;
			NullCheck(L_11);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = HandJointPose_get_Position_m46743626C84F363A029113BFC1F2A103D2B27B52((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), /*hidden argument*/NULL);
			float L_14 = __this->get_selectAmount_11();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_13, L_14, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_poseOffset_12();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
			HandJointPose_set_Position_m11C420FA7C0EB58BC257628DC9C678355B5EA592((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), L_17, /*hidden argument*/NULL);
			// currentGesture[i].Rotation = Quaternion.Slerp(baseData[i].Rotation, pinchData[i].Rotation, selectAmount);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_18 = __this->get_currentGesture_4();
			int32_t L_19 = V_4;
			NullCheck(L_18);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_20 = V_2;
			int32_t L_21 = V_4;
			NullCheck(L_20);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
			L_22 = HandJointPose_get_Rotation_mABA16DD7601752C3853D62FF40C5DF3385156562((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), /*hidden argument*/NULL);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_23 = V_3;
			int32_t L_24 = V_4;
			NullCheck(L_23);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
			L_25 = HandJointPose_get_Rotation_mABA16DD7601752C3853D62FF40C5DF3385156562((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/NULL);
			float L_26 = __this->get_selectAmount_11();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
			L_27 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_22, L_25, L_26, /*hidden argument*/NULL);
			HandJointPose_set_Rotation_m9C93F4D57994CB369148F0C4286A89DC49DDB105((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), L_27, /*hidden argument*/NULL);
			// currentGesture[i].Radius = Mathf.Lerp(baseData[i].Radius, pinchData[i].Radius, selectAmount);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_28 = __this->get_currentGesture_4();
			int32_t L_29 = V_4;
			NullCheck(L_28);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_30 = V_2;
			int32_t L_31 = V_4;
			NullCheck(L_30);
			float L_32;
			L_32 = HandJointPose_get_Radius_m8FEC90A8B988CC7B1798B668E15CA260D885DB80_inline((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), /*hidden argument*/NULL);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			float L_35;
			L_35 = HandJointPose_get_Radius_m8FEC90A8B988CC7B1798B668E15CA260D885DB80_inline((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), /*hidden argument*/NULL);
			float L_36 = __this->get_selectAmount_11();
			float L_37;
			L_37 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_32, L_35, L_36, /*hidden argument*/NULL);
			HandJointPose_set_Radius_m17B3DD227661069BC5991F562C41CFDAA66FE528_inline((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), L_37, /*hidden argument*/NULL);
			// currentGesture[i].Position = Vector3.Scale(currentGesture[i].Position, new Vector3(HandNode == XRNode.LeftHand ? -1 : 1, 1, 1));
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_38 = __this->get_currentGesture_4();
			int32_t L_39 = V_4;
			NullCheck(L_38);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_40 = __this->get_currentGesture_4();
			int32_t L_41 = V_4;
			NullCheck(L_40);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = HandJointPose_get_Position_m46743626C84F363A029113BFC1F2A103D2B27B52((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), /*hidden argument*/NULL);
			int32_t L_43;
			L_43 = HandDataContainer_get_HandNode_mE88841B4535ABFBF488D28D1A9C62C12286366CC_inline(__this, /*hidden argument*/NULL);
			G_B3_0 = L_42;
			G_B3_1 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
			if ((((int32_t)L_43) == ((int32_t)4)))
			{
				G_B4_0 = L_42;
				G_B4_1 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
				goto IL_011c;
			}
		}

IL_0119:
		{
			G_B5_0 = 1;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_011d;
		}

IL_011c:
		{
			G_B5_0 = (-1);
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
		}

IL_011d:
		{
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			memset((&L_44), 0, sizeof(L_44));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), ((float)((float)G_B5_0)), (1.0f), (1.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(G_B5_1, L_44, /*hidden argument*/NULL);
			HandJointPose_set_Position_m11C420FA7C0EB58BC257628DC9C678355B5EA592((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)G_B5_2, L_45, /*hidden argument*/NULL);
			// for (int i = 0; i < JointCount; i++)
			int32_t L_46 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_013d:
		{
			// for (int i = 0; i < JointCount; i++)
			int32_t L_47 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
			int32_t L_48 = ((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->get_JointCount_15();
			if ((((int32_t)L_47) < ((int32_t)L_48)))
			{
				goto IL_0041;
			}
		}

IL_0149:
		{
			// }
			IL2CPP_LEAVE(0x159, FINALLY_014b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014b;
	}

FINALLY_014b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(331)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(331)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x159, IL_0159)
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandContainer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandContainer__cctor_mDBCA8618E0608E04BBDD48E83BC3FDA10256C778 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31F25EAE9DA47D005FB450C7CA1C3CFA92E76A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E24A8E86B3D4C2E3CD23FBEB5A0DBFAD881F41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6411DB54EC31BCA5045B0B5B61D5DFBEF587428D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B706422E3E00B737B97ABDE257F4C3B06750939);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker TryGetEntireHandPerfMarker =
		//     new ProfilerMarker("[MRTK] SyntheticHandsSubsystem.TryGetEntireHand");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral47E24A8E86B3D4C2E3CD23FBEB5A0DBFAD881F41, /*hidden argument*/NULL);
		((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->set_TryGetEntireHandPerfMarker_13(L_0);
		// private static readonly ProfilerMarker TryGetJointPerfMarker =
		//     new ProfilerMarker("[MRTK] SyntheticHandsSubsystem.TryGetJoint");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral31F25EAE9DA47D005FB450C7CA1C3CFA92E76A74, /*hidden argument*/NULL);
		((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->set_TryGetJointPerfMarker_14(L_1);
		// private static readonly int JointCount = (int)TrackedHandJoint.TotalJoints;
		((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->set_JointCount_15(((int32_t)26));
		// private static readonly ProfilerMarker TryCalculateEntireHandPerfMarker =
		//     new ProfilerMarker("[MRTK] SyntheticHandsSubsystem.TryCalculateEntireHand");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral6411DB54EC31BCA5045B0B5B61D5DFBEF587428D, /*hidden argument*/NULL);
		((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->set_TryCalculateEntireHandPerfMarker_16(L_2);
		// private static readonly ProfilerMarker UpdateGesturePerfMarker =
		//     new ProfilerMarker("[MRTK] SyntheticHandsSubsystem.UpdateGesture");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral9B706422E3E00B737B97ABDE257F4C3B06750939, /*hidden argument*/NULL);
		((SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_StaticFields*)il2cpp_codegen_static_fields_for(SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8_il2cpp_TypeInfo_var))->set_UpdateGesturePerfMarker_17(L_3);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKHandContainer__ctor_mFC4296B3E22CA3254BA76DB7AFA9A8DD9D637728 (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, int32_t ___handNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> handDevices = new List<InputDevice>(2);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A(L_0, 2, /*hidden argument*/List_1__ctor_mB61977B43DC46B85A74AEE7202016B0420AFC09A_RuntimeMethod_var);
		__this->set_handDevices_7(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_1 = (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *)il2cpp_codegen_object_new(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E(L_1, /*hidden argument*/List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		__this->set_fingerBones_9(L_1);
		// public XRSDKHandContainer(XRNode handNode) : base(handNode)
		int32_t L_2 = ___handNode0;
		HandDataContainer__ctor_m0A536D41787496C108D46E75201F201BEC580F2B(__this, L_2, /*hidden argument*/NULL);
		// handDevice = GetTrackedHand();
		Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_3;
		L_3 = XRSDKHandContainer_GetTrackedHand_mD7D276839E2509601ED8BDD54BB26AF5D63D26CF(__this, /*hidden argument*/NULL);
		__this->set_handDevice_4(L_3);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryGetEntireHand(System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKHandContainer_TryGetEntireHand_m955D77000D7D03EB06866BA277F4DA79AEDD90AA (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, RuntimeObject** ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (TryGetEntireHandPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->get_TryGetEntireHandPerfMarker_5();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!AlreadyFullQueried)
			bool L_2;
			L_2 = HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_001c;
			}
		}

IL_0016:
		{
			// TryCalculateEntireHand();
			XRSDKHandContainer_TryCalculateEntireHand_mE4DEEBC3CED37D816405D2337097461F12AC86CB(__this, /*hidden argument*/NULL);
		}

IL_001c:
		{
			// result = handJoints;
			RuntimeObject** L_3 = ___result0;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_4 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			*((RuntimeObject **)L_3) = (RuntimeObject *)L_4;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_4);
			// return FullQueryValid;
			bool L_5;
			L_5 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			V_2 = L_5;
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKHandContainer_TryGetJoint_mCDA40C732EBD01F4F9D19D7795F9C394D2651179 (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, int32_t ___joint0, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	bool V_4 = false;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (TryGetJointPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->get_TryGetJointPerfMarker_6();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool thisQueryValid = false;
			V_2 = (bool)0;
			// if (!AlreadyFullQueried)
			bool L_2;
			L_2 = HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_00f3;
			}
		}

IL_001b:
		{
			// handDevice = GetTrackedHand();
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_3;
			L_3 = XRSDKHandContainer_GetTrackedHand_mD7D276839E2509601ED8BDD54BB26AF5D63D26CF(__this, /*hidden argument*/NULL);
			__this->set_handDevice_4(L_3);
			// if (!handDevice.HasValue)
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_4 = __this->get_address_of_handDevice_4();
			bool L_5;
			L_5 = Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_inline((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_4, /*hidden argument*/Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0053;
			}
		}

IL_0034:
		{
			// pose = handJoints[HandsUtils.ConvertToIndex(joint)];
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_6 = ___pose1;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_7 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_8 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_9;
			L_9 = HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			int32_t L_10 = L_9;
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			*(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_6 = L_11;
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x124, FINALLY_0116);
		}

IL_0053:
		{
			// Transform playspaceTransform = PlayspaceUtilities.ReferenceTransform;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
			L_12 = PlayspaceUtilities_get_ReferenceTransform_m6D5099E20E141CD3596741C12CFD368ECE7DD84F(/*hidden argument*/NULL);
			V_3 = L_12;
			// if (playspaceTransform == null)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_14;
			L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0081;
			}
		}

IL_0062:
		{
			// pose = handJoints[HandsUtils.ConvertToIndex(joint)];
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_15 = ___pose1;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_16 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_17 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_18;
			L_18 = HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C(L_17, /*hidden argument*/NULL);
			NullCheck(L_16);
			int32_t L_19 = L_18;
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			*(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_15 = L_20;
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x124, FINALLY_0116);
		}

IL_0081:
		{
			// if (joint == TrackedHandJoint.Palm)
			int32_t L_21 = ___joint0;
			if ((!(((uint32_t)L_21) == ((uint32_t)2))))
			{
				goto IL_00ab;
			}
		}

IL_0085:
		{
			// handDevice.Value.TryGetRootBone(out Bone rootBone);
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_22 = __this->get_address_of_handDevice_4();
			Hand_tB64007EC8D01384426C93432737BA9C5F636A690  L_23;
			L_23 = Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_22, /*hidden argument*/Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
			V_6 = L_23;
			bool L_24;
			L_24 = Hand_TryGetRootBone_m8E5DF1CA9963878F23AD9099E5E80399DAEC02AF((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_6), (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_5), /*hidden argument*/NULL);
			// thisQueryValid |= TryUpdateJoint(TrackedHandJoint.Palm, rootBone, playspaceTransform);
			bool L_25 = V_2;
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_26 = V_5;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_3;
			bool L_28;
			L_28 = XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91(__this, 2, L_26, L_27, /*hidden argument*/NULL);
			V_2 = (bool)((int32_t)((int32_t)L_25|(int32_t)L_28));
			// }
			goto IL_00fa;
		}

IL_00ab:
		{
			// HandFinger finger = HandsUtils.GetFingerFromJoint(joint);
			int32_t L_29 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_30;
			L_30 = HandsUtils_GetFingerFromJoint_m1E268FEEB76E57E91ADC917E9ECE1D1D1D5CF14E(L_29, /*hidden argument*/NULL);
			V_7 = L_30;
			// if (handDevice.Value.TryGetFingerBones(finger, fingerBones))
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_31 = __this->get_address_of_handDevice_4();
			Hand_tB64007EC8D01384426C93432737BA9C5F636A690  L_32;
			L_32 = Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_31, /*hidden argument*/Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
			V_6 = L_32;
			int32_t L_33 = V_7;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_34 = __this->get_fingerBones_9();
			bool L_35;
			L_35 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_6), L_33, L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_00fa;
			}
		}

IL_00d1:
		{
			// Bone bone = fingerBones[HandsUtils.GetOffsetFromBase(joint)];
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_36 = __this->get_fingerBones_9();
			int32_t L_37 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_38;
			L_38 = HandsUtils_GetOffsetFromBase_mB3D81718E4825C552224194C90EEE1FBE5E54CE4(L_37, /*hidden argument*/NULL);
			NullCheck(L_36);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_39;
			L_39 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_36, L_38, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			V_8 = L_39;
			// thisQueryValid |= TryUpdateJoint(joint, bone, playspaceTransform);
			bool L_40 = V_2;
			int32_t L_41 = ___joint0;
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_42 = V_8;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = V_3;
			bool L_44;
			L_44 = XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91(__this, L_41, L_42, L_43, /*hidden argument*/NULL);
			V_2 = (bool)((int32_t)((int32_t)L_40|(int32_t)L_44));
			// }
			goto IL_00fa;
		}

IL_00f3:
		{
			// thisQueryValid = FullQueryValid;
			bool L_45;
			L_45 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			V_2 = L_45;
		}

IL_00fa:
		{
			// pose = handJoints[HandsUtils.ConvertToIndex(joint)];
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_46 = ___pose1;
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_47 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_48 = ___joint0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_49;
			L_49 = HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C(L_48, /*hidden argument*/NULL);
			NullCheck(L_47);
			int32_t L_50 = L_49;
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			*(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_46 = L_51;
			// return thisQueryValid;
			bool L_52 = V_2;
			V_4 = L_52;
			IL2CPP_LEAVE(0x124, FINALLY_0116);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0116;
	}

FINALLY_0116:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(278)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(278)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x124, IL_0124)
	}

IL_0124:
	{
		// }
		bool L_53 = V_4;
		return L_53;
	}
}
// System.Nullable`1<UnityEngine.XR.Hand> Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::GetTrackedHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  XRSDKHandContainer_GetTrackedHand_mD7D276839E2509601ED8BDD54BB26AF5D63D26CF (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	uint32_t G_B4_0 = 0;
	{
		// using (GetTrackedHandPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->get_GetTrackedHandPerfMarker_8();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// InputDevices.GetDevicesWithCharacteristics(HandNode == XRNode.LeftHand ? HandsUtils.LeftHandCharacteristics : HandsUtils.RightHandCharacteristics, handDevices);
			int32_t L_2;
			L_2 = HandDataContainer_get_HandNode_mE88841B4535ABFBF488D28D1A9C62C12286366CC_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_2) == ((int32_t)4)))
			{
				goto IL_001e;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			uint32_t L_3 = ((HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields*)il2cpp_codegen_static_fields_for(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var))->get_RightHandCharacteristics_2();
			G_B4_0 = L_3;
			goto IL_0023;
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			uint32_t L_4 = ((HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields*)il2cpp_codegen_static_fields_for(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var))->get_LeftHandCharacteristics_1();
			G_B4_0 = L_4;
		}

IL_0023:
		{
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_5 = __this->get_handDevices_7();
			InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(G_B4_0, L_5, /*hidden argument*/NULL);
			// if (handDevices.Count == 0)
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_6 = __this->get_handDevices_7();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline(L_6, /*hidden argument*/List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0047;
			}
		}

IL_003b:
		{
			// return null;
			il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 ));
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_8 = V_2;
			V_2 = L_8;
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}

IL_0047:
		{
			// foreach (InputDevice device in handDevices)
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_9 = __this->get_handDevices_7();
			NullCheck(L_9);
			Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_10;
			L_10 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_9, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
			V_3 = L_10;
		}

IL_0053:
		try
		{ // begin try (depth: 2)
			{
				goto IL_008b;
			}

IL_0055:
			{
				// foreach (InputDevice device in handDevices)
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_11;
				L_11 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
				V_4 = L_11;
				// if (device.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked)
				//     && isTracked
				//     && device.TryGetFeatureValue(CommonUsages.handData, out Hand handRef))
				IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_isTracked_0();
				bool L_13;
				L_13 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), L_12, (bool*)(&V_5), /*hidden argument*/NULL);
				bool L_14 = V_5;
				if (!((int32_t)((int32_t)L_13&(int32_t)L_14)))
				{
					goto IL_008b;
				}
			}

IL_0071:
			{
				IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_15 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_handData_49();
				bool L_16;
				L_16 = InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), L_15, (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_6), /*hidden argument*/NULL);
				if (!L_16)
				{
					goto IL_008b;
				}
			}

IL_0081:
			{
				// return handRef;
				Hand_tB64007EC8D01384426C93432737BA9C5F636A690  L_17 = V_6;
				Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_18;
				memset((&L_18), 0, sizeof(L_18));
				Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6((&L_18), L_17, /*hidden argument*/Nullable_1__ctor_m1326CE657E8724BDF134290769D358FE7A9C4DE6_RuntimeMethod_var);
				V_2 = L_18;
				IL2CPP_LEAVE(0xBF, FINALLY_0096);
			}

IL_008b:
			{
				// foreach (InputDevice device in handDevices)
				bool L_19;
				L_19 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0055;
				}
			}

IL_0094:
			{
				IL2CPP_LEAVE(0xA4, FINALLY_0096);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0096;
		}

FINALLY_0096:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
			IL2CPP_END_FINALLY(150)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(150)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xBF, FINALLY_00b1);
			IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		}

IL_00a4:
		{
			// return null;
			il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 ));
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_20 = V_7;
			V_2 = L_20;
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_21 = V_2;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryCalculateEntireHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKHandContainer_TryCalculateEntireHand_mE4DEEBC3CED37D816405D2337097461F12AC86CB (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (TryCalculateEntireHandPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->get_TryCalculateEntireHandPerfMarker_10();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// handDevice = GetTrackedHand();
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818  L_2;
			L_2 = XRSDKHandContainer_GetTrackedHand_mD7D276839E2509601ED8BDD54BB26AF5D63D26CF(__this, /*hidden argument*/NULL);
			__this->set_handDevice_4(L_2);
			// if (!handDevice.HasValue)
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_3 = __this->get_address_of_handDevice_4();
			bool L_4;
			L_4 = Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_inline((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_3, /*hidden argument*/Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_003a;
			}
		}

IL_0027:
		{
			// FullQueryValid = false;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)0, /*hidden argument*/NULL);
			// AlreadyFullQueried = true;
			HandDataContainer_set_AlreadyFullQueried_m20E33DEF23CDBB79F33C7A28194133305A131619_inline(__this, (bool)1, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}

IL_003a:
		{
			// Transform playspaceTransform = PlayspaceUtilities.ReferenceTransform;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = PlayspaceUtilities_get_ReferenceTransform_m6D5099E20E141CD3596741C12CFD368ECE7DD84F(/*hidden argument*/NULL);
			V_2 = L_5;
			// if (playspaceTransform == null)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_004e;
			}
		}

IL_0049:
		{
			// return;
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}

IL_004e:
		{
			// FullQueryValid = true;
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)1, /*hidden argument*/NULL);
			// foreach (HandFinger finger in HandsUtils.handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_8 = ((HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_StaticFields*)il2cpp_codegen_static_fields_for(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var))->get_handFingers_0();
			V_4 = L_8;
			V_5 = 0;
			goto IL_00d0;
		}

IL_0061:
		{
			// foreach (HandFinger finger in HandsUtils.handFingers)
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_9 = V_4;
			int32_t L_10 = V_5;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			int32_t L_12 = (int32_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_6 = L_12;
			// if (handDevice.Value.TryGetFingerBones(finger, fingerBones))
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_13 = __this->get_address_of_handDevice_4();
			Hand_tB64007EC8D01384426C93432737BA9C5F636A690  L_14;
			L_14 = Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_13, /*hidden argument*/Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
			V_7 = L_14;
			int32_t L_15 = V_6;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_16 = __this->get_fingerBones_9();
			bool L_17;
			L_17 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_7), L_15, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00ca;
			}
		}

IL_0086:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_8 = 0;
			goto IL_00bb;
		}

IL_008b:
		{
			// FullQueryValid &= TryUpdateJoint(HandsUtils.ConvertToTrackedHandJoint(finger, i), fingerBones[i], playspaceTransform);
			bool L_18;
			L_18 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			int32_t L_19 = V_6;
			int32_t L_20 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_21;
			L_21 = HandsUtils_ConvertToTrackedHandJoint_mFCB6375331144BFC0A3D2CCFDE8C5374ED21E9B2(L_19, L_20, /*hidden argument*/NULL);
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_22 = __this->get_fingerBones_9();
			int32_t L_23 = V_8;
			NullCheck(L_22);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_24;
			L_24 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_22, L_23, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_2;
			bool L_26;
			L_26 = XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91(__this, L_21, L_24, L_25, /*hidden argument*/NULL);
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)((int32_t)((int32_t)L_18&(int32_t)L_26)), /*hidden argument*/NULL);
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_27 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00bb:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_28 = V_8;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_29 = __this->get_fingerBones_9();
			NullCheck(L_29);
			int32_t L_30;
			L_30 = List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline(L_29, /*hidden argument*/List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
			if ((((int32_t)L_28) < ((int32_t)L_30)))
			{
				goto IL_008b;
			}
		}

IL_00ca:
		{
			int32_t L_31 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		}

IL_00d0:
		{
			// foreach (HandFinger finger in HandsUtils.handFingers)
			int32_t L_32 = V_5;
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_33 = V_4;
			NullCheck(L_33);
			if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
			{
				goto IL_0061;
			}
		}

IL_00d8:
		{
			// handDevice.Value.TryGetRootBone(out Bone rootBone);
			Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * L_34 = __this->get_address_of_handDevice_4();
			Hand_tB64007EC8D01384426C93432737BA9C5F636A690  L_35;
			L_35 = Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87((Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 *)L_34, /*hidden argument*/Nullable_1_get_Value_mC4871AD43B865D96775D48C7FA9F7A3AC4A70E87_RuntimeMethod_var);
			V_7 = L_35;
			bool L_36;
			L_36 = Hand_TryGetRootBone_m8E5DF1CA9963878F23AD9099E5E80399DAEC02AF((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_7), (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_3), /*hidden argument*/NULL);
			// FullQueryValid &= TryUpdateJoint(TrackedHandJoint.Palm, rootBone, playspaceTransform);
			bool L_37;
			L_37 = HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline(__this, /*hidden argument*/NULL);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_38 = V_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = V_2;
			bool L_40;
			L_40 = XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91(__this, 2, L_38, L_39, /*hidden argument*/NULL);
			HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline(__this, (bool)((int32_t)((int32_t)L_37&(int32_t)L_40)), /*hidden argument*/NULL);
			// AlreadyFullQueried = true;
			HandDataContainer_set_AlreadyFullQueried_m20E33DEF23CDBB79F33C7A28194133305A131619_inline(__this, (bool)1, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(270)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::TryUpdateJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.Bone,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKHandContainer_TryUpdateJoint_m8F83E3ECDE23890DD2F4C46652570D928479FD91 (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * __this, int32_t ___jointID0, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  ___bone1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playspaceTransform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (TryUpdateJointPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->get_TryUpdateJointPerfMarker_11();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool gotData = true;
			// gotData &= bone.TryGetPosition(out Vector3 position);
			bool L_2;
			L_2 = Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&___bone1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
			// gotData &= bone.TryGetRotation(out Quaternion rotation);
			bool L_3;
			L_3 = Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&___bone1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_3), /*hidden argument*/NULL);
			// if (!gotData)
			if (((int32_t)((int32_t)((int32_t)((int32_t)1&(int32_t)L_2))&(int32_t)L_3)))
			{
				goto IL_002a;
			}
		}

IL_0025:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}

IL_002a:
		{
			// handJoints[HandsUtils.ConvertToIndex(jointID)] = new HandJointPose(
			//     playspaceTransform.TransformPoint(position),
			//     playspaceTransform.rotation * rotation,
			//     0.005f);
			HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_4 = ((HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 *)__this)->get_handJoints_3();
			int32_t L_5 = ___jointID0;
			IL2CPP_RUNTIME_CLASS_INIT(HandsUtils_t53AF979FB70A28404EB5CDBE98F1B1595F08AD2A_il2cpp_TypeInfo_var);
			int32_t L_6;
			L_6 = HandsUtils_ConvertToIndex_m42B6F395C6ED0A3DFB1155875EB8F16CF3E8AE7C(L_5, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___playspaceTransform2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
			NullCheck(L_7);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_7, L_8, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ___playspaceTransform2;
			NullCheck(L_10);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
			L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = V_3;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
			L_13 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_11, L_12, /*hidden argument*/NULL);
			HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_14;
			memset((&L_14), 0, sizeof(L_14));
			HandJointPose__ctor_mA6DFCF7C4739E66180C661317D0AD4B685EA742F((&L_14), L_9, L_13, (0.00499999989f), /*hidden argument*/NULL);
			NullCheck(L_4);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 )L_14);
			// return true;
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
	}

IL_006b:
	{
		// }
		bool L_15 = V_4;
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKHandContainer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKHandContainer__cctor_m19E2F099E189F36EB36A93109C6D1E2934538838 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2256155A1855B49E1A7FD8CD883D7CE44DCD76C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB69D5646DE81D63A7B51E526658E010FF8DD60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501EF9B0208598BB44671BDC9D19349ADDC43D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF0D02B95C0F19FBA11ED78EEEC441DFA7002E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E1D8181795FC1940145EAFC842189B94364C01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker TryGetEntireHandPerfMarker =
		//     new ProfilerMarker("[MRTK] XRSDKHandsSubsystem.TryGetEntireHand");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3DB69D5646DE81D63A7B51E526658E010FF8DD60, /*hidden argument*/NULL);
		((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->set_TryGetEntireHandPerfMarker_5(L_0);
		// private static readonly ProfilerMarker TryGetJointPerfMarker =
		//     new ProfilerMarker("[MRTK] XRSDKHandsSubsystem.TryGetJoint");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral501EF9B0208598BB44671BDC9D19349ADDC43D7C, /*hidden argument*/NULL);
		((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->set_TryGetJointPerfMarker_6(L_1);
		// private static readonly ProfilerMarker GetTrackedHandPerfMarker =
		//     new ProfilerMarker("[MRTK] XRSDKHandsSubsystem.GetTrackedHand");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral7DF0D02B95C0F19FBA11ED78EEEC441DFA7002E5, /*hidden argument*/NULL);
		((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->set_GetTrackedHandPerfMarker_8(L_2);
		// private static readonly ProfilerMarker TryCalculateEntireHandPerfMarker =
		//     new ProfilerMarker("[MRTK] XRSDKHandsSubsystem.TryCalculateEntireHand");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral2256155A1855B49E1A7FD8CD883D7CE44DCD76C8, /*hidden argument*/NULL);
		((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->set_TryCalculateEntireHandPerfMarker_10(L_3);
		// private static readonly ProfilerMarker TryUpdateJointPerfMarker =
		//     new ProfilerMarker("[MRTK] XRSDKHandsSubsystem.TryUpdateJoint");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteralC0E1D8181795FC1940145EAFC842189B94364C01, /*hidden argument*/NULL);
		((XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var))->set_TryUpdateJointPerfMarker_11(L_4);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKProvider_Update_m482FAB16867B13D198CBB340EF5A344DB9665DDC (XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hands[XRNode.LeftHand].Reset();
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_0 = __this->get_hands_1();
		NullCheck(L_0);
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_1;
		L_1 = Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293(L_0, 4, /*hidden argument*/Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		NullCheck(L_1);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_1, /*hidden argument*/NULL);
		// hands[XRNode.RightHand].Reset();
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_2 = __this->get_hands_1();
		NullCheck(L_2);
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_3;
		L_3 = Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293(L_2, 5, /*hidden argument*/Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		NullCheck(L_3);
		HandDataContainer_Reset_m17B7EE7D35AC28CFC097EAB2321A644BB5FEC9FE(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider::TryGetEntireHand(UnityEngine.XR.XRNode,System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKProvider_TryGetEntireHand_m70381E3E40BBE00B2A5A6AB3E9C309AB6750B4BA (XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84 * __this, int32_t ___handNode0, RuntimeObject** ___jointPoses1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return hands[handNode].TryGetEntireHand(out jointPoses);
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_0 = __this->get_hands_1();
		int32_t L_1 = ___handNode0;
		NullCheck(L_0);
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_2;
		L_2 = Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		RuntimeObject** L_3 = ___jointPoses1;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject** >::Invoke(4 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetEntireHand(System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.HandJointPose>&) */, L_2, (RuntimeObject**)L_3);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKProvider_TryGetJoint_m3313D86A259E798F1E59742EEE3F8178AB82FE21 (XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84 * __this, int32_t ___joint0, int32_t ___handNode1, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___jointPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return hands[handNode].TryGetJoint(joint, out jointPose);
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_0 = __this->get_hands_1();
		int32_t L_1 = ___handNode1;
		NullCheck(L_0);
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_2;
		L_2 = Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m600BC75C58670100FFD382DD54DC6BD04D684293_RuntimeMethod_var);
		int32_t L_3 = ___joint0;
		HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * L_4 = ___jointPose2;
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtFuncInvoker2< bool, int32_t, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * >::Invoke(5 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.HandDataContainer::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,Microsoft.MixedReality.Toolkit.HandJointPose&) */, L_2, L_3, (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)L_4);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.XRSDKHandsSubsystem/XRSDKProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKProvider__ctor_m23F8F645B33B98C3FD0F94FD7D946C18B1FFC60B (XRSDKProvider_t1E8F774BC3DE5DFEE6463465AB16672E33F60B84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEEF7E60AC1706B667260F5E46B42436588E72AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<XRNode, XRSDKHandContainer> hands = new Dictionary<XRNode, XRSDKHandContainer>
		// {
		//     { XRNode.LeftHand, new XRSDKHandContainer(XRNode.LeftHand) },
		//     { XRNode.RightHand, new XRSDKHandContainer(XRNode.RightHand) }
		// };
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_0 = (Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E *)il2cpp_codegen_object_new(Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEEF7E60AC1706B667260F5E46B42436588E72AAB(L_0, /*hidden argument*/Dictionary_2__ctor_mEEF7E60AC1706B667260F5E46B42436588E72AAB_RuntimeMethod_var);
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_1 = L_0;
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_2 = (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 *)il2cpp_codegen_object_new(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		XRSDKHandContainer__ctor_mFC4296B3E22CA3254BA76DB7AFA9A8DD9D637728(L_2, 4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199(L_1, 4, L_2, /*hidden argument*/Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199_RuntimeMethod_var);
		Dictionary_2_t427693A173D70B98DAF01187FD6A82A806807B7E * L_3 = L_1;
		XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 * L_4 = (XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23 *)il2cpp_codegen_object_new(XRSDKHandContainer_t8CFEEED0AEC60B73185D54CA7DDE58ADA3D09E23_il2cpp_TypeInfo_var);
		XRSDKHandContainer__ctor_mFC4296B3E22CA3254BA76DB7AFA9A8DD9D637728(L_4, 5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199(L_3, 5, L_4, /*hidden argument*/Dictionary_2_Add_mB077D85F0535E19BE7C19814FA04A0519662A199_RuntimeMethod_var);
		__this->set_hands_1(L_3);
		Provider__ctor_mFA515785A4AA0E8EB6CD6EA178E5EEAEADFAEF9E(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandPosition_mFF008A01F3760205A6971D929247209FE7245645_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty LeftHandPosition => leftHandPosition;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_leftHandPosition_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandRotation_mE406EB7320E86EE7BF2E2F2855E3E1DC648BD049_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty LeftHandRotation => leftHandRotation;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_leftHandRotation_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_LeftHandSelect_m6849A7F368205A854886EA3FAB5D762E9F3B149E_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty LeftHandSelect => leftHandSelect;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_leftHandSelect_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SyntheticHandsConfig_get_PoseOffset_m051E935F5C1CB2D4DD9B2F8D4591FBF0B0F09DD2_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PoseOffset => poseOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_poseOffset_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandPosition_m0E8814CDCF1DEBC2CE81A0372705A3B1AA1FC2EF_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty RightHandPosition => rightHandPosition;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_rightHandPosition_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandRotation_m654A33C8FA9C4E076607EC8F960F77BB8459A122_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty RightHandRotation => rightHandRotation;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_rightHandRotation_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  SyntheticHandsConfig_get_RightHandSelect_mE29A9242E3BCFB2DED30DD372001D1F3645D37B7_inline (SyntheticHandsConfig_t1E64B1F2A67F548E35824904D4EDF397E45BD4D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionProperty RightHandSelect => rightHandSelect;
		InputActionProperty_t5AE0547D38A9446E4EE16A14764D13F1C3C46DDF  L_0 = __this->get_rightHandSelect_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SyntheticHandContainer_get_NeutralPose_mC690B74832D88168CC4C82EF17F36888D9D5DDD8_inline (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, const RuntimeMethod* method)
{
	{
		// get => neutralHandPose;
		int32_t L_0 = __this->get_neutralHandPose_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyntheticHandContainer_set_NeutralPose_mBFF16795B64C8070E83F8195BBAECBFE9AA0286F_inline (SyntheticHandContainer_tAE123AD2A5BB824C0D1906C3EF1A32291F3BA1A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => neutralHandPose = value;
		int32_t L_0 = ___value0;
		__this->set_neutralHandPose_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandDataContainer_get_AlreadyFullQueried_m9B888032B03DC88A91B6F7E55245768FA9A1114E_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method)
{
	{
		// public bool AlreadyFullQueried { get; protected set; }
		bool L_0 = __this->get_U3CAlreadyFullQueriedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandDataContainer_get_FullQueryValid_m434E112551AD7156C8C5C2DA30B5F54243169785_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method)
{
	{
		// public bool FullQueryValid { get; protected set; }
		bool L_0 = __this->get_U3CFullQueryValidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataContainer_set_FullQueryValid_m33D2200C74441A0C822DBBC3E1A9D85EDAF9407F_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool FullQueryValid { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CFullQueryValidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataContainer_set_AlreadyFullQueried_m20E33DEF23CDBB79F33C7A28194133305A131619_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AlreadyFullQueried { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CAlreadyFullQueriedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * InputControl_get_device_mA49E8B6B777505F88817C2C610BCBD2299AFD024_inline (InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * __this, const RuntimeMethod* method)
{
	{
		// public InputDevice device => m_Device;
		InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * L_0 = __this->get_m_Device_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * TrackedDevice_get_trackingState_mC0B4582ED67C221CDCE37C3FE814007622F4E2D6_inline (TrackedDevice_tD1CC2E52724F5903CC984E9F3A727D5CE0B0E8F4 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_39();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandJointPose_get_Radius_m8FEC90A8B988CC7B1798B668E15CA260D885DB80_inline (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get => radius; set => radius = value; }
		float L_0 = __this->get_radius_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandJointPose_set_Radius_m17B3DD227661069BC5991F562C41CFDAA66FE528_inline (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Radius { get => radius; set => radius = value; }
		float L_0 = ___value0;
		__this->set_radius_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandDataContainer_get_HandNode_mE88841B4535ABFBF488D28D1A9C62C12286366CC_inline (HandDataContainer_t726B644F8BFBF65933C662C9D78AC8F189BE7565 * __this, const RuntimeMethod* method)
{
	{
		// public XRNode HandNode { get; protected set; }
		int32_t L_0 = __this->get_U3CHandNodeU3Ek__BackingField_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* Array_Empty_TisHandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65_m90A108C8A473CF86DF1A458E8AD4E5751609AB44_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101* L_0 = ((EmptyArray_1_t91B4473C0BBCF98C8F197B3132F0C3B9482D044C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (HandJointPoseU5BU5D_t15489F00C9DD7D8862C18610A517397D6C053101*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAC11F4F586ED42886BB1D493E9334071C2778E37_gshared_inline (Nullable_1_t7F914D0F4BC78E10F3A119957E5B4E5F96745818 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* L_2 = (BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)L_2, (int32_t)L_3);
		return (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_0 = (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )__this->get_current_3();
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
