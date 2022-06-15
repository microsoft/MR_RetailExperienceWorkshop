#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct KeyCollection_tB27C25DCC90663D5F3EB2276BBF42E989F7AA4C4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct KeyCollection_tD23FA2CCA9DD67D10472D7FF0AF886731F6E2D2B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct ValueCollection_tDC03A66EA8261DAFD22669DB257FB58D2C40C9B3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct ValueCollection_t294D9012F8652979319FBD3EABA437F0483B97FB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>[]
struct EntryU5BU5D_tB952F037DB39B65F8C85C969BCD6E7013CD0434B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>[]
struct EntryU5BU5D_t6623599647866000F4BE2745125B6F5C56E8D170;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
struct MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate
struct AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate
struct BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
struct ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5;

IL2CPP_EXTERN_C RuntimeClass* AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEvent_tD52B2D1398BCE888AEFC5A0A46FE25BE74DB5201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrResult_t49320B26C282219A0D054D88C92230D8DDC1B89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2341D996C56AD03A6AEC16C1CCDD1E213BC53A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m510A42E68054570E9E862411A1E55A2297506D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m96522186DC0631C6CDC0C7BF289FDA2C94145639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB1D891D95B544728B7920FFE73A23FFE68A5A79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m183ED97E847880B800B46312C836A3E5A2CFDE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m33DE2516DF90E7BE604A50978BAD6FD82F0BDE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m2BA1B56790F633EFF59AB35E9A1C0D7B3677ABC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m5EC870A123093DB54BFA13746A0D81EF02158996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1F479D7F0CED9671901668DE447904AE6B66920D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m399D064313CB2AD0AB8927C8E9633B976E187A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisMockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_m90EF13C60B5DB29024ACC03CEA2E5823FC98AF66_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t69A12ACC68B26CBF93242393D9998A3A6AF09ABF 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB952F037DB39B65F8C85C969BCD6E7013CD0434B* ___entries_1;
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
	KeyCollection_tB27C25DCC90663D5F3EB2276BBF42E989F7AA4C4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDC03A66EA8261DAFD22669DB257FB58D2C40C9B3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___entries_1)); }
	inline EntryU5BU5D_tB952F037DB39B65F8C85C969BCD6E7013CD0434B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB952F037DB39B65F8C85C969BCD6E7013CD0434B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB952F037DB39B65F8C85C969BCD6E7013CD0434B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___keys_7)); }
	inline KeyCollection_tB27C25DCC90663D5F3EB2276BBF42E989F7AA4C4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB27C25DCC90663D5F3EB2276BBF42E989F7AA4C4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB27C25DCC90663D5F3EB2276BBF42E989F7AA4C4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ___values_8)); }
	inline ValueCollection_tDC03A66EA8261DAFD22669DB257FB58D2C40C9B3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDC03A66EA8261DAFD22669DB257FB58D2C40C9B3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDC03A66EA8261DAFD22669DB257FB58D2C40C9B3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6623599647866000F4BE2745125B6F5C56E8D170* ___entries_1;
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
	KeyCollection_tD23FA2CCA9DD67D10472D7FF0AF886731F6E2D2B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t294D9012F8652979319FBD3EABA437F0483B97FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___entries_1)); }
	inline EntryU5BU5D_t6623599647866000F4BE2745125B6F5C56E8D170* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6623599647866000F4BE2745125B6F5C56E8D170** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6623599647866000F4BE2745125B6F5C56E8D170* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___keys_7)); }
	inline KeyCollection_tD23FA2CCA9DD67D10472D7FF0AF886731F6E2D2B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD23FA2CCA9DD67D10472D7FF0AF886731F6E2D2B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD23FA2CCA9DD67D10472D7FF0AF886731F6E2D2B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ___values_8)); }
	inline ValueCollection_t294D9012F8652979319FBD3EABA437F0483B97FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t294D9012F8652979319FBD3EABA437F0483B97FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t294D9012F8652979319FBD3EABA437F0483B97FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode
