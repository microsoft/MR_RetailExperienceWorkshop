#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_t053589A158AAF0B471CF80825616560409AF43D4;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF;
// UnityEngine.Rendering.Universal.RenderTargetHandle[]
struct RenderTargetHandleU5BU5D_t4C3806A82AE1785063BA7B81EA83C2E0A25A5EC3;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass
struct AdditionalLightsShadowCasterPass_t802B9A39EC656CAB08CC274591B37DDB9E6FE218;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// UnityEngine.Rendering.Universal.CapturePass
struct CapturePass_t1777556812FA622A0E871F3DB39CFFAADA4DFFCB;
// UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
struct ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B;
// UnityEngine.Rendering.Universal.Internal.CopyColorPass
struct CopyColorPass_t63FC50A6A4A4D7D097630C355AB00C2EC668C2A5;
// UnityEngine.Rendering.Universal.Internal.CopyDepthPass
struct CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C;
// UnityEngine.Rendering.Universal.Internal.DeferredLights
struct DeferredLights_tD0642F8CA1F45E9B92F0F48EBCA676DBB0C7B57F;
// UnityEngine.Rendering.Universal.Internal.DeferredPass
struct DeferredPass_t59179096BF2390AFDC98BCFBE9FFF3F2360174C2;
// System.IO.Compression.DeflateStream
struct DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5;
// UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass
struct DepthNormalOnlyPass_tDB1A8815D1DC9D3C29C49E34016E36ABEC67660A;
// UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
struct DepthOnlyPass_t10276071287F9C0C5AA16245151BB6E78C42A1F9;
// UnityEngine.Rendering.Universal.Internal.DrawObjectsPass
struct DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E;
// UnityEngine.Rendering.Universal.DrawSkyboxPass
struct DrawSkyboxPass_tED1A0C9F2366544E19EF8DA0044384989F17BFB8;
// System.Net.FileWebRequest
struct FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE;
// UnityEngine.Rendering.Universal.Internal.FinalBlitPass
struct FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7;
// UnityEngine.Rendering.Universal.Internal.ForwardLights
struct ForwardLights_tC47150952C1E12E688F800DB064E404B84C86CB6;
// System.Net.FtpWebRequest
struct FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D;
// UnityEngine.Rendering.Universal.Internal.GBufferPass
struct GBufferPass_t588E0A729E9618F18D8D1674383E2394F8E7BA53;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E;
// UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass
struct InvokeOnRenderObjectCallbackPass_t58F7A1FDDCA535A9A0BD759C58D54805EC981C4E;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3;
// UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass
struct MainLightShadowCasterPass_t097D90AD813165DD2FEAFFF7C611D5DA27968613;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rendering.Universal.Internal.PostProcessPass
struct PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// UnityEngine.Rendering.Universal.Internal.TileDepthRangePass
struct TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458;
// UnityEngine.Rendering.Universal.TransparentSettingsPass
struct TransparentSettingsPass_t9D8B1751D8EFAF76DD19B492977630CF221E4FA1;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// UnityEngine.Rendering.Universal.XROcclusionMeshPass
struct XROcclusionMeshPass_tC5F7FD3D0FDA98635F927D9DFA88A609DF25FB0D;
// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2;
struct IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.Disposable
struct Disposable_tBD88628586DFE8324189E1A35E0BC7642579D7DF  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.OpenXR.Disposable::<disposedValue>k__BackingField
	bool ___U3CdisposedValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CdisposedValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Disposable_tBD88628586DFE8324189E1A35E0BC7642579D7DF, ___U3CdisposedValueU3Ek__BackingField_0)); }
	inline bool get_U3CdisposedValueU3Ek__BackingField_0() const { return ___U3CdisposedValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CdisposedValueU3Ek__BackingField_0() { return &___U3CdisposedValueU3Ek__BackingField_0; }
	inline void set_U3CdisposedValueU3Ek__BackingField_0(bool value)
	{
		___U3CdisposedValueU3Ek__BackingField_0 = value;
	}
};


// System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___assemblyEvidenceList_2;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___hostEvidenceList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostEvidenceList_1), (void*)value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___assemblyEvidenceList_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyEvidenceList_2), (void*)value);
	}
};


// System.Dynamic.ExpandoObject
struct ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315  : public RuntimeObject
{
public:
	// System.Object System.Dynamic.ExpandoObject::LockObject
	RuntimeObject * ___LockObject_5;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject::_data
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ____data_6;
	// System.Int32 System.Dynamic.ExpandoObject::_count
	int32_t ____count_7;
	// System.ComponentModel.PropertyChangedEventHandler System.Dynamic.ExpandoObject::_propertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ____propertyChanged_9;

public:
	inline static int32_t get_offset_of_LockObject_5() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ___LockObject_5)); }
	inline RuntimeObject * get_LockObject_5() const { return ___LockObject_5; }
	inline RuntimeObject ** get_address_of_LockObject_5() { return &___LockObject_5; }
	inline void set_LockObject_5(RuntimeObject * value)
	{
		___LockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LockObject_5), (void*)value);
	}

	inline static int32_t get_offset_of__data_6() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____data_6)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get__data_6() const { return ____data_6; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of__data_6() { return &____data_6; }
	inline void set__data_6(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		____data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_6), (void*)value);
	}

	inline static int32_t get_offset_of__count_7() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____count_7)); }
	inline int32_t get__count_7() const { return ____count_7; }
	inline int32_t* get_address_of__count_7() { return &____count_7; }
	inline void set__count_7(int32_t value)
	{
		____count_7 = value;
	}

	inline static int32_t get_offset_of__propertyChanged_9() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____propertyChanged_9)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get__propertyChanged_9() const { return ____propertyChanged_9; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of__propertyChanged_9() { return &____propertyChanged_9; }
	inline void set__propertyChanged_9(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		____propertyChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyChanged_9), (void*)value);
	}
};

struct ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTryGetValue
	MethodInfo_t * ___ExpandoTryGetValue_0;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTrySetValue
	MethodInfo_t * ___ExpandoTrySetValue_1;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTryDeleteValue
	MethodInfo_t * ___ExpandoTryDeleteValue_2;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoPromoteClass
	MethodInfo_t * ___ExpandoPromoteClass_3;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoCheckVersion
	MethodInfo_t * ___ExpandoCheckVersion_4;
	// System.Object System.Dynamic.ExpandoObject::Uninitialized
	RuntimeObject * ___Uninitialized_8;

public:
	inline static int32_t get_offset_of_ExpandoTryGetValue_0() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTryGetValue_0)); }
	inline MethodInfo_t * get_ExpandoTryGetValue_0() const { return ___ExpandoTryGetValue_0; }
	inline MethodInfo_t ** get_address_of_ExpandoTryGetValue_0() { return &___ExpandoTryGetValue_0; }
	inline void set_ExpandoTryGetValue_0(MethodInfo_t * value)
	{
		___ExpandoTryGetValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTryGetValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoTrySetValue_1() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTrySetValue_1)); }
	inline MethodInfo_t * get_ExpandoTrySetValue_1() const { return ___ExpandoTrySetValue_1; }
	inline MethodInfo_t ** get_address_of_ExpandoTrySetValue_1() { return &___ExpandoTrySetValue_1; }
	inline void set_ExpandoTrySetValue_1(MethodInfo_t * value)
	{
		___ExpandoTrySetValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTrySetValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoTryDeleteValue_2() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTryDeleteValue_2)); }
	inline MethodInfo_t * get_ExpandoTryDeleteValue_2() const { return ___ExpandoTryDeleteValue_2; }
	inline MethodInfo_t ** get_address_of_ExpandoTryDeleteValue_2() { return &___ExpandoTryDeleteValue_2; }
	inline void set_ExpandoTryDeleteValue_2(MethodInfo_t * value)
	{
		___ExpandoTryDeleteValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTryDeleteValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoPromoteClass_3() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoPromoteClass_3)); }
	inline MethodInfo_t * get_ExpandoPromoteClass_3() const { return ___ExpandoPromoteClass_3; }
	inline MethodInfo_t ** get_address_of_ExpandoPromoteClass_3() { return &___ExpandoPromoteClass_3; }
	inline void set_ExpandoPromoteClass_3(MethodInfo_t * value)
	{
		___ExpandoPromoteClass_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoPromoteClass_3), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoCheckVersion_4() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoCheckVersion_4)); }
	inline MethodInfo_t * get_ExpandoCheckVersion_4() const { return ___ExpandoCheckVersion_4; }
	inline MethodInfo_t ** get_address_of_ExpandoCheckVersion_4() { return &___ExpandoCheckVersion_4; }
	inline void set_ExpandoCheckVersion_4(MethodInfo_t * value)
	{
		___ExpandoCheckVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoCheckVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_Uninitialized_8() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___Uninitialized_8)); }
	inline RuntimeObject * get_Uninitialized_8() const { return ___Uninitialized_8; }
	inline RuntimeObject ** get_address_of_Uninitialized_8() { return &___Uninitialized_8; }
	inline void set_Uninitialized_8(RuntimeObject * value)
	{
		___Uninitialized_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uninitialized_8), (void*)value);
	}
};


// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____match_0)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__match_0() const { return ____match_0; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____captureMap_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____groups_2)); }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.FoundationContract
struct FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C 
{
public:

public:
};


// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C  : public Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// Windows.Foundation.HResult
struct HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
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


// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08, ___KeyValue_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_4), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// UnityEngine.Rendering.StencilState
struct StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 
{
public:
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Enabled_0)); }
	inline uint8_t get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline uint8_t* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(uint8_t value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_ReadMask_1() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ReadMask_1)); }
	inline uint8_t get_m_ReadMask_1() const { return ___m_ReadMask_1; }
	inline uint8_t* get_address_of_m_ReadMask_1() { return &___m_ReadMask_1; }
	inline void set_m_ReadMask_1(uint8_t value)
	{
		___m_ReadMask_1 = value;
	}

	inline static int32_t get_offset_of_m_WriteMask_2() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_WriteMask_2)); }
	inline uint8_t get_m_WriteMask_2() const { return ___m_WriteMask_2; }
	inline uint8_t* get_address_of_m_WriteMask_2() { return &___m_WriteMask_2; }
	inline void set_m_WriteMask_2(uint8_t value)
	{
		___m_WriteMask_2 = value;
	}

	inline static int32_t get_offset_of_m_Padding_3() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Padding_3)); }
	inline uint8_t get_m_Padding_3() const { return ___m_Padding_3; }
	inline uint8_t* get_address_of_m_Padding_3() { return &___m_Padding_3; }
	inline void set_m_Padding_3(uint8_t value)
	{
		___m_Padding_3 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionFront_4() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionFront_4)); }
	inline uint8_t get_m_CompareFunctionFront_4() const { return ___m_CompareFunctionFront_4; }
	inline uint8_t* get_address_of_m_CompareFunctionFront_4() { return &___m_CompareFunctionFront_4; }
	inline void set_m_CompareFunctionFront_4(uint8_t value)
	{
		___m_CompareFunctionFront_4 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationFront_5() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationFront_5)); }
	inline uint8_t get_m_PassOperationFront_5() const { return ___m_PassOperationFront_5; }
	inline uint8_t* get_address_of_m_PassOperationFront_5() { return &___m_PassOperationFront_5; }
	inline void set_m_PassOperationFront_5(uint8_t value)
	{
		___m_PassOperationFront_5 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationFront_6() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationFront_6)); }
	inline uint8_t get_m_FailOperationFront_6() const { return ___m_FailOperationFront_6; }
	inline uint8_t* get_address_of_m_FailOperationFront_6() { return &___m_FailOperationFront_6; }
	inline void set_m_FailOperationFront_6(uint8_t value)
	{
		___m_FailOperationFront_6 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationFront_7() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationFront_7)); }
	inline uint8_t get_m_ZFailOperationFront_7() const { return ___m_ZFailOperationFront_7; }
	inline uint8_t* get_address_of_m_ZFailOperationFront_7() { return &___m_ZFailOperationFront_7; }
	inline void set_m_ZFailOperationFront_7(uint8_t value)
	{
		___m_ZFailOperationFront_7 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionBack_8() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionBack_8)); }
	inline uint8_t get_m_CompareFunctionBack_8() const { return ___m_CompareFunctionBack_8; }
	inline uint8_t* get_address_of_m_CompareFunctionBack_8() { return &___m_CompareFunctionBack_8; }
	inline void set_m_CompareFunctionBack_8(uint8_t value)
	{
		___m_CompareFunctionBack_8 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationBack_9() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationBack_9)); }
	inline uint8_t get_m_PassOperationBack_9() const { return ___m_PassOperationBack_9; }
	inline uint8_t* get_address_of_m_PassOperationBack_9() { return &___m_PassOperationBack_9; }
	inline void set_m_PassOperationBack_9(uint8_t value)
	{
		___m_PassOperationBack_9 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationBack_10() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationBack_10)); }
	inline uint8_t get_m_FailOperationBack_10() const { return ___m_FailOperationBack_10; }
	inline uint8_t* get_address_of_m_FailOperationBack_10() { return &___m_FailOperationBack_10; }
	inline void set_m_FailOperationBack_10(uint8_t value)
	{
		___m_FailOperationBack_10 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationBack_11() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationBack_11)); }
	inline uint8_t get_m_ZFailOperationBack_11() const { return ___m_ZFailOperationBack_11; }
	inline uint8_t* get_address_of_m_ZFailOperationBack_11() { return &___m_ZFailOperationBack_11; }
	inline void set_m_ZFailOperationBack_11(uint8_t value)
	{
		___m_ZFailOperationBack_11 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF828061D1EC5AB7A239BAE56E3DEDC85BDD96581(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B6DDCCD8C68053D2DD115C28EF11C303B1C139(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA * comReturnValue) = 0;
};

// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.FtpDataStream
struct FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * ___request_4;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___networkStream_5;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_6;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_7;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_8;

public:
	inline static int32_t get_offset_of_request_4() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___request_4)); }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * get_request_4() const { return ___request_4; }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D ** get_address_of_request_4() { return &___request_4; }
	inline void set_request_4(FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * value)
	{
		___request_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_4), (void*)value);
	}

	inline static int32_t get_offset_of_networkStream_5() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___networkStream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_networkStream_5() const { return ___networkStream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_networkStream_5() { return &___networkStream_5; }
	inline void set_networkStream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___networkStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_isRead_7() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___isRead_7)); }
	inline bool get_isRead_7() const { return ___isRead_7; }
	inline bool* get_address_of_isRead_7() { return &___isRead_7; }
	inline void set_isRead_7(bool value)
	{
		___isRead_7 = value;
	}

	inline static int32_t get_offset_of_totalRead_8() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___totalRead_8)); }
	inline int32_t get_totalRead_8() const { return ___totalRead_8; }
	inline int32_t* get_address_of_totalRead_8() { return &___totalRead_8; }
	inline void set_totalRead_8(int32_t value)
	{
		___totalRead_8 = value;
	}
};


// System.Net.FtpStatusCode
struct FtpStatusCode_t6CE8FABCFD78E194BFEF150C79B3E7A87A0532D0 
{
public:
	// System.Int32 System.Net.FtpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FtpStatusCode_t6CE8FABCFD78E194BFEF150C79B3E7A87A0532D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.GZipStream
struct GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * ____deflateStream_4;

public:
	inline static int32_t get_offset_of__deflateStream_4() { return static_cast<int32_t>(offsetof(GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6, ____deflateStream_4)); }
	inline DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * get__deflateStream_4() const { return ____deflateStream_4; }
	inline DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 ** get_address_of__deflateStream_4() { return &____deflateStream_4; }
	inline void set__deflateStream_4(DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * value)
	{
		____deflateStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deflateStream_4), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.GestureSettings
struct GestureSettings_tFDC0C6193C4B6AEF07EE35C976897562C9C9395B 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_tFDC0C6193C4B6AEF07EE35C976897562C9C9395B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.HMAC
struct HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188  : public KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08
{
public:
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;

public:
	inline static int32_t get_offset_of_blockSizeValue_5() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___blockSizeValue_5)); }
	inline int32_t get_blockSizeValue_5() const { return ___blockSizeValue_5; }
	inline int32_t* get_address_of_blockSizeValue_5() { return &___blockSizeValue_5; }
	inline void set_blockSizeValue_5(int32_t value)
	{
		___blockSizeValue_5 = value;
	}

	inline static int32_t get_offset_of_m_hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_hashName_6)); }
	inline String_t* get_m_hashName_6() const { return ___m_hashName_6; }
	inline String_t** get_address_of_m_hashName_6() { return &___m_hashName_6; }
	inline void set_m_hashName_6(String_t* value)
	{
		___m_hashName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hashName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_hash1_7() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_hash1_7)); }
	inline HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * get_m_hash1_7() const { return ___m_hash1_7; }
	inline HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 ** get_address_of_m_hash1_7() { return &___m_hash1_7; }
	inline void set_m_hash1_7(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * value)
	{
		___m_hash1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hash1_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_hash2_8() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_hash2_8)); }
	inline HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * get_m_hash2_8() const { return ___m_hash2_8; }
	inline HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 ** get_address_of_m_hash2_8() { return &___m_hash2_8; }
	inline void set_m_hash2_8(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * value)
	{
		___m_hash2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hash2_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_inner_9() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_inner_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_inner_9() const { return ___m_inner_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_inner_9() { return &___m_inner_9; }
	inline void set_m_inner_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_inner_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_inner_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_outer_10() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_outer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_outer_10() const { return ___m_outer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_outer_10() { return &___m_outer_10; }
	inline void set_m_outer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_outer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_outer_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_hashing_11() { return static_cast<int32_t>(offsetof(HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188, ___m_hashing_11)); }
	inline bool get_m_hashing_11() const { return ___m_hashing_11; }
	inline bool* get_address_of_m_hashing_11() { return &___m_hashing_11; }
	inline void set_m_hashing_11(bool value)
	{
		___m_hashing_11 = value;
	}
};


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};

// Windows.UI.Xaml.Data.INotifyPropertyChanged
struct NOVTABLE INotifyPropertyChanged_t658EB1C1F909E233463D471F4F87F65076E33A66 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D(IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
};

// Microsoft.MixedReality.OpenXR.NativeLibToken
struct NativeLibToken_tF4F4C33CB0A1F8ED5CCD55E7D61962B34A1715FF 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.NativeLibToken::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeLibToken_tF4F4C33CB0A1F8ED5CCD55E7D61962B34A1715FF, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.RenderBufferStoreAction
struct RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderBufferStoreAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454, ___value___2)); }
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


