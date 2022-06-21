#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A;
IL2CPP_EXTERN_C String_t* _stringLiteralECCC4B7A0DA4E8DB493886ED11AC56BA55FBE86F;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_RegisterEvent_m4A5A571D06302B860F7EDDC66AA8758F72EDFF67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_SendEvent_mA5C39137E86C47DF2B2663E6C1605BC1E7139395_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB192D216DD8406BFF7972D93280BB245AF529D46 
{
public:

public:
};


// System.Object


// UnityEngine.Analytics.Analytics
struct Analytics_tB9A7CF05DD275341CB01A92CE859FF15B6E69EFA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * ___identityTokenChanged_1;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStateChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_identityTokenChanged_1() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields, ___identityTokenChanged_1)); }
	inline IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * get_identityTokenChanged_1() const { return ___identityTokenChanged_1; }
	inline IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 ** get_address_of_identityTokenChanged_1() { return &___identityTokenChanged_1; }
	inline void set_identityTokenChanged_1(IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * value)
	{
		___identityTokenChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identityTokenChanged_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Analytics.ContinuousEvent
struct ContinuousEvent_t3F564D8670B20B2AED1CF9CC8D8F7DC74FF5B526  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteConfigSettingsHelper
struct RemoteConfigSettingsHelper_t4F594BB463720302BF8F02062BC9F2F3EAB39AE3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteSettings
struct RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___Completed_2;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeforeFetchFromServer_1() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___BeforeFetchFromServer_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_BeforeFetchFromServer_1() const { return ___BeforeFetchFromServer_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_BeforeFetchFromServer_1() { return &___BeforeFetchFromServer_1; }
	inline void set_BeforeFetchFromServer_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___BeforeFetchFromServer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeFetchFromServer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___Completed_2)); }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * get_Completed_2() const { return ___Completed_2; }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 ** get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * value)
	{
		___Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_2), (void*)value);
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Analytics.AnalyticsResult
struct AnalyticsResult_t354FBE9E2776B790EBAF24EBA60EE7AA64F1E1E0 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsResult_t354FBE9E2776B790EBAF24EBA60EE7AA64F1E1E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Analytics.AnalyticsSessionState
struct AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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

// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932, ___Updated_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};