struct XrEnvironmentBlendMode_t56443F4429F60FE527CD107FF370420BC466C22D 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrEnvironmentBlendMode_t56443F4429F60FE527CD107FF370420BC466C22D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType
struct XrReferenceSpaceType_tBE9E267103D7A0E2278B2D260AB10E8FCB9BFB04 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrReferenceSpaceType_tBE9E267103D7A0E2278B2D260AB10E8FCB9BFB04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrResult
struct XrResult_t49320B26C282219A0D054D88C92230D8DDC1B89E 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrResult_t49320B26C282219A0D054D88C92230D8DDC1B89E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrSessionState
struct XrSessionState_tD2A2CFCB9CBF2417AA28167709571F97994BC965 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrSessionState_tD2A2CFCB9CBF2417AA28167709571F97994BC965, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags
struct XrSpaceLocationFlags_tB4E2EE7468915B12D8BBFBBFF3E6359BA22901D4 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrSpaceLocationFlags_tB4E2EE7468915B12D8BBFBBFF3E6359BA22901D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType
struct XrViewConfigurationType_tBA160CDB95D86F7A81AC83ABBBABC26EFB37043B 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrViewConfigurationType_tBA160CDB95D86F7A81AC83ABBBABC26EFB37043B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags
struct XrViewStateFlags_tDA39AAEB96C5BB19459199B8DD29C192B608BF3F 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrViewStateFlags_tDA39AAEB96C5BB19459199B8DD29C192B608BF3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent
struct ScriptEvent_tD52B2D1398BCE888AEFC5A0A46FE25BE74DB5201 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScriptEvent_tD52B2D1398BCE888AEFC5A0A46FE25BE74DB5201, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode
struct DepthSubmissionMode_t094572DB01BB3B9FF370F53A253946676089ED6A 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthSubmissionMode_t094572DB01BB3B9FF370F53A253946676089ED6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct RenderMode_t4809990A1DAEA4E383CD64A87CB64C9B93AD79E1 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_t4809990A1DAEA4E383CD64A87CB64C9B93AD79E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureIdInternal_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___featureIdInternal_9)); }
	inline String_t* get_featureIdInternal_9() const { return ___featureIdInternal_9; }
	inline String_t** get_address_of_featureIdInternal_9() { return &___featureIdInternal_9; }
	inline void set_featureIdInternal_9(String_t* value)
	{
		___featureIdInternal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureIdInternal_9), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_10)); }
	inline String_t* get_openxrExtensionStrings_10() const { return ___openxrExtensionStrings_10; }
	inline String_t** get_address_of_openxrExtensionStrings_10() { return &___openxrExtensionStrings_10; }
	inline void set_openxrExtensionStrings_10(String_t* value)
	{
		___openxrExtensionStrings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_10), (void*)value);
	}

	inline static int32_t get_offset_of_company_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_11)); }
	inline String_t* get_company_11() const { return ___company_11; }
	inline String_t** get_address_of_company_11() { return &___company_11; }
	inline void set_company_11(String_t* value)
	{
		___company_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_11), (void*)value);
	}

	inline static int32_t get_offset_of_priority_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_12)); }
	inline int32_t get_priority_12() const { return ___priority_12; }
	inline int32_t* get_address_of_priority_12() { return &___priority_12; }
	inline void set_priority_12(int32_t value)
	{
		___priority_12 = value;
	}

	inline static int32_t get_offset_of_required_13() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_13)); }
	inline bool get_required_13() const { return ___required_13; }
	inline bool* get_address_of_required_13() { return &___required_13; }
	inline void set_required_13(bool value)
	{
		___required_13 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;

public:
	inline static int32_t get_offset_of_features_4() { return static_cast<int32_t>(offsetof(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C, ___features_4)); }
	inline OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401* get_features_4() const { return ___features_4; }
	inline OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401** get_address_of_features_4() { return &___features_4; }
	inline void set_features_4(OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401* value)
	{
		___features_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___features_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_renderMode_5() { return static_cast<int32_t>(offsetof(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C, ___m_renderMode_5)); }
	inline int32_t get_m_renderMode_5() const { return ___m_renderMode_5; }
	inline int32_t* get_address_of_m_renderMode_5() { return &___m_renderMode_5; }
	inline void set_m_renderMode_5(int32_t value)
	{
		___m_renderMode_5 = value;
	}

	inline static int32_t get_offset_of_m_depthSubmissionMode_6() { return static_cast<int32_t>(offsetof(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C, ___m_depthSubmissionMode_6)); }
	inline int32_t get_m_depthSubmissionMode_6() const { return ___m_depthSubmissionMode_6; }
	inline int32_t* get_address_of_m_depthSubmissionMode_6() { return &___m_depthSubmissionMode_6; }
	inline void set_m_depthSubmissionMode_6(int32_t value)
	{
		___m_depthSubmissionMode_6 = value;
	}
};

struct OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * ___s_RuntimeInstance_8;

public:
	inline static int32_t get_offset_of_s_RuntimeInstance_8() { return static_cast<int32_t>(offsetof(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C_StaticFields, ___s_RuntimeInstance_8)); }
	inline OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * get_s_RuntimeInstance_8() const { return ___s_RuntimeInstance_8; }
	inline OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C ** get_address_of_s_RuntimeInstance_8() { return &___s_RuntimeInstance_8; }
	inline void set_s_RuntimeInstance_8(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * value)
	{
		___s_RuntimeInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeInstance_8), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate
struct AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate
struct BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
struct ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
struct MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ignoreValidationErrors
	bool ___ignoreValidationErrors_19;

public:
	inline static int32_t get_offset_of_ignoreValidationErrors_19() { return static_cast<int32_t>(offsetof(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3, ___ignoreValidationErrors_19)); }
	inline bool get_ignoreValidationErrors_19() const { return ___ignoreValidationErrors_19; }
	inline bool* get_address_of_ignoreValidationErrors_19() { return &___ignoreValidationErrors_19; }
	inline void set_ignoreValidationErrors_19(bool value)
	{
		___ignoreValidationErrors_19 = value;
	}
};