// UnityEngine.Rendering.Universal.StoreActionsOptimization
struct StoreActionsOptimization_t7FA48A3E2A61B553D3F665D22810BC18DC470095 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.StoreActionsOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreActionsOptimization_t7FA48A3E2A61B553D3F665D22810BC18DC470095, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.ExecutionContext/Flags
struct Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4 
{
public:
	// System.Int32 System.Threading.ExecutionContext/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_t053589A158AAF0B471CF80825616560409AF43D4 * ____localChangeNotifications_6;

public:
	inline static int32_t get_offset_of__syncContext_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContext_0() const { return ____syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContext_0() { return &____syncContext_0; }
	inline void set__syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContext_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncContextNoFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContextNoFlow_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContextNoFlow_1() const { return ____syncContextNoFlow_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContextNoFlow_1() { return &____syncContextNoFlow_1; }
	inline void set__syncContextNoFlow_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContextNoFlow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContextNoFlow_1), (void*)value);
	}

	inline static int32_t get_offset_of__logicalCallContext_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____logicalCallContext_2)); }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * get__logicalCallContext_2() const { return ____logicalCallContext_2; }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 ** get_address_of__logicalCallContext_2() { return &____logicalCallContext_2; }
	inline void set__logicalCallContext_2(LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * value)
	{
		____logicalCallContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalCallContext_2), (void*)value);
	}

	inline static int32_t get_offset_of__illogicalCallContext_3() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____illogicalCallContext_3)); }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * get__illogicalCallContext_3() const { return ____illogicalCallContext_3; }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E ** get_address_of__illogicalCallContext_3() { return &____illogicalCallContext_3; }
	inline void set__illogicalCallContext_3(IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * value)
	{
		____illogicalCallContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____illogicalCallContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__flags_4() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____flags_4)); }
	inline int32_t get__flags_4() const { return ____flags_4; }
	inline int32_t* get_address_of__flags_4() { return &____flags_4; }
	inline void set__flags_4(int32_t value)
	{
		____flags_4 = value;
	}

	inline static int32_t get_offset_of__localValues_5() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localValues_5)); }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * get__localValues_5() const { return ____localValues_5; }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 ** get_address_of__localValues_5() { return &____localValues_5; }
	inline void set__localValues_5(Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * value)
	{
		____localValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localValues_5), (void*)value);
	}

	inline static int32_t get_offset_of__localChangeNotifications_6() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localChangeNotifications_6)); }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 * get__localChangeNotifications_6() const { return ____localChangeNotifications_6; }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 ** get_address_of__localChangeNotifications_6() { return &____localChangeNotifications_6; }
	inline void set__localChangeNotifications_6(List_1_t053589A158AAF0B471CF80825616560409AF43D4 * value)
	{
		____localChangeNotifications_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localChangeNotifications_6), (void*)value);
	}
};

struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___s_dummyDefaultEC_7;

public:
	inline static int32_t get_offset_of_s_dummyDefaultEC_7() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields, ___s_dummyDefaultEC_7)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_s_dummyDefaultEC_7() const { return ___s_dummyDefaultEC_7; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_s_dummyDefaultEC_7() { return &___s_dummyDefaultEC_7; }
	inline void set_s_dummyDefaultEC_7(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___s_dummyDefaultEC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyDefaultEC_7), (void*)value);
	}
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.Net.FileWebResponse
struct FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6  : public WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0
{
public:
	// System.Boolean System.Net.FileWebResponse::m_closed
	bool ___m_closed_1;
	// System.Int64 System.Net.FileWebResponse::m_contentLength
	int64_t ___m_contentLength_2;
	// System.IO.FileAccess System.Net.FileWebResponse::m_fileAccess
	int32_t ___m_fileAccess_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::m_headers
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___m_headers_4;
	// System.IO.Stream System.Net.FileWebResponse::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_5;
	// System.Uri System.Net.FileWebResponse::m_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_uri_6;

public:
	inline static int32_t get_offset_of_m_closed_1() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_closed_1)); }
	inline bool get_m_closed_1() const { return ___m_closed_1; }
	inline bool* get_address_of_m_closed_1() { return &___m_closed_1; }
	inline void set_m_closed_1(bool value)
	{
		___m_closed_1 = value;
	}

	inline static int32_t get_offset_of_m_contentLength_2() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_contentLength_2)); }
	inline int64_t get_m_contentLength_2() const { return ___m_contentLength_2; }
	inline int64_t* get_address_of_m_contentLength_2() { return &___m_contentLength_2; }
	inline void set_m_contentLength_2(int64_t value)
	{
		___m_contentLength_2 = value;
	}

	inline static int32_t get_offset_of_m_fileAccess_3() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_fileAccess_3)); }
	inline int32_t get_m_fileAccess_3() const { return ___m_fileAccess_3; }
	inline int32_t* get_address_of_m_fileAccess_3() { return &___m_fileAccess_3; }
	inline void set_m_fileAccess_3(int32_t value)
	{
		___m_fileAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_headers_4() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_headers_4)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_m_headers_4() const { return ___m_headers_4; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_m_headers_4() { return &___m_headers_4; }
	inline void set_m_headers_4(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___m_headers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_headers_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_stream_5() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_5() const { return ___m_stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_5() { return &___m_stream_5; }
	inline void set_m_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_uri_6() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_uri_6)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_uri_6() const { return ___m_uri_6; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_uri_6() { return &___m_uri_6; }
	inline void set_m_uri_6(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_uri_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_uri_6), (void*)value);
	}
};


// System.Net.FtpWebResponse
struct FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49  : public WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0
{
public:
	// System.IO.Stream System.Net.FtpWebResponse::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Uri System.Net.FtpWebResponse::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_2;
	// System.Net.FtpStatusCode System.Net.FtpWebResponse::statusCode
	int32_t ___statusCode_3;
	// System.DateTime System.Net.FtpWebResponse::lastModified
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastModified_4;
	// System.String System.Net.FtpWebResponse::bannerMessage
	String_t* ___bannerMessage_5;
	// System.String System.Net.FtpWebResponse::welcomeMessage
	String_t* ___welcomeMessage_6;
	// System.String System.Net.FtpWebResponse::exitMessage
	String_t* ___exitMessage_7;
	// System.String System.Net.FtpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.String System.Net.FtpWebResponse::method
	String_t* ___method_9;
	// System.Boolean System.Net.FtpWebResponse::disposed
	bool ___disposed_10;
	// System.Net.FtpWebRequest System.Net.FtpWebResponse::request
	FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * ___request_11;
	// System.Int64 System.Net.FtpWebResponse::contentLength
	int64_t ___contentLength_12;

public:
	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_uri_2() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___uri_2)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_2() const { return ___uri_2; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_2() { return &___uri_2; }
	inline void set_uri_2(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_2), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_3() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___statusCode_3)); }
	inline int32_t get_statusCode_3() const { return ___statusCode_3; }
	inline int32_t* get_address_of_statusCode_3() { return &___statusCode_3; }
	inline void set_statusCode_3(int32_t value)
	{
		___statusCode_3 = value;
	}

	inline static int32_t get_offset_of_lastModified_4() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___lastModified_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastModified_4() const { return ___lastModified_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastModified_4() { return &___lastModified_4; }
	inline void set_lastModified_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastModified_4 = value;
	}

	inline static int32_t get_offset_of_bannerMessage_5() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___bannerMessage_5)); }
	inline String_t* get_bannerMessage_5() const { return ___bannerMessage_5; }
	inline String_t** get_address_of_bannerMessage_5() { return &___bannerMessage_5; }
	inline void set_bannerMessage_5(String_t* value)
	{
		___bannerMessage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerMessage_5), (void*)value);
	}

	inline static int32_t get_offset_of_welcomeMessage_6() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___welcomeMessage_6)); }
	inline String_t* get_welcomeMessage_6() const { return ___welcomeMessage_6; }
	inline String_t** get_address_of_welcomeMessage_6() { return &___welcomeMessage_6; }
	inline void set_welcomeMessage_6(String_t* value)
	{
		___welcomeMessage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___welcomeMessage_6), (void*)value);
	}

	inline static int32_t get_offset_of_exitMessage_7() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___exitMessage_7)); }
	inline String_t* get_exitMessage_7() const { return ___exitMessage_7; }
	inline String_t** get_address_of_exitMessage_7() { return &___exitMessage_7; }
	inline void set_exitMessage_7(String_t* value)
	{
		___exitMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_statusDescription_8() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___statusDescription_8)); }
	inline String_t* get_statusDescription_8() const { return ___statusDescription_8; }
	inline String_t** get_address_of_statusDescription_8() { return &___statusDescription_8; }
	inline void set_statusDescription_8(String_t* value)
	{
		___statusDescription_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_8), (void*)value);
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___method_9)); }
	inline String_t* get_method_9() const { return ___method_9; }
	inline String_t** get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(String_t* value)
	{
		___method_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_9), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_10() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___disposed_10)); }
	inline bool get_disposed_10() const { return ___disposed_10; }
	inline bool* get_address_of_disposed_10() { return &___disposed_10; }
	inline void set_disposed_10(bool value)
	{
		___disposed_10 = value;
	}

	inline static int32_t get_offset_of_request_11() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___request_11)); }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * get_request_11() const { return ___request_11; }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D ** get_address_of_request_11() { return &___request_11; }
	inline void set_request_11(FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * value)
	{
		___request_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_11), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_12() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___contentLength_12)); }
	inline int64_t get_contentLength_12() const { return ___contentLength_12; }
	inline int64_t* get_address_of_contentLength_12() { return &___contentLength_12; }
	inline void set_contentLength_12(int64_t value)
	{
		___contentLength_12 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureSubsystem
struct GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87  : public Disposable_tBD88628586DFE8324189E1A35E0BC7642579D7DF
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.GestureSubsystem::m_gestureRecognizerHandle
	uint64_t ___m_gestureRecognizerHandle_2;
	// Microsoft.MixedReality.OpenXR.GestureSettings Microsoft.MixedReality.OpenXR.GestureSubsystem::m_gestureSettings
	int32_t ___m_gestureSettings_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.GestureSubsystem::m_running
	bool ___m_running_4;
	// System.Object Microsoft.MixedReality.OpenXR.GestureSubsystem::m_runningLock
	RuntimeObject * ___m_runningLock_5;

public:
	inline static int32_t get_offset_of_m_gestureRecognizerHandle_2() { return static_cast<int32_t>(offsetof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87, ___m_gestureRecognizerHandle_2)); }
	inline uint64_t get_m_gestureRecognizerHandle_2() const { return ___m_gestureRecognizerHandle_2; }
	inline uint64_t* get_address_of_m_gestureRecognizerHandle_2() { return &___m_gestureRecognizerHandle_2; }
	inline void set_m_gestureRecognizerHandle_2(uint64_t value)
	{
		___m_gestureRecognizerHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_gestureSettings_3() { return static_cast<int32_t>(offsetof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87, ___m_gestureSettings_3)); }
	inline int32_t get_m_gestureSettings_3() const { return ___m_gestureSettings_3; }
	inline int32_t* get_address_of_m_gestureSettings_3() { return &___m_gestureSettings_3; }
	inline void set_m_gestureSettings_3(int32_t value)
	{
		___m_gestureSettings_3 = value;
	}

	inline static int32_t get_offset_of_m_running_4() { return static_cast<int32_t>(offsetof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87, ___m_running_4)); }
	inline bool get_m_running_4() const { return ___m_running_4; }
	inline bool* get_address_of_m_running_4() { return &___m_running_4; }
	inline void set_m_running_4(bool value)
	{
		___m_running_4 = value;
	}

	inline static int32_t get_offset_of_m_runningLock_5() { return static_cast<int32_t>(offsetof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87, ___m_runningLock_5)); }
	inline RuntimeObject * get_m_runningLock_5() const { return ___m_runningLock_5; }
	inline RuntimeObject ** get_address_of_m_runningLock_5() { return &___m_runningLock_5; }
	inline void set_m_runningLock_5(RuntimeObject * value)
	{
		___m_runningLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_runningLock_5), (void*)value);
	}
};