// UnityEngine.RemoteConfigSettingsHelper/Tag
struct Tag_tF98827947FA5E3148A566C444B306A969C5E371A 
{
public:
	// System.Int32 UnityEngine.RemoteConfigSettingsHelper/Tag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tag_tF98827947FA5E3148A566C444B306A969C5E371A, ___value___2)); }
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55  : public MulticastDelegate_t
{
public:

public:
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


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method);

// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570 (const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_m4A5A571D06302B860F7EDDC66AA8758F72EDFF67 (String_t* ___eventName0, int32_t ___maxEventPerHour1, int32_t ___maxItems2, String_t* ___vendorKey3, int32_t ___ver4, String_t* ___prefix5, String_t* ___assemblyInfo6, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281 (const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183 (String_t* ___eventName0, int32_t ___maxEventPerHour1, int32_t ___maxItems2, String_t* ___vendorKey3, int32_t ___ver4, String_t* ___prefix5, String_t* ___assemblyInfo6, bool ___notifyServer7, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132 (String_t* ___eventName0, RuntimeObject * ___parameters1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
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
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281 (const RuntimeMethod* method)
{
	typedef bool (*Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281_ftn) ();
	static Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::IsInitialized()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183 (String_t* ___eventName0, int32_t ___maxEventPerHour1, int32_t ___maxItems2, String_t* ___vendorKey3, int32_t ___ver4, String_t* ___prefix5, String_t* ___assemblyInfo6, bool ___notifyServer7, const RuntimeMethod* method)
{
	typedef int32_t (*Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183_ftn) (String_t*, int32_t, int32_t, String_t*, int32_t, String_t*, String_t*, bool);
	static Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___eventName0, ___maxEventPerHour1, ___maxItems2, ___vendorKey3, ___ver4, ___prefix5, ___assemblyInfo6, ___notifyServer7);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132 (String_t* ___eventName0, RuntimeObject * ___parameters1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method)
{
	typedef int32_t (*Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132_ftn) (String_t*, RuntimeObject *, int32_t, String_t*);
	static Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___eventName0, ___parameters1, ___ver2, ___prefix3);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_mE1A72B3CF77B90B9B5AAAFB39E515D1DBAEF1990 (String_t* ___eventName0, int32_t ___maxEventPerHour1, int32_t ___maxItems2, String_t* ___vendorKey3, String_t* ___prefix4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		Assembly_t * L_1;
		L_1 = Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570(/*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		V_0 = L_2;
		String_t* L_3 = ___eventName0;
		int32_t L_4 = ___maxEventPerHour1;
		int32_t L_5 = ___maxItems2;
		String_t* L_6 = ___vendorKey3;
		String_t* L_7 = ___prefix4;
		String_t* L_8 = V_0;
		int32_t L_9;
		L_9 = Analytics_RegisterEvent_m4A5A571D06302B860F7EDDC66AA8758F72EDFF67(L_3, L_4, L_5, L_6, 1, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_m4A5A571D06302B860F7EDDC66AA8758F72EDFF67 (String_t* ___eventName0, int32_t ___maxEventPerHour1, int32_t ___maxItems2, String_t* ___vendorKey3, int32_t ___ver4, String_t* ___prefix5, String_t* ___assemblyInfo6, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___eventName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_RegisterEvent_m4A5A571D06302B860F7EDDC66AA8758F72EDFF67_RuntimeMethod_var)));
	}

IL_0016:
	{
		bool L_4;
		L_4 = Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = 1;
		goto IL_0039;
	}

IL_0026:
	{
		String_t* L_6 = ___eventName0;
		int32_t L_7 = ___maxEventPerHour1;
		int32_t L_8 = ___maxItems2;
		String_t* L_9 = ___vendorKey3;
		int32_t L_10 = ___ver4;
		String_t* L_11 = ___prefix5;
		String_t* L_12 = ___assemblyInfo6;
		int32_t L_13;
		L_13 = Analytics_RegisterEventWithLimit_m716337CFCC888F9218FA65370650B910BC749183(L_6, L_7, L_8, L_9, L_10, L_11, L_12, (bool)1, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_14 = V_2;
		return L_14;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEvent_mA5C39137E86C47DF2B2663E6C1605BC1E7139395 (String_t* ___eventName0, RuntimeObject * ___parameters1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___eventName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_SendEvent_mA5C39137E86C47DF2B2663E6C1605BC1E7139395_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject * L_4 = ___parameters1;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECCC4B7A0DA4E8DB493886ED11AC56BA55FBE86F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_SendEvent_mA5C39137E86C47DF2B2663E6C1605BC1E7139395_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_7;
		L_7 = Analytics_IsInitialized_mDED78986B5F1E6791ECE0064577732A096966281(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		V_3 = 1;
		goto IL_0045;
	}

IL_0039:
	{
		String_t* L_9 = ___eventName0;
		RuntimeObject * L_10 = ___parameters1;
		int32_t L_11 = ___ver2;
		String_t* L_12 = ___prefix3;
		int32_t L_13;
		L_13 = Analytics_SendEventWithLimit_m8A270B3A7659B82745E8F63B5BE6E10750D16132(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_m0BB9DA7C334B5E13F34D68F2CABB34AF96AFFBBB (int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * V_0 = NULL;
	bool V_1 = false;
	{
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_0 = ((AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_3 = V_0;
		int32_t L_4 = ___sessionState0;
		int64_t L_5 = ___sessionId1;
		int64_t L_6 = ___sessionElapsedTime2;
		bool L_7 = ___sessionChanged3;
		NullCheck(L_3);
		SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallIdentityTokenChanged_m99E4FA7768A4EF033190C28E87A480DDFA67FEF2 (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * V_0 = NULL;
	bool V_1 = false;
	{
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_0 = ((AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var))->get_identityTokenChanged_1();
		V_0 = L_0;
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_3 = V_0;
		String_t* L_4 = ___token0;
		NullCheck(L_3);
		IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
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
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_back(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83>(marshaled.___Updated_1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_cleanup(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com_back(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83>(marshaled.___Updated_1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com_cleanup(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_mD41B7744E8C4750B992A9B06C386257C8717F2BA (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * ___rcs0, bool ___wasLastUpdatedFromServer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	bool V_1 = false;
	{
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_0 = ___rcs0;
		NullCheck(L_0);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0->get_Updated_1();
		V_0 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = V_0;
		bool L_5 = ___wasLastUpdatedFromServer1;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, L_5, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0018:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_m5E3BAE9A00236820CF32F74D9F3A94E99055D8A4 (bool ___wasLastUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_0 = NULL;
	bool V_1 = false;
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_3 = V_0;
		NullCheck(L_3);
		UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_mE1753C7AE5ECBA0B7C7171CADF1DB4E1811BF043 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	bool V_1 = false;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_mBF18BDDED97AD4FCA4FCB6587087ADF4C137838F (bool ___wasLastUpdatedFromServer0, bool ___settingsChanged1, int32_t ___response2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	bool V_1 = false;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = V_0;
		bool L_4 = ___wasLastUpdatedFromServer0;
		bool L_5 = ___settingsChanged1;
		int32_t L_6 = ___response2;
		NullCheck(L_3);
		Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC(L_3, L_4, L_5, L_6, /*hidden argument*/Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var);
	}

IL_0019:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged__ctor_m11460EC0DCF16CC424C6CECFDFE8862E0EB6133A (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IdentityTokenChanged_BeginInvoke_m996658BCDA945DC240BB8DCCEB74237B1B3ECBDB (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_EndInvoke_m7103AA2B42EE8FD1C80047657E4EABB635243872 (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m20755FFAAF071B0C0C5CB8001E00235A68631E87 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
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
						GenericInterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						GenericVirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						VirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___sessionState0) - 1), ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionStateChanged_BeginInvoke_m1FC5FEA2CB085F8EB742E87CAED9E6EDA0A4CB06 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_EndInvoke_mD526629995FB93D3E61F98B43D56805F22CCBCE9 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_m47CAF85102B04A37A20F7043F57404A76DE62153 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdatedEventHandler_BeginInvoke_m937F7EF5F566073B30BB5D8AD630A723F4580746 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_EndInvoke_mD99843879F04C60C61D6A9BBAC751F6DD4C74982 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