struct MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_AfterFunctionCallbacks
	Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * ___s_AfterFunctionCallbacks_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_BeforeFunctionCallbacks
	Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * ___s_BeforeFunctionCallbacks_16;
	// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::onScriptEvent
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * ___onScriptEvent_17;

public:
	inline static int32_t get_offset_of_s_AfterFunctionCallbacks_15() { return static_cast<int32_t>(offsetof(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields, ___s_AfterFunctionCallbacks_15)); }
	inline Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * get_s_AfterFunctionCallbacks_15() const { return ___s_AfterFunctionCallbacks_15; }
	inline Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 ** get_address_of_s_AfterFunctionCallbacks_15() { return &___s_AfterFunctionCallbacks_15; }
	inline void set_s_AfterFunctionCallbacks_15(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * value)
	{
		___s_AfterFunctionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AfterFunctionCallbacks_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeforeFunctionCallbacks_16() { return static_cast<int32_t>(offsetof(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields, ___s_BeforeFunctionCallbacks_16)); }
	inline Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * get_s_BeforeFunctionCallbacks_16() const { return ___s_BeforeFunctionCallbacks_16; }
	inline Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 ** get_address_of_s_BeforeFunctionCallbacks_16() { return &___s_BeforeFunctionCallbacks_16; }
	inline void set_s_BeforeFunctionCallbacks_16(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * value)
	{
		___s_BeforeFunctionCallbacks_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeforeFunctionCallbacks_16), (void*)value);
	}

	inline static int32_t get_offset_of_onScriptEvent_17() { return static_cast<int32_t>(offsetof(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields, ___onScriptEvent_17)); }
	inline ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * get_onScriptEvent_17() const { return ___onScriptEvent_17; }
	inline ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 ** get_address_of_onScriptEvent_17() { return &___onScriptEvent_17; }
	inline void set_onScriptEvent_17(ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * value)
	{
		___onScriptEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onScriptEvent_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OpenXRSettings_GetFeature_TisRuntimeObject_m93F76236D33F1F56120A7C078CB8DCC604671980_gshared (OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ReceiveScriptEvent_m66F5CEF0D55D35B1E8447878C2B348426763571B (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9 (String_t* ___function0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001 (String_t* ___function0, int32_t ___result1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * OpenXRSettings_get_Instance_mBD87CD81D9FA85B61AA75EB372B4622A914762A0 (const RuntimeMethod* method);
// !!0 UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Features.Mock.MockRuntime>()
inline MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * OpenXRSettings_GetFeature_TisMockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_m90EF13C60B5DB29024ACC03CEA2E5823FC98AF66 (OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * __this, const RuntimeMethod* method)
{
	return ((  MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * (*) (OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C *, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m93F76236D33F1F56120A7C078CB8DCC604671980_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_mA8CBBEA1B393B81607DD3C7874F4E37493BB46E6 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * MockRuntime_GetBeforeFunctionCallback_m05963D31267222E3C40F0F405C9C76CAFB09BE3D (String_t* ___function0, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_Invoke_m2D06321F22B1879F763318220EB83EB115AFE30E (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, String_t* ___functionName0, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * MockRuntime_GetAfterFunctionCallback_mC41219770A22B68EFE4C1D3CD137E9BC2167A4D4 (String_t* ___function0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate_Invoke_m054C6F0C6D78A08665FEFA61245E94F369799737 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::.ctor()
inline void Dictionary_2__ctor_m33DE2516DF90E7BE604A50978BAD6FD82F0BDE7C (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m399D064313CB2AD0AB8927C8E9633B976E187A84 (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * __this, String_t* ___key0, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *, String_t*, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::Remove(!0)
inline bool Dictionary_2_Remove_m510A42E68054570E9E862411A1E55A2297506D3C (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::get_Count()
inline int32_t Dictionary_2_get_Count_m2BA1B56790F633EFF59AB35E9A1C0D7B3677ABC0 (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::.ctor()
inline void Dictionary_2__ctor_m183ED97E847880B800B46312C836A3E5A2CFDE69 (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1F479D7F0CED9671901668DE447904AE6B66920D (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * __this, String_t* ___key0, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *, String_t*, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::Remove(!0)
inline bool Dictionary_2_Remove_m2341D996C56AD03A6AEC16C1CCDD1E213BC53A55 (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::get_Count()
inline int32_t Dictionary_2_get_Count_m5EC870A123093DB54BFA13746A0D81EF02158996 (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeforeFunctionDelegate__ctor_m08F9C87B382BD17CDE4E9D640D7DFAA56B2B6C44 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate__ctor_mE226AAF42B795233B0CFDF9F40E915C4407A1FA4 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_MockRuntime_RegisterFunctionCallbacks_m2A32439CC03D6BA1A35A825604DC884E51D5FBB2 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___hookBefore0, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___hookAfter1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_mC9996CE21474799C6829A04CFDC7F53288613529 (String_t* ___function0, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___beforeCallback1, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___afterCallback2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB1D891D95B544728B7920FFE73A23FFE68A5A79B (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * __this, String_t* ___key0, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *, String_t*, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m96522186DC0631C6CDC0C7BF289FDA2C94145639 (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * __this, String_t* ___key0, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *, String_t*, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ClearFunctionCallbacks_mC1B35D463E7A0BC4D882061C1BBEBBF2AA8A325E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetView(int32_t, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetViewState(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetReferenceSpace(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetActionSpace(uint64_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_RegisterScriptEventCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_TransitionToState(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_GetSessionState();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_RequestExitSession();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_CauseInstanceLoss();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetEnvironmentBlendMode(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetReferenceSpaceBounds(int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_GetEndFrameStats(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_ActivateSecondaryView(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_RegisterFunctionCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m66F5CEF0D55D35B1E8447878C2B348426763571B(int32_t ___evt0, uint64_t ___param1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MockRuntime_ReceiveScriptEvent_m66F5CEF0D55D35B1E8447878C2B348426763571B(___evt0, ___param1, NULL);

}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9(char* ___function0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___function0' to managed representation
	String_t* ____function0_unmarshaled = NULL;
	____function0_unmarshaled = il2cpp_codegen_marshal_string_result(___function0);

	// Managed method invocation
	int32_t returnValue;
	returnValue = MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9(____function0_unmarshaled, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001(char* ___function0, int32_t ___result1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___function0' to managed representation
	String_t* ____function0_unmarshaled = NULL;
	____function0_unmarshaled = il2cpp_codegen_marshal_string_result(___function0);

	// Managed method invocation
	MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001(____function0_unmarshaled, ___result1, NULL);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::add_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_add_onScriptEvent_mAD927DF1320B5968110B2345695A43ECA1B6BD49 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_0 = NULL;
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_1 = NULL;
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_0 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_onScriptEvent_17();
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_2 = V_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_5 = V_2;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_6 = V_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *>((ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 **)(((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_address_of_onScriptEvent_17()), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_8 = V_0;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)L_8) == ((RuntimeObject*)(ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::remove_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_remove_onScriptEvent_m9E6D6DF22466EDCB3BA6D114A0EEE7F75EEF27A9 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_0 = NULL;
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_1 = NULL;
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_0 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_onScriptEvent_17();
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_2 = V_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_5 = V_2;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_6 = V_1;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *>((ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 **)(((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_address_of_onScriptEvent_17()), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_8 = V_0;
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)L_8) == ((RuntimeObject*)(ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * MockRuntime_get_Instance_mA453F86A5ABD5DC3C30927C0A253768671B7D263 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisMockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_m90EF13C60B5DB29024ACC03CEA2E5823FC98AF66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MockRuntime Instance => OpenXRSettings.Instance.GetFeature<MockRuntime>();
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C_il2cpp_TypeInfo_var);
		OpenXRSettings_t7E7706E7597849CCD2747A21E6E6EECB038F225C * L_0;
		L_0 = OpenXRSettings_get_Instance_mBD87CD81D9FA85B61AA75EB372B4622A914762A0(/*hidden argument*/NULL);
		NullCheck(L_0);
		MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * L_1;
		L_1 = OpenXRSettings_GetFeature_TisMockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_m90EF13C60B5DB29024ACC03CEA2E5823FC98AF66(L_0, /*hidden argument*/OpenXRSettings_GetFeature_TisMockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_m90EF13C60B5DB29024ACC03CEA2E5823FC98AF66_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ReceiveScriptEvent_m66F5CEF0D55D35B1E8447878C2B348426763571B (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * G_B2_0 = NULL;
	ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * G_B1_0 = NULL;
	{
		// private static void ReceiveScriptEvent(ScriptEvent evt, ulong param) => onScriptEvent?.Invoke(evt, param);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_0 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_onScriptEvent_17();
		ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___evt0;
		uint64_t L_3 = ___param1;
		NullCheck(G_B2_0);
		ScriptEventDelegate_Invoke_mA8CBBEA1B393B81607DD3C7874F4E37493BB46E6(G_B2_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9 (String_t* ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * V_0 = NULL;
	{
		// var callback = GetBeforeFunctionCallback(function);
		String_t* L_0 = ___function0;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_1;
		L_1 = MockRuntime_GetBeforeFunctionCallback_m05963D31267222E3C40F0F405C9C76CAFB09BE3D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if(null == callback)
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return XrResult.Success;
		return (int32_t)(0);
	}

IL_000c:
	{
		// return callback(function);
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_3 = V_0;
		String_t* L_4 = ___function0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = BeforeFunctionDelegate_Invoke_m2D06321F22B1879F763318220EB83EB115AFE30E(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001 (String_t* ___function0, int32_t ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * V_0 = NULL;
	{
		// var callback = GetAfterFunctionCallback(function);
		String_t* L_0 = ___function0;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_1;
		L_1 = MockRuntime_GetAfterFunctionCallback_mC41219770A22B68EFE4C1D3CD137E9BC2167A4D4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (null == callback)
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// callback(function, result);
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_3 = V_0;
		String_t* L_4 = ___function0;
		int32_t L_5 = ___result1;
		NullCheck(L_3);
		AfterFunctionDelegate_Invoke_m054C6F0C6D78A08665FEFA61245E94F369799737(L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_mC9996CE21474799C6829A04CFDC7F53288613529 (String_t* ___function0, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___beforeCallback1, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___afterCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2341D996C56AD03A6AEC16C1CCDD1E213BC53A55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m510A42E68054570E9E862411A1E55A2297506D3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m183ED97E847880B800B46312C836A3E5A2CFDE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m33DE2516DF90E7BE604A50978BAD6FD82F0BDE7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m2BA1B56790F633EFF59AB35E9A1C0D7B3677ABC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m5EC870A123093DB54BFA13746A0D81EF02158996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1F479D7F0CED9671901668DE447904AE6B66920D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m399D064313CB2AD0AB8927C8E9633B976E187A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * G_B17_0 = NULL;
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * G_B19_0 = NULL;
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * G_B18_0 = NULL;
	AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * G_B20_0 = NULL;
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * G_B20_1 = NULL;
	{
		// if (beforeCallback != null)
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_0 = ___beforeCallback1;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (null == s_BeforeFunctionCallbacks)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_1 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// s_BeforeFunctionCallbacks = new Dictionary<string, BeforeFunctionDelegate>();
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_2 = (Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *)il2cpp_codegen_object_new(Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m33DE2516DF90E7BE604A50978BAD6FD82F0BDE7C(L_2, /*hidden argument*/Dictionary_2__ctor_m33DE2516DF90E7BE604A50978BAD6FD82F0BDE7C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_BeforeFunctionCallbacks_16(L_2);
	}

IL_0014:
	{
		// s_BeforeFunctionCallbacks[function] = beforeCallback;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_3 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		String_t* L_4 = ___function0;
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_5 = ___beforeCallback1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m399D064313CB2AD0AB8927C8E9633B976E187A84(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m399D064313CB2AD0AB8927C8E9633B976E187A84_RuntimeMethod_var);
		// }
		goto IL_0047;
	}

IL_0022:
	{
		// else if (s_BeforeFunctionCallbacks != null)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_6 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// s_BeforeFunctionCallbacks.Remove(function);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_7 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		String_t* L_8 = ___function0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m510A42E68054570E9E862411A1E55A2297506D3C(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m510A42E68054570E9E862411A1E55A2297506D3C_RuntimeMethod_var);
		// if (s_BeforeFunctionCallbacks.Count == 0)
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_10 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m2BA1B56790F633EFF59AB35E9A1C0D7B3677ABC0(L_10, /*hidden argument*/Dictionary_2_get_Count_m2BA1B56790F633EFF59AB35E9A1C0D7B3677ABC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		// s_BeforeFunctionCallbacks = null;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_BeforeFunctionCallbacks_16((Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *)NULL);
	}

IL_0047:
	{
		// if (afterCallback != null)
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_12 = ___afterCallback2;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// if (null == s_AfterFunctionCallbacks)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_13 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		// s_AfterFunctionCallbacks = new Dictionary<string, AfterFunctionDelegate>();
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_14 = (Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *)il2cpp_codegen_object_new(Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m183ED97E847880B800B46312C836A3E5A2CFDE69(L_14, /*hidden argument*/Dictionary_2__ctor_m183ED97E847880B800B46312C836A3E5A2CFDE69_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_AfterFunctionCallbacks_15(L_14);
	}

IL_005b:
	{
		// s_AfterFunctionCallbacks[function] = afterCallback;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_15 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		String_t* L_16 = ___function0;
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_17 = ___afterCallback2;
		NullCheck(L_15);
		Dictionary_2_set_Item_m1F479D7F0CED9671901668DE447904AE6B66920D(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_m1F479D7F0CED9671901668DE447904AE6B66920D_RuntimeMethod_var);
		// }
		goto IL_008e;
	}

IL_0069:
	{
		// else if (s_AfterFunctionCallbacks != null)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_18 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		if (!L_18)
		{
			goto IL_008e;
		}
	}
	{
		// s_AfterFunctionCallbacks.Remove(function);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_19 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		String_t* L_20 = ___function0;
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_Remove_m2341D996C56AD03A6AEC16C1CCDD1E213BC53A55(L_19, L_20, /*hidden argument*/Dictionary_2_Remove_m2341D996C56AD03A6AEC16C1CCDD1E213BC53A55_RuntimeMethod_var);
		// if (s_AfterFunctionCallbacks.Count == 0)
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_22 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Dictionary_2_get_Count_m5EC870A123093DB54BFA13746A0D81EF02158996(L_22, /*hidden argument*/Dictionary_2_get_Count_m5EC870A123093DB54BFA13746A0D81EF02158996_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_008e;
		}
	}
	{
		// s_AfterFunctionCallbacks = null;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_AfterFunctionCallbacks_15((Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *)NULL);
	}

IL_008e:
	{
		// MockRuntime_RegisterFunctionCallbacks(
		//     s_BeforeFunctionCallbacks != null ? BeforeFunctionCallback : (BeforeFunctionDelegate)null,
		//     s_AfterFunctionCallbacks != null ? AfterFunctionCallback : (AfterFunctionDelegate)null);
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_24 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		if (L_24)
		{
			goto IL_0098;
		}
	}
	{
		G_B17_0 = ((BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *)(NULL));
		goto IL_00a4;
	}

IL_0098:
	{
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_25 = (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *)il2cpp_codegen_object_new(BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22_il2cpp_TypeInfo_var);
		BeforeFunctionDelegate__ctor_m08F9C87B382BD17CDE4E9D640D7DFAA56B2B6C44(L_25, NULL, (intptr_t)((intptr_t)MockRuntime_BeforeFunctionCallback_m5FDEF08149545E36EFDAE885A986A2A04151E5C9_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B17_0 = L_25;
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_26 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		G_B18_0 = G_B17_0;
		if (L_26)
		{
			G_B19_0 = G_B17_0;
			goto IL_00ae;
		}
	}
	{
		G_B20_0 = ((AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *)(NULL));
		G_B20_1 = G_B18_0;
		goto IL_00ba;
	}

IL_00ae:
	{
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_27 = (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *)il2cpp_codegen_object_new(AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93_il2cpp_TypeInfo_var);
		AfterFunctionDelegate__ctor_mE226AAF42B795233B0CFDF9F40E915C4407A1FA4(L_27, NULL, (intptr_t)((intptr_t)MockRuntime_AfterFunctionCallback_mAF8AAD83714DE1C2B13FF7FAE1CC275D15EB1001_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B20_0 = L_27;
		G_B20_1 = G_B19_0;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		MockRuntime_MockRuntime_RegisterFunctionCallbacks_m2A32439CC03D6BA1A35A825604DC884E51D5FBB2(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_mF7C3166DD622AED4F3153BE63EE512170ABFA4E9 (String_t* ___function0, BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___beforeCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetFunctionCallback(function, beforeCallback, GetAfterFunctionCallback(function));
		String_t* L_0 = ___function0;
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_1 = ___beforeCallback1;
		String_t* L_2 = ___function0;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_3;
		L_3 = MockRuntime_GetAfterFunctionCallback_mC41219770A22B68EFE4C1D3CD137E9BC2167A4D4(L_2, /*hidden argument*/NULL);
		MockRuntime_SetFunctionCallback_mC9996CE21474799C6829A04CFDC7F53288613529(L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_mCC1D204E03B2CC5F710C90CE16FC8C875034F074 (String_t* ___function0, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___afterCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetFunctionCallback(function, GetBeforeFunctionCallback(function), afterCallback);
		String_t* L_0 = ___function0;
		String_t* L_1 = ___function0;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_2;
		L_2 = MockRuntime_GetBeforeFunctionCallback_m05963D31267222E3C40F0F405C9C76CAFB09BE3D(L_1, /*hidden argument*/NULL);
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_3 = ___afterCallback1;
		MockRuntime_SetFunctionCallback_mC9996CE21474799C6829A04CFDC7F53288613529(L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * MockRuntime_GetBeforeFunctionCallback_m05963D31267222E3C40F0F405C9C76CAFB09BE3D (String_t* ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB1D891D95B544728B7920FFE73A23FFE68A5A79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * V_0 = NULL;
	{
		// if (null == s_BeforeFunctionCallbacks)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_0 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *)NULL;
	}

IL_0009:
	{
		// if (!s_BeforeFunctionCallbacks.TryGetValue(function, out var callback))
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 * L_1 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_BeforeFunctionCallbacks_16();
		String_t* L_2 = ___function0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mB1D891D95B544728B7920FFE73A23FFE68A5A79B(L_1, L_2, (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mB1D891D95B544728B7920FFE73A23FFE68A5A79B_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *)NULL;
	}

IL_001a:
	{
		// return callback;
		BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * MockRuntime_GetAfterFunctionCallback_mC41219770A22B68EFE4C1D3CD137E9BC2167A4D4 (String_t* ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m96522186DC0631C6CDC0C7BF289FDA2C94145639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * V_0 = NULL;
	{
		// if (null == s_AfterFunctionCallbacks)
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_0 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *)NULL;
	}

IL_0009:
	{
		// if (!s_AfterFunctionCallbacks.TryGetValue(function, out var callback))
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 * L_1 = ((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->get_s_AfterFunctionCallbacks_15();
		String_t* L_2 = ___function0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m96522186DC0631C6CDC0C7BF289FDA2C94145639(L_1, L_2, (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m96522186DC0631C6CDC0C7BF289FDA2C94145639_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *)NULL;
	}

IL_001a:
	{
		// return callback;
		AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ClearFunctionCallbacks_mC1B35D463E7A0BC4D882061C1BBEBBF2AA8A325E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_BeforeFunctionCallbacks = null;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_BeforeFunctionCallbacks_16((Dictionary_2_tD64E135A403A13E4564D475F5B027D92C799D517 *)NULL);
		// s_AfterFunctionCallbacks = null;
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_s_AfterFunctionCallbacks_15((Dictionary_2_t3D8A7F3392319932D50F5BA9C21BB7362D18CD89 *)NULL);
		// MockRuntime_RegisterFunctionCallbacks(null, null);
		MockRuntime_MockRuntime_RegisterFunctionCallbacks_m2A32439CC03D6BA1A35A825604DC884E51D5FBB2((BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 *)NULL, (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ResetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ResetDefaults_m8092A728A5E3E9922A3003BE71F7300F1911D8F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onScriptEvent = null;
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		((MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var))->set_onScriptEvent_17((ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 *)NULL);
		// ClearFunctionCallbacks();
		MockRuntime_ClearFunctionCallbacks_mC1B35D463E7A0BC4D882061C1BBEBBF2AA8A325E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_OnInstanceDestroy_m2572FB38B64BD4DD6ACA718B3E004A055D32781F (MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearFunctionCallbacks();
		IL2CPP_RUNTIME_CLASS_INIT(MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3_il2cpp_TypeInfo_var);
		MockRuntime_ClearFunctionCallbacks_mC1B35D463E7A0BC4D882061C1BBEBBF2AA8A325E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewPose(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetViewPose_m61EA8005FC1E20567270044741FD908E07282F53 (int32_t ___viewConfigurationType0, int32_t ___viewIndex1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation3, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___fov4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetView", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetView)(___viewConfigurationType0, ___viewIndex1, ___position2, ___orientation3, ___fov4);
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, ___viewIndex1, ___position2, ___orientation3, ___fov4);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewState(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetViewState_m984A39DB23CD757C5B92DA2085397CBE24FC5D62 (int32_t ___viewConfigurationType0, int32_t ___viewStateFlags1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetViewState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetViewState)(___viewConfigurationType0, ___viewStateFlags1);
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, ___viewStateFlags1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetSpace_m2DCD13F7B5969E4030CCF5E8A2787B2A01D610F8 (int32_t ___referenceSpace0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation2, int32_t ___locationFlags3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetReferenceSpace", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetReferenceSpace)(___referenceSpace0, ___position1, ___orientation2, ___locationFlags3);
	#else
	il2cppPInvokeFunc(___referenceSpace0, ___position1, ___orientation2, ___locationFlags3);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(System.UInt64,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetSpace_m701B57EC3E341548FA1D5FFBA2FD7B531552F8F5 (uint64_t ___actionHandle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation2, int32_t ___locationFlags3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetActionSpace", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetActionSpace)(___actionHandle0, ___position1, ___orientation2, ___locationFlags3);
	#else
	il2cppPInvokeFunc(___actionHandle0, ___position1, ___orientation2, ___locationFlags3);
	#endif

}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_Internal_RegisterScriptEventCallback_m08F551105EA0DC7AD70596A4A1A5C5AB4579FBA2 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * ___callback0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RegisterScriptEventCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_RegisterScriptEventCallback)(____callback0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled);
	#endif

	return returnValue;
}
// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_TransitionToState(UnityEngine.XR.OpenXR.NativeTypes.XrSessionState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MockRuntime_Internal_TransitionToState_m7EAB754B69AF18089E4D8DE5FDE77985779F89A6 (int32_t ___state0, bool ___forceTransition1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_TransitionToState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_TransitionToState)(___state0, static_cast<int32_t>(___forceTransition1));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___state0, static_cast<int32_t>(___forceTransition1));
	#endif

	return static_cast<bool>(returnValue);
}
// UnityEngine.XR.OpenXR.NativeTypes.XrSessionState UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_GetSessionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_Internal_GetSessionState_m8517DA92A695CCF2DC50CE3025CC5FB64CC0EEEC (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_GetSessionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_GetSessionState)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::RequestExitSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_RequestExitSession_mBFDDDB2A8EA874CDDC6CD561AECAB60D2A31BD71 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RequestExitSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_RequestExitSession)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::CauseInstanceLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_CauseInstanceLoss_mDDDC8BA3C669648505DF8DF0CFF5A792D60FD7DC (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_CauseInstanceLoss", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_CauseInstanceLoss)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetEnvironmentBlendMode(UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetEnvironmentBlendMode_mCB92FB713C1C861AE29B61B7748CD78D76DE6213 (int32_t ___environmentBlendMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetEnvironmentBlendMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetEnvironmentBlendMode)(___environmentBlendMode0);
	#else
	il2cppPInvokeFunc(___environmentBlendMode0);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetReferenceSpaceBounds(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetReferenceSpaceBounds_mBF7BCEEA4EACA6D3BD98E6763226F5E82B05D5AF (int32_t ___referenceSpace0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___bounds1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetReferenceSpaceBounds", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetReferenceSpaceBounds)(___referenceSpace0, ___bounds1);
	#else
	il2cppPInvokeFunc(___referenceSpace0, ___bounds1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetEndFrameStats(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_GetEndFrameStats_mAEF24052D2E06F18C55EED61343DBD6E078FDB23 (int32_t* ___primaryLayerCount0, int32_t* ___secondaryLayerCount1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_GetEndFrameStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_GetEndFrameStats)(___primaryLayerCount0, ___secondaryLayerCount1);
	#else
	il2cppPInvokeFunc(___primaryLayerCount0, ___secondaryLayerCount1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ActivateSecondaryView(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ActivateSecondaryView_m623AC4E13ABB0D2CCA017A2F501023625C5A3DF9 (int32_t ___viewConfigurationType0, bool ___activate1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_ActivateSecondaryView", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_ActivateSecondaryView)(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_MockRuntime_RegisterFunctionCallbacks_m2A32439CC03D6BA1A35A825604DC884E51D5FBB2 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * ___hookBefore0, AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * ___hookAfter1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RegisterFunctionCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hookBefore0' to native representation
	Il2CppMethodPointer ____hookBefore0_marshaled = NULL;
	____hookBefore0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___hookBefore0));

	// Marshaling of parameter '___hookAfter1' to native representation
	Il2CppMethodPointer ____hookAfter1_marshaled = NULL;
	____hookAfter1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___hookAfter1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_RegisterFunctionCallbacks)(____hookBefore0_marshaled, ____hookAfter1_marshaled);
	#else
	il2cppPInvokeFunc(____hookBefore0_marshaled, ____hookAfter1_marshaled);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime__ctor_m8E2086CD08568B1E7621905B54E0796308F245FD (MockRuntime_tECF1827BDFD6C6AD4099A7015BC07B8B639304F3 * __this, const RuntimeMethod* method)
{
	{
		OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime__cctor_mC82DE3482FA623704CFD8845F1C31887D4C81DC4 (const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___functionName0' to native representation
	char* ____functionName0_marshaled = NULL;
	____functionName0_marshaled = il2cpp_codegen_marshal_string(___functionName0);

	// Native function invocation
	il2cppPInvokeFunc(____functionName0_marshaled, ___result1);

	// Marshaling cleanup of parameter '___functionName0' native representation
	il2cpp_codegen_marshal_free(____functionName0_marshaled);
	____functionName0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate__ctor_mE226AAF42B795233B0CFDF9F40E915C4407A1FA4 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate_Invoke_m054C6F0C6D78A08665FEFA61245E94F369799737 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___functionName0, ___result1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___functionName0, ___result1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___functionName0, ___result1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___functionName0, ___result1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___functionName0, ___result1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___functionName0, ___result1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___functionName0, ___result1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___functionName0, ___result1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___functionName0, ___result1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___functionName0, ___result1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___functionName0, ___result1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___functionName0, ___result1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___functionName0, ___result1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::BeginInvoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AfterFunctionDelegate_BeginInvoke_m1C2FE862F436BDCA0323332AA27CF4E03DA5A6E3 (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, String_t* ___functionName0, int32_t ___result1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t49320B26C282219A0D054D88C92230D8DDC1B89E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___functionName0;
	__d_args[1] = Box(XrResult_t49320B26C282219A0D054D88C92230D8DDC1B89E_il2cpp_TypeInfo_var, &___result1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate_EndInvoke_m45A0F3D2E4208298DC646C0FD8B7E1C23EA27B8E (AfterFunctionDelegate_t3E7E9A9424D8ACFE7DA8384707E57531979CAB93 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___functionName0' to native representation
	char* ____functionName0_marshaled = NULL;
	____functionName0_marshaled = il2cpp_codegen_marshal_string(___functionName0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____functionName0_marshaled);

	// Marshaling cleanup of parameter '___functionName0' native representation
	il2cpp_codegen_marshal_free(____functionName0_marshaled);
	____functionName0_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeforeFunctionDelegate__ctor_m08F9C87B382BD17CDE4E9D640D7DFAA56B2B6C44 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_Invoke_m2D06321F22B1879F763318220EB83EB115AFE30E (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___functionName0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___functionName0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, ___functionName0);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, ___functionName0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___functionName0);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___functionName0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___functionName0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___functionName0);
					else
						result = GenericVirtFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___functionName0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___functionName0);
					else
						result = VirtFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___functionName0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___functionName0, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___functionName0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BeforeFunctionDelegate_BeginInvoke_m25CD78D4F8DF111F6CA446B539D6027ED0CB1740 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, String_t* ___functionName0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___functionName0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_EndInvoke_mD485F810E416AE1F34F1FD57D4309A515FA9DF78 (BeforeFunctionDelegate_t25C5297FDF663BABFBAF30B675AA651DB93BCA22 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___evt0, ___param1);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate__ctor_m5ED02D9DA8A45851ED73B535BDB65DA15F707D8A (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_mA8CBBEA1B393B81607DD3C7874F4E37493BB46E6 (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___evt0, ___param1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___evt0, ___param1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___evt0, ___param1);
					else
						GenericVirtActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___evt0, ___param1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___evt0, ___param1);
					else
						VirtActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___evt0, ___param1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___evt0) - 1), ___param1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___evt0, ___param1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptEventDelegate_BeginInvoke_mDA811B33970DA6BF72119EFBD8A68C47A731E61B (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, int32_t ___evt0, uint64_t ___param1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEvent_tD52B2D1398BCE888AEFC5A0A46FE25BE74DB5201_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ScriptEvent_tD52B2D1398BCE888AEFC5A0A46FE25BE74DB5201_il2cpp_TypeInfo_var, &___evt0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___param1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_EndInvoke_m71CBE1F7B3820EBF8BB1B50B61A31BE92A6753AF (ScriptEventDelegate_t42A57503337218101ED25219738385D1C8D37CF5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