struct GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.NativeLibToken Microsoft.MixedReality.OpenXR.GestureSubsystem::nativeLibToken
	uint64_t ___nativeLibToken_1;

public:
	inline static int32_t get_offset_of_nativeLibToken_1() { return static_cast<int32_t>(offsetof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_StaticFields, ___nativeLibToken_1)); }
	inline uint64_t get_nativeLibToken_1() const { return ___nativeLibToken_1; }
	inline uint64_t* get_address_of_nativeLibToken_1() { return &___nativeLibToken_1; }
	inline void set_nativeLibToken_1(uint64_t value)
	{
		___nativeLibToken_1 = value;
	}
};


// System.Security.Cryptography.HMACMD5
struct HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:

public:
};


// System.Security.Cryptography.HMACRIPEMD160
struct HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:

public:
};


// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:

public:
};


// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:

public:
};


// System.Security.Cryptography.HMACSHA384
struct HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};


// System.Security.Cryptography.HMACSHA512
struct HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A  : public HMAC_t67600C3E3919D1C0E5D407C85BCF7C9C486C9188
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// System.Net.FileWebStream
struct FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C  : public FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26
{
public:
	// System.Net.FileWebRequest System.Net.FileWebStream::m_request
	FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * ___m_request_21;

public:
	inline static int32_t get_offset_of_m_request_21() { return static_cast<int32_t>(offsetof(FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C, ___m_request_21)); }
	inline FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * get_m_request_21() const { return ___m_request_21; }
	inline FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE ** get_address_of_m_request_21() { return &___m_request_21; }
	inline void set_m_request_21(FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * value)
	{
		___m_request_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_request_21), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.RenderTargetHandle
struct RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderTargetHandle::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.RenderTargetHandle::<rtid>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CrtidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CrtidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C, ___U3CrtidU3Ek__BackingField_1)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CrtidU3Ek__BackingField_1() const { return ___U3CrtidU3Ek__BackingField_1; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CrtidU3Ek__BackingField_1() { return &___U3CrtidU3Ek__BackingField_1; }
	inline void set_U3CrtidU3Ek__BackingField_1(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CrtidU3Ek__BackingField_1 = value;
	}
};

struct RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.RenderTargetHandle::CameraTarget
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___CameraTarget_2;

public:
	inline static int32_t get_offset_of_CameraTarget_2() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C_StaticFields, ___CameraTarget_2)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_CameraTarget_2() const { return ___CameraTarget_2; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_CameraTarget_2() { return &___CameraTarget_2; }
	inline void set_CameraTarget_2(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___CameraTarget_2 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer::<profilingExecute>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CprofilingExecuteU3Ek__BackingField_0;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures UnityEngine.Rendering.Universal.ScriptableRenderer::<supportedRenderingFeatures>k__BackingField
	RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2;
	// UnityEngine.Rendering.GraphicsDeviceType[] UnityEngine.Rendering.Universal.ScriptableRenderer::<unsupportedGraphicsDeviceTypes>k__BackingField
	GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.ScriptableRenderer::m_StoreActionsOptimizationSetting
	int32_t ___m_StoreActionsOptimizationSetting_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveRenderPassQueue
	List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___m_ActiveRenderPassQueue_7;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RendererFeatures
	List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * ___m_RendererFeatures_8;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraColorTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraColorTarget_9;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraDepthTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraDepthTarget_10;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraColorTargetIsBound
	bool ___m_FirstTimeCameraColorTargetIsBound_11;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraDepthTargetIsBound
	bool ___m_FirstTimeCameraDepthTargetIsBound_12;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsPipelineExecuting
	bool ___m_IsPipelineExecuting_13;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::isCameraColorTargetValid
	bool ___isCameraColorTargetValid_14;

public:
	inline static int32_t get_offset_of_U3CprofilingExecuteU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CprofilingExecuteU3Ek__BackingField_0)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CprofilingExecuteU3Ek__BackingField_0() const { return ___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CprofilingExecuteU3Ek__BackingField_0() { return &___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline void set_U3CprofilingExecuteU3Ek__BackingField_0(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CprofilingExecuteU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprofilingExecuteU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2)); }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * get_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() const { return ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 ** get_address_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return &___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline void set_U3CsupportedRenderingFeaturesU3Ek__BackingField_2(RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * value)
	{
		___U3CsupportedRenderingFeaturesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsupportedRenderingFeaturesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3)); }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* get_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() const { return ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A** get_address_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return &___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline void set_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3(GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* value)
	{
		___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreActionsOptimizationSetting_4() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_StoreActionsOptimizationSetting_4)); }
	inline int32_t get_m_StoreActionsOptimizationSetting_4() const { return ___m_StoreActionsOptimizationSetting_4; }
	inline int32_t* get_address_of_m_StoreActionsOptimizationSetting_4() { return &___m_StoreActionsOptimizationSetting_4; }
	inline void set_m_StoreActionsOptimizationSetting_4(int32_t value)
	{
		___m_StoreActionsOptimizationSetting_4 = value;
	}

	inline static int32_t get_offset_of_m_ActiveRenderPassQueue_7() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_ActiveRenderPassQueue_7)); }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * get_m_ActiveRenderPassQueue_7() const { return ___m_ActiveRenderPassQueue_7; }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F ** get_address_of_m_ActiveRenderPassQueue_7() { return &___m_ActiveRenderPassQueue_7; }
	inline void set_m_ActiveRenderPassQueue_7(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * value)
	{
		___m_ActiveRenderPassQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveRenderPassQueue_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererFeatures_8() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_RendererFeatures_8)); }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * get_m_RendererFeatures_8() const { return ___m_RendererFeatures_8; }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 ** get_address_of_m_RendererFeatures_8() { return &___m_RendererFeatures_8; }
	inline void set_m_RendererFeatures_8(List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * value)
	{
		___m_RendererFeatures_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererFeatures_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraColorTarget_9() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraColorTarget_9)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraColorTarget_9() const { return ___m_CameraColorTarget_9; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraColorTarget_9() { return &___m_CameraColorTarget_9; }
	inline void set_m_CameraColorTarget_9(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraColorTarget_9 = value;
	}

	inline static int32_t get_offset_of_m_CameraDepthTarget_10() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraDepthTarget_10)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraDepthTarget_10() const { return ___m_CameraDepthTarget_10; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraDepthTarget_10() { return &___m_CameraDepthTarget_10; }
	inline void set_m_CameraDepthTarget_10(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraDepthTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraColorTargetIsBound_11() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraColorTargetIsBound_11)); }
	inline bool get_m_FirstTimeCameraColorTargetIsBound_11() const { return ___m_FirstTimeCameraColorTargetIsBound_11; }
	inline bool* get_address_of_m_FirstTimeCameraColorTargetIsBound_11() { return &___m_FirstTimeCameraColorTargetIsBound_11; }
	inline void set_m_FirstTimeCameraColorTargetIsBound_11(bool value)
	{
		___m_FirstTimeCameraColorTargetIsBound_11 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraDepthTargetIsBound_12() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraDepthTargetIsBound_12)); }
	inline bool get_m_FirstTimeCameraDepthTargetIsBound_12() const { return ___m_FirstTimeCameraDepthTargetIsBound_12; }
	inline bool* get_address_of_m_FirstTimeCameraDepthTargetIsBound_12() { return &___m_FirstTimeCameraDepthTargetIsBound_12; }
	inline void set_m_FirstTimeCameraDepthTargetIsBound_12(bool value)
	{
		___m_FirstTimeCameraDepthTargetIsBound_12 = value;
	}

	inline static int32_t get_offset_of_m_IsPipelineExecuting_13() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_IsPipelineExecuting_13)); }
	inline bool get_m_IsPipelineExecuting_13() const { return ___m_IsPipelineExecuting_13; }
	inline bool* get_address_of_m_IsPipelineExecuting_13() { return &___m_IsPipelineExecuting_13; }
	inline void set_m_IsPipelineExecuting_13(bool value)
	{
		___m_IsPipelineExecuting_13 = value;
	}

	inline static int32_t get_offset_of_isCameraColorTargetValid_14() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___isCameraColorTargetValid_14)); }
	inline bool get_isCameraColorTargetValid_14() const { return ___isCameraColorTargetValid_14; }
	inline bool* get_address_of_isCameraColorTargetValid_14() { return &___isCameraColorTargetValid_14; }
	inline void set_isCameraColorTargetValid_14(bool value)
	{
		___isCameraColorTargetValid_14 = value;
	}
};

struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___current_1;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_UseOptimizedStoreActions
	bool ___m_UseOptimizedStoreActions_5;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ActiveColorAttachments_15;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachment
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_ActiveDepthAttachment_16;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorStoreActions
	RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* ___m_ActiveColorStoreActions_17;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthStoreAction
	int32_t ___m_ActiveDepthStoreAction_18;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* ___m_TrimmedColorAttachmentCopies_19;

public:
	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___current_1)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_current_1() const { return ___current_1; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseOptimizedStoreActions_5() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_UseOptimizedStoreActions_5)); }
	inline bool get_m_UseOptimizedStoreActions_5() const { return ___m_UseOptimizedStoreActions_5; }
	inline bool* get_address_of_m_UseOptimizedStoreActions_5() { return &___m_UseOptimizedStoreActions_5; }
	inline void set_m_UseOptimizedStoreActions_5(bool value)
	{
		___m_UseOptimizedStoreActions_5 = value;
	}

	inline static int32_t get_offset_of_m_ActiveColorAttachments_15() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorAttachments_15)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ActiveColorAttachments_15() const { return ___m_ActiveColorAttachments_15; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ActiveColorAttachments_15() { return &___m_ActiveColorAttachments_15; }
	inline void set_m_ActiveColorAttachments_15(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ActiveColorAttachments_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorAttachments_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveDepthAttachment_16() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveDepthAttachment_16)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_ActiveDepthAttachment_16() const { return ___m_ActiveDepthAttachment_16; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_ActiveDepthAttachment_16() { return &___m_ActiveDepthAttachment_16; }
	inline void set_m_ActiveDepthAttachment_16(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_ActiveDepthAttachment_16 = value;
	}

	inline static int32_t get_offset_of_m_ActiveColorStoreActions_17() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorStoreActions_17)); }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* get_m_ActiveColorStoreActions_17() const { return ___m_ActiveColorStoreActions_17; }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF** get_address_of_m_ActiveColorStoreActions_17() { return &___m_ActiveColorStoreActions_17; }
	inline void set_m_ActiveColorStoreActions_17(RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* value)
	{
		___m_ActiveColorStoreActions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorStoreActions_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveDepthStoreAction_18() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveDepthStoreAction_18)); }
	inline int32_t get_m_ActiveDepthStoreAction_18() const { return ___m_ActiveDepthStoreAction_18; }
	inline int32_t* get_address_of_m_ActiveDepthStoreAction_18() { return &___m_ActiveDepthStoreAction_18; }
	inline void set_m_ActiveDepthStoreAction_18(int32_t value)
	{
		___m_ActiveDepthStoreAction_18 = value;
	}

	inline static int32_t get_offset_of_m_TrimmedColorAttachmentCopies_19() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_TrimmedColorAttachmentCopies_19)); }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* get_m_TrimmedColorAttachmentCopies_19() const { return ___m_TrimmedColorAttachmentCopies_19; }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE** get_address_of_m_TrimmedColorAttachmentCopies_19() { return &___m_TrimmedColorAttachmentCopies_19; }
	inline void set_m_TrimmedColorAttachmentCopies_19(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* value)
	{
		___m_TrimmedColorAttachmentCopies_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrimmedColorAttachmentCopies_19), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ForwardRenderer
struct ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B  : public ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133
{
public:
	// UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass UnityEngine.Rendering.Universal.ForwardRenderer::m_ColorGradingLutPass
	ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * ___m_ColorGradingLutPass_21;
	// UnityEngine.Rendering.Universal.Internal.DepthOnlyPass UnityEngine.Rendering.Universal.ForwardRenderer::m_DepthPrepass
	DepthOnlyPass_t10276071287F9C0C5AA16245151BB6E78C42A1F9 * ___m_DepthPrepass_22;
	// UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass UnityEngine.Rendering.Universal.ForwardRenderer::m_DepthNormalPrepass
	DepthNormalOnlyPass_tDB1A8815D1DC9D3C29C49E34016E36ABEC67660A * ___m_DepthNormalPrepass_23;
	// UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass UnityEngine.Rendering.Universal.ForwardRenderer::m_MainLightShadowCasterPass
	MainLightShadowCasterPass_t097D90AD813165DD2FEAFFF7C611D5DA27968613 * ___m_MainLightShadowCasterPass_24;
	// UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass UnityEngine.Rendering.Universal.ForwardRenderer::m_AdditionalLightsShadowCasterPass
	AdditionalLightsShadowCasterPass_t802B9A39EC656CAB08CC274591B37DDB9E6FE218 * ___m_AdditionalLightsShadowCasterPass_25;
	// UnityEngine.Rendering.Universal.Internal.GBufferPass UnityEngine.Rendering.Universal.ForwardRenderer::m_GBufferPass
	GBufferPass_t588E0A729E9618F18D8D1674383E2394F8E7BA53 * ___m_GBufferPass_26;
	// UnityEngine.Rendering.Universal.Internal.CopyDepthPass UnityEngine.Rendering.Universal.ForwardRenderer::m_GBufferCopyDepthPass
	CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * ___m_GBufferCopyDepthPass_27;
	// UnityEngine.Rendering.Universal.Internal.TileDepthRangePass UnityEngine.Rendering.Universal.ForwardRenderer::m_TileDepthRangePass
	TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * ___m_TileDepthRangePass_28;
	// UnityEngine.Rendering.Universal.Internal.TileDepthRangePass UnityEngine.Rendering.Universal.ForwardRenderer::m_TileDepthRangeExtraPass
	TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * ___m_TileDepthRangeExtraPass_29;
	// UnityEngine.Rendering.Universal.Internal.DeferredPass UnityEngine.Rendering.Universal.ForwardRenderer::m_DeferredPass
	DeferredPass_t59179096BF2390AFDC98BCFBE9FFF3F2360174C2 * ___m_DeferredPass_30;
	// UnityEngine.Rendering.Universal.Internal.DrawObjectsPass UnityEngine.Rendering.Universal.ForwardRenderer::m_RenderOpaqueForwardOnlyPass
	DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * ___m_RenderOpaqueForwardOnlyPass_31;
	// UnityEngine.Rendering.Universal.Internal.DrawObjectsPass UnityEngine.Rendering.Universal.ForwardRenderer::m_RenderOpaqueForwardPass
	DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * ___m_RenderOpaqueForwardPass_32;
	// UnityEngine.Rendering.Universal.DrawSkyboxPass UnityEngine.Rendering.Universal.ForwardRenderer::m_DrawSkyboxPass
	DrawSkyboxPass_tED1A0C9F2366544E19EF8DA0044384989F17BFB8 * ___m_DrawSkyboxPass_33;
	// UnityEngine.Rendering.Universal.Internal.CopyDepthPass UnityEngine.Rendering.Universal.ForwardRenderer::m_CopyDepthPass
	CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * ___m_CopyDepthPass_34;
	// UnityEngine.Rendering.Universal.Internal.CopyColorPass UnityEngine.Rendering.Universal.ForwardRenderer::m_CopyColorPass
	CopyColorPass_t63FC50A6A4A4D7D097630C355AB00C2EC668C2A5 * ___m_CopyColorPass_35;
	// UnityEngine.Rendering.Universal.TransparentSettingsPass UnityEngine.Rendering.Universal.ForwardRenderer::m_TransparentSettingsPass
	TransparentSettingsPass_t9D8B1751D8EFAF76DD19B492977630CF221E4FA1 * ___m_TransparentSettingsPass_36;
	// UnityEngine.Rendering.Universal.Internal.DrawObjectsPass UnityEngine.Rendering.Universal.ForwardRenderer::m_RenderTransparentForwardPass
	DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * ___m_RenderTransparentForwardPass_37;
	// UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass UnityEngine.Rendering.Universal.ForwardRenderer::m_OnRenderObjectCallbackPass
	InvokeOnRenderObjectCallbackPass_t58F7A1FDDCA535A9A0BD759C58D54805EC981C4E * ___m_OnRenderObjectCallbackPass_38;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass UnityEngine.Rendering.Universal.ForwardRenderer::m_PostProcessPass
	PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * ___m_PostProcessPass_39;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass UnityEngine.Rendering.Universal.ForwardRenderer::m_FinalPostProcessPass
	PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * ___m_FinalPostProcessPass_40;
	// UnityEngine.Rendering.Universal.Internal.FinalBlitPass UnityEngine.Rendering.Universal.ForwardRenderer::m_FinalBlitPass
	FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * ___m_FinalBlitPass_41;
	// UnityEngine.Rendering.Universal.CapturePass UnityEngine.Rendering.Universal.ForwardRenderer::m_CapturePass
	CapturePass_t1777556812FA622A0E871F3DB39CFFAADA4DFFCB * ___m_CapturePass_42;
	// UnityEngine.Rendering.Universal.XROcclusionMeshPass UnityEngine.Rendering.Universal.ForwardRenderer::m_XROcclusionMeshPass
	XROcclusionMeshPass_tC5F7FD3D0FDA98635F927D9DFA88A609DF25FB0D * ___m_XROcclusionMeshPass_43;
	// UnityEngine.Rendering.Universal.Internal.CopyDepthPass UnityEngine.Rendering.Universal.ForwardRenderer::m_XRCopyDepthPass
	CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * ___m_XRCopyDepthPass_44;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_ActiveCameraColorAttachment
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_ActiveCameraColorAttachment_45;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_ActiveCameraDepthAttachment
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_ActiveCameraDepthAttachment_46;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_CameraColorAttachment
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_CameraColorAttachment_47;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_CameraDepthAttachment
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_CameraDepthAttachment_48;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_DepthTexture
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_DepthTexture_49;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_NormalsTexture
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_NormalsTexture_50;
	// UnityEngine.Rendering.Universal.RenderTargetHandle[] UnityEngine.Rendering.Universal.ForwardRenderer::m_GBufferHandles
	RenderTargetHandleU5BU5D_t4C3806A82AE1785063BA7B81EA83C2E0A25A5EC3* ___m_GBufferHandles_51;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_OpaqueColor
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_OpaqueColor_52;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_AfterPostProcessColor
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_AfterPostProcessColor_53;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_ColorGradingLut
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_ColorGradingLut_54;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_DepthInfoTexture
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_DepthInfoTexture_55;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.ForwardRenderer::m_TileDepthInfoTexture
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___m_TileDepthInfoTexture_56;
	// UnityEngine.Rendering.Universal.Internal.ForwardLights UnityEngine.Rendering.Universal.ForwardRenderer::m_ForwardLights
	ForwardLights_tC47150952C1E12E688F800DB064E404B84C86CB6 * ___m_ForwardLights_57;
	// UnityEngine.Rendering.Universal.Internal.DeferredLights UnityEngine.Rendering.Universal.ForwardRenderer::m_DeferredLights
	DeferredLights_tD0642F8CA1F45E9B92F0F48EBCA676DBB0C7B57F * ___m_DeferredLights_58;
	// UnityEngine.Rendering.Universal.RenderingMode UnityEngine.Rendering.Universal.ForwardRenderer::m_RenderingMode
	int32_t ___m_RenderingMode_59;
	// UnityEngine.Rendering.StencilState UnityEngine.Rendering.Universal.ForwardRenderer::m_DefaultStencilState
	StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  ___m_DefaultStencilState_60;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_BlitMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_BlitMaterial_61;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_CopyDepthMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_CopyDepthMaterial_62;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_SamplingMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_SamplingMaterial_63;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_ScreenspaceShadowsMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_ScreenspaceShadowsMaterial_64;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_TileDepthInfoMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_TileDepthInfoMaterial_65;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_TileDeferredMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_TileDeferredMaterial_66;
	// UnityEngine.Material UnityEngine.Rendering.Universal.ForwardRenderer::m_StencilDeferredMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_StencilDeferredMaterial_67;

public:
	inline static int32_t get_offset_of_m_ColorGradingLutPass_21() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ColorGradingLutPass_21)); }
	inline ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * get_m_ColorGradingLutPass_21() const { return ___m_ColorGradingLutPass_21; }
	inline ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B ** get_address_of_m_ColorGradingLutPass_21() { return &___m_ColorGradingLutPass_21; }
	inline void set_m_ColorGradingLutPass_21(ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * value)
	{
		___m_ColorGradingLutPass_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorGradingLutPass_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthPrepass_22() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DepthPrepass_22)); }
	inline DepthOnlyPass_t10276071287F9C0C5AA16245151BB6E78C42A1F9 * get_m_DepthPrepass_22() const { return ___m_DepthPrepass_22; }
	inline DepthOnlyPass_t10276071287F9C0C5AA16245151BB6E78C42A1F9 ** get_address_of_m_DepthPrepass_22() { return &___m_DepthPrepass_22; }
	inline void set_m_DepthPrepass_22(DepthOnlyPass_t10276071287F9C0C5AA16245151BB6E78C42A1F9 * value)
	{
		___m_DepthPrepass_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthPrepass_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthNormalPrepass_23() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DepthNormalPrepass_23)); }
	inline DepthNormalOnlyPass_tDB1A8815D1DC9D3C29C49E34016E36ABEC67660A * get_m_DepthNormalPrepass_23() const { return ___m_DepthNormalPrepass_23; }
	inline DepthNormalOnlyPass_tDB1A8815D1DC9D3C29C49E34016E36ABEC67660A ** get_address_of_m_DepthNormalPrepass_23() { return &___m_DepthNormalPrepass_23; }
	inline void set_m_DepthNormalPrepass_23(DepthNormalOnlyPass_tDB1A8815D1DC9D3C29C49E34016E36ABEC67660A * value)
	{
		___m_DepthNormalPrepass_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthNormalPrepass_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_MainLightShadowCasterPass_24() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_MainLightShadowCasterPass_24)); }
	inline MainLightShadowCasterPass_t097D90AD813165DD2FEAFFF7C611D5DA27968613 * get_m_MainLightShadowCasterPass_24() const { return ___m_MainLightShadowCasterPass_24; }
	inline MainLightShadowCasterPass_t097D90AD813165DD2FEAFFF7C611D5DA27968613 ** get_address_of_m_MainLightShadowCasterPass_24() { return &___m_MainLightShadowCasterPass_24; }
	inline void set_m_MainLightShadowCasterPass_24(MainLightShadowCasterPass_t097D90AD813165DD2FEAFFF7C611D5DA27968613 * value)
	{
		___m_MainLightShadowCasterPass_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MainLightShadowCasterPass_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_AdditionalLightsShadowCasterPass_25() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_AdditionalLightsShadowCasterPass_25)); }
	inline AdditionalLightsShadowCasterPass_t802B9A39EC656CAB08CC274591B37DDB9E6FE218 * get_m_AdditionalLightsShadowCasterPass_25() const { return ___m_AdditionalLightsShadowCasterPass_25; }
	inline AdditionalLightsShadowCasterPass_t802B9A39EC656CAB08CC274591B37DDB9E6FE218 ** get_address_of_m_AdditionalLightsShadowCasterPass_25() { return &___m_AdditionalLightsShadowCasterPass_25; }
	inline void set_m_AdditionalLightsShadowCasterPass_25(AdditionalLightsShadowCasterPass_t802B9A39EC656CAB08CC274591B37DDB9E6FE218 * value)
	{
		___m_AdditionalLightsShadowCasterPass_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AdditionalLightsShadowCasterPass_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_GBufferPass_26() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_GBufferPass_26)); }
	inline GBufferPass_t588E0A729E9618F18D8D1674383E2394F8E7BA53 * get_m_GBufferPass_26() const { return ___m_GBufferPass_26; }
	inline GBufferPass_t588E0A729E9618F18D8D1674383E2394F8E7BA53 ** get_address_of_m_GBufferPass_26() { return &___m_GBufferPass_26; }
	inline void set_m_GBufferPass_26(GBufferPass_t588E0A729E9618F18D8D1674383E2394F8E7BA53 * value)
	{
		___m_GBufferPass_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GBufferPass_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_GBufferCopyDepthPass_27() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_GBufferCopyDepthPass_27)); }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * get_m_GBufferCopyDepthPass_27() const { return ___m_GBufferCopyDepthPass_27; }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C ** get_address_of_m_GBufferCopyDepthPass_27() { return &___m_GBufferCopyDepthPass_27; }
	inline void set_m_GBufferCopyDepthPass_27(CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * value)
	{
		___m_GBufferCopyDepthPass_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GBufferCopyDepthPass_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_TileDepthRangePass_28() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TileDepthRangePass_28)); }
	inline TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * get_m_TileDepthRangePass_28() const { return ___m_TileDepthRangePass_28; }
	inline TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 ** get_address_of_m_TileDepthRangePass_28() { return &___m_TileDepthRangePass_28; }
	inline void set_m_TileDepthRangePass_28(TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * value)
	{
		___m_TileDepthRangePass_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TileDepthRangePass_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_TileDepthRangeExtraPass_29() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TileDepthRangeExtraPass_29)); }
	inline TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * get_m_TileDepthRangeExtraPass_29() const { return ___m_TileDepthRangeExtraPass_29; }
	inline TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 ** get_address_of_m_TileDepthRangeExtraPass_29() { return &___m_TileDepthRangeExtraPass_29; }
	inline void set_m_TileDepthRangeExtraPass_29(TileDepthRangePass_t21368216C783196012DD588F0BBB24619CEF9458 * value)
	{
		___m_TileDepthRangeExtraPass_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TileDepthRangeExtraPass_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeferredPass_30() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DeferredPass_30)); }
	inline DeferredPass_t59179096BF2390AFDC98BCFBE9FFF3F2360174C2 * get_m_DeferredPass_30() const { return ___m_DeferredPass_30; }
	inline DeferredPass_t59179096BF2390AFDC98BCFBE9FFF3F2360174C2 ** get_address_of_m_DeferredPass_30() { return &___m_DeferredPass_30; }
	inline void set_m_DeferredPass_30(DeferredPass_t59179096BF2390AFDC98BCFBE9FFF3F2360174C2 * value)
	{
		___m_DeferredPass_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredPass_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderOpaqueForwardOnlyPass_31() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_RenderOpaqueForwardOnlyPass_31)); }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * get_m_RenderOpaqueForwardOnlyPass_31() const { return ___m_RenderOpaqueForwardOnlyPass_31; }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E ** get_address_of_m_RenderOpaqueForwardOnlyPass_31() { return &___m_RenderOpaqueForwardOnlyPass_31; }
	inline void set_m_RenderOpaqueForwardOnlyPass_31(DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * value)
	{
		___m_RenderOpaqueForwardOnlyPass_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderOpaqueForwardOnlyPass_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderOpaqueForwardPass_32() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_RenderOpaqueForwardPass_32)); }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * get_m_RenderOpaqueForwardPass_32() const { return ___m_RenderOpaqueForwardPass_32; }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E ** get_address_of_m_RenderOpaqueForwardPass_32() { return &___m_RenderOpaqueForwardPass_32; }
	inline void set_m_RenderOpaqueForwardPass_32(DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * value)
	{
		___m_RenderOpaqueForwardPass_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderOpaqueForwardPass_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_DrawSkyboxPass_33() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DrawSkyboxPass_33)); }
	inline DrawSkyboxPass_tED1A0C9F2366544E19EF8DA0044384989F17BFB8 * get_m_DrawSkyboxPass_33() const { return ___m_DrawSkyboxPass_33; }
	inline DrawSkyboxPass_tED1A0C9F2366544E19EF8DA0044384989F17BFB8 ** get_address_of_m_DrawSkyboxPass_33() { return &___m_DrawSkyboxPass_33; }
	inline void set_m_DrawSkyboxPass_33(DrawSkyboxPass_tED1A0C9F2366544E19EF8DA0044384989F17BFB8 * value)
	{
		___m_DrawSkyboxPass_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DrawSkyboxPass_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_CopyDepthPass_34() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CopyDepthPass_34)); }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * get_m_CopyDepthPass_34() const { return ___m_CopyDepthPass_34; }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C ** get_address_of_m_CopyDepthPass_34() { return &___m_CopyDepthPass_34; }
	inline void set_m_CopyDepthPass_34(CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * value)
	{
		___m_CopyDepthPass_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CopyDepthPass_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CopyColorPass_35() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CopyColorPass_35)); }
	inline CopyColorPass_t63FC50A6A4A4D7D097630C355AB00C2EC668C2A5 * get_m_CopyColorPass_35() const { return ___m_CopyColorPass_35; }
	inline CopyColorPass_t63FC50A6A4A4D7D097630C355AB00C2EC668C2A5 ** get_address_of_m_CopyColorPass_35() { return &___m_CopyColorPass_35; }
	inline void set_m_CopyColorPass_35(CopyColorPass_t63FC50A6A4A4D7D097630C355AB00C2EC668C2A5 * value)
	{
		___m_CopyColorPass_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CopyColorPass_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransparentSettingsPass_36() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TransparentSettingsPass_36)); }
	inline TransparentSettingsPass_t9D8B1751D8EFAF76DD19B492977630CF221E4FA1 * get_m_TransparentSettingsPass_36() const { return ___m_TransparentSettingsPass_36; }
	inline TransparentSettingsPass_t9D8B1751D8EFAF76DD19B492977630CF221E4FA1 ** get_address_of_m_TransparentSettingsPass_36() { return &___m_TransparentSettingsPass_36; }
	inline void set_m_TransparentSettingsPass_36(TransparentSettingsPass_t9D8B1751D8EFAF76DD19B492977630CF221E4FA1 * value)
	{
		___m_TransparentSettingsPass_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransparentSettingsPass_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderTransparentForwardPass_37() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_RenderTransparentForwardPass_37)); }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * get_m_RenderTransparentForwardPass_37() const { return ___m_RenderTransparentForwardPass_37; }
	inline DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E ** get_address_of_m_RenderTransparentForwardPass_37() { return &___m_RenderTransparentForwardPass_37; }
	inline void set_m_RenderTransparentForwardPass_37(DrawObjectsPass_tA2D4D915D53228CA1DCBB4E46B6E409AA824103E * value)
	{
		___m_RenderTransparentForwardPass_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderTransparentForwardPass_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnRenderObjectCallbackPass_38() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_OnRenderObjectCallbackPass_38)); }
	inline InvokeOnRenderObjectCallbackPass_t58F7A1FDDCA535A9A0BD759C58D54805EC981C4E * get_m_OnRenderObjectCallbackPass_38() const { return ___m_OnRenderObjectCallbackPass_38; }
	inline InvokeOnRenderObjectCallbackPass_t58F7A1FDDCA535A9A0BD759C58D54805EC981C4E ** get_address_of_m_OnRenderObjectCallbackPass_38() { return &___m_OnRenderObjectCallbackPass_38; }
	inline void set_m_OnRenderObjectCallbackPass_38(InvokeOnRenderObjectCallbackPass_t58F7A1FDDCA535A9A0BD759C58D54805EC981C4E * value)
	{
		___m_OnRenderObjectCallbackPass_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnRenderObjectCallbackPass_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_PostProcessPass_39() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_PostProcessPass_39)); }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * get_m_PostProcessPass_39() const { return ___m_PostProcessPass_39; }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D ** get_address_of_m_PostProcessPass_39() { return &___m_PostProcessPass_39; }
	inline void set_m_PostProcessPass_39(PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * value)
	{
		___m_PostProcessPass_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PostProcessPass_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_FinalPostProcessPass_40() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_FinalPostProcessPass_40)); }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * get_m_FinalPostProcessPass_40() const { return ___m_FinalPostProcessPass_40; }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D ** get_address_of_m_FinalPostProcessPass_40() { return &___m_FinalPostProcessPass_40; }
	inline void set_m_FinalPostProcessPass_40(PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * value)
	{
		___m_FinalPostProcessPass_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FinalPostProcessPass_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_FinalBlitPass_41() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_FinalBlitPass_41)); }
	inline FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * get_m_FinalBlitPass_41() const { return ___m_FinalBlitPass_41; }
	inline FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 ** get_address_of_m_FinalBlitPass_41() { return &___m_FinalBlitPass_41; }
	inline void set_m_FinalBlitPass_41(FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * value)
	{
		___m_FinalBlitPass_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FinalBlitPass_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_CapturePass_42() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CapturePass_42)); }
	inline CapturePass_t1777556812FA622A0E871F3DB39CFFAADA4DFFCB * get_m_CapturePass_42() const { return ___m_CapturePass_42; }
	inline CapturePass_t1777556812FA622A0E871F3DB39CFFAADA4DFFCB ** get_address_of_m_CapturePass_42() { return &___m_CapturePass_42; }
	inline void set_m_CapturePass_42(CapturePass_t1777556812FA622A0E871F3DB39CFFAADA4DFFCB * value)
	{
		___m_CapturePass_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CapturePass_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_XROcclusionMeshPass_43() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_XROcclusionMeshPass_43)); }
	inline XROcclusionMeshPass_tC5F7FD3D0FDA98635F927D9DFA88A609DF25FB0D * get_m_XROcclusionMeshPass_43() const { return ___m_XROcclusionMeshPass_43; }
	inline XROcclusionMeshPass_tC5F7FD3D0FDA98635F927D9DFA88A609DF25FB0D ** get_address_of_m_XROcclusionMeshPass_43() { return &___m_XROcclusionMeshPass_43; }
	inline void set_m_XROcclusionMeshPass_43(XROcclusionMeshPass_tC5F7FD3D0FDA98635F927D9DFA88A609DF25FB0D * value)
	{
		___m_XROcclusionMeshPass_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XROcclusionMeshPass_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_XRCopyDepthPass_44() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_XRCopyDepthPass_44)); }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * get_m_XRCopyDepthPass_44() const { return ___m_XRCopyDepthPass_44; }
	inline CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C ** get_address_of_m_XRCopyDepthPass_44() { return &___m_XRCopyDepthPass_44; }
	inline void set_m_XRCopyDepthPass_44(CopyDepthPass_tDA0649E1B77933F7A916F7698B07098BAB2C503C * value)
	{
		___m_XRCopyDepthPass_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRCopyDepthPass_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveCameraColorAttachment_45() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ActiveCameraColorAttachment_45)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_ActiveCameraColorAttachment_45() const { return ___m_ActiveCameraColorAttachment_45; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_ActiveCameraColorAttachment_45() { return &___m_ActiveCameraColorAttachment_45; }
	inline void set_m_ActiveCameraColorAttachment_45(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_ActiveCameraColorAttachment_45 = value;
	}

	inline static int32_t get_offset_of_m_ActiveCameraDepthAttachment_46() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ActiveCameraDepthAttachment_46)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_ActiveCameraDepthAttachment_46() const { return ___m_ActiveCameraDepthAttachment_46; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_ActiveCameraDepthAttachment_46() { return &___m_ActiveCameraDepthAttachment_46; }
	inline void set_m_ActiveCameraDepthAttachment_46(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_ActiveCameraDepthAttachment_46 = value;
	}

	inline static int32_t get_offset_of_m_CameraColorAttachment_47() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CameraColorAttachment_47)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_CameraColorAttachment_47() const { return ___m_CameraColorAttachment_47; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_CameraColorAttachment_47() { return &___m_CameraColorAttachment_47; }
	inline void set_m_CameraColorAttachment_47(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_CameraColorAttachment_47 = value;
	}

	inline static int32_t get_offset_of_m_CameraDepthAttachment_48() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CameraDepthAttachment_48)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_CameraDepthAttachment_48() const { return ___m_CameraDepthAttachment_48; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_CameraDepthAttachment_48() { return &___m_CameraDepthAttachment_48; }
	inline void set_m_CameraDepthAttachment_48(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_CameraDepthAttachment_48 = value;
	}

	inline static int32_t get_offset_of_m_DepthTexture_49() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DepthTexture_49)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_DepthTexture_49() const { return ___m_DepthTexture_49; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_DepthTexture_49() { return &___m_DepthTexture_49; }
	inline void set_m_DepthTexture_49(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_DepthTexture_49 = value;
	}

	inline static int32_t get_offset_of_m_NormalsTexture_50() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_NormalsTexture_50)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_NormalsTexture_50() const { return ___m_NormalsTexture_50; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_NormalsTexture_50() { return &___m_NormalsTexture_50; }
	inline void set_m_NormalsTexture_50(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_NormalsTexture_50 = value;
	}

	inline static int32_t get_offset_of_m_GBufferHandles_51() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_GBufferHandles_51)); }
	inline RenderTargetHandleU5BU5D_t4C3806A82AE1785063BA7B81EA83C2E0A25A5EC3* get_m_GBufferHandles_51() const { return ___m_GBufferHandles_51; }
	inline RenderTargetHandleU5BU5D_t4C3806A82AE1785063BA7B81EA83C2E0A25A5EC3** get_address_of_m_GBufferHandles_51() { return &___m_GBufferHandles_51; }
	inline void set_m_GBufferHandles_51(RenderTargetHandleU5BU5D_t4C3806A82AE1785063BA7B81EA83C2E0A25A5EC3* value)
	{
		___m_GBufferHandles_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GBufferHandles_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OpaqueColor_52() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_OpaqueColor_52)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_OpaqueColor_52() const { return ___m_OpaqueColor_52; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_OpaqueColor_52() { return &___m_OpaqueColor_52; }
	inline void set_m_OpaqueColor_52(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_OpaqueColor_52 = value;
	}

	inline static int32_t get_offset_of_m_AfterPostProcessColor_53() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_AfterPostProcessColor_53)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_AfterPostProcessColor_53() const { return ___m_AfterPostProcessColor_53; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_AfterPostProcessColor_53() { return &___m_AfterPostProcessColor_53; }
	inline void set_m_AfterPostProcessColor_53(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_AfterPostProcessColor_53 = value;
	}

	inline static int32_t get_offset_of_m_ColorGradingLut_54() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ColorGradingLut_54)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_ColorGradingLut_54() const { return ___m_ColorGradingLut_54; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_ColorGradingLut_54() { return &___m_ColorGradingLut_54; }
	inline void set_m_ColorGradingLut_54(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_ColorGradingLut_54 = value;
	}

	inline static int32_t get_offset_of_m_DepthInfoTexture_55() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DepthInfoTexture_55)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_DepthInfoTexture_55() const { return ___m_DepthInfoTexture_55; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_DepthInfoTexture_55() { return &___m_DepthInfoTexture_55; }
	inline void set_m_DepthInfoTexture_55(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_DepthInfoTexture_55 = value;
	}

	inline static int32_t get_offset_of_m_TileDepthInfoTexture_56() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TileDepthInfoTexture_56)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_m_TileDepthInfoTexture_56() const { return ___m_TileDepthInfoTexture_56; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_m_TileDepthInfoTexture_56() { return &___m_TileDepthInfoTexture_56; }
	inline void set_m_TileDepthInfoTexture_56(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___m_TileDepthInfoTexture_56 = value;
	}

	inline static int32_t get_offset_of_m_ForwardLights_57() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ForwardLights_57)); }
	inline ForwardLights_tC47150952C1E12E688F800DB064E404B84C86CB6 * get_m_ForwardLights_57() const { return ___m_ForwardLights_57; }
	inline ForwardLights_tC47150952C1E12E688F800DB064E404B84C86CB6 ** get_address_of_m_ForwardLights_57() { return &___m_ForwardLights_57; }
	inline void set_m_ForwardLights_57(ForwardLights_tC47150952C1E12E688F800DB064E404B84C86CB6 * value)
	{
		___m_ForwardLights_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ForwardLights_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeferredLights_58() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DeferredLights_58)); }
	inline DeferredLights_tD0642F8CA1F45E9B92F0F48EBCA676DBB0C7B57F * get_m_DeferredLights_58() const { return ___m_DeferredLights_58; }
	inline DeferredLights_tD0642F8CA1F45E9B92F0F48EBCA676DBB0C7B57F ** get_address_of_m_DeferredLights_58() { return &___m_DeferredLights_58; }
	inline void set_m_DeferredLights_58(DeferredLights_tD0642F8CA1F45E9B92F0F48EBCA676DBB0C7B57F * value)
	{
		___m_DeferredLights_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredLights_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderingMode_59() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_RenderingMode_59)); }
	inline int32_t get_m_RenderingMode_59() const { return ___m_RenderingMode_59; }
	inline int32_t* get_address_of_m_RenderingMode_59() { return &___m_RenderingMode_59; }
	inline void set_m_RenderingMode_59(int32_t value)
	{
		___m_RenderingMode_59 = value;
	}

	inline static int32_t get_offset_of_m_DefaultStencilState_60() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_DefaultStencilState_60)); }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  get_m_DefaultStencilState_60() const { return ___m_DefaultStencilState_60; }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 * get_address_of_m_DefaultStencilState_60() { return &___m_DefaultStencilState_60; }
	inline void set_m_DefaultStencilState_60(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  value)
	{
		___m_DefaultStencilState_60 = value;
	}

	inline static int32_t get_offset_of_m_BlitMaterial_61() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_BlitMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_BlitMaterial_61() const { return ___m_BlitMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_BlitMaterial_61() { return &___m_BlitMaterial_61; }
	inline void set_m_BlitMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_BlitMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlitMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_CopyDepthMaterial_62() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_CopyDepthMaterial_62)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_CopyDepthMaterial_62() const { return ___m_CopyDepthMaterial_62; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_CopyDepthMaterial_62() { return &___m_CopyDepthMaterial_62; }
	inline void set_m_CopyDepthMaterial_62(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_CopyDepthMaterial_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CopyDepthMaterial_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_SamplingMaterial_63() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_SamplingMaterial_63)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_SamplingMaterial_63() const { return ___m_SamplingMaterial_63; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_SamplingMaterial_63() { return &___m_SamplingMaterial_63; }
	inline void set_m_SamplingMaterial_63(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_SamplingMaterial_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SamplingMaterial_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScreenspaceShadowsMaterial_64() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_ScreenspaceShadowsMaterial_64)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_ScreenspaceShadowsMaterial_64() const { return ___m_ScreenspaceShadowsMaterial_64; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_ScreenspaceShadowsMaterial_64() { return &___m_ScreenspaceShadowsMaterial_64; }
	inline void set_m_ScreenspaceShadowsMaterial_64(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_ScreenspaceShadowsMaterial_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScreenspaceShadowsMaterial_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TileDepthInfoMaterial_65() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TileDepthInfoMaterial_65)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_TileDepthInfoMaterial_65() const { return ___m_TileDepthInfoMaterial_65; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_TileDepthInfoMaterial_65() { return &___m_TileDepthInfoMaterial_65; }
	inline void set_m_TileDepthInfoMaterial_65(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_TileDepthInfoMaterial_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TileDepthInfoMaterial_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TileDeferredMaterial_66() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_TileDeferredMaterial_66)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_TileDeferredMaterial_66() const { return ___m_TileDeferredMaterial_66; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_TileDeferredMaterial_66() { return &___m_TileDeferredMaterial_66; }
	inline void set_m_TileDeferredMaterial_66(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_TileDeferredMaterial_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TileDeferredMaterial_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_StencilDeferredMaterial_67() { return static_cast<int32_t>(offsetof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B, ___m_StencilDeferredMaterial_67)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_StencilDeferredMaterial_67() const { return ___m_StencilDeferredMaterial_67; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_StencilDeferredMaterial_67() { return &___m_StencilDeferredMaterial_67; }
	inline void set_m_StencilDeferredMaterial_67(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_StencilDeferredMaterial_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StencilDeferredMaterial_67), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue);
il2cpp_hresult_t INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);


// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);

// COM Callable Wrapper for System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Exception
struct Exception_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>, IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Exception_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			returnValue = static_cast<Exception_t *>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Exception_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Exception_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Exception_t_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.ExpandoObject
struct ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper>, IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, INotifyPropertyChanged_t658EB1C1F909E233463D471F4F87F65076E33A66
{
	inline ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &INotifyPropertyChanged_t658EB1C1F909E233463D471F4F87F65076E33A66::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<INotifyPropertyChanged_t658EB1C1F909E233463D471F4F87F65076E33A66*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID;
		interfaceIds[1] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = INotifyPropertyChanged_t658EB1C1F909E233463D471F4F87F65076E33A66::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D(IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) IL2CPP_OVERRIDE
	{
		return INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___handler0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) IL2CPP_OVERRIDE
	{
		return INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___token0);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebResponse
struct FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebStream
struct FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.Universal.ForwardRenderer
struct ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ForwardRenderer_t03D44F8AEF5529EEDDE84AD427104748FF80C62B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.FoundationContract
struct FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper>, IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF828061D1EC5AB7A239BAE56E3DEDC85BDD96581(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C  returnValue;
		try
		{
			returnValue = *static_cast<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C *>(UnBox(GetManagedObjectInline(), FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpDataStream
struct FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpWebResponse
struct FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Compression.GZipStream
struct GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.GestureSubsystem
struct GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GestureSubsystem_tBF220F681EEE3C9A024681C9EDEA53B87A78BD87_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Guid
struct Guid_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>, IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Guid_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 16;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		String_t* returnValue;
		try
		{
			String_t* il2cppRetVal;
			il2cppRetVal = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75(static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var)), NULL);
			returnValue = il2cppRetVal;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppHString _returnValue_marshaled = NULL;
		if (returnValue == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL);
		}
		_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Guid_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Guid_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Guid_t_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACMD5
struct HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACMD5_t04A6FBBAD9EA41237C2274F2A6B518AF3E775181_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACRIPEMD160
struct HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACRIPEMD160_tC410C8E893DCD31DC5213DF8390FCE9DA795BA5E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACSHA1_t870BB0E0399BEBC0A2BF30596CCB096A6D1F1B9E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACSHA256_t3363AA554FC034FF2627F7535F6DB1A0A7F824CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACSHA384
struct HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACSHA384_tA94996AA46304CBADE236B92C56C84BFDB3EE207_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.HMACSHA512
struct HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HMACSHA512_t2BD310D63E39051F1328F25B1E17F743FEB1B09A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.HResult
struct HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper>, IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B6DDCCD8C68053D2DD115C28EF11C303B1C139(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA  returnValue;
		try
		{
			returnValue = *static_cast<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA *>(UnBox(GetManagedObjectInline(), HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper(obj));
}
