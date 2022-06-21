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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>>
struct Dictionary_2_t14C5E87CEEC02597153F5CA66CFA36682851D999;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>
struct Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>
struct Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tAA90B0A114C70EBF9CC4A6380409C4899CB35DD5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>
struct IEqualityComparer_1_t060673F0F9D1F985B5B4DD2C6DE8BCD692C37862;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyCollection_tF3D76C8892288CC6F8C13C3A80EED4E585F7CAB1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>
struct KeyCollection_tBFCA10FA0B949692D4F58A5844ECDFED12189191;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.MemberInfo[]>
struct KeyCollection_t84E6A10CF5648E3D793907C77E547CCDD131B130;
// Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>
struct LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6;
// Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>
struct LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.LinkedList`1<Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>
struct LinkedList_1_t8F7A333FC6372C8EBB9D1415B749FA3F66C57B24;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>
struct List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>
struct List_1_t4733663767DCFFF4CA8743625518E64B27EEE782;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Stack`1<System.Collections.Generic.LinkedListNode`1<Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>>
struct Stack_1_t80B57AE60F07272554C0ECA8CE4C58A1E7E672DA;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct ValueCollection_tA799B64C6518414D20CA6B81DA2CC8E74ED8AB5C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct ValueCollection_t126F95335F632F0A746F9D69439438A6778506E4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct ValueCollection_t60018EEC405EE993B28765B9174FE7EC9E6A75A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Newtonsoft.Json.Linq.JToken>
struct ValueCollection_tF4D21EF35BF6E4CBFAF05616073CDD51B3446D20;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>
struct ValueCollection_t92B4411CDB719EA29251ED122B4CC888FA1D6DF6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.MemberInfo[]>
struct ValueCollection_tC98F895A5F941F57E78B7C2FE41633337EA9039F;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>[]
struct EntryU5BU5D_t05D791B6AFAF37DFC124AEF6B6F043183495A697;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>[]
struct EntryU5BU5D_t333A9D1168014A691C2476255211E651F213FEDB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>[]
struct EntryU5BU5D_t9C9F2AC70D3D56355C8D9E863BC0910F60A9CE02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Newtonsoft.Json.Linq.JToken>[]
struct EntryU5BU5D_t243ABEAB5EE20E7FA51704E5915F95D8B996B3EA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>[]
struct EntryU5BU5D_tB90C9DAE7F27267A1B0F2B7D736B2EFC1B93EFF9;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.MemberInfo[]>[]
struct EntryU5BU5D_t11C117D23C6372A107D85AECB26A2FC883871A8F;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>[]
struct KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// Microsoft.MixedReality.Toolkit.Data.IDataConsumer[]
struct IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99;
// Microsoft.MixedReality.Toolkit.Data.IDataNode[]
struct IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap[]
struct ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier
struct CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F;
// Microsoft.MixedReality.Toolkit.Data.DataControllerGOBase
struct DataControllerGOBase_t7C5A5AA51FEC85FB41B32BA83E5A5AB5479E5299;
// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary
struct DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD;
// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary
struct DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B;
// Microsoft.MixedReality.Toolkit.Data.DataNodeObject
struct DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612;
// Microsoft.MixedReality.Toolkit.Data.DataSourceBase
struct DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73;
// Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary
struct DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765;
// Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase
struct DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94;
// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson
struct DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA;
// Microsoft.MixedReality.Toolkit.Data.DataSourceJson
struct DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C;
// Microsoft.MixedReality.Toolkit.Data.DataSourceObjects
struct DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA;
// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection
struct DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24;
// Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider
struct DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Data.IDataConsumer
struct IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A;
// Microsoft.MixedReality.Toolkit.Data.IDataController
struct IDataController_t70A4FCEEB5644C3A9D733B4F1571950574BAE96F;
// Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper
struct IDataKeyPathMapper_t3968DE47644C642C5C732C14CB9BD3DE03EAA286;
// Microsoft.MixedReality.Toolkit.Data.IDataNode
struct IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB;
// Microsoft.MixedReality.Toolkit.Data.IDataSource
struct IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable
struct KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Data.ThemeSelector
struct ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap
struct ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD;
// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7
struct U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D;
// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate
struct RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960;
// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate
struct RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7;
// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver
struct CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataKeyPathMapper_t3968DE47644C642C5C732C14CB9BD3DE03EAA286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4733663767DCFFF4CA8743625518E64B27EEE782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07547890A9E3403D54120AB4BA0857A5CFEB4108;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1AE94C0DBD1F4EAF5037813C8EA3EB7FEC6384;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7758A773BE48F6DF22CE7A040518B0B5C41F1E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16;
IL2CPP_EXTERN_C String_t* _stringLiteral9CAC27F83DC44AF310E612499D57A53A7C8B81DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB621DC24FF3E939648E534699890E09840B21334;
IL2CPP_EXTERN_C String_t* _stringLiteralB984F10F00616791C365B2051953E91C02B03BA6;
IL2CPP_EXTERN_C String_t* _stringLiteralBEAAD24056F9C67931A53E2EC1B32480575B1F10;
IL2CPP_EXTERN_C String_t* _stringLiteralCB75C7F8F591C047DD2FA96FCBACCFCC05053DF7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionObserver_CollectionChangedHandler_m70B2768970E69570103C16B770D992C4DBE935A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mC72D26EBFF348F2F24B21E29A079A8D9104F553D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m21F7A13DD2BC76B415BC0A44028E9D24FCB855F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6040E4AD99831635B1DB5A72054428A0F8A39237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5B7C1164FBB00113FED46688A408F1A4274A625B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m72BBBD79FC33B0A991D3A6EA850DCA78E152DE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE9D8F3BEB6165F60B6EEA2B0355ED85F8B7A8C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m50B81205FDD68CEFC46AEDEF14199A14A62677A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m421164C5FA44C9BAF0D26B2C6DE2BFA7C4E3ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7DD3D384839DB0445D2927CB4459AC1B81EB7E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m892EF2706F0344882DA2CB5A4D81025E47E6B8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m911E2EBE3EDC37A54AD2B18B21E0B6FCB3A85DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCEAD4158F0F520E76B43E3563E51CC44EB3F4BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1969A05A8771F0F4FF504E613261EB69D04F3844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m48EF85CF2AB6F8ECBA7B7691C4D770F4550C2C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m928DDE97CB37A638BCFFCEF42A42E27AD272814A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mC05E0F8246E3E307B1F0B59BDD4C9CBDAEC2E617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m244613A2F128CA8D2FA0C6319A9F9157495F70E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m34035912D4B3E9ED6FC7E8722ADB9B7C58E179D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7858BA6DA6999BD9274132CE30EF02D73BD513A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC6EB7218B2FFC4EB67C0C15CEA3FF6C228286B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m106E3692FECC2C1873A3B5FAA45A404CA0B057F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mADFE1A257BCFBE77818C003DE765A71BE48F0E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53730C5E9F2F74239F0CDFE281C1BB869A8EAD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m57900FF5047D917526191056CAF51DD3449BA427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m846DC8AE4E965AF6C263F9A37141D5DDDE889660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m92D4A2548EC3F2C9F5BAAEE374F1D72031EA3304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyPathEnumerable_get_Current_m4A85E319B45B5A244EE1C2728721F203D3B1D184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m02C584C9BD795720DFB665411DD73069DAE72F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2_ContainsKey_m56270BAE6B7158CFAE20EA33A7D14FF4541FDDEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2_FindByKey_m91D17CA9B50C4EB4A7D8CD43B496EF4C967AFC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2_TryRemove_m6F7EAEFC800DDAD4DE384EFD7C3F73899A8D5172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeastRecentlyUsedCache_2__ctor_m664CC119449F1C34CBF22AB08638111A242BE4DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D5B1FB781CEF7C3CBD114FE18E1D803CC075EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAB725922D6B45C9B9123B29D94BD7BE4C02078DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEAB293A13405BAB014D834767F80188CBBAB77ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCB08DEF57BE33F78F692458C3C71FE2AB43823C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3B8F516CBD6AD11B014984B683CC40A355E73875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m46666270378D920439CC5AC0151405B455ADB4FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m296FCB937050D16222D6C66556D5B9AF0272BFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8351FA5A819C1E10491C70EEE7366E252B0D89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF99746A78EB3CF42AE971A63955F215234EF4539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB383864444B9B22E711DFFF94D35FC7B71752151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE17960685F729F58DE680A7696F2C68A120DB466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartJsonRequestU3Ed__7_System_Collections_IEnumerator_Reset_mF95B212707DDB193CDF3C8662B09583180D8F362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* INotifyPropertyChanged_t150EC64FCE9C13B15F08BD1863D08321C79E539A_0_0_0_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE3460E8F0159A34C21AAB11C2321063D9FECBEC5 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t05D791B6AFAF37DFC124AEF6B6F043183495A697* ___entries_1;
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
	KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA799B64C6518414D20CA6B81DA2CC8E74ED8AB5C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___entries_1)); }
	inline EntryU5BU5D_t05D791B6AFAF37DFC124AEF6B6F043183495A697* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t05D791B6AFAF37DFC124AEF6B6F043183495A697** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t05D791B6AFAF37DFC124AEF6B6F043183495A697* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___keys_7)); }
	inline KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ___values_8)); }
	inline ValueCollection_tA799B64C6518414D20CA6B81DA2CC8E74ED8AB5C * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA799B64C6518414D20CA6B81DA2CC8E74ED8AB5C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA799B64C6518414D20CA6B81DA2CC8E74ED8AB5C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t333A9D1168014A691C2476255211E651F213FEDB* ___entries_1;
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
	KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t126F95335F632F0A746F9D69439438A6778506E4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___entries_1)); }
	inline EntryU5BU5D_t333A9D1168014A691C2476255211E651F213FEDB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t333A9D1168014A691C2476255211E651F213FEDB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t333A9D1168014A691C2476255211E651F213FEDB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___keys_7)); }
	inline KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ___values_8)); }
	inline ValueCollection_t126F95335F632F0A746F9D69439438A6778506E4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t126F95335F632F0A746F9D69439438A6778506E4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t126F95335F632F0A746F9D69439438A6778506E4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9C9F2AC70D3D56355C8D9E863BC0910F60A9CE02* ___entries_1;
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
	KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t60018EEC405EE993B28765B9174FE7EC9E6A75A3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___entries_1)); }
	inline EntryU5BU5D_t9C9F2AC70D3D56355C8D9E863BC0910F60A9CE02* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9C9F2AC70D3D56355C8D9E863BC0910F60A9CE02** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9C9F2AC70D3D56355C8D9E863BC0910F60A9CE02* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___keys_7)); }
	inline KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ___values_8)); }
	inline ValueCollection_t60018EEC405EE993B28765B9174FE7EC9E6A75A3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t60018EEC405EE993B28765B9174FE7EC9E6A75A3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t60018EEC405EE993B28765B9174FE7EC9E6A75A3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t243ABEAB5EE20E7FA51704E5915F95D8B996B3EA* ___entries_1;
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
	KeyCollection_tF3D76C8892288CC6F8C13C3A80EED4E585F7CAB1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF4D21EF35BF6E4CBFAF05616073CDD51B3446D20 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___entries_1)); }
	inline EntryU5BU5D_t243ABEAB5EE20E7FA51704E5915F95D8B996B3EA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t243ABEAB5EE20E7FA51704E5915F95D8B996B3EA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t243ABEAB5EE20E7FA51704E5915F95D8B996B3EA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___keys_7)); }
	inline KeyCollection_tF3D76C8892288CC6F8C13C3A80EED4E585F7CAB1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF3D76C8892288CC6F8C13C3A80EED4E585F7CAB1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF3D76C8892288CC6F8C13C3A80EED4E585F7CAB1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ___values_8)); }
	inline ValueCollection_tF4D21EF35BF6E4CBFAF05616073CDD51B3446D20 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF4D21EF35BF6E4CBFAF05616073CDD51B3446D20 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF4D21EF35BF6E4CBFAF05616073CDD51B3446D20 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>
struct Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB90C9DAE7F27267A1B0F2B7D736B2EFC1B93EFF9* ___entries_1;
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
	KeyCollection_tBFCA10FA0B949692D4F58A5844ECDFED12189191 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t92B4411CDB719EA29251ED122B4CC888FA1D6DF6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___entries_1)); }
	inline EntryU5BU5D_tB90C9DAE7F27267A1B0F2B7D736B2EFC1B93EFF9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB90C9DAE7F27267A1B0F2B7D736B2EFC1B93EFF9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB90C9DAE7F27267A1B0F2B7D736B2EFC1B93EFF9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___keys_7)); }
	inline KeyCollection_tBFCA10FA0B949692D4F58A5844ECDFED12189191 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBFCA10FA0B949692D4F58A5844ECDFED12189191 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBFCA10FA0B949692D4F58A5844ECDFED12189191 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ___values_8)); }
	inline ValueCollection_t92B4411CDB719EA29251ED122B4CC888FA1D6DF6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t92B4411CDB719EA29251ED122B4CC888FA1D6DF6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t92B4411CDB719EA29251ED122B4CC888FA1D6DF6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>
struct Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t11C117D23C6372A107D85AECB26A2FC883871A8F* ___entries_1;
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
	KeyCollection_t84E6A10CF5648E3D793907C77E547CCDD131B130 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC98F895A5F941F57E78B7C2FE41633337EA9039F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___entries_1)); }
	inline EntryU5BU5D_t11C117D23C6372A107D85AECB26A2FC883871A8F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t11C117D23C6372A107D85AECB26A2FC883871A8F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t11C117D23C6372A107D85AECB26A2FC883871A8F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___keys_7)); }
	inline KeyCollection_t84E6A10CF5648E3D793907C77E547CCDD131B130 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t84E6A10CF5648E3D793907C77E547CCDD131B130 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t84E6A10CF5648E3D793907C77E547CCDD131B130 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ___values_8)); }
	inline ValueCollection_tC98F895A5F941F57E78B7C2FE41633337EA9039F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC98F895A5F941F57E78B7C2FE41633337EA9039F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC98F895A5F941F57E78B7C2FE41633337EA9039F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041, ___dictionary_0)); }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F, ___dictionary_0)); }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B, ___dictionary_0)); }
	inline Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>
struct LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedList`1<VT> Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2::_lruList
	LinkedList_1_t8F7A333FC6372C8EBB9D1415B749FA3F66C57B24 * ____lruList_0;
	// System.Collections.Generic.Dictionary`2<KT,System.Collections.Generic.LinkedListNode`1<VT>> Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2::_lruIndexLookup
	Dictionary_2_t14C5E87CEEC02597153F5CA66CFA36682851D999 * ____lruIndexLookup_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.LinkedListNode`1<VT>> Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2::_lruNodeFreePool
	Stack_1_t80B57AE60F07272554C0ECA8CE4C58A1E7E672DA * ____lruNodeFreePool_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2::_maxEntries
	int32_t ____maxEntries_3;

public:
	inline static int32_t get_offset_of__lruList_0() { return static_cast<int32_t>(offsetof(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F, ____lruList_0)); }
	inline LinkedList_1_t8F7A333FC6372C8EBB9D1415B749FA3F66C57B24 * get__lruList_0() const { return ____lruList_0; }
	inline LinkedList_1_t8F7A333FC6372C8EBB9D1415B749FA3F66C57B24 ** get_address_of__lruList_0() { return &____lruList_0; }
	inline void set__lruList_0(LinkedList_1_t8F7A333FC6372C8EBB9D1415B749FA3F66C57B24 * value)
	{
		____lruList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lruList_0), (void*)value);
	}

	inline static int32_t get_offset_of__lruIndexLookup_1() { return static_cast<int32_t>(offsetof(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F, ____lruIndexLookup_1)); }
	inline Dictionary_2_t14C5E87CEEC02597153F5CA66CFA36682851D999 * get__lruIndexLookup_1() const { return ____lruIndexLookup_1; }
	inline Dictionary_2_t14C5E87CEEC02597153F5CA66CFA36682851D999 ** get_address_of__lruIndexLookup_1() { return &____lruIndexLookup_1; }
	inline void set__lruIndexLookup_1(Dictionary_2_t14C5E87CEEC02597153F5CA66CFA36682851D999 * value)
	{
		____lruIndexLookup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lruIndexLookup_1), (void*)value);
	}

	inline static int32_t get_offset_of__lruNodeFreePool_2() { return static_cast<int32_t>(offsetof(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F, ____lruNodeFreePool_2)); }
	inline Stack_1_t80B57AE60F07272554C0ECA8CE4C58A1E7E672DA * get__lruNodeFreePool_2() const { return ____lruNodeFreePool_2; }
	inline Stack_1_t80B57AE60F07272554C0ECA8CE4C58A1E7E672DA ** get_address_of__lruNodeFreePool_2() { return &____lruNodeFreePool_2; }
	inline void set__lruNodeFreePool_2(Stack_1_t80B57AE60F07272554C0ECA8CE4C58A1E7E672DA * value)
	{
		____lruNodeFreePool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lruNodeFreePool_2), (void*)value);
	}

	inline static int32_t get_offset_of__maxEntries_3() { return static_cast<int32_t>(offsetof(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F, ____maxEntries_3)); }
	inline int32_t get__maxEntries_3() const { return ____maxEntries_3; }
	inline int32_t* get_address_of__maxEntries_3() { return &____maxEntries_3; }
	inline void set__maxEntries_3(int32_t value)
	{
		____maxEntries_3 = value;
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>
struct List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t02B5553A28A4175FEFE017ECAFA57D9A56E9BA9F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>
struct List_1_t4733663767DCFFF4CA8743625518E64B27EEE782  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782, ____items_1)); }
	inline IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* get__items_1() const { return ____items_1; }
	inline IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4733663767DCFFF4CA8743625518E64B27EEE782_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782_StaticFields, ____emptyArray_5)); }
	inline IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IDataConsumerU5BU5D_t581F2C22F7153A21F6169001E264C8B910090F99* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>
struct List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800, ____items_1)); }
	inline IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* get__items_1() const { return ____items_1; }
	inline IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_StaticFields, ____emptyArray_5)); }
	inline IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IDataNodeU5BU5D_t885A97BC128394E5FD5125658E173D9092A6BDBE* value)
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


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier
struct CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier::<FullyResolvedKeypath>k__BackingField
	String_t* ___U3CFullyResolvedKeypathU3Ek__BackingField_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier::<IndexPosition>k__BackingField
	int32_t ___U3CIndexPositionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CFullyResolvedKeypathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F, ___U3CFullyResolvedKeypathU3Ek__BackingField_0)); }
	inline String_t* get_U3CFullyResolvedKeypathU3Ek__BackingField_0() const { return ___U3CFullyResolvedKeypathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFullyResolvedKeypathU3Ek__BackingField_0() { return &___U3CFullyResolvedKeypathU3Ek__BackingField_0; }
	inline void set_U3CFullyResolvedKeypathU3Ek__BackingField_0(String_t* value)
	{
		___U3CFullyResolvedKeypathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFullyResolvedKeypathU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIndexPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F, ___U3CIndexPositionU3Ek__BackingField_1)); }
	inline int32_t get_U3CIndexPositionU3Ek__BackingField_1() const { return ___U3CIndexPositionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIndexPositionU3Ek__BackingField_1() { return &___U3CIndexPositionU3Ek__BackingField_1; }
	inline void set_U3CIndexPositionU3Ek__BackingField_1(int32_t value)
	{
		___U3CIndexPositionU3Ek__BackingField_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary
struct DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::_viewToDataKeyPathLookup
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____viewToDataKeyPathLookup_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::_dataToViewKeyPathLookup
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____dataToViewKeyPathLookup_1;

public:
	inline static int32_t get_offset_of__viewToDataKeyPathLookup_0() { return static_cast<int32_t>(offsetof(DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD, ____viewToDataKeyPathLookup_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__viewToDataKeyPathLookup_0() const { return ____viewToDataKeyPathLookup_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__viewToDataKeyPathLookup_0() { return &____viewToDataKeyPathLookup_0; }
	inline void set__viewToDataKeyPathLookup_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____viewToDataKeyPathLookup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____viewToDataKeyPathLookup_0), (void*)value);
	}

	inline static int32_t get_offset_of__dataToViewKeyPathLookup_1() { return static_cast<int32_t>(offsetof(DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD, ____dataToViewKeyPathLookup_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__dataToViewKeyPathLookup_1() const { return ____dataToViewKeyPathLookup_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__dataToViewKeyPathLookup_1() { return &____dataToViewKeyPathLookup_1; }
	inline void set__dataToViewKeyPathLookup_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____dataToViewKeyPathLookup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataToViewKeyPathLookup_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataParser
struct DataParser_t2B8364FD4AB1E37C26A28B10D2F9A55ED2AEA356  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceBase
struct DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper Microsoft.MixedReality.Toolkit.Data.DataSourceBase::_dataKeyPathMapper
	RuntimeObject* ____dataKeyPathMapper_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>> Microsoft.MixedReality.Toolkit.Data.DataSourceBase::_keyPathToDataConsumers
	Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * ____keyPathToDataConsumers_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32> Microsoft.MixedReality.Toolkit.Data.DataSourceBase::_dataConsumerKeyPathCounts
	Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * ____dataConsumerKeyPathCounts_2;
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceBase::_findArrayIndexRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____findArrayIndexRegex_3;
	// Microsoft.MixedReality.Toolkit.Data.IDataController Microsoft.MixedReality.Toolkit.Data.DataSourceBase::_dataController
	RuntimeObject* ____dataController_4;
	// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceBase::<DataSourceType>k__BackingField
	String_t* ___U3CDataSourceTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__dataKeyPathMapper_0() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ____dataKeyPathMapper_0)); }
	inline RuntimeObject* get__dataKeyPathMapper_0() const { return ____dataKeyPathMapper_0; }
	inline RuntimeObject** get_address_of__dataKeyPathMapper_0() { return &____dataKeyPathMapper_0; }
	inline void set__dataKeyPathMapper_0(RuntimeObject* value)
	{
		____dataKeyPathMapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataKeyPathMapper_0), (void*)value);
	}

	inline static int32_t get_offset_of__keyPathToDataConsumers_1() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ____keyPathToDataConsumers_1)); }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * get__keyPathToDataConsumers_1() const { return ____keyPathToDataConsumers_1; }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C ** get_address_of__keyPathToDataConsumers_1() { return &____keyPathToDataConsumers_1; }
	inline void set__keyPathToDataConsumers_1(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * value)
	{
		____keyPathToDataConsumers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyPathToDataConsumers_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataConsumerKeyPathCounts_2() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ____dataConsumerKeyPathCounts_2)); }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * get__dataConsumerKeyPathCounts_2() const { return ____dataConsumerKeyPathCounts_2; }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D ** get_address_of__dataConsumerKeyPathCounts_2() { return &____dataConsumerKeyPathCounts_2; }
	inline void set__dataConsumerKeyPathCounts_2(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * value)
	{
		____dataConsumerKeyPathCounts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataConsumerKeyPathCounts_2), (void*)value);
	}

	inline static int32_t get_offset_of__findArrayIndexRegex_3() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ____findArrayIndexRegex_3)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__findArrayIndexRegex_3() const { return ____findArrayIndexRegex_3; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__findArrayIndexRegex_3() { return &____findArrayIndexRegex_3; }
	inline void set__findArrayIndexRegex_3(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____findArrayIndexRegex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____findArrayIndexRegex_3), (void*)value);
	}

	inline static int32_t get_offset_of__dataController_4() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ____dataController_4)); }
	inline RuntimeObject* get__dataController_4() const { return ____dataController_4; }
	inline RuntimeObject** get_address_of__dataController_4() { return &____dataController_4; }
	inline void set__dataController_4(RuntimeObject* value)
	{
		____dataController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataController_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataSourceTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73, ___U3CDataSourceTypeU3Ek__BackingField_5)); }
	inline String_t* get_U3CDataSourceTypeU3Ek__BackingField_5() const { return ___U3CDataSourceTypeU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDataSourceTypeU3Ek__BackingField_5() { return &___U3CDataSourceTypeU3Ek__BackingField_5; }
	inline void set_U3CDataSourceTypeU3Ek__BackingField_5(String_t* value)
	{
		___U3CDataSourceTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataSourceTypeU3Ek__BackingField_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
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


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable
struct KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::_rangeStart
	int32_t ____rangeStart_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::_rangeEnd
	int32_t ____rangeEnd_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::_currentIndex
	int32_t ____currentIndex_3;
	// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::_keyPathPrefix
	String_t* ____keyPathPrefix_4;

public:
	inline static int32_t get_offset_of__rangeStart_1() { return static_cast<int32_t>(offsetof(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8, ____rangeStart_1)); }
	inline int32_t get__rangeStart_1() const { return ____rangeStart_1; }
	inline int32_t* get_address_of__rangeStart_1() { return &____rangeStart_1; }
	inline void set__rangeStart_1(int32_t value)
	{
		____rangeStart_1 = value;
	}

	inline static int32_t get_offset_of__rangeEnd_2() { return static_cast<int32_t>(offsetof(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8, ____rangeEnd_2)); }
	inline int32_t get__rangeEnd_2() const { return ____rangeEnd_2; }
	inline int32_t* get_address_of__rangeEnd_2() { return &____rangeEnd_2; }
	inline void set__rangeEnd_2(int32_t value)
	{
		____rangeEnd_2 = value;
	}

	inline static int32_t get_offset_of__currentIndex_3() { return static_cast<int32_t>(offsetof(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8, ____currentIndex_3)); }
	inline int32_t get__currentIndex_3() const { return ____currentIndex_3; }
	inline int32_t* get_address_of__currentIndex_3() { return &____currentIndex_3; }
	inline void set__currentIndex_3(int32_t value)
	{
		____currentIndex_3 = value;
	}

	inline static int32_t get_offset_of__keyPathPrefix_4() { return static_cast<int32_t>(offsetof(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8, ____keyPathPrefix_4)); }
	inline String_t* get__keyPathPrefix_4() const { return ____keyPathPrefix_4; }
	inline String_t** get_address_of__keyPathPrefix_4() { return &____keyPathPrefix_4; }
	inline void set__keyPathPrefix_4(String_t* value)
	{
		____keyPathPrefix_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyPathPrefix_4), (void*)value);
	}
};

struct KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_StaticFields
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::CollectionElementkeyPathPrefixFormat
	String_t* ___CollectionElementkeyPathPrefixFormat_0;

public:
	inline static int32_t get_offset_of_CollectionElementkeyPathPrefixFormat_0() { return static_cast<int32_t>(offsetof(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_StaticFields, ___CollectionElementkeyPathPrefixFormat_0)); }
	inline String_t* get_CollectionElementkeyPathPrefixFormat_0() const { return ___CollectionElementkeyPathPrefixFormat_0; }
	inline String_t** get_address_of_CollectionElementkeyPathPrefixFormat_0() { return &___CollectionElementkeyPathPrefixFormat_0; }
	inline void set_CollectionElementkeyPathPrefixFormat_0(String_t* value)
	{
		___CollectionElementkeyPathPrefixFormat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionElementkeyPathPrefixFormat_0), (void*)value);
	}
};


// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap
struct ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap::viewKeyPath
	String_t* ___viewKeyPath_0;
	// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap::dataKeyPath
	String_t* ___dataKeyPath_1;

public:
	inline static int32_t get_offset_of_viewKeyPath_0() { return static_cast<int32_t>(offsetof(ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD, ___viewKeyPath_0)); }
	inline String_t* get_viewKeyPath_0() const { return ___viewKeyPath_0; }
	inline String_t** get_address_of_viewKeyPath_0() { return &___viewKeyPath_0; }
	inline void set_viewKeyPath_0(String_t* value)
	{
		___viewKeyPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewKeyPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_dataKeyPath_1() { return static_cast<int32_t>(offsetof(ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD, ___dataKeyPath_1)); }
	inline String_t* get_dataKeyPath_1() const { return ___dataKeyPath_1; }
	inline String_t** get_address_of_dataKeyPath_1() { return &___dataKeyPath_1; }
	inline void set_dataKeyPath_1(String_t* value)
	{
		___dataKeyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataKeyPath_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7
struct U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::uri
	String_t* ___uri_2;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::failureDelegate
	RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * ___failureDelegate_3;
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::requestRef
	RuntimeObject * ___requestRef_4;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<>4__this
	DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * ___U3CU3E4__this_5;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::successDelegate
	RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * ___successDelegate_6;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_uri_2() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___uri_2)); }
	inline String_t* get_uri_2() const { return ___uri_2; }
	inline String_t** get_address_of_uri_2() { return &___uri_2; }
	inline void set_uri_2(String_t* value)
	{
		___uri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_2), (void*)value);
	}

	inline static int32_t get_offset_of_failureDelegate_3() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___failureDelegate_3)); }
	inline RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * get_failureDelegate_3() const { return ___failureDelegate_3; }
	inline RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 ** get_address_of_failureDelegate_3() { return &___failureDelegate_3; }
	inline void set_failureDelegate_3(RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * value)
	{
		___failureDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failureDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_requestRef_4() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___requestRef_4)); }
	inline RuntimeObject * get_requestRef_4() const { return ___requestRef_4; }
	inline RuntimeObject ** get_address_of_requestRef_4() { return &___requestRef_4; }
	inline void set_requestRef_4(RuntimeObject * value)
	{
		___requestRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestRef_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___U3CU3E4__this_5)); }
	inline DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_successDelegate_6() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___successDelegate_6)); }
	inline RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * get_successDelegate_6() const { return ___successDelegate_6; }
	inline RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 ** get_address_of_successDelegate_6() { return &___successDelegate_6; }
	inline void set_successDelegate_6(RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * value)
	{
		___successDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D, ___U3CwebRequestU3E5__2_7)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_7() const { return ___U3CwebRequestU3E5__2_7; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_7() { return &___U3CwebRequestU3E5__2_7; }
	inline void set_U3CwebRequestU3E5__2_7(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver
struct CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394  : public RuntimeObject
{
public:
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::collectionToObserve
	RuntimeObject * ___collectionToObserve_0;
	// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::collectionKeyPath
	String_t* ___collectionKeyPath_1;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::dataSourceToNotify
	DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * ___dataSourceToNotify_2;

public:
	inline static int32_t get_offset_of_collectionToObserve_0() { return static_cast<int32_t>(offsetof(CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394, ___collectionToObserve_0)); }
	inline RuntimeObject * get_collectionToObserve_0() const { return ___collectionToObserve_0; }
	inline RuntimeObject ** get_address_of_collectionToObserve_0() { return &___collectionToObserve_0; }
	inline void set_collectionToObserve_0(RuntimeObject * value)
	{
		___collectionToObserve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionToObserve_0), (void*)value);
	}

	inline static int32_t get_offset_of_collectionKeyPath_1() { return static_cast<int32_t>(offsetof(CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394, ___collectionKeyPath_1)); }
	inline String_t* get_collectionKeyPath_1() const { return ___collectionKeyPath_1; }
	inline String_t** get_address_of_collectionKeyPath_1() { return &___collectionKeyPath_1; }
	inline void set_collectionKeyPath_1(String_t* value)
	{
		___collectionKeyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionKeyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_dataSourceToNotify_2() { return static_cast<int32_t>(offsetof(CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394, ___dataSourceToNotify_2)); }
	inline DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * get_dataSourceToNotify_2() const { return ___dataSourceToNotify_2; }
	inline DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 ** get_address_of_dataSourceToNotify_2() { return &___dataSourceToNotify_2; }
	inline void set_dataSourceToNotify_2(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * value)
	{
		___dataSourceToNotify_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSourceToNotify_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>
struct Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F, ___list_0)); }
	inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * get_list_0() const { return ___list_0; }
	inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>
struct Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF, ___dictionary_0)); }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF, ___currentKey_3)); }
	inline RuntimeObject* get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
struct Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602, ___value_1)); }
	inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * get_value_1() const { return ___value_1; }
	inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary
struct DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765  : public DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary::_dataDictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ____dataDictionary_6;

public:
	inline static int32_t get_offset_of__dataDictionary_6() { return static_cast<int32_t>(offsetof(DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765, ____dataDictionary_6)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get__dataDictionary_6() const { return ____dataDictionary_6; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of__dataDictionary_6() { return &____dataDictionary_6; }
	inline void set__dataDictionary_6(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		____dataDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataDictionary_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceJson
struct DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C  : public DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73
{
public:
	// Newtonsoft.Json.Linq.JToken Microsoft.MixedReality.Toolkit.Data.DataSourceJson::_jsonRootNode
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____jsonRootNode_6;
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceJson::_arrayTokenRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____arrayTokenRegex_7;
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceJson::_keyTokenRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____keyTokenRegex_8;
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::_keyPathToJTokenLookup
	Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * ____keyPathToJTokenLookup_9;

public:
	inline static int32_t get_offset_of__jsonRootNode_6() { return static_cast<int32_t>(offsetof(DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C, ____jsonRootNode_6)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__jsonRootNode_6() const { return ____jsonRootNode_6; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__jsonRootNode_6() { return &____jsonRootNode_6; }
	inline void set__jsonRootNode_6(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____jsonRootNode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jsonRootNode_6), (void*)value);
	}

	inline static int32_t get_offset_of__arrayTokenRegex_7() { return static_cast<int32_t>(offsetof(DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C, ____arrayTokenRegex_7)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__arrayTokenRegex_7() const { return ____arrayTokenRegex_7; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__arrayTokenRegex_7() { return &____arrayTokenRegex_7; }
	inline void set__arrayTokenRegex_7(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____arrayTokenRegex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayTokenRegex_7), (void*)value);
	}

	inline static int32_t get_offset_of__keyTokenRegex_8() { return static_cast<int32_t>(offsetof(DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C, ____keyTokenRegex_8)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__keyTokenRegex_8() const { return ____keyTokenRegex_8; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__keyTokenRegex_8() { return &____keyTokenRegex_8; }
	inline void set__keyTokenRegex_8(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____keyTokenRegex_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyTokenRegex_8), (void*)value);
	}

	inline static int32_t get_offset_of__keyPathToJTokenLookup_9() { return static_cast<int32_t>(offsetof(DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C, ____keyPathToJTokenLookup_9)); }
	inline Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * get__keyPathToJTokenLookup_9() const { return ____keyPathToJTokenLookup_9; }
	inline Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A ** get_address_of__keyPathToJTokenLookup_9() { return &____keyPathToJTokenLookup_9; }
	inline void set__keyPathToJTokenLookup_9(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * value)
	{
		____keyPathToJTokenLookup_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyPathToJTokenLookup_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceObjects
struct DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA  : public DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73
{
public:
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::_arrayTokenRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____arrayTokenRegex_6;
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::_keyTokenRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____keyTokenRegex_7;
	// Microsoft.MixedReality.Toolkit.Data.DataNodeObject Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::_rootNode
	DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * ____rootNode_8;
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::_keyPathToNodeLookup
	Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * ____keyPathToNodeLookup_9;

public:
	inline static int32_t get_offset_of__arrayTokenRegex_6() { return static_cast<int32_t>(offsetof(DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA, ____arrayTokenRegex_6)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__arrayTokenRegex_6() const { return ____arrayTokenRegex_6; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__arrayTokenRegex_6() { return &____arrayTokenRegex_6; }
	inline void set__arrayTokenRegex_6(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____arrayTokenRegex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayTokenRegex_6), (void*)value);
	}

	inline static int32_t get_offset_of__keyTokenRegex_7() { return static_cast<int32_t>(offsetof(DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA, ____keyTokenRegex_7)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__keyTokenRegex_7() const { return ____keyTokenRegex_7; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__keyTokenRegex_7() { return &____keyTokenRegex_7; }
	inline void set__keyTokenRegex_7(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____keyTokenRegex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyTokenRegex_7), (void*)value);
	}

	inline static int32_t get_offset_of__rootNode_8() { return static_cast<int32_t>(offsetof(DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA, ____rootNode_8)); }
	inline DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * get__rootNode_8() const { return ____rootNode_8; }
	inline DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 ** get_address_of__rootNode_8() { return &____rootNode_8; }
	inline void set__rootNode_8(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * value)
	{
		____rootNode_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootNode_8), (void*)value);
	}

	inline static int32_t get_offset_of__keyPathToNodeLookup_9() { return static_cast<int32_t>(offsetof(DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA, ____keyPathToNodeLookup_9)); }
	inline Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * get__keyPathToNodeLookup_9() const { return ____keyPathToNodeLookup_9; }
	inline Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D ** get_address_of__keyPathToNodeLookup_9() { return &____keyPathToNodeLookup_9; }
	inline void set__keyPathToNodeLookup_9(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * value)
	{
		____keyPathToNodeLookup_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyPathToNodeLookup_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection
struct DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24  : public DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73
{
public:
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::_dataSourceObject
	RuntimeObject * ____dataSourceObject_8;
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::_collectionObservers
	Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * ____collectionObservers_9;
	// Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::_lruKeyPathToObjectCache
	LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * ____lruKeyPathToObjectCache_11;

public:
	inline static int32_t get_offset_of__dataSourceObject_8() { return static_cast<int32_t>(offsetof(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24, ____dataSourceObject_8)); }
	inline RuntimeObject * get__dataSourceObject_8() const { return ____dataSourceObject_8; }
	inline RuntimeObject ** get_address_of__dataSourceObject_8() { return &____dataSourceObject_8; }
	inline void set__dataSourceObject_8(RuntimeObject * value)
	{
		____dataSourceObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSourceObject_8), (void*)value);
	}

	inline static int32_t get_offset_of__collectionObservers_9() { return static_cast<int32_t>(offsetof(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24, ____collectionObservers_9)); }
	inline Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * get__collectionObservers_9() const { return ____collectionObservers_9; }
	inline Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 ** get_address_of__collectionObservers_9() { return &____collectionObservers_9; }
	inline void set__collectionObservers_9(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * value)
	{
		____collectionObservers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionObservers_9), (void*)value);
	}

	inline static int32_t get_offset_of__lruKeyPathToObjectCache_11() { return static_cast<int32_t>(offsetof(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24, ____lruKeyPathToObjectCache_11)); }
	inline LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * get__lruKeyPathToObjectCache_11() const { return ____lruKeyPathToObjectCache_11; }
	inline LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F ** get_address_of__lruKeyPathToObjectCache_11() { return &____lruKeyPathToObjectCache_11; }
	inline void set__lruKeyPathToObjectCache_11(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * value)
	{
		____lruKeyPathToObjectCache_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lruKeyPathToObjectCache_11), (void*)value);
	}
};

struct DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::DefaultLRUCacheSize
	int32_t ___DefaultLRUCacheSize_10;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::memberInfoCache
	Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * ___memberInfoCache_12;

public:
	inline static int32_t get_offset_of_DefaultLRUCacheSize_10() { return static_cast<int32_t>(offsetof(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields, ___DefaultLRUCacheSize_10)); }
	inline int32_t get_DefaultLRUCacheSize_10() const { return ___DefaultLRUCacheSize_10; }
	inline int32_t* get_address_of_DefaultLRUCacheSize_10() { return &___DefaultLRUCacheSize_10; }
	inline void set_DefaultLRUCacheSize_10(int32_t value)
	{
		___DefaultLRUCacheSize_10 = value;
	}

	inline static int32_t get_offset_of_memberInfoCache_12() { return static_cast<int32_t>(offsetof(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields, ___memberInfoCache_12)); }
	inline Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * get_memberInfoCache_12() const { return ___memberInfoCache_12; }
	inline Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 ** get_address_of_memberInfoCache_12() { return &___memberInfoCache_12; }
	inline void set_memberInfoCache_12(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * value)
	{
		___memberInfoCache_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfoCache_12), (void*)value);
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

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_add_event_0), (void*)value);
	}
};


// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883  : public Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____caps_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcoll_6)); }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields, ____emptygroup_3)); }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
struct LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_0;
	// System.Reflection.MemberInfo Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::memberInfo
	MemberInfo_t * ___memberInfo_1;
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::containingObject
	RuntimeObject * ___containingObject_2;
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_U3CKeyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D, ___U3CKeyU3Ek__BackingField_0)); }
	inline String_t* get_U3CKeyU3Ek__BackingField_0() const { return ___U3CKeyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CKeyU3Ek__BackingField_0() { return &___U3CKeyU3Ek__BackingField_0; }
	inline void set_U3CKeyU3Ek__BackingField_0(String_t* value)
	{
		___U3CKeyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeyU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_containingObject_2() { return static_cast<int32_t>(offsetof(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D, ___containingObject_2)); }
	inline RuntimeObject * get_containingObject_2() const { return ___containingObject_2; }
	inline RuntimeObject ** get_address_of_containingObject_2() { return &___containingObject_2; }
	inline void set_containingObject_2(RuntimeObject * value)
	{
		___containingObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containingObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
struct LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_pinvoke
{
	char* ___U3CKeyU3Ek__BackingField_0;
	MemberInfo_t * ___memberInfo_1;
	Il2CppIUnknown* ___containingObject_2;
	Il2CppIUnknown* ___value_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
struct LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_com
{
	Il2CppChar* ___U3CKeyU3Ek__BackingField_0;
	MemberInfo_t * ___memberInfo_1;
	Il2CppIUnknown* ___containingObject_2;
	Il2CppIUnknown* ___value_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>
struct Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540, ___list_0)); }
	inline List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * get_list_0() const { return ___list_0; }
	inline List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540, ___current_3)); }
	inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>
struct Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B, ___dictionary_0)); }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B, ___current_3)); }
	inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Data.DataChangeType
struct DataChangeType_t7448ACCD22A4E68A4A281A435D8FF036ED3BE08F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataChangeType_t7448ACCD22A4E68A4A281A435D8FF036ED3BE08F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataNodeType
struct DataNodeType_tF552DB2EA9195560BED4751B552811545A063161 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataNodeType_tF552DB2EA9195560BED4751B552811545A063161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
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

// Newtonsoft.Json.Linq.JTokenType
struct JTokenType_tA01B08C348FA675F0C24F526778098AB487E02CC 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_tA01B08C348FA675F0C24F526778098AB487E02CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B  : public Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____groupcoll_9)); }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____regex_10)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_10() const { return ____regex_10; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matchcount_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields, ____empty_8)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__empty_8() const { return ____empty_8; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
};


// System.Collections.Specialized.NotifyCollectionChangedAction
struct NotifyCollectionChangedAction_t5E9BD01FA98D75B24DD39B270AFC7F0389EB818E 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t5E9BD01FA98D75B24DD39B270AFC7F0389EB818E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
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


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataNodeObject
struct DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612  : public RuntimeObject
{
public:
	// System.Object Microsoft.MixedReality.Toolkit.Data.DataNodeObject::_value
	RuntimeObject * ____value_0;
	// Microsoft.MixedReality.Toolkit.Data.DataNodeType Microsoft.MixedReality.Toolkit.Data.DataNodeObject::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
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

// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Collections.Specialized.NotifyCollectionChangedAction System.Collections.Specialized.NotifyCollectionChangedEventArgs::_action
	int32_t ____action_1;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newItems
	RuntimeObject* ____newItems_2;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldItems
	RuntimeObject* ____oldItems_3;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newStartingIndex
	int32_t ____newStartingIndex_4;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldStartingIndex
	int32_t ____oldStartingIndex_5;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453, ____action_1)); }
	inline int32_t get__action_1() const { return ____action_1; }
	inline int32_t* get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(int32_t value)
	{
		____action_1 = value;
	}

	inline static int32_t get_offset_of__newItems_2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453, ____newItems_2)); }
	inline RuntimeObject* get__newItems_2() const { return ____newItems_2; }
	inline RuntimeObject** get_address_of__newItems_2() { return &____newItems_2; }
	inline void set__newItems_2(RuntimeObject* value)
	{
		____newItems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newItems_2), (void*)value);
	}

	inline static int32_t get_offset_of__oldItems_3() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453, ____oldItems_3)); }
	inline RuntimeObject* get__oldItems_3() const { return ____oldItems_3; }
	inline RuntimeObject** get_address_of__oldItems_3() { return &____oldItems_3; }
	inline void set__oldItems_3(RuntimeObject* value)
	{
		____oldItems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oldItems_3), (void*)value);
	}

	inline static int32_t get_offset_of__newStartingIndex_4() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453, ____newStartingIndex_4)); }
	inline int32_t get__newStartingIndex_4() const { return ____newStartingIndex_4; }
	inline int32_t* get_address_of__newStartingIndex_4() { return &____newStartingIndex_4; }
	inline void set__newStartingIndex_4(int32_t value)
	{
		____newStartingIndex_4 = value;
	}

	inline static int32_t get_offset_of__oldStartingIndex_5() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453, ____oldStartingIndex_5)); }
	inline int32_t get__oldStartingIndex_5() const { return ____oldStartingIndex_5; }
	inline int32_t* get_address_of__oldStartingIndex_5() { return &____oldStartingIndex_5; }
	inline void set__oldStartingIndex_5(int32_t value)
	{
		____oldStartingIndex_5 = value;
	}
};


// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
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


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * ___e1) = 0;
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate
struct RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate
struct RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataControllerGOBase
struct DataControllerGOBase_t7C5A5AA51FEC85FB41B32BA83E5A5AB5479E5299  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary
struct DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap[] Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::viewKeypathToDataKeypathMapper
	ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* ___viewKeypathToDataKeypathMapper_4;
	// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::_dataKeyPathMapperDictionary
	DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * ____dataKeyPathMapperDictionary_5;

public:
	inline static int32_t get_offset_of_viewKeypathToDataKeypathMapper_4() { return static_cast<int32_t>(offsetof(DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B, ___viewKeypathToDataKeypathMapper_4)); }
	inline ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* get_viewKeypathToDataKeypathMapper_4() const { return ___viewKeypathToDataKeypathMapper_4; }
	inline ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA** get_address_of_viewKeypathToDataKeypathMapper_4() { return &___viewKeypathToDataKeypathMapper_4; }
	inline void set_viewKeypathToDataKeypathMapper_4(ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* value)
	{
		___viewKeypathToDataKeypathMapper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewKeypathToDataKeypathMapper_4), (void*)value);
	}

	inline static int32_t get_offset_of__dataKeyPathMapperDictionary_5() { return static_cast<int32_t>(offsetof(DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B, ____dataKeyPathMapperDictionary_5)); }
	inline DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * get__dataKeyPathMapperDictionary_5() const { return ____dataKeyPathMapperDictionary_5; }
	inline DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD ** get_address_of__dataKeyPathMapperDictionary_5() { return &____dataKeyPathMapperDictionary_5; }
	inline void set__dataKeyPathMapperDictionary_5(DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * value)
	{
		____dataKeyPathMapperDictionary_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataKeyPathMapperDictionary_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase
struct DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::dataSourceType
	String_t* ___dataSourceType_4;
	// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::keyPathMapper
	DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * ___keyPathMapper_5;
	// System.String[] Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::_dataSourceTypes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____dataSourceTypes_6;
	// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::_dataSource
	RuntimeObject* ____dataSource_7;
	// Microsoft.MixedReality.Toolkit.Data.IDataController Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::_dataController
	RuntimeObject* ____dataController_8;

public:
	inline static int32_t get_offset_of_dataSourceType_4() { return static_cast<int32_t>(offsetof(DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94, ___dataSourceType_4)); }
	inline String_t* get_dataSourceType_4() const { return ___dataSourceType_4; }
	inline String_t** get_address_of_dataSourceType_4() { return &___dataSourceType_4; }
	inline void set_dataSourceType_4(String_t* value)
	{
		___dataSourceType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSourceType_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyPathMapper_5() { return static_cast<int32_t>(offsetof(DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94, ___keyPathMapper_5)); }
	inline DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * get_keyPathMapper_5() const { return ___keyPathMapper_5; }
	inline DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B ** get_address_of_keyPathMapper_5() { return &___keyPathMapper_5; }
	inline void set_keyPathMapper_5(DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * value)
	{
		___keyPathMapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyPathMapper_5), (void*)value);
	}

	inline static int32_t get_offset_of__dataSourceTypes_6() { return static_cast<int32_t>(offsetof(DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94, ____dataSourceTypes_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__dataSourceTypes_6() const { return ____dataSourceTypes_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__dataSourceTypes_6() { return &____dataSourceTypes_6; }
	inline void set__dataSourceTypes_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____dataSourceTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSourceTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of__dataSource_7() { return static_cast<int32_t>(offsetof(DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94, ____dataSource_7)); }
	inline RuntimeObject* get__dataSource_7() const { return ____dataSource_7; }
	inline RuntimeObject** get_address_of__dataSource_7() { return &____dataSource_7; }
	inline void set__dataSource_7(RuntimeObject* value)
	{
		____dataSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSource_7), (void*)value);
	}

	inline static int32_t get_offset_of__dataController_8() { return static_cast<int32_t>(offsetof(DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94, ____dataController_8)); }
	inline RuntimeObject* get__dataController_8() const { return ____dataController_8; }
	inline RuntimeObject** get_address_of__dataController_8() { return &____dataController_8; }
	inline void set__dataController_8(RuntimeObject* value)
	{
		____dataController_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataController_8), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.ThemeSelector
struct ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ScriptableObject[] Microsoft.MixedReality.Toolkit.Data.ThemeSelector::themeProfiles
	ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* ___themeProfiles_4;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider Microsoft.MixedReality.Toolkit.Data.ThemeSelector::themeProvider
	DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * ___themeProvider_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Data.ThemeSelector::currentTheme
	int32_t ___currentTheme_6;

public:
	inline static int32_t get_offset_of_themeProfiles_4() { return static_cast<int32_t>(offsetof(ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A, ___themeProfiles_4)); }
	inline ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* get_themeProfiles_4() const { return ___themeProfiles_4; }
	inline ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208** get_address_of_themeProfiles_4() { return &___themeProfiles_4; }
	inline void set_themeProfiles_4(ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* value)
	{
		___themeProfiles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___themeProfiles_4), (void*)value);
	}

	inline static int32_t get_offset_of_themeProvider_5() { return static_cast<int32_t>(offsetof(ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A, ___themeProvider_5)); }
	inline DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * get_themeProvider_5() const { return ___themeProvider_5; }
	inline DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 ** get_address_of_themeProvider_5() { return &___themeProvider_5; }
	inline void set_themeProvider_5(DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * value)
	{
		___themeProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___themeProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentTheme_6() { return static_cast<int32_t>(offsetof(ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A, ___currentTheme_6)); }
	inline int32_t get_currentTheme_6() const { return ___currentTheme_6; }
	inline int32_t* get_address_of_currentTheme_6() { return &___currentTheme_6; }
	inline void set_currentTheme_6(int32_t value)
	{
		___currentTheme_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson
struct DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA  : public DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94
{
public:
	// System.Text.RegularExpressions.Regex Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::_callbackRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____callbackRegex_9;

public:
	inline static int32_t get_offset_of__callbackRegex_9() { return static_cast<int32_t>(offsetof(DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA, ____callbackRegex_9)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__callbackRegex_9() const { return ____callbackRegex_9; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__callbackRegex_9() { return &____callbackRegex_9; }
	inline void set__callbackRegex_9(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____callbackRegex_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbackRegex_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider
struct DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913  : public DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94
{
public:
	// UnityEngine.ScriptableObject Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::themeProfile
	ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___themeProfile_9;
	// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::_dataSourceReflection
	DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * ____dataSourceReflection_10;

public:
	inline static int32_t get_offset_of_themeProfile_9() { return static_cast<int32_t>(offsetof(DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913, ___themeProfile_9)); }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * get_themeProfile_9() const { return ___themeProfile_9; }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A ** get_address_of_themeProfile_9() { return &___themeProfile_9; }
	inline void set_themeProfile_9(ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * value)
	{
		___themeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___themeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of__dataSourceReflection_10() { return static_cast<int32_t>(offsetof(DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913, ____dataSourceReflection_10)); }
	inline DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * get__dataSourceReflection_10() const { return ____dataSourceReflection_10; }
	inline DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 ** get_address_of__dataSourceReflection_10() { return &____dataSourceReflection_10; }
	inline void set__dataSourceReflection_10(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * value)
	{
		____dataSourceReflection_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSourceReflection_10), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap[]
struct ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * m_Items[1];

public:
	inline ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * m_Items[1];

public:
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * Dictionary_2_get_Keys_mED78E715F472BE3A6BBF005B8C738B3D450110C1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713  KeyCollection_GetEnumerator_mAA2321DDED8CE07F1E0A2C538BB8E8F82222D7D8_gshared (KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m2CCCCA8F2AC3C52BBFDE257E16189AC172B18AEF_gshared_inline (Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB380BB4BFD80C5A3080F2980B3BD52FB255FEC7A_gshared (Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBF906D5B94336A92FED1A69E0EF666BBEAFF84AA_gshared (Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE9BB02EAE5A3CADC6536087DB663289B508343CC_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  List_1_GetEnumerator_mD6CCABD3BFA787B2DCEC1C8B4A2B5072F0FBD5AB_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m31EA10E718E7A5D809B5F566D61447BCC8BCDEFB_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Single>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeastRecentlyUsedCache_2__ctor_m7BC484410F540C5C006AA719A7E071B0F55C8632_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, int32_t ___capacity0, bool ___preallocate1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeastRecentlyUsedCache_2_Clear_m08067D7FCEA33D6A886A62CFA025FAC0D6036B96_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::AddOrUpdateValue(KT,VT,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeastRecentlyUsedCache_2_AddOrUpdateValue_mBBFC973E833DE558D7FA713965C7EF3A6777C745_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, RuntimeObject * ___key0, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  ___value1, bool ___makeNewest2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::TryRemove(KT)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeastRecentlyUsedCache_2_TryRemove_m45BB8779D074EAEDD94C60969153DAC9603E1E88_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::ContainsKey(KT)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeastRecentlyUsedCache_2_ContainsKey_m731CB910F3859B9FCA674F682248217F6BD4E3C1_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// VT Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.Object,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::FindByKey(KT)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  LeastRecentlyUsedCache_2_FindByKey_m849229FAEE1AAE73ABA8BBCDEC3626892E04C174_gshared (LeastRecentlyUsedCache_2_t8D8917EC721CD99F75C829C0E99FE70E4B5B5ED6 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::AddKeyMapping(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperDictionary_AddKeyMapping_m29C51D53F24396DB44225B51316E2EF7C27BE0BC (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___viewKeyPath0, String_t* ___dataKeyPath1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::GetDataKeyPathFromViewKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperDictionary_GetDataKeyPathFromViewKeyPath_mB658275C947EDE184AFE274B259AB70DB62044E4 (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___viewKeyPath0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::GetViewKeyPathFromDataKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperDictionary_GetViewKeyPathFromDataKeyPath_m1B442C329C51D7A49500E2BD9370FBEA29E91D3B (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___dataKeyPath0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperDictionary__ctor_m01B7B27C78746D42CE975B682AC411B4CD9B2EEF (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::SetNodeType(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject_SetNodeType_mD56900C0F7076BA9F3B3A1E338FA150DB40F6828 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, int32_t ___newNodeType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>::.ctor()
inline void List_1__ctor_mF99746A78EB3CF42AE971A63955F215234EF4539 (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::.ctor()
inline void Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65 (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode> Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * DataNodeObject_GetArray_m9736CCD02D86C285D49DC0AE9049C52D74B51FB3 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mE17960685F729F58DE680A7696F2C68A120DB466_inline (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataNodeObject::IsMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataNodeObject_IsMap_mC4FE30A5285CA6788D85813594AAFA2CC43B73B4 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode> Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42 (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::get_Item(!0)
inline RuntimeObject* Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::get_Count()
inline int32_t Dictionary_2_get_Count_m1969A05A8771F0F4FF504E613261EB69D04F3844 (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataNodeObject::IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataNodeObject_IsArray_m9758A2BAE95236271E4E371A2AD62798E2DABECD (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>::get_Count()
inline int32_t List_1_get_Count_mB383864444B9B22E711DFFF94D35FC7B71752151_inline (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::get_Keys()
inline KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * Dictionary_2_get_Keys_m928DDE97CB37A638BCFFCEF42A42E27AD272814A (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode>::Add(!0)
inline void List_1_Add_m5D5B1FB781CEF7C3CBD114FE18E1D803CC075EDF (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC19135099993954C820E030363B943034575F504 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::NotifyDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_NotifyDataChanged_mA156739C2C0688827699B8287BEA6ADB03C7E07E (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___value1, int32_t ___changeType2, bool ___isAtomicChange3, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::get_Keys()
inline KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8 (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, const RuntimeMethod*))Dictionary_2_get_Keys_mED78E715F472BE3A6BBF005B8C738B3D450110C1_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::GetEnumerator()
inline Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D (KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  (*) (KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 *, const RuntimeMethod*))KeyCollection_GetEnumerator_mAA2321DDED8CE07F1E0A2C538BB8E8F82222D7D8_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_inline (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *, const RuntimeMethod*))Enumerator_get_Current_m2CCCCA8F2AC3C52BBFDE257E16189AC172B18AEF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6 (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *, const RuntimeMethod*))Enumerator_MoveNext_mB380BB4BFD80C5A3080F2980B3BD52FB255FEC7A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::Dispose()
inline void Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72 (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *, const RuntimeMethod*))Enumerator_Dispose_mBF906D5B94336A92FED1A69E0EF666BBEAFF84AA_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::get_Item(!0)
inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384 (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::GetEnumerator()
inline Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  (*) (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_inline (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::MoveNext()
inline bool Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::Dispose()
inline void Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8 (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::.ctor()
inline void List_1__ctor_mC8351FA5A819C1E10491C70EEE7366E252B0D89F (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m34035912D4B3E9ED6FC7E8722ADB9B7C58E179D2 (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, String_t* ___key0, List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, String_t*, List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::Contains(!0)
inline bool List_1_Contains_mCB08DEF57BE33F78F692458C3C71FE2AB43823C9 (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::Add(!0)
inline void List_1_Add_mAB725922D6B45C9B9123B29D94BD7BE4C02078DB (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6040E4AD99831635B1DB5A72054428A0F8A39237 (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064 (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared)(__this, ___key0, ___value1, method);
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceBase_GetValue_m60A12B9C028C93B852DD1A03C2F1857C76EE03B8 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>::Remove(!0)
inline bool List_1_Remove_m46666270378D920439CC5AC0151405B455ADB4FD (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::Remove(!0)
inline bool Dictionary_2_Remove_m72BBBD79FC33B0A991D3A6EA850DCA78E152DE15 (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetBeginForKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_DataChangeSetBeginForKeyPath_mC44B057F6D335B6722136AADBB908E0246015F28 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___keyPath0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::.ctor()
inline void List_1__ctor_m296FCB937050D16222D6C66556D5B9AF0272BFE6 (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::GetEnumerator()
inline Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B  Dictionary_2_GetEnumerator_m5B7C1164FBB00113FED46688A408F1A4274A625B (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B  (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::get_Current()
inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  Enumerator_get_Current_m92D4A2548EC3F2C9F5BAAEE374F1D72031EA3304_inline (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  (*) (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::Add(!0)
inline void List_1_Add_mEAB293A13405BAB014D834767F80188CBBAB77ED (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * __this, KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF *, KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 , const RuntimeMethod*))List_1_Add_mE9BB02EAE5A3CADC6536087DB663289B508343CC_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::MoveNext()
inline bool Enumerator_MoveNext_m57900FF5047D917526191056CAF51DD3449BA427 (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::Dispose()
inline void Enumerator_Dispose_mADFE1A257BCFBE77818C003DE765A71BE48F0E41 (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::GetEnumerator()
inline Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540  List_1_GetEnumerator_m3B8F516CBD6AD11B014984B683CC40A355E73875 (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540  (*) (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF *, const RuntimeMethod*))List_1_GetEnumerator_mD6CCABD3BFA787B2DCEC1C8B4A2B5072F0FBD5AB_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::get_Current()
inline KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  Enumerator_get_Current_m846DC8AE4E965AF6C263F9A37141D5DDDE889660_inline (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  (*) (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::get_Value()
inline List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * KeyValuePair_2_get_Value_m02C584C9BD795720DFB665411DD73069DAE72F79_inline (KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * (*) (KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_inline (KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::MoveNext()
inline bool Enumerator_MoveNext_m53730C5E9F2F74239F0CDFE281C1BB869A8EAD8D (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>>::Dispose()
inline void Enumerator_Dispose_m106E3692FECC2C1873A3B5FAA45A404CA0B057F8 (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *, const RuntimeMethod*))Enumerator_Dispose_m31EA10E718E7A5D809B5F566D61447BCC8BCDEFB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::.ctor()
inline void Dictionary_2__ctor_m7DD3D384839DB0445D2927CB4459AC1B81EB7E44 (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Data.IDataConsumer,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m892EF2706F0344882DA2CB5A4D81025E47E6B8E9 (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_Initialize_m2BDEE827C3B7101DC8CD2BC0D57692DD6C0B52AF (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::get_DataSourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40_inline (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::get_DataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Data.DataSourceJson Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::get_DataSourceJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * DataSourceGOJson_get_DataSourceJson_m8BBAC95B7DADD8156B675970C18CEF080DEC75F8 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::UpdateFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson_UpdateFromJson_m76EA71F7C19264504DE2FBCDD4927E4EFB1ACCF3 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson__ctor_m7D1887677F82A2C1BBC49801EA9BE871BDE75F7E (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7__ctor_m1F4279B0CB9F2D174964CAD93F36E30E95AE6591 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D (MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97 (GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * __this, int32_t ___groupnum0, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase__ctor_mA3B9D044F7E7A3827C83867F2706C1F92FFA0527 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Microsoft.MixedReality.Toolkit.Data.DataSourceJson::KeyPathToNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::TryGetNodeContainerCount(Newtonsoft.Json.Linq.JToken,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, int32_t* ___outCount1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsArray(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsArray_m8F1ADC56E54872D4A7B264B93592DE17BC653548 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Linq.JContainer::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JContainer_get_Count_m313DBBD55EDD9D91B15A73D708C0C09BA84F1459 (JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetValueAsArrayKeyPaths(Newtonsoft.Json.Linq.JToken,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceJson_GetValueAsArrayKeyPaths_m11A4C274B2DE6C4834B4B3E1DF0D11E9F3FB0668 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___arrayNode0, String_t* ___resolvedKeyPath1, int32_t ___rangeStart2, int32_t ___rangeCount3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsObject(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsObject_m3A4AA046E32635AEEB33C886D48FA5216A3E1D0D (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetValueAsDictionaryKeyPaths(Newtonsoft.Json.Linq.JToken,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceJson_GetValueAsDictionaryKeyPaths_mA25AF182E3D72BFCC9BDE2A7B980FA1D4EEEB66A (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___dictNode0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsNumber(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsNumber_mA9033D051B8DD418BD71F5FDCB9AA19BB222F09D (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Single>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline float Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared)(___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>()
inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81 (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * (*) (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
inline Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  (*) (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
inline String_t* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492 (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m21F7A13DD2BC76B415BC0A44028E9D24FCB855F6 (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::get_Item(!0)
inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * Dictionary_2_get_Item_m48EF85CF2AB6F8ECBA7B7691C4D770F4550C2C7A (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * (*) (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC6EB7218B2FFC4EB67C0C15CEA3FF6C228286B98 (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * __this, String_t* ___key0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *, String_t*, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::Clear()
inline void Dictionary_2_Clear_mC72D26EBFF348F2F24B21E29A079A8D9104F553D (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JToken_Parse_mEC0D44C2AEB81496C5778E0BA81D06E4AF555211 (String_t* ___json0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NotifyListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson_NotifyListeners_mD4F49FB150F1CC6B04F0C95015B0008019B44779 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataConsumer>>::get_Keys()
inline KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * Dictionary_2_get_Keys_mC05E0F8246E3E307B1F0B59BDD4C9CBDAEC2E617 (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * (*) (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor()
inline void Dictionary_2__ctor_mCEAD4158F0F520E76B43E3563E51CC44EB3F4BA8 (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::.ctor(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject__ctor_mE444AEBF444EC3389855232D7C475135849ED0EB (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::KeyPathToNode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, bool ___createIfMissing1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetValueAsArrayKeyPaths(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_GetValueAsArrayKeyPaths_m4E022D8F726324F15E6581E50E3AB8AC5E9B58CA (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetValueAsDictionaryKeyPaths(Microsoft.MixedReality.Toolkit.Data.IDataNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_GetValueAsDictionaryKeyPaths_m3A9C9FED6A9E26C580A04E605168DB7337B50D69 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, RuntimeObject* ___mapNode0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPathEnumerable__ctor_m1CC6D50F906E6C90B9F3EC12E5899DEED1FB70B6 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, String_t* ___keyPathPrefix0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject__ctor_mAAC2A84471BAB8F7394DBE22A695E3C59E12069E (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>::.ctor()
inline void Dictionary_2__ctor_m421164C5FA44C9BAF0D26B2C6DE2BFA7C4E3ADF6 (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::.ctor(System.Int32,System.Boolean)
inline void LeastRecentlyUsedCache_2__ctor_m664CC119449F1C34CBF22AB08638111A242BE4DA (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, int32_t ___capacity0, bool ___preallocate1, const RuntimeMethod* method)
{
	((  void (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, int32_t, bool, const RuntimeMethod*))LeastRecentlyUsedCache_2__ctor_m7BC484410F540C5C006AA719A7E071B0F55C8632_gshared)(__this, ___capacity0, ___preallocate1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::Clear()
inline void LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, const RuntimeMethod* method)
{
	((  void (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, const RuntimeMethod*))LeastRecentlyUsedCache_2_Clear_m08067D7FCEA33D6A886A62CFA025FAC0D6036B96_gshared)(__this, method);
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::KeyPathToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsArrayOrList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsArrayOrList_m72844B34FA8EFE638306ED727344150886551E17 (Type_t * ___source0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::KeyPathToValueWithMemberInfo(System.String,System.Reflection.MemberInfo&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_KeyPathToValueWithMemberInfo_m30A78854E6F5C07619FC99142FABFD73FFB23488 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, MemberInfo_t ** ___memberInfoOut1, RuntimeObject ** ___containingObjectOut2, const RuntimeMethod* method);
// System.Boolean System.Reflection.MemberInfo::op_Inequality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Inequality_m3C69F1834F6F8F947A618FE183AAF1B6B72DA0E2 (MemberInfo_t * ___left0, MemberInfo_t * ___right1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::SetValueFromFieldOrProperty(System.Object,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_SetValueFromFieldOrProperty_m4E265D6D65736A941D921AA9183AB6EFCF135151 (RuntimeObject * ___containingObject0, MemberInfo_t * ___memberInfo1, RuntimeObject * ___value2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::MakeLRUItem(System.Object,System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  DataSourceReflection_MakeLRUItem_m5E7EF65E6B25ADC41637049231A0509898398C1D (RuntimeObject * ___value0, RuntimeObject * ___containingObject1, MemberInfo_t * ___memberInfo2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::AddOrUpdateValue(KT,VT,System.Boolean)
inline void LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23 (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, String_t* ___key0, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  ___value1, bool ___makeNewest2, const RuntimeMethod* method)
{
	((  void (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, String_t*, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D , bool, const RuntimeMethod*))LeastRecentlyUsedCache_2_AddOrUpdateValue_mBBFC973E833DE558D7FA713965C7EF3A6777C745_gshared)(__this, ___key0, ___value1, ___makeNewest2, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueAsArrayKeyPaths(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceReflection_GetValueAsArrayKeyPaths_mFA94A3AA77A05CF3CAFFCE7AA765B0C6F40D0437 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueAsDictionaryKeyPaths(System.Collections.IDictionary,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceReflection_GetValueAsDictionaryKeyPaths_m030A63472A7C20F67BE618563010019E8ADCEF35 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject* ___dict0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::RemoveDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_RemoveDataConsumerListener_m00EBED186F07902ADF4108E589A5D51479C3BBF2 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::TryRemove(KT)
inline bool LeastRecentlyUsedCache_2_TryRemove_m6F7EAEFC800DDAD4DE384EFD7C3F73899A8D5172 (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, String_t*, const RuntimeMethod*))LeastRecentlyUsedCache_2_TryRemove_m45BB8779D074EAEDD94C60969153DAC9603E1E88_gshared)(__this, ___key0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::ContainsKey(KT)
inline bool LeastRecentlyUsedCache_2_ContainsKey_m56270BAE6B7158CFAE20EA33A7D14FF4541FDDEA (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, String_t*, const RuntimeMethod*))LeastRecentlyUsedCache_2_ContainsKey_m731CB910F3859B9FCA674F682248217F6BD4E3C1_gshared)(__this, ___key0, method);
}
// VT Microsoft.MixedReality.Toolkit.Data.LeastRecentlyUsedCache`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem>::FindByKey(KT)
inline LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  LeastRecentlyUsedCache_2_FindByKey_m91D17CA9B50C4EB4A7D8CD43B496EF4C967AFC9D (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  (*) (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *, String_t*, const RuntimeMethod*))LeastRecentlyUsedCache_2_FindByKey_m849229FAEE1AAE73ABA8BBCDEC3626892E04C174_gshared)(__this, ___key0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::FindKeypathArrayToken(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_FindKeypathArrayToken_mC0355E7784E6A78DABC645415C46A597DDFC5BF3 (String_t* ___str0, int32_t* ___start1, int32_t* ___end2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::TryParseIntSubstring(System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_TryParseIntSubstring_mE65D4FBF9C1CE1640681DC4EA08C2206F87B04C9 (String_t* ___str0, int32_t ___start1, int32_t ___end2, int32_t* ___result3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsList_m9300A2F48C9DBEF274FDC142A756CA2F73CF1061 (Type_t * ___source0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1 (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::FindKeypathToken(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_FindKeypathToken_m6D71A3EB51302F7E773FF5AA3107B70187CC3525 (String_t* ___str0, int32_t* ___start1, int32_t* ___end2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsStructOrClass(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsStructOrClass_mF6C8C8972EC88DBCD6B60D67B16080A5740E3272 (Type_t * ___source0, const RuntimeMethod* method);
// System.Reflection.MemberInfo Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetNamedFieldOrPropertyInfo(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * DataSourceReflection_GetNamedFieldOrPropertyInfo_mD070F8D819F5202F135BA300F6967379878D9B84 (Type_t * ___objType0, String_t* ___key1, const RuntimeMethod* method);
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueFromFieldOrProperty(System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_GetValueFromFieldOrProperty_mFCD4B4664BCD896911DB01226783BC2797C53588 (RuntimeObject * ___containingObject0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::AddOrUpdateItemInLRUCache(System.String,System.Object,System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_AddOrUpdateItemInLRUCache_m8FEED847FF564E89209027926438D41E07B5DB54 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___keyPath0, RuntimeObject * ___value1, RuntimeObject * ___containingObject2, MemberInfo_t * ___memberInfo3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m50B81205FDD68CEFC46AEDEF14199A14A62677A8 (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * __this, Type_t * ___key0, MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 *, Type_t *, MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m7858BA6DA6999BD9274132CE30EF02D73BD513A2 (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * __this, Type_t * ___key0, MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 *, Type_t *, MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo_SetValue_m8397EBC06D7DC1EFB56EEA65E7DB4AA362CA4170 (PropertyInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::.ctor(Microsoft.MixedReality.Toolkit.Data.DataSourceReflection,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionObserver__ctor_mAAD7B67093ED6D1DF0DB03C8CE05DC626F587780 (CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * __this, DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * ___dataSource0, String_t* ___keyPath1, RuntimeObject * ___collection2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m244613A2F128CA8D2FA0C6319A9F9157495F70E1 (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * __this, String_t* ___key0, CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 *, String_t*, CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver>::Remove(!0)
inline bool Dictionary_2_Remove_mE9D8F3BEB6165F60B6EEA2B0355ED85F8B7A8C63 (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>::.ctor()
inline void Dictionary_2__ctor_m911E2EBE3EDC37A54AD2B18B21E0B6FCB3A85DAA (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::SetTheme(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceThemeProvider_SetTheme_m95FDA3C4B82ABB80E88E0507E5044BD3123A090A (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___themeProfile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection__ctor_m5D4D17D041FD672A16ABD5E48216F9180D6D96C7 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject * ___dataSourceObject0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::set_DataSourceType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSourceGOBase_set_DataSourceType_m47610AB0B2B05A1232E7782C7EEDDB527FE37284_inline (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::SetDataSourceObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_SetDataSourceObject_m1E5AB518E083E1950099F86C4DA137CC16D621E8 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject * ___dataSourceObject0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::NotifyAllChanged(Microsoft.MixedReality.Toolkit.Data.DataChangeType,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_NotifyAllChanged_mFCE4FC187460DA751FCED76650A946989B8CAE34 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, int32_t ___dataChangeType0, RuntimeObject* ___whichDataConsumer1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyPathEnumerable_GetEnumerator_m9C9882B3913C42202108584A14EA1F321BB6F455 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::GenerateKeyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyPathEnumerable_GenerateKeyPath_m030D4F575D4D52C1AB388BE1725401363D55C285 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyPathEnumerable_get_Current_m4A85E319B45B5A244EE1C2728721F203D3B1D184 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::SetTheme(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_SetTheme_mEE04620263EDBDBD5540AE538E3D5A925828AD33 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, int32_t ___whichTheme0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Data.ThemeSelector::get_CurrentTheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ThemeSelector_get_CurrentTheme_m1A1F07001C9D4805B1120140825B18515C6F1EB9_inline (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::set_CurrentTheme(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_set_CurrentTheme_m144B5C19FA895C94D4B6FA887B40D9E13975C6D8 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7_U3CU3Em__Finally1_m200ADA6834881AA173E896DD489EA5554DB90556 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailureDelegate_Invoke_mF42A0A38B2ABB2B78258F01461527A18490238A9 (RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * __this, String_t* ___errorString0, RuntimeObject * ___requestRef1, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::RemoveCallbackWrapper(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceGOJson_RemoveCallbackWrapper_mBB704999676460271CEEFAEC845934057EAF3E12 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, String_t* ___jsonText0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccessDelegate_Invoke_m2D0932872108DA7F55F254CB7106F5CABF4ACDCB (RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * __this, String_t* ___jsonText0, RuntimeObject * ___requestRef1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7_System_IDisposable_Dispose_m9A4EB7C0D7F21520533804369D7CED460405E290 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Specialized.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventHandler__ctor_mF25C1F41D0B942C2B78006C32C9BE89A1D4758C0 (NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t * Type_GetEvent_m1CA007B4B4D801535D888D036C0A5DC1E1B02840 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Collections.Specialized.NotifyCollectionChangedAction System.Collections.Specialized.NotifyCollectionChangedEventArgs::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_Action_mB2E52BFC9F6858B253A21D031B36AABA3B5DA713_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::get_NewStartingIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_NewStartingIndex_m6A2892FA50878A3167224773B093E3AC2EBF07B4_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionItemIdentifier__ctor_m9E4019FB4C732B08E1CC98852566029A07A74CB4 (CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * __this, String_t* ___keyPath0, int32_t ___position1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::NotifyCollectionDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___collectionKeyPath0, RuntimeObject * ___value1, int32_t ___changeType2, bool ___isAtomicChange3, const RuntimeMethod* method);
// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::get_NewItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_NewItems_m6942B041C79771EA73E94775F0BE42F762BE759E_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::get_OldStartingIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_OldStartingIndex_mF8714953EE064A75DEE9F34574F6FAAD417772E2_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method);
// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::get_OldItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_OldItems_m7EA3AF08E09190B1AE3656BDB8283B20FD4F37F6_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LRUItem_get_Key_m5A409CDAF31031B1696AD87B3DB29DBCF4709FB1_inline (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::set_Key(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LRUItem_set_Key_m585FF473CAF2EF151E307D6E21272CEC110592ED_inline (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.CollectionItemIdentifier::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionItemIdentifier__ctor_m9E4019FB4C732B08E1CC98852566029A07A74CB4 (CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * __this, String_t* ___keyPath0, int32_t ___position1, const RuntimeMethod* method)
{
	{
		// public CollectionItemIdentifier(string keyPath, int position)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// FullyResolvedKeypath = keyPath;
		String_t* L_0 = ___keyPath0;
		__this->set_U3CFullyResolvedKeypathU3Ek__BackingField_0(L_0);
		// IndexPosition = position;
		int32_t L_1 = ___position1;
		__this->set_U3CIndexPositionU3Ek__BackingField_1(L_1);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataControllerGOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataControllerGOBase__ctor_m44EE14BCAAC1F993ED2A1BADEB3C0B3927EAFC97 (DataControllerGOBase_t7C5A5AA51FEC85FB41B32BA83E5A5AB5479E5299 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::AddKeyMapping(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperDictionary_AddKeyMapping_m29C51D53F24396DB44225B51316E2EF7C27BE0BC (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___viewKeyPath0, String_t* ___dataKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _viewToDataKeyPathLookup[viewKeyPath] = dataKeyPath;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__viewToDataKeyPathLookup_0();
		String_t* L_1 = ___viewKeyPath0;
		String_t* L_2 = ___dataKeyPath1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// _dataToViewKeyPathLookup[dataKeyPath] = viewKeyPath;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = __this->get__dataToViewKeyPathLookup_1();
		String_t* L_4 = ___dataKeyPath1;
		String_t* L_5 = ___viewKeyPath0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::GetDataKeyPathFromViewKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperDictionary_GetDataKeyPathFromViewKeyPath_mB658275C947EDE184AFE274B259AB70DB62044E4 (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___viewKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_viewToDataKeyPathLookup.ContainsKey(viewKeyPath))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__viewToDataKeyPathLookup_0();
		String_t* L_1 = ___viewKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _viewToDataKeyPathLookup[viewKeyPath];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = __this->get__viewToDataKeyPathLookup_0();
		String_t* L_4 = ___viewKeyPath0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return viewKeyPath;
		String_t* L_6 = ___viewKeyPath0;
		return L_6;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::GetViewKeyPathFromDataKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperDictionary_GetViewKeyPathFromDataKeyPath_m1B442C329C51D7A49500E2BD9370FBEA29E91D3B (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, String_t* ___dataKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_viewToDataKeyPathLookup.ContainsKey(dataKeyPath))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__viewToDataKeyPathLookup_0();
		String_t* L_1 = ___dataKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _dataToViewKeyPathLookup[dataKeyPath];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = __this->get__dataToViewKeyPathLookup_1();
		String_t* L_4 = ___dataKeyPath0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return dataKeyPath;
		String_t* L_6 = ___dataKeyPath0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperDictionary__ctor_m01B7B27C78746D42CE975B682AC411B4CD9B2EEF (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, string> _viewToDataKeyPathLookup = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set__viewToDataKeyPathLookup_0(L_0);
		// protected Dictionary<string, string> _dataToViewKeyPathLookup = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set__dataToViewKeyPathLookup_1(L_1);
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
// Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::get_DataKeyPathMapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataKeyPathMapperGODictionary_get_DataKeyPathMapper_m6D488E4E3E5E2E6AD04690717C09C52554ABDCAA (DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * __this, const RuntimeMethod* method)
{
	{
		// public IDataKeyPathMapper DataKeyPathMapper { get { return _dataKeyPathMapperDictionary; } }
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_0 = __this->get__dataKeyPathMapperDictionary_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperGODictionary_OnEnable_mBF7760F382E9515F407443A4FCFC25848F293E1C (DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * __this, const RuntimeMethod* method)
{
	ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* V_0 = NULL;
	int32_t V_1 = 0;
	ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * V_2 = NULL;
	{
		// foreach(ViewToDataKeypathMap v2dKeyPath in viewKeypathToDataKeypathMapper )
		ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* L_0 = __this->get_viewKeypathToDataKeypathMapper_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		// foreach(ViewToDataKeypathMap v2dKeyPath in viewKeypathToDataKeypathMapper )
		ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// _dataKeyPathMapperDictionary.AddKeyMapping(v2dKeyPath.viewKeyPath, v2dKeyPath.dataKeyPath);
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_5 = __this->get__dataKeyPathMapperDictionary_5();
		ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_viewKeyPath_0();
		ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_dataKeyPath_1();
		NullCheck(L_5);
		DataKeyPathMapperDictionary_AddKeyMapping_m29C51D53F24396DB44225B51316E2EF7C27BE0BC(L_5, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002a:
	{
		// foreach(ViewToDataKeypathMap v2dKeyPath in viewKeypathToDataKeypathMapper )
		int32_t L_11 = V_1;
		ViewToDataKeypathMapU5BU5D_t488AB584B82B2F8DFEEBD82F27DD0CE94902F9BA* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::GetDataKeyPathFromViewKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperGODictionary_GetDataKeyPathFromViewKeyPath_mFA42D74B9EDFE578D0CE83ED292B6CEA57D3E9FA (DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * __this, String_t* ___viewKeyPath0, const RuntimeMethod* method)
{
	{
		// if (_dataKeyPathMapperDictionary != null)
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_0 = __this->get__dataKeyPathMapperDictionary_5();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return _dataKeyPathMapperDictionary.GetDataKeyPathFromViewKeyPath(viewKeyPath);
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_1 = __this->get__dataKeyPathMapperDictionary_5();
		String_t* L_2 = ___viewKeyPath0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = DataKeyPathMapperDictionary_GetDataKeyPathFromViewKeyPath_mB658275C947EDE184AFE274B259AB70DB62044E4(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::GetViewKeyPathFromDataKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataKeyPathMapperGODictionary_GetViewKeyPathFromDataKeyPath_m8E0E73EBCC30D00F02370FABBEB23CC9950E789D (DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * __this, String_t* ___dataKeyPath0, const RuntimeMethod* method)
{
	{
		// if (_dataKeyPathMapperDictionary != null)
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_0 = __this->get__dataKeyPathMapperDictionary_5();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return _dataKeyPathMapperDictionary.GetViewKeyPathFromDataKeyPath(dataKeyPath);
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_1 = __this->get__dataKeyPathMapperDictionary_5();
		String_t* L_2 = ___dataKeyPath0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = DataKeyPathMapperDictionary_GetViewKeyPathFromDataKeyPath_m1B442C329C51D7A49500E2BD9370FBEA29E91D3B(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataKeyPathMapperGODictionary__ctor_mA6F2F8842CD0008227C576BB39A7E426F419BEB9 (DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected DataKeyPathMapperDictionary _dataKeyPathMapperDictionary = new DataKeyPathMapperDictionary();
		DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD * L_0 = (DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD *)il2cpp_codegen_object_new(DataKeyPathMapperDictionary_t7F2FC05A537E5FDBCCB8D7E69414192BC6BF67FD_il2cpp_TypeInfo_var);
		DataKeyPathMapperDictionary__ctor_m01B7B27C78746D42CE975B682AC411B4CD9B2EEF(L_0, /*hidden argument*/NULL);
		__this->set__dataKeyPathMapperDictionary_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject__ctor_mAAC2A84471BAB8F7394DBE22A695E3C59E12069E (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	{
		// public DataNodeObject()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _type = DataNodeType.Unassigned;
		__this->set__type_1(0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::.ctor(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject__ctor_mE444AEBF444EC3389855232D7C475135849ED0EB (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// public DataNodeObject(DataNodeType type, object value = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SetNodeType(type, value);
		int32_t L_0 = ___type0;
		RuntimeObject * L_1 = ___value1;
		DataNodeObject_SetNodeType_mD56900C0F7076BA9F3B3A1E338FA150DB40F6828(__this, L_0, L_1, /*hidden argument*/NULL);
		// _type = type;
		int32_t L_2 = ___type0;
		__this->set__type_1(L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::SetNodeType(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject_SetNodeType_mD56900C0F7076BA9F3B3A1E338FA150DB40F6828 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, int32_t ___newNodeType0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF99746A78EB3CF42AE971A63955F215234EF4539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _type = newNodeType;
		int32_t L_0 = ___newNodeType0;
		__this->set__type_1(L_0);
		int32_t L_1 = ___newNodeType0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___newNodeType0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0029;
	}

IL_0011:
	{
		// _value = new List<IDataNode>();
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_3 = (List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *)il2cpp_codegen_object_new(List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_il2cpp_TypeInfo_var);
		List_1__ctor_mF99746A78EB3CF42AE971A63955F215234EF4539(L_3, /*hidden argument*/List_1__ctor_mF99746A78EB3CF42AE971A63955F215234EF4539_RuntimeMethod_var);
		__this->set__value_0(L_3);
		// break;
		return;
	}

IL_001d:
	{
		// _value = new Dictionary<string, IDataNode>();
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_4 = (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *)il2cpp_codegen_object_new(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65(L_4, /*hidden argument*/Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65_RuntimeMethod_var);
		__this->set__value_0(L_4);
		// break;
		return;
	}

IL_0029:
	{
		// _value = value;
		RuntimeObject * L_5 = ___value1;
		__this->set__value_0(L_5);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataNodeObject::IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataNodeObject_IsArray_m9758A2BAE95236271E4E371A2AD62798E2DABECD (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	{
		// return _type == DataNodeType.Array;
		int32_t L_0 = __this->get__type_1();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataNodeObject::IsMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataNodeObject_IsMap_mC4FE30A5285CA6788D85813594AAFA2CC43B73B4 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	{
		// return _type == DataNodeType.Map;
		int32_t L_0 = __this->get__type_1();
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataNodeObject::IsUnassigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataNodeObject_IsUnassigned_m1FD5D1553F4D617043ABB45068A7B1CBD1A408FD (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	{
		// return _type == DataNodeType.Unassigned;
		int32_t L_0 = __this->get__type_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetNodeByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataNodeObject_GetNodeByIndex_mBED5228104026298E77FFF1C68A0D8D87064F3DD (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE17960685F729F58DE680A7696F2C68A120DB466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * V_0 = NULL;
	{
		// List<IDataNode> nodeArray = GetArray();
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_0;
		L_0 = DataNodeObject_GetArray_m9736CCD02D86C285D49DC0AE9049C52D74B51FB3(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (nodeArray != null)
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return nodeArray[n];
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_2 = V_0;
		int32_t L_3 = ___n0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_mE17960685F729F58DE680A7696F2C68A120DB466_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mE17960685F729F58DE680A7696F2C68A120DB466_RuntimeMethod_var);
		return L_4;
	}

IL_0012:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetNodeByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataNodeObject_GetNodeByKey_m6B47CA4C4329BF0DD97D84B06F7E3CF3095B4457 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsMap() && GetMap().ContainsKey(key))
		bool L_0;
		L_0 = DataNodeObject_IsMap_mC4FE30A5285CA6788D85813594AAFA2CC43B73B4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_1;
		L_1 = DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return GetMap()[key];
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_4;
		L_4 = DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251(__this, /*hidden argument*/NULL);
		String_t* L_5 = ___key0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D_RuntimeMethod_var);
		return L_6;
	}

IL_0023:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetCollectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataNodeObject_GetCollectionCount_mBAFC8891EBB26C3A7C6A746432CD780C57DCA603 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1969A05A8771F0F4FF504E613261EB69D04F3844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB383864444B9B22E711DFFF94D35FC7B71752151_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsMap())
		bool L_0;
		L_0 = DataNodeObject_IsMap_mC4FE30A5285CA6788D85813594AAFA2CC43B73B4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return GetMap().Count;
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_1;
		L_1 = DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m1969A05A8771F0F4FF504E613261EB69D04F3844(L_1, /*hidden argument*/Dictionary_2_get_Count_m1969A05A8771F0F4FF504E613261EB69D04F3844_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		// else if (IsArray())
		bool L_3;
		L_3 = DataNodeObject_IsArray_m9758A2BAE95236271E4E371A2AD62798E2DABECD(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return GetArray().Count;
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_4;
		L_4 = DataNodeObject_GetArray_m9736CCD02D86C285D49DC0AE9049C52D74B51FB3(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB383864444B9B22E711DFFF94D35FC7B71752151_inline(L_4, /*hidden argument*/List_1_get_Count_mB383864444B9B22E711DFFF94D35FC7B71752151_RuntimeMethod_var);
		return L_5;
	}

IL_0028:
	{
		// return 0;
		return 0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetMapKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataNodeObject_GetMapKeys_m8AC6055927F42C2536A2C8470CEB2A821922EACC (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m928DDE97CB37A638BCFFCEF42A42E27AD272814A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * V_0 = NULL;
	{
		// map = GetMap();
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_0;
		L_0 = DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (map != null)
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return map.Keys;
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_2 = V_0;
		NullCheck(L_2);
		KeyCollection_t9A11ACDEB57FB4F7BC4E64E4680673CDEA0DE04B * L_3;
		L_3 = Dictionary_2_get_Keys_m928DDE97CB37A638BCFFCEF42A42E27AD272814A(L_2, /*hidden argument*/Dictionary_2_get_Keys_m928DDE97CB37A638BCFFCEF42A42E27AD272814A_RuntimeMethod_var);
		return L_3;
	}

IL_0011:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataNodeObject_GetValue_m5377EFBD0FFE346BB4CD2C8EE6C0BAA78A87DA4C (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	{
		// return _value;
		RuntimeObject * L_0 = __this->get__value_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject_SetValue_m1A01FFE4964FD95FFB3CD4B7AB7AEC0B758096F1 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, RuntimeObject * ___newValue0, const RuntimeMethod* method)
{
	{
		// _value = newValue;
		RuntimeObject * L_0 = ___newValue0;
		__this->set__value_0(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::AddToArray(Microsoft.MixedReality.Toolkit.Data.IDataNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject_AddToArray_mC3AA867728AD071FA66A0FA15DF6FB7A4D1D5A29 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, RuntimeObject* ___dataNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D5B1FB781CEF7C3CBD114FE18E1D803CC075EDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsArray())
		bool L_0;
		L_0 = DataNodeObject_IsArray_m9758A2BAE95236271E4E371A2AD62798E2DABECD(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// GetArray().Add(dataNode);
		List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * L_1;
		L_1 = DataNodeObject_GetArray_m9736CCD02D86C285D49DC0AE9049C52D74B51FB3(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___dataNode0;
		NullCheck(L_1);
		List_1_Add_m5D5B1FB781CEF7C3CBD114FE18E1D803CC075EDF(L_1, L_2, /*hidden argument*/List_1_Add_m5D5B1FB781CEF7C3CBD114FE18E1D803CC075EDF_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataNodeObject::AddToMap(System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNodeObject_AddToMap_mE7AB9229E906582F1B9F06A4E11DAA2511219134 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, String_t* ___key0, RuntimeObject* ___dataNode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsMap())
		bool L_0;
		L_0 = DataNodeObject_IsMap_mC4FE30A5285CA6788D85813594AAFA2CC43B73B4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// GetMap()[key] = dataNode;
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_1;
		L_1 = DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___key0;
		RuntimeObject* L_3 = ___dataNode1;
		NullCheck(L_1);
		Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD_RuntimeMethod_var);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode> Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * DataNodeObject_GetMap_m251EEECB5AC76DF97CAED6A54574DFBA07C9E251 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _value as Dictionary<string, IDataNode>;
		RuntimeObject * L_0 = __this->get__value_0();
		return ((Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *)IsInstClass((RuntimeObject*)L_0, Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var));
	}
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Data.IDataNode> Microsoft.MixedReality.Toolkit.Data.DataNodeObject::GetArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 * DataNodeObject_GetArray_m9736CCD02D86C285D49DC0AE9049C52D74B51FB3 (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _value as List<IDataNode>;
		RuntimeObject * L_0 = __this->get__value_0();
		return ((List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800 *)IsInstClass((RuntimeObject*)L_0, List_1_t4509DF98639C6AFE946C2B0E51AA799FB6AF5800_il2cpp_TypeInfo_var));
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
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::FindKeypathArrayToken(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_FindKeypathArrayToken_mC0355E7784E6A78DABC645415C46A597DDFC5BF3 (String_t* ___str0, int32_t* ___start1, int32_t* ___end2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// start = -1;
		int32_t* L_0 = ___start1;
		*((int32_t*)L_0) = (int32_t)(-1);
		// end   = -1;
		int32_t* L_1 = ___end2;
		*((int32_t*)L_1) = (int32_t)(-1);
		// for (int i=0; i<str.Length; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_000a:
	{
		// char ch = str[i];
		String_t* L_2 = ___str0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if      (start == -1 && (!char.IsWhiteSpace(ch) && ch != '[')) { return false; } // After leading whitespaces, this string starts with a character that is NOT an array bracket, fail out
		int32_t* L_5 = ___start1;
		int32_t L_6 = *((int32_t*)L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)91))))
		{
			goto IL_0026;
		}
	}
	{
		// if      (start == -1 && (!char.IsWhiteSpace(ch) && ch != '[')) { return false; } // After leading whitespaces, this string starts with a character that is NOT an array bracket, fail out
		return (bool)0;
	}

IL_0026:
	{
		// else if (start == -1 && ch == '[') { start = i+1; }                              // This character is the first open bracket in the string
		int32_t* L_10 = ___start1;
		int32_t L_11 = *((int32_t*)L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0037;
		}
	}
	{
		// else if (start == -1 && ch == '[') { start = i+1; }                              // This character is the first open bracket in the string
		int32_t* L_13 = ___start1;
		int32_t L_14 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		// else if (start == -1 && ch == '[') { start = i+1; }                              // This character is the first open bracket in the string
		goto IL_0046;
	}

IL_0037:
	{
		// else if (start != -1 && ch == ']') { end   = i; return true; }                   // This is the first close bracket after the first open bracket
		int32_t* L_15 = ___start1;
		int32_t L_16 = *((int32_t*)L_15);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0046;
		}
	}
	{
		// else if (start != -1 && ch == ']') { end   = i; return true; }                   // This is the first close bracket after the first open bracket
		int32_t* L_18 = ___end2;
		int32_t L_19 = V_0;
		*((int32_t*)L_18) = (int32_t)L_19;
		// else if (start != -1 && ch == ']') { end   = i; return true; }                   // This is the first close bracket after the first open bracket
		return (bool)1;
	}

IL_0046:
	{
		// for (int i=0; i<str.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004a:
	{
		// for (int i=0; i<str.Length; i++)
		int32_t L_21 = V_0;
		String_t* L_22 = ___str0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::FindKeypathToken(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_FindKeypathToken_m6D71A3EB51302F7E773FF5AA3107B70187CC3525 (String_t* ___str0, int32_t* ___start1, int32_t* ___end2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// start = -1;
		int32_t* L_0 = ___start1;
		*((int32_t*)L_0) = (int32_t)(-1);
		// end   = -1;
		int32_t* L_1 = ___end2;
		*((int32_t*)L_1) = (int32_t)(-1);
		// for (int i=0; i<str.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_000a:
	{
		// char ch = str[i];
		String_t* L_2 = ___str0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if      (ch == '[' || ch == '.')                { end   = i; break; } // These characters define the end of a token.
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		// if      (ch == '[' || ch == '.')                { end   = i; break; } // These characters define the end of a token.
		int32_t* L_7 = ___end2;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)L_8;
		// if      (ch == '[' || ch == '.')                { end   = i; break; } // These characters define the end of a token.
		goto IL_003e;
	}

IL_0021:
	{
		// else if (start == -1 && !char.IsWhiteSpace(ch)) { start = i; }        // The first non-whitespace character is the start of the token.
		int32_t* L_9 = ___start1;
		int32_t L_10 = *((int32_t*)L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0031;
		}
	}
	{
		// else if (start == -1 && !char.IsWhiteSpace(ch)) { start = i; }        // The first non-whitespace character is the start of the token.
		int32_t* L_13 = ___start1;
		int32_t L_14 = V_0;
		*((int32_t*)L_13) = (int32_t)L_14;
	}

IL_0031:
	{
		// for (int i=0; i<str.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0035:
	{
		// for (int i=0; i<str.Length; i++)
		int32_t L_16 = V_0;
		String_t* L_17 = ___str0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_000a;
		}
	}

IL_003e:
	{
		// if (end == -1) { end = str.Length; } // If we didn't find an end token character, then end of the string is also good.
		int32_t* L_19 = ___end2;
		int32_t L_20 = *((int32_t*)L_19);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		// if (end == -1) { end = str.Length; } // If we didn't find an end token character, then end of the string is also good.
		int32_t* L_21 = ___end2;
		String_t* L_22 = ___str0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		*((int32_t*)L_21) = (int32_t)L_23;
	}

IL_004b:
	{
		// return start != -1;                  // If we never found a start character, this isn't a token.
		int32_t* L_24 = ___start1;
		int32_t L_25 = *((int32_t*)L_24);
		return (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataParser::TryParseIntSubstring(System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataParser_TryParseIntSubstring_mE65D4FBF9C1CE1640681DC4EA08C2206F87B04C9 (String_t* ___str0, int32_t ___start1, int32_t ___end2, int32_t* ___result3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// int multiplier = 1;
		V_0 = 1;
		// result = 0;
		int32_t* L_0 = ___result3;
		*((int32_t*)L_0) = (int32_t)0;
		// for (int i = end-1; i >= start; i--)
		int32_t L_1 = ___end2;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0047;
	}

IL_000b:
	{
		// char ch = str[i];
		String_t* L_2 = ___str0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// if (char.IsDigit(ch))
		Il2CppChar L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if (result < 0) { return false; } //
		int32_t* L_7 = ___result3;
		int32_t L_8 = *((int32_t*)L_7);
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// if (result < 0) { return false; } //
		return (bool)0;
	}

IL_0022:
	{
		// result += (ch-'0') * multiplier;
		int32_t* L_9 = ___result3;
		int32_t* L_10 = ___result3;
		int32_t L_11 = *((int32_t*)L_10);
		Il2CppChar L_12 = V_2;
		int32_t L_13 = V_0;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)48))), (int32_t)L_13))));
		// multiplier = multiplier * 10;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)10)));
		// }
		goto IL_0043;
	}

IL_0034:
	{
		// else if (ch == '-')
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0041;
		}
	}
	{
		// result = result * -1;
		int32_t* L_16 = ___result3;
		int32_t* L_17 = ___result3;
		int32_t L_18 = *((int32_t*)L_17);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)(-1)));
		// }
		goto IL_0043;
	}

IL_0041:
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// for (int i = end-1; i >= start; i--)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = end-1; i >= start; i--)
		int32_t L_20 = V_1;
		int32_t L_21 = ___start1;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::set_DataSourceType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_set_DataSourceType_mC3182309178FFBC5D09ACA2A5823CB80E7849352 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DataSourceType { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDataSourceTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::SetDataKeyPathMapper(Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_SetDataKeyPathMapper_m63F508F0D930EE821FD636F025DA545291DB1FEA (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, RuntimeObject* ___keyPathMapper0, const RuntimeMethod* method)
{
	{
		// _dataKeyPathMapper = keyPathMapper;
		RuntimeObject* L_0 = ___keyPathMapper0;
		__this->set__dataKeyPathMapper_0(L_0);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceBase::ResolveKeyPath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceBase_ResolveKeyPath_mEA160D133C8602ABAD36FF3946C41504277C62CE (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPathPrefix0, String_t* ___localKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataKeyPathMapper_t3968DE47644C642C5C732C14CB9BD3DE03EAA286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resolvedKeyPathPrefix == null)
		String_t* L_0 = ___resolvedKeyPathPrefix0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// resolvedKeyPathPrefix = "";
		___resolvedKeyPathPrefix0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		// if (_dataKeyPathMapper != null)
		RuntimeObject* L_1 = __this->get__dataKeyPathMapper_0();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// localKeyPath = _dataKeyPathMapper.GetDataKeyPathFromViewKeyPath(localKeyPath);
		RuntimeObject* L_2 = __this->get__dataKeyPathMapper_0();
		String_t* L_3 = ___localKeyPath1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* System.String Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper::GetDataKeyPathFromViewKeyPath(System.String) */, IDataKeyPathMapper_t3968DE47644C642C5C732C14CB9BD3DE03EAA286_il2cpp_TypeInfo_var, L_2, L_3);
		___localKeyPath1 = L_4;
	}

IL_0020:
	{
		// if (IsCollectionAtKeyPath(resolvedKeyPathPrefix))
		String_t* L_5 = ___resolvedKeyPathPrefix0;
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsCollectionAtKeyPath(System.String) */, __this, L_5);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// return resolvedKeyPathPrefix + '[' + localKeyPath + ']';
		String_t* L_7 = ___resolvedKeyPathPrefix0;
		String_t* L_8 = ___localKeyPath1;
		String_t* L_9;
		L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_7, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_8, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return L_9;
	}

IL_003b:
	{
		// else if (resolvedKeyPathPrefix != "")
		String_t* L_10 = ___resolvedKeyPathPrefix0;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// return resolvedKeyPathPrefix + '.' + localKeyPath;
		String_t* L_12 = ___resolvedKeyPathPrefix0;
		String_t* L_13 = ___localKeyPath1;
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_12, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0055:
	{
		// return localKeyPath;
		String_t* L_15 = ___localKeyPath1;
		return L_15;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceBase_GetValue_m60A12B9C028C93B852DD1A03C2F1857C76EE03B8 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return GetValueInternal(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, String_t* >::Invoke(30 /* System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetValueInternal(System.String) */, __this, L_1);
		return L_2;
	}

IL_0010:
	{
		// return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::SetValue(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_SetValue_m5FD99D23B70C032B4D250BD77F2B07D2B2FE6DD0 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___newValue1, bool ___isAtomicChange2, const RuntimeMethod* method)
{
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// SetValueInternal(resolvedKeyPath, newValue);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject * L_2 = ___newValue1;
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(31 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::SetValueInternal(System.String,System.Object) */, __this, L_1, L_2);
		// NotifyDataChanged(resolvedKeyPath, newValue, DataChangeType.DatumModified, isAtomicChange);
		String_t* L_3 = ___resolvedKeyPath0;
		RuntimeObject * L_4 = ___newValue1;
		bool L_5 = ___isAtomicChange2;
		DataSourceBase_NotifyDataChanged_mA156739C2C0688827699B8287BEA6ADB03C7E07E(__this, L_3, L_4, 1, L_5, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_DataChangeSetBegin_mF327E1F9EA854B581B793D3A3116A54F0373E9A1 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_0 = __this->get__dataConsumerKeyPathCounts_2();
		NullCheck(L_0);
		KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * L_1;
		L_1 = Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8(L_0, /*hidden argument*/Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  L_2;
		L_2 = KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D(L_1, /*hidden argument*/KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0013:
		{
			// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
			RuntimeObject* L_3;
			L_3 = Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_inline((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_RuntimeMethod_var);
			// dataConsumer.DataChangeSetBegin(this);
			NullCheck(L_3);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataConsumer::DataChangeSetBegin(Microsoft.MixedReality.Toolkit.Data.IDataSource) */, IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var, L_3, __this);
		}

IL_0020:
		{
			// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
			bool L_4;
			L_4 = Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0013;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_DataChangeSetEnd_m7C163A5580665B4C7E7B6001E7F7AED32913A144 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_0 = __this->get__dataConsumerKeyPathCounts_2();
		NullCheck(L_0);
		KeyCollection_tFDB5D5E67933C7885AEB7E41A3D986D783F8B041 * L_1;
		L_1 = Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8(L_0, /*hidden argument*/Dictionary_2_get_Keys_m74B1623ED3096ECEA526B26673B66DC8B007A8B8_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF  L_2;
		L_2 = KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D(L_1, /*hidden argument*/KeyCollection_GetEnumerator_m952C3380E3984E603DB35C541B7FB7270B11215D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0013:
		{
			// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
			RuntimeObject* L_3;
			L_3 = Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_inline((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA36B018E83090E6A8E0BDB2AD68A5EF852391B55_RuntimeMethod_var);
			// dataConsumer.DataChangeSetEnd(this);
			NullCheck(L_3);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataConsumer::DataChangeSetEnd(Microsoft.MixedReality.Toolkit.Data.IDataSource) */, IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var, L_3, __this);
		}

IL_0020:
		{
			// foreach (IDataConsumer dataConsumer in _dataConsumerKeyPathCounts.Keys)
			bool L_4;
			L_4 = Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC68DF671EE9607AFD55CC98BC145B524032F47F6_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0013;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72((Enumerator_t31A795C6ECCD8C51E51ED3D0AAEA295380C56CBF *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBC53FF435A47C277981B56D9C4694CDE6E000E72_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetBeginForKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_DataChangeSetBeginForKeyPath_mC44B057F6D335B6722136AADBB908E0246015F28 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___keyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<IDataConsumer> dataConsumers = _keyPathToDataConsumers[keyPath];
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = __this->get__keyPathToDataConsumers_1();
		String_t* L_1 = ___keyPath0;
		NullCheck(L_0);
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_2;
		L_2 = Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		// foreach (IDataConsumer dataConsumer in dataConsumers)
		NullCheck(L_2);
		Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  L_3;
		L_3 = List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B(L_2, /*hidden argument*/List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0014:
		{
			// foreach (IDataConsumer dataConsumer in dataConsumers)
			RuntimeObject* L_4;
			L_4 = Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_inline((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
			// dataConsumer.DataChangeSetBegin(this);
			NullCheck(L_4);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataConsumer::DataChangeSetBegin(Microsoft.MixedReality.Toolkit.Data.IDataSource) */, IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var, L_4, __this);
		}

IL_0021:
		{
			// foreach (IDataConsumer dataConsumer in dataConsumers)
			bool L_5;
			L_5 = Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0014;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::AddDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_AddDataConsumerListener_m9CD46BE844768CE91B064C98F6B5195DA14B8767 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6040E4AD99831635B1DB5A72054428A0F8A39237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m34035912D4B3E9ED6FC7E8722ADB9B7C58E179D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAB725922D6B45C9B9123B29D94BD7BE4C02078DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCB08DEF57BE33F78F692458C3C71FE2AB43823C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8351FA5A819C1E10491C70EEE7366E252B0D89F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4733663767DCFFF4CA8743625518E64B27EEE782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (!_keyPathToDataConsumers.ContainsKey(resolvedKeyPath))
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = __this->get__keyPathToDataConsumers_1();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _keyPathToDataConsumers[resolvedKeyPath] = new List<IDataConsumer>();
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_3 = __this->get__keyPathToDataConsumers_1();
		String_t* L_4 = ___resolvedKeyPath0;
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_5 = (List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 *)il2cpp_codegen_object_new(List_1_t4733663767DCFFF4CA8743625518E64B27EEE782_il2cpp_TypeInfo_var);
		List_1__ctor_mC8351FA5A819C1E10491C70EEE7366E252B0D89F(L_5, /*hidden argument*/List_1__ctor_mC8351FA5A819C1E10491C70EEE7366E252B0D89F_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_m34035912D4B3E9ED6FC7E8722ADB9B7C58E179D2(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m34035912D4B3E9ED6FC7E8722ADB9B7C58E179D2_RuntimeMethod_var);
	}

IL_001f:
	{
		// if (_keyPathToDataConsumers[resolvedKeyPath].Contains(dataConsumer))
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_6 = __this->get__keyPathToDataConsumers_1();
		String_t* L_7 = ___resolvedKeyPath0;
		NullCheck(L_6);
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_8;
		L_8 = Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		RuntimeObject* L_9 = ___dataConsumer1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_mCB08DEF57BE33F78F692458C3C71FE2AB43823C9(L_8, L_9, /*hidden argument*/List_1_Contains_mCB08DEF57BE33F78F692458C3C71FE2AB43823C9_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		// _keyPathToDataConsumers[resolvedKeyPath].Add(dataConsumer);
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_11 = __this->get__keyPathToDataConsumers_1();
		String_t* L_12 = ___resolvedKeyPath0;
		NullCheck(L_11);
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_13;
		L_13 = Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		RuntimeObject* L_14 = ___dataConsumer1;
		NullCheck(L_13);
		List_1_Add_mAB725922D6B45C9B9123B29D94BD7BE4C02078DB(L_13, L_14, /*hidden argument*/List_1_Add_mAB725922D6B45C9B9123B29D94BD7BE4C02078DB_RuntimeMethod_var);
		// if (_dataConsumerKeyPathCounts.ContainsKey(dataConsumer))
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_15 = __this->get__dataConsumerKeyPathCounts_2();
		RuntimeObject* L_16 = ___dataConsumer1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m6040E4AD99831635B1DB5A72054428A0F8A39237(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m6040E4AD99831635B1DB5A72054428A0F8A39237_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// _dataConsumerKeyPathCounts[dataConsumer]++;
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_18 = __this->get__dataConsumerKeyPathCounts_2();
		RuntimeObject* L_19 = ___dataConsumer1;
		V_1 = L_19;
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_20 = L_18;
		RuntimeObject* L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064_RuntimeMethod_var);
		V_2 = L_22;
		RuntimeObject* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_20);
		Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F(L_20, L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var);
		// }
		goto IL_007b;
	}

IL_006e:
	{
		// _dataConsumerKeyPathCounts[dataConsumer] = 1;       // 1st keypath
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_25 = __this->get__dataConsumerKeyPathCounts_2();
		RuntimeObject* L_26 = ___dataConsumer1;
		NullCheck(L_25);
		Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F(L_25, L_26, 1, /*hidden argument*/Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var);
	}

IL_007b:
	{
		// object value = GetValue(resolvedKeyPath);
		String_t* L_27 = ___resolvedKeyPath0;
		RuntimeObject * L_28;
		L_28 = DataSourceBase_GetValue_m60A12B9C028C93B852DD1A03C2F1857C76EE03B8(__this, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// if (value != null)
		RuntimeObject * L_29 = V_0;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// if (IsCollectionAtKeyPath(resolvedKeyPath))
		String_t* L_30 = ___resolvedKeyPath0;
		bool L_31;
		L_31 = VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsCollectionAtKeyPath(System.String) */, __this, L_30);
		if (!L_31)
		{
			goto IL_0097;
		}
	}
	{
		// OnCollectionListenerAdded(resolvedKeyPath, value);
		String_t* L_32 = ___resolvedKeyPath0;
		RuntimeObject * L_33 = V_0;
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(22 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::OnCollectionListenerAdded(System.String,System.Object) */, __this, L_32, L_33);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::OnCollectionListenerAdded(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_OnCollectionListenerAdded_mF9EBF75F0E784B27190E62D90A413D54A04A2373 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___collection1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::OnCollectionListenerRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_OnCollectionListenerRemoved_m5C490CABBEC98D0C17F1ECE8BCA72D892F95CEAF (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::RemoveDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_RemoveDataConsumerListener_m00EBED186F07902ADF4108E589A5D51479C3BBF2 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m72BBBD79FC33B0A991D3A6EA850DCA78E152DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m46666270378D920439CC5AC0151405B455ADB4FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (_keyPathToDataConsumers.ContainsKey(resolvedKeyPath))
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = __this->get__keyPathToDataConsumers_1();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// if (IsCollectionAtKeyPath(resolvedKeyPath))
		String_t* L_3 = ___resolvedKeyPath0;
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsCollectionAtKeyPath(System.String) */, __this, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// OnCollectionListenerRemoved(resolvedKeyPath);
		String_t* L_5 = ___resolvedKeyPath0;
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::OnCollectionListenerRemoved(System.String) */, __this, L_5);
	}

IL_001e:
	{
		// _keyPathToDataConsumers[resolvedKeyPath].Remove(dataConsumer);
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_6 = __this->get__keyPathToDataConsumers_1();
		String_t* L_7 = ___resolvedKeyPath0;
		NullCheck(L_6);
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_8;
		L_8 = Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		RuntimeObject* L_9 = ___dataConsumer1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m46666270378D920439CC5AC0151405B455ADB4FD(L_8, L_9, /*hidden argument*/List_1_Remove_m46666270378D920439CC5AC0151405B455ADB4FD_RuntimeMethod_var);
		// if ( --_dataConsumerKeyPathCounts[dataConsumer] == 0)
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_11 = __this->get__dataConsumerKeyPathCounts_2();
		RuntimeObject* L_12 = ___dataConsumer1;
		V_0 = L_12;
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_13 = L_11;
		RuntimeObject* L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m8C2C0A459FD4A293966DC36D635425870E74C064_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_13);
		Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F(L_13, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_m5C39BFB0412DD098C582E58E5225CC86459E8B0F_RuntimeMethod_var);
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_005a;
		}
	}
	{
		// _dataConsumerKeyPathCounts.Remove(dataConsumer);
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_19 = __this->get__dataConsumerKeyPathCounts_2();
		RuntimeObject* L_20 = ___dataConsumer1;
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_Remove_m72BBBD79FC33B0A991D3A6EA850DCA78E152DE15(L_19, L_20, /*hidden argument*/Dictionary_2_Remove_m72BBBD79FC33B0A991D3A6EA850DCA78E152DE15_RuntimeMethod_var);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsCollectionAtKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceBase_IsCollectionAtKeyPath_mD18416AC2F80E1F75CE6B1EEB406B6355C0FC320 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetCollectionCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSourceBase_GetCollectionCount_mE10EF43F4A8B252986F409851F9111272FEDFC90 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	{
		// return 0;
		return 0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetNthCollectionKeyPathAt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceBase_GetNthCollectionKeyPathAt_mE651497C1BC1112C23E704A7FE771ED632D8A76E (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, int32_t ___n1, const RuntimeMethod* method)
{
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceBase_GetCollectionKeyPathRange_m243554BAB261F61BAC31123A4F8DFDB59A62F552 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::NotifyDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_NotifyDataChanged_mA156739C2C0688827699B8287BEA6ADB03C7E07E (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___value1, int32_t ___changeType2, bool ___isAtomicChange3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_keyPathToDataConsumers.ContainsKey(resolvedKeyPath))
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = __this->get__keyPathToDataConsumers_1();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mDDDBFBFFACAA22CF12952B82477C3D1E8AF8C9E8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		// if (isAtomicChange)
		bool L_3 = ___isAtomicChange3;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// DataChangeSetBeginForKeyPath(resolvedKeyPath);
		String_t* L_4 = ___resolvedKeyPath0;
		DataSourceBase_DataChangeSetBeginForKeyPath_mC44B057F6D335B6722136AADBB908E0246015F28(__this, L_4, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// List<IDataConsumer> dataConsumers = _keyPathToDataConsumers[resolvedKeyPath];
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_5 = __this->get__keyPathToDataConsumers_1();
		String_t* L_6 = ___resolvedKeyPath0;
		NullCheck(L_5);
		List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_7;
		L_7 = Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m857D1BA3E4A4CAA0A96F277C24AA1A62CBE0C384_RuntimeMethod_var);
		// foreach (IDataConsumer dataConsumer in dataConsumers)
		NullCheck(L_7);
		Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  L_8;
		L_8 = List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B(L_7, /*hidden argument*/List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_002d:
		{
			// foreach (IDataConsumer dataConsumer in dataConsumers)
			RuntimeObject* L_9;
			L_9 = Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_inline((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
			// dataConsumer.NotifyDataChanged(this, resolvedKeyPath, value, changeType);
			String_t* L_10 = ___resolvedKeyPath0;
			RuntimeObject * L_11 = ___value1;
			int32_t L_12 = ___changeType2;
			NullCheck(L_9);
			InterfaceActionInvoker4< RuntimeObject*, String_t*, RuntimeObject *, int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataConsumer::NotifyDataChanged(Microsoft.MixedReality.Toolkit.Data.IDataSource,System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType) */, IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var, L_9, __this, L_10, L_11, L_12);
		}

IL_003d:
		{
			// foreach (IDataConsumer dataConsumer in dataConsumers)
			bool L_13;
			L_13 = Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// if (isAtomicChange)
		bool L_14 = ___isAtomicChange3;
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// DataChangeSetBeginForKeyPath(resolvedKeyPath);
		String_t* L_15 = ___resolvedKeyPath0;
		DataSourceBase_DataChangeSetBeginForKeyPath_mC44B057F6D335B6722136AADBB908E0246015F28(__this, L_15, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::NotifyAllChanged(Microsoft.MixedReality.Toolkit.Data.DataChangeType,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_NotifyAllChanged_mFCE4FC187460DA751FCED76650A946989B8CAE34 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, int32_t ___dataChangeType0, RuntimeObject* ___whichDataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5B7C1164FBB00113FED46688A408F1A4274A625B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m106E3692FECC2C1873A3B5FAA45A404CA0B057F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mADFE1A257BCFBE77818C003DE765A71BE48F0E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53730C5E9F2F74239F0CDFE281C1BB869A8EAD8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m57900FF5047D917526191056CAF51DD3449BA427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m846DC8AE4E965AF6C263F9A37141D5DDDE889660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m92D4A2548EC3F2C9F5BAAEE374F1D72031EA3304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m02C584C9BD795720DFB665411DD73069DAE72F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEAB293A13405BAB014D834767F80188CBBAB77ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B8F516CBD6AD11B014984B683CC40A355E73875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m296FCB937050D16222D6C66556D5B9AF0272BFE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * V_0 = NULL;
	Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_00d5;
		}
	}
	{
		// DataChangeSetBegin();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetBegin() */, __this);
		// List<KeyValuePair<string, List<IDataConsumer>>> dataConsumersKeyValuesCopy = new List<KeyValuePair<string, List<IDataConsumer>>>();
		List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * L_1 = (List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF *)il2cpp_codegen_object_new(List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF_il2cpp_TypeInfo_var);
		List_1__ctor_m296FCB937050D16222D6C66556D5B9AF0272BFE6(L_1, /*hidden argument*/List_1__ctor_m296FCB937050D16222D6C66556D5B9AF0272BFE6_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in _keyPathToDataConsumers)
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_2 = __this->get__keyPathToDataConsumers_1();
		NullCheck(L_2);
		Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B  L_3;
		L_3 = Dictionary_2_GetEnumerator_m5B7C1164FBB00113FED46688A408F1A4274A625B(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m5B7C1164FBB00113FED46688A408F1A4274A625B_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0025:
		{
			// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in _keyPathToDataConsumers)
			KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  L_4;
			L_4 = Enumerator_get_Current_m92D4A2548EC3F2C9F5BAAEE374F1D72031EA3304_inline((Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m92D4A2548EC3F2C9F5BAAEE374F1D72031EA3304_RuntimeMethod_var);
			V_2 = L_4;
			// dataConsumersKeyValuesCopy.Add(dataConsumersKeyValue);
			List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * L_5 = V_0;
			KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  L_6 = V_2;
			NullCheck(L_5);
			List_1_Add_mEAB293A13405BAB014D834767F80188CBBAB77ED(L_5, L_6, /*hidden argument*/List_1_Add_mEAB293A13405BAB014D834767F80188CBBAB77ED_RuntimeMethod_var);
		}

IL_0034:
		{
			// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in _keyPathToDataConsumers)
			bool L_7;
			L_7 = Enumerator_MoveNext_m57900FF5047D917526191056CAF51DD3449BA427((Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m57900FF5047D917526191056CAF51DD3449BA427_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mADFE1A257BCFBE77818C003DE765A71BE48F0E41((Enumerator_tFC788306BE5850E0617540A19700B15451FB0D3B *)(&V_1), /*hidden argument*/Enumerator_Dispose_mADFE1A257BCFBE77818C003DE765A71BE48F0E41_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in dataConsumersKeyValuesCopy)
		List_1_t0B78BA98B7F72C5B8B4486D2B308E8EC1667F6EF * L_8 = V_0;
		NullCheck(L_8);
		Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540  L_9;
		L_9 = List_1_GetEnumerator_m3B8F516CBD6AD11B014984B683CC40A355E73875(L_8, /*hidden argument*/List_1_GetEnumerator_m3B8F516CBD6AD11B014984B683CC40A355E73875_RuntimeMethod_var);
		V_3 = L_9;
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0056:
		{
			// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in dataConsumersKeyValuesCopy)
			KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602  L_10;
			L_10 = Enumerator_get_Current_m846DC8AE4E965AF6C263F9A37141D5DDDE889660_inline((Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m846DC8AE4E965AF6C263F9A37141D5DDDE889660_RuntimeMethod_var);
			V_4 = L_10;
			// List<IDataConsumer> dataConsumers = dataConsumersKeyValue.Value;
			List_1_t4733663767DCFFF4CA8743625518E64B27EEE782 * L_11;
			L_11 = KeyValuePair_2_get_Value_m02C584C9BD795720DFB665411DD73069DAE72F79_inline((KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m02C584C9BD795720DFB665411DD73069DAE72F79_RuntimeMethod_var);
			// foreach (IDataConsumer dataConsumer in dataConsumers)
			NullCheck(L_11);
			Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F  L_12;
			L_12 = List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B(L_11, /*hidden argument*/List_1_GetEnumerator_mBA50E730C17B91A1EE4F19F1F411D57E20A04F8B_RuntimeMethod_var);
			V_5 = L_12;
		}

IL_006d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009d;
			}

IL_006f:
			{
				// foreach (IDataConsumer dataConsumer in dataConsumers)
				RuntimeObject* L_13;
				L_13 = Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_inline((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_5), /*hidden argument*/Enumerator_get_Current_m9276DF7C1537330FB758C9F48511FECD7E101BD2_RuntimeMethod_var);
				V_6 = L_13;
				// if (whichDataConsumer == null || whichDataConsumer == dataConsumer)
				RuntimeObject* L_14 = ___whichDataConsumer1;
				if (!L_14)
				{
					goto IL_0080;
				}
			}

IL_007b:
			{
				RuntimeObject* L_15 = ___whichDataConsumer1;
				RuntimeObject* L_16 = V_6;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(RuntimeObject*)L_16))))
				{
					goto IL_009d;
				}
			}

IL_0080:
			{
				// dataConsumer.NotifyDataChanged(this, dataConsumersKeyValue.Key, GetValue(dataConsumersKeyValue.Key), dataChangeType);
				RuntimeObject* L_17 = V_6;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_inline((KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_RuntimeMethod_var);
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_inline((KeyValuePair_2_t94A4EFEA3ABB59745318CE099BB5C0957BB94602 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m7D9F03804C80CF3B39FCE4A4C86D3FCEBD82E8EC_RuntimeMethod_var);
				RuntimeObject * L_20;
				L_20 = DataSourceBase_GetValue_m60A12B9C028C93B852DD1A03C2F1857C76EE03B8(__this, L_19, /*hidden argument*/NULL);
				int32_t L_21 = ___dataChangeType0;
				NullCheck(L_17);
				InterfaceActionInvoker4< RuntimeObject*, String_t*, RuntimeObject *, int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataConsumer::NotifyDataChanged(Microsoft.MixedReality.Toolkit.Data.IDataSource,System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType) */, IDataConsumer_tE37EDD0C0245B1FEF040BF15BF71350F884B0C8A_il2cpp_TypeInfo_var, L_17, __this, L_18, L_20, L_21);
			}

IL_009d:
			{
				// foreach (IDataConsumer dataConsumer in dataConsumers)
				bool L_22;
				L_22 = Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mB35749651977EDB156F9340E71E6C1A1A33F2B2D_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_006f;
				}
			}

IL_00a6:
			{
				IL2CPP_LEAVE(0xB6, FINALLY_00a8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a8;
		}

FINALLY_00a8:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A((Enumerator_t063EC074B0105BF9EE7E3FBF2A661F94C4D1167F *)(&V_5), /*hidden argument*/Enumerator_Dispose_m106B58C1D2D0A9BD9F1BAC5C5D58C149F1A2D34A_RuntimeMethod_var);
			IL2CPP_END_FINALLY(168)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(168)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB6, IL_00b6)
		}

IL_00b6:
		{
			// foreach (KeyValuePair<string, List<IDataConsumer>> dataConsumersKeyValue in dataConsumersKeyValuesCopy)
			bool L_23;
			L_23 = Enumerator_MoveNext_m53730C5E9F2F74239F0CDFE281C1BB869A8EAD8D((Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m53730C5E9F2F74239F0CDFE281C1BB869A8EAD8D_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0056;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m106E3692FECC2C1873A3B5FAA45A404CA0B057F8((Enumerator_tCA701D8B514E66A85489DD4FAD4A5D6374BE7540 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m106E3692FECC2C1873A3B5FAA45A404CA0B057F8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
	}

IL_00cf:
	{
		// DataChangeSetEnd();
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetEnd() */, __this);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceBase_IsDataAvailable_m72E92BD52D65111B53A7970F706F0613CE5E5D2A (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceBase_GetValueInternal_mADA015802B294DF3DF0B8727096F2190C37DC9E8 (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	{
		// return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::SetValueInternal(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase_SetValueInternal_m9F9E6F84A59C899629EE0BCA55175490266F9C0B (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD (DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7DD3D384839DB0445D2927CB4459AC1B81EB7E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m892EF2706F0344882DA2CB5A4D81025E47E6B8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07547890A9E3403D54120AB4BA0857A5CFEB4108);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, List<IDataConsumer>> _keyPathToDataConsumers = new Dictionary<string, List<IDataConsumer>>();
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = (Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C *)il2cpp_codegen_object_new(Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7DD3D384839DB0445D2927CB4459AC1B81EB7E44(L_0, /*hidden argument*/Dictionary_2__ctor_m7DD3D384839DB0445D2927CB4459AC1B81EB7E44_RuntimeMethod_var);
		__this->set__keyPathToDataConsumers_1(L_0);
		// protected Dictionary<IDataConsumer, int> _dataConsumerKeyPathCounts = new Dictionary<IDataConsumer, int>();
		Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D * L_1 = (Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D *)il2cpp_codegen_object_new(Dictionary_2_t56CF810DA91BAED92DF1ACDC9DA646F13EFEF21D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m892EF2706F0344882DA2CB5A4D81025E47E6B8E9(L_1, /*hidden argument*/Dictionary_2__ctor_m892EF2706F0344882DA2CB5A4D81025E47E6B8E9_RuntimeMethod_var);
		__this->set__dataConsumerKeyPathCounts_2(L_1);
		// protected Regex _findArrayIndexRegex = new Regex(@"\[(\d+)\]");
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_2 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_2, _stringLiteral07547890A9E3403D54120AB4BA0857A5CFEB4108, /*hidden argument*/NULL);
		__this->set__findArrayIndexRegex_3(L_2);
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
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceDictionary_GetValueInternal_mEFFF306C933A60BB812ACDAC775AA78A85F49249 (DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dataDictionary.ContainsKey(resolvedKeyPath))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get__dataDictionary_6();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _dataDictionary[resolvedKeyPath];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = __this->get__dataDictionary_6();
		String_t* L_4 = ___resolvedKeyPath0;
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary::SetValueInternal(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceDictionary_SetValueInternal_m6FD7753F3EFA0C2E059F0657ADD1B579F0A64856 (DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dataDictionary[resolvedKeyPath] = newValue;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get__dataDictionary_6();
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject * L_2 = ___newValue1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceDictionary__ctor_mC42EC0CCA42590C08DCFF09AB6B38CE223D9E1BD (DataSourceDictionary_t1D9B0905A8DCC9C16D80AAB55A6242443070F765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, object> _dataDictionary = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		__this->set__dataDictionary_6(L_0);
		DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD(__this, /*hidden argument*/NULL);
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
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::get_DataSourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// get => dataSourceType;
		String_t* L_0 = __this->get_dataSourceType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::set_DataSourceType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_set_DataSourceType_m47610AB0B2B05A1232E7782C7EEDDB527FE37284 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => dataSourceType = value;
		String_t* L_0 = ___value0;
		__this->set_dataSourceType_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataController Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::get_DataController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_get_DataController_mD64036300B0F19DE2940CBE2EA2FACA7572FC2DE (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// public IDataController DataController { get => _dataController; set => _dataController = value; }
		RuntimeObject* L_0 = __this->get__dataController_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::set_DataController(Microsoft.MixedReality.Toolkit.Data.IDataController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_set_DataController_m6F8B7E75BD716FCFC1393B3008A950C16E135244 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IDataController DataController { get => _dataController; set => _dataController = value; }
		RuntimeObject* L_0 = ___value0;
		__this->set__dataController_8(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::get_DataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// if (_dataSource == null)
		RuntimeObject* L_0 = __this->get__dataSource_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		DataSourceGOBase_Initialize_m2BDEE827C3B7101DC8CD2BC0D57692DD6C0B52AF(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// return _dataSource;
		RuntimeObject* L_1 = __this->get__dataSource_7();
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_Awake_m7A740F79F64FD6BFA5827686FE5CD85CFAC9E697 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// Initialize();
		DataSourceGOBase_Initialize_m2BDEE827C3B7101DC8CD2BC0D57692DD6C0B52AF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::AllocateDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_AllocateDataSource_mFE78762305A63D77D248933EA1F0092E67FCAB0B (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetDataSource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_GetDataSource_mF70E50742C6F44B73548CAE22EC211D5424FE7B7 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___dataSourceType0, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// System.String[] Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetDataSourceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* DataSourceGOBase_GetDataSourceTypes_m85A9573B6174111374E173CA15E284EE425FB7D4 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dataSourceTypes == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get__dataSourceTypes_6();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// _dataSourceTypes = new string[] { DataSourceType };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3;
		L_3 = DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		__this->set__dataSourceTypes_6(L_2);
	}

IL_001d:
	{
		// return _dataSourceTypes;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get__dataSourceTypes_6();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::InitializeDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_InitializeDataSource_m2E5E09332F343E112407D19FD78C53A43A7CA8CF (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::ResolveKeyPath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceGOBase_ResolveKeyPath_mE359347FBB95DE26CD7BAFC927141180D43A9BED (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPathPrefix0, String_t* ___localKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return DataSource.ResolveKeyPath(resolvedKeyPathPrefix, localKeyPath);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPathPrefix0;
		String_t* L_3 = ___localKeyPath1;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Microsoft.MixedReality.Toolkit.Data.IDataSource::ResolveKeyPath(System.String,System.String) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::SetDataKeyPathMapper(Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_SetDataKeyPathMapper_mC3A186682702B2EC199AB7679992421DE19DC2B5 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, RuntimeObject* ___keyPathMapper0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// DataSource.SetDataKeyPathMapper(keyPathMapper);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___keyPathMapper0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::SetDataKeyPathMapper(Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceGOBase_GetValue_m449149D39CA30FFB9362215F009701CA74A5E9B8 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return DataSource.GetValue(resolvedKeyPath);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(3 /* System.Object Microsoft.MixedReality.Toolkit.Data.IDataSource::GetValue(System.String) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		// return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::SetValue(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_SetValue_m68E5E6AFD29D79EA091936DF3A6D8C798F057D1A (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___newValue1, bool ___isAtomicChange2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// DataSource.SetValue(resolvedKeyPath, newValue, isAtomicChange);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		RuntimeObject * L_3 = ___newValue1;
		bool L_4 = ___isAtomicChange2;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::SetValue(System.String,System.Object,System.Boolean) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::AddDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_AddDataConsumerListener_m1C91D6632A5B3A2590CA3E44833879DB4137BDAA (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// DataSource.AddDataConsumerListener(resolvedKeyPath, dataConsumer);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		RuntimeObject* L_3 = ___dataConsumer1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::AddDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::RemoveDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_RemoveDataConsumerListener_mBFE67E6F2F5C9620D16F7770D8B411619A12C073 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// DataSource.RemoveDataConsumerListener(resolvedKeyPath, dataConsumer);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		RuntimeObject* L_3 = ___dataConsumer1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::RemoveDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::DataChangeSetBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_DataChangeSetBegin_mEEEFA63766B4F5D08F609191777258617AA79761 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DataSource.DataChangeSetBegin();
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::DataChangeSetBegin() */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::DataChangeSetEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_DataChangeSetEnd_m20A477BB245882200B498D0584CBC0F8F1C2275C (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DataSource.DataChangeSetEnd();
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::DataChangeSetEnd() */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::IsCollectionAtKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceGOBase_IsCollectionAtKeyPath_m817918FBC1DBB76E34312A4B24797BF44F9E8629 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return DataSource.IsCollectionAtKeyPath(resolvedKeyPath);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataSource::IsCollectionAtKeyPath(System.String) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetCollectionCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSourceGOBase_GetCollectionCount_mFE7CDF595F0B30F3B2FF277C3253F9D84F719F38 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return DataSource.GetCollectionCount(resolvedKeyPath);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(8 /* System.Int32 Microsoft.MixedReality.Toolkit.Data.IDataSource::GetCollectionCount(System.String) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		// return 0;
		return 0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetNthCollectionKeyPathAt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceGOBase_GetNthCollectionKeyPathAt_m1B157BBE730BA6C3241E5FB990AC766ACE35037C (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return DataSource.GetNthCollectionKeyPathAt(resolvedKeyPath, n);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		int32_t L_3 = ___n1;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(9 /* System.String Microsoft.MixedReality.Toolkit.Data.IDataSource::GetNthCollectionKeyPathAt(System.String,System.Int32) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOBase_GetCollectionKeyPathRange_m8503971592DF6FA45914618B35D24C3259EABE94 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// return DataSource.GetCollectionKeyPathRange(resolvedKeyPath, rangeStart, rangeCount);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		int32_t L_3 = ___rangeStart1;
		int32_t L_4 = ___rangeCount2;
		NullCheck(L_1);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, int32_t, int32_t >::Invoke(10 /* System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.IDataSource::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::NotifyDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_NotifyDataChanged_m76C570217C0442D553F47A8ED927EF08CAF2051F (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___value1, int32_t ___dataChangeType2, bool ___isAtomicChange3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DataSource.NotifyDataChanged(resolvedKeyPath, value, dataChangeType, isAtomicChange);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___resolvedKeyPath0;
		RuntimeObject * L_3 = ___value1;
		int32_t L_4 = ___dataChangeType2;
		bool L_5 = ___isAtomicChange3;
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, RuntimeObject *, int32_t, bool >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::NotifyDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::NotifyAllChanged(Microsoft.MixedReality.Toolkit.Data.DataChangeType,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_NotifyAllChanged_m24F4DFC3E1854A877C5766CF2F9C31853EA2AF43 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, int32_t ___dataChangeType0, RuntimeObject* ___whichDataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// DataSource.NotifyAllChanged(dataChangeType, whichDataConsumer);
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___dataChangeType0;
		RuntimeObject* L_3 = ___whichDataConsumer1;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::NotifyAllChanged(Microsoft.MixedReality.Toolkit.Data.DataChangeType,Microsoft.MixedReality.Toolkit.Data.IDataConsumer) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceGOBase_IsDataAvailable_mFAF9A60598DE351D5AA52695D93184CBEDA4A3B0 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSource != null)
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return DataSource.IsDataAvailable();
		RuntimeObject* L_1;
		L_1 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataSource::IsDataAvailable() */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase_Initialize_m2BDEE827C3B7101DC8CD2BC0D57692DD6C0B52AF (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dataSource == null)
		RuntimeObject* L_0 = __this->get__dataSource_7();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		// _dataSource = AllocateDataSource();
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(25 /* Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::AllocateDataSource() */, __this);
		__this->set__dataSource_7(L_1);
		// if (keyPathMapper != null && _dataSource != null)
		DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * L_2 = __this->get_keyPathMapper_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__dataSource_7();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// _dataSource.SetDataKeyPathMapper(keyPathMapper);
		RuntimeObject* L_5 = __this->get__dataSource_7();
		DataKeyPathMapperGODictionary_t9D94C8F5EB7338F5B1CEEA7D19F29B58D3E9128B * L_6 = __this->get_keyPathMapper_5();
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::SetDataKeyPathMapper(Microsoft.MixedReality.Toolkit.Data.IDataKeyPathMapper) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_003b:
	{
		// _dataSource.DataSourceType = dataSourceType;
		RuntimeObject* L_7 = __this->get__dataSource_7();
		String_t* L_8 = __this->get_dataSourceType_4();
		NullCheck(L_7);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataSource::set_DataSourceType(System.String) */, IDataSource_tEF84FDDF8E277A5B96427ED002A36EB53E3737E2_il2cpp_TypeInfo_var, L_7, L_8);
		// InitializeDataSource();
		VirtActionInvoker0::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::InitializeDataSource() */, __this);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOBase__ctor_mA3B9D044F7E7A3827C83867F2706C1F92FFA0527 (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Data.DataSourceJson Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::get_DataSourceJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * DataSourceGOJson_get_DataSourceJson_m8BBAC95B7DADD8156B675970C18CEF080DEC75F8 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DataSourceJson DataSourceJson { get { return DataSource as DataSourceJson; } }
		RuntimeObject* L_0;
		L_0 = DataSourceGOBase_get_DataSource_mF77646452B4575388C58CC5ED5AEB5F3A4A0DB5E(__this, /*hidden argument*/NULL);
		return ((DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C *)IsInstClass((RuntimeObject*)L_0, DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::SetJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOJson_SetJson_mEA471EAB47DF5BEB2E4813366D6F6487E2E1CD33 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, String_t* ___jsonText0, const RuntimeMethod* method)
{
	{
		// DataSourceJson.UpdateFromJson(jsonText);
		DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * L_0;
		L_0 = DataSourceGOJson_get_DataSourceJson_m8BBAC95B7DADD8156B675970C18CEF080DEC75F8(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___jsonText0;
		NullCheck(L_0);
		DataSourceJson_UpdateFromJson_m76EA71F7C19264504DE2FBCDD4927E4EFB1ACCF3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::AllocateDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOJson_AllocateDataSource_m4909814A115C93702D36CB7FAB8A033DBBB6BD17 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DataSourceJson();
		DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * L_0 = (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C *)il2cpp_codegen_object_new(DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C_il2cpp_TypeInfo_var);
		DataSourceJson__ctor_m7D1887677F82A2C1BBC49801EA9BE871BDE75F7E(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::StartJsonRequest(System.String,Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate,Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceGOJson_StartJsonRequest_mB8DD100540EDF990918C69C6487E281A47FEE9F7 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, String_t* ___uri0, RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * ___successDelegate1, RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * ___failureDelegate2, RuntimeObject * ___requestRef3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_0 = (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D *)il2cpp_codegen_object_new(U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D_il2cpp_TypeInfo_var);
		U3CStartJsonRequestU3Ed__7__ctor_m1F4279B0CB9F2D174964CAD93F36E30E95AE6591(L_0, 0, /*hidden argument*/NULL);
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->set_uri_2(L_3);
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_4 = L_2;
		RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * L_5 = ___successDelegate1;
		NullCheck(L_4);
		L_4->set_successDelegate_6(L_5);
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_6 = L_4;
		RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * L_7 = ___failureDelegate2;
		NullCheck(L_6);
		L_6->set_failureDelegate_3(L_7);
		U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * L_8 = L_6;
		RuntimeObject * L_9 = ___requestRef3;
		NullCheck(L_8);
		L_8->set_requestRef_4(L_9);
		return L_8;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::RemoveCallbackWrapper(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceGOJson_RemoveCallbackWrapper_mBB704999676460271CEEFAEC845934057EAF3E12 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, String_t* ___jsonText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// for (lastCharToIncludeIdx = jsonText.Length - 1; lastCharToIncludeIdx >= 0; lastCharToIncludeIdx--)
		String_t* L_0 = ___jsonText0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_006f;
	}

IL_000b:
	{
		// char lastChar = jsonText[lastCharToIncludeIdx];
		String_t* L_2 = ___jsonText0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!char.IsWhiteSpace(lastChar))
		Il2CppChar L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_006b;
		}
	}
	{
		// if (lastChar == ')')
		Il2CppChar L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0073;
		}
	}
	{
		// MatchCollection matches = _callbackRegex.Matches(jsonText);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_8 = __this->get__callbackRegex_9();
		String_t* L_9 = ___jsonText0;
		NullCheck(L_8);
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_10;
		L_10 = Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (matches.Count == 1)
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// string callbackName = matches[0].Groups[1].Value;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_13 = V_2;
		NullCheck(L_13);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_14;
		L_14 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_13, 0);
		NullCheck(L_14);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_15;
		L_15 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_14);
		NullCheck(L_15);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_16;
		L_16 = GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97(L_15, 1, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// int remainingCharCount = lastCharToIncludeIdx - callbackName.Length - 1; // 1 for open parens
		int32_t L_18 = V_0;
		String_t* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_19, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_20)), (int32_t)1));
		// return jsonText.Substring(callbackName.Length + 1, remainingCharCount); // Also remove parens
		String_t* L_21 = ___jsonText0;
		String_t* L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_4;
		NullCheck(L_21);
		String_t* L_25;
		L_25 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_006b:
	{
		// for (lastCharToIncludeIdx = jsonText.Length - 1; lastCharToIncludeIdx >= 0; lastCharToIncludeIdx--)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
	}

IL_006f:
	{
		// for (lastCharToIncludeIdx = jsonText.Length - 1; lastCharToIncludeIdx >= 0; lastCharToIncludeIdx--)
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}

IL_0073:
	{
		// return jsonText;
		String_t* L_28 = ___jsonText0;
		return L_28;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceGOJson__ctor_m172971F6F590EA93911741E2E439EB5CBFD16339 (DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1AE94C0DBD1F4EAF5037813C8EA3EB7FEC6384);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Regex _callbackRegex = new Regex(@"^([a-zA-Z0-9_]+)\(");
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral2F1AE94C0DBD1F4EAF5037813C8EA3EB7FEC6384, /*hidden argument*/NULL);
		__this->set__callbackRegex_9(L_0);
		DataSourceGOBase__ctor_mA3B9D044F7E7A3827C83867F2706C1F92FFA0527(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::IsCollectionAtKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_IsCollectionAtKeyPath_mBCF3932B5D07C736637434C65F4C6B50F7FEF729 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	{
		// JToken node = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1;
		L_1 = DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (node != null)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return node.Type == JTokenType.Array;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetCollectionCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSourceJson_GetCollectionCount_mA1D8398547B99C463B975CCEE551CD25E4841BFA (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// JToken node = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1;
		L_1 = DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// TryGetNodeContainerCount(node, out int count);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2 = V_0;
		bool L_3;
		L_3 = DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453(__this, L_2, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// return count;
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsArray(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsArray_m8F1ADC56E54872D4A7B264B93592DE17BC653548 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method)
{
	{
		// return node != null && node.Type == JTokenType.Array;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1 = ___node0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsObject(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsObject_m3A4AA046E32635AEEB33C886D48FA5216A3E1D0D (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method)
{
	{
		// return node != null && node.Type == JTokenType.Object;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1 = ___node0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NodeIsNumber(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_NodeIsNumber_mA9033D051B8DD418BD71F5FDCB9AA19BB222F09D (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, const RuntimeMethod* method)
{
	{
		// return node != null && (node.Type == JTokenType.Integer || node.Type == JTokenType.Float);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1 = ___node0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_0016;
		}
	}
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = ___node0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)7))? 1 : 0);
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::TryGetNodeContainerCount(Newtonsoft.Json.Linq.JToken,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___node0, int32_t* ___outCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * V_0 = NULL;
	{
		// if (NodeIsArray(node))
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___node0;
		bool L_1;
		L_1 = DataSourceJson_NodeIsArray_m8F1ADC56E54872D4A7B264B93592DE17BC653548(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// JContainer nodeContainer = node as JContainer;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2 = ___node0;
		V_0 = ((JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B *)IsInstClass((RuntimeObject*)L_2, JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B_il2cpp_TypeInfo_var));
		// outCount = nodeContainer.Count;
		int32_t* L_3 = ___outCount1;
		JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JContainer_get_Count_m313DBBD55EDD9D91B15A73D708C0C09BA84F1459(L_4, /*hidden argument*/NULL);
		*((int32_t*)L_3) = (int32_t)L_5;
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// outCount = 0;
		int32_t* L_6 = ___outCount1;
		*((int32_t*)L_6) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetNthCollectionKeyPathAt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceJson_GetNthCollectionKeyPathAt_mE7CB7F2BE6A3A78426EDEDDBF4E0F2D0D9DFEBAC (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// JToken node = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1;
		L_1 = DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (TryGetNodeContainerCount(node, out int count) && n < count)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2 = V_0;
		bool L_3;
		L_3 = DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453(__this, L_2, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___n1;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// return string.Format(CollectionElementkeyPathPrefixFormat, resolvedKeyPath, n);
		String_t* L_6 = ___resolvedKeyPath0;
		int32_t L_7 = ___n1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0029:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceJson_GetCollectionKeyPathRange_mB4EF7CFF2AC1BCE8B945F1BF318DEF039E8FF9AD (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// JToken node = KeyPathToNode(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2;
		L_2 = DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (node != null)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (NodeIsArray(node))
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_4 = V_0;
		bool L_5;
		L_5 = DataSourceJson_NodeIsArray_m8F1ADC56E54872D4A7B264B93592DE17BC653548(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// return GetValueAsArrayKeyPaths(node, resolvedKeyPath, rangeStart, rangeCount);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6 = V_0;
		String_t* L_7 = ___resolvedKeyPath0;
		int32_t L_8 = ___rangeStart1;
		int32_t L_9 = ___rangeCount2;
		RuntimeObject* L_10;
		L_10 = DataSourceJson_GetValueAsArrayKeyPaths_m11A4C274B2DE6C4834B4B3E1DF0D11E9F3FB0668(__this, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0027:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceJson_GetValueInternal_m609A56DCC43150133527C64A8D388786A567E0FE (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// JToken node = KeyPathToNode(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2;
		L_2 = DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (node != null)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = V_0;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// if (NodeIsArray(node))
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_4 = V_0;
		bool L_5;
		L_5 = DataSourceJson_NodeIsArray_m8F1ADC56E54872D4A7B264B93592DE17BC653548(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// TryGetNodeContainerCount(node, out int count);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6 = V_0;
		bool L_7;
		L_7 = DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453(__this, L_6, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// return GetValueAsArrayKeyPaths(node, resolvedKeyPath, 0, count);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_8 = V_0;
		String_t* L_9 = ___resolvedKeyPath0;
		int32_t L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = DataSourceJson_GetValueAsArrayKeyPaths_m11A4C274B2DE6C4834B4B3E1DF0D11E9F3FB0668(__this, L_8, L_9, 0, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0031:
	{
		// else if (NodeIsObject(node))
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_12 = V_0;
		bool L_13;
		L_13 = DataSourceJson_NodeIsObject_m3A4AA046E32635AEEB33C886D48FA5216A3E1D0D(__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		// return GetValueAsDictionaryKeyPaths(node, resolvedKeyPath);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_14 = V_0;
		String_t* L_15 = ___resolvedKeyPath0;
		RuntimeObject* L_16;
		L_16 = DataSourceJson_GetValueAsDictionaryKeyPaths_mA25AF182E3D72BFCC9BDE2A7B980FA1D4EEEB66A(__this, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0043:
	{
		// else if (NodeIsNumber(node))
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_17 = V_0;
		bool L_18;
		L_18 = DataSourceJson_NodeIsNumber_mA9033D051B8DD418BD71F5FDCB9AA19BB222F09D(__this, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0058;
		}
	}
	{
		// return node.Value<float>();
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_19 = V_0;
		float L_20;
		L_20 = Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96(L_19, /*hidden argument*/Extensions_Value_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2DF9CDB808CB012E138CDAF7405843AD46C66F96_RuntimeMethod_var);
		float L_21 = L_20;
		RuntimeObject * L_22 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0058:
	{
		// return node.Value<string>();
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_23 = V_0;
		String_t* L_24;
		L_24 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_23, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		return L_24;
	}

IL_005f:
	{
		// return null;
		return NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetValueAsArrayKeyPaths(Newtonsoft.Json.Linq.JToken,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceJson_GetValueAsArrayKeyPaths_m11A4C274B2DE6C4834B4B3E1DF0D11E9F3FB0668 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___arrayNode0, String_t* ___resolvedKeyPath1, int32_t ___rangeStart2, int32_t ___rangeCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// TryGetNodeContainerCount(arrayNode, out int arraySize);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___arrayNode0;
		bool L_1;
		L_1 = DataSourceJson_TryGetNodeContainerCount_m80991EE94126938DE98B33DFA5F923E38048B453(__this, L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// int rangeMax = rangeStart + rangeCount;
		int32_t L_2 = ___rangeStart2;
		int32_t L_3 = ___rangeCount3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		// if (rangeMax > arraySize)
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		// rangeMax = arraySize;
		int32_t L_6 = V_0;
		V_1 = L_6;
	}

IL_0015:
	{
		// List<string> keyPaths = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_7, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_2 = L_7;
		// for (int idx = rangeStart; idx < rangeMax; idx++)
		int32_t L_8 = ___rangeStart2;
		V_3 = L_8;
		goto IL_003a;
	}

IL_001f:
	{
		// keyPaths.Add(string.Format(CollectionElementkeyPathPrefixFormat, resolvedKeyPath, idx));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_2;
		String_t* L_10 = ___resolvedKeyPath1;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_9, L_14, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int idx = rangeStart; idx < rangeMax; idx++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003a:
	{
		// for (int idx = rangeStart; idx < rangeMax; idx++)
		int32_t L_16 = V_3;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001f;
		}
	}
	{
		// return keyPaths;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = V_2;
		return L_18;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceJson::GetValueAsDictionaryKeyPaths(Newtonsoft.Json.Linq.JToken,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceJson_GetValueAsDictionaryKeyPaths_mA25AF182E3D72BFCC9BDE2A7B980FA1D4EEEB66A (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___dictNode0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<string> keyPaths = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// Dictionary<string, object> dictObj = dictNode.ToObject<Dictionary<string, object>>();
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1 = ___dictNode0;
		NullCheck(L_1);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81(L_1, /*hidden argument*/JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var);
		// foreach (string key in dictObj.Keys)
		NullCheck(L_2);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_3;
		L_3 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_2, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		NullCheck(L_3);
		Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  L_4;
		L_4 = KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D(L_3, /*hidden argument*/KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0019:
		{
			// foreach (string key in dictObj.Keys)
			String_t* L_5;
			L_5 = Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_1), /*hidden argument*/Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
			V_2 = L_5;
			// keyPaths.Add(string.Format(DictionaryElementkeyPathPrefixFormat, resolvedKeyPath, key));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
			String_t* L_7 = ___resolvedKeyPath1;
			String_t* L_8 = V_2;
			String_t* L_9;
			L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0033:
		{
			// foreach (string key in dictObj.Keys)
			bool L_10;
			L_10 = Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0019;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_1), /*hidden argument*/Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// return keyPaths;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_0;
		return L_11;
	}
}
// Newtonsoft.Json.Linq.JToken Microsoft.MixedReality.Toolkit.Data.DataSourceJson::KeyPathToNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * DataSourceJson_KeyPathToNode_m37885FEBF7C2FAA3CECBD1D760C0478ECB2E24CB (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21F7A13DD2BC76B415BC0A44028E9D24FCB855F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m48EF85CF2AB6F8ECBA7B7691C4D770F4550C2C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC6EB7218B2FFC4EB67C0C15CEA3FF6C228286B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * V_3 = NULL;
	int32_t V_4 = 0;
	MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// if (_keyPathToJTokenLookup.ContainsKey(resolvedKeyPath))
		Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * L_0 = __this->get__keyPathToJTokenLookup_9();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m21F7A13DD2BC76B415BC0A44028E9D24FCB855F6(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m21F7A13DD2BC76B415BC0A44028E9D24FCB855F6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _keyPathToJTokenLookup[resolvedKeyPath];
		Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * L_3 = __this->get__keyPathToJTokenLookup_9();
		String_t* L_4 = ___resolvedKeyPath0;
		NullCheck(L_3);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_5;
		L_5 = Dictionary_2_get_Item_m48EF85CF2AB6F8ECBA7B7691C4D770F4550C2C7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m48EF85CF2AB6F8ECBA7B7691C4D770F4550C2C7A_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// else if (_jsonRootNode == null)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6 = __this->get__jsonRootNode_6();
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *)NULL;
	}

IL_0025:
	{
		// JToken node = _jsonRootNode;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_7 = __this->get__jsonRootNode_6();
		V_0 = L_7;
		// string keyPath = resolvedKeyPath;
		String_t* L_8 = ___resolvedKeyPath0;
		V_1 = L_8;
		goto IL_00f8;
	}

IL_0033:
	{
		// int amountToSkip = 0;
		V_2 = 0;
		// MatchCollection arrayMatches = _arrayTokenRegex.Matches(keyPath);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_9 = __this->get__arrayTokenRegex_7();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_11;
		L_11 = Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// if (arrayMatches.Count > 0)
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		// string arrayIndexText = arrayMatches[0].Groups[1].Value;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_14 = V_3;
		NullCheck(L_14);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_15;
		L_15 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_14, 0);
		NullCheck(L_15);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_16;
		L_16 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_15);
		NullCheck(L_16);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_17;
		L_17 = GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_17, /*hidden argument*/NULL);
		// int arrayIndex = int.Parse(arrayIndexText);
		int32_t L_19;
		L_19 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// node = node[arrayIndex];
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_20 = V_0;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_24;
		L_24 = VirtFuncInvoker1< JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, RuntimeObject * >::Invoke(14 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_20, L_23);
		V_0 = L_24;
		// amountToSkip = arrayMatches[0].Value.Length;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_25 = V_3;
		NullCheck(L_25);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_26;
		L_26 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_25, 0);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		// }
		goto IL_00ce;
	}

IL_008b:
	{
		// MatchCollection keyMatches = _keyTokenRegex.Matches(keyPath);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_29 = __this->get__keyTokenRegex_8();
		String_t* L_30 = V_1;
		NullCheck(L_29);
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_31;
		L_31 = Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465(L_29, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		// if (keyMatches.Count > 0)
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}
	{
		// string key = keyMatches[0].Groups[1].Value;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_34 = V_5;
		NullCheck(L_34);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_35;
		L_35 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_34, 0);
		NullCheck(L_35);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_36;
		L_36 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_35);
		NullCheck(L_36);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_37;
		L_37 = GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97(L_36, 1, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		// node = node[key];
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_39 = V_0;
		String_t* L_40 = V_6;
		NullCheck(L_39);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_41;
		L_41 = VirtFuncInvoker1< JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, RuntimeObject * >::Invoke(14 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_39, L_40);
		V_0 = L_41;
		// amountToSkip = key.Length;
		String_t* L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_42, /*hidden argument*/NULL);
		V_2 = L_43;
	}

IL_00ce:
	{
		// if (keyPath.Length > amountToSkip && keyPath[amountToSkip] == '.')
		String_t* L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_2;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		Il2CppChar L_49;
		L_49 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_47, L_48, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00e6;
		}
	}
	{
		// amountToSkip++;
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00e6:
	{
		// if (amountToSkip > 0)
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		// keyPath = keyPath.Substring(amountToSkip);
		String_t* L_52 = V_1;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		String_t* L_54;
		L_54 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_52, L_53, /*hidden argument*/NULL);
		V_1 = L_54;
		// }
		goto IL_00f8;
	}

IL_00f4:
	{
		// node = null;
		V_0 = (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *)NULL;
		// break;      // was not a valid path piece
		goto IL_010e;
	}

IL_00f8:
	{
		// while (node != null && keyPath != null && keyPath != "")
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_55 = V_0;
		if (!L_55)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_56 = V_1;
		if (!L_56)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_57, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_0033;
		}
	}

IL_010e:
	{
		// if (node != null)
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_59 = V_0;
		if (!L_59)
		{
			goto IL_011e;
		}
	}
	{
		// _keyPathToJTokenLookup[resolvedKeyPath] = node;
		Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * L_60 = __this->get__keyPathToJTokenLookup_9();
		String_t* L_61 = ___resolvedKeyPath0;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_62 = V_0;
		NullCheck(L_60);
		Dictionary_2_set_Item_mC6EB7218B2FFC4EB67C0C15CEA3FF6C228286B98(L_60, L_61, L_62, /*hidden argument*/Dictionary_2_set_Item_mC6EB7218B2FFC4EB67C0C15CEA3FF6C228286B98_RuntimeMethod_var);
	}

IL_011e:
	{
		// return node;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_63 = V_0;
		return L_63;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::UpdateFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson_UpdateFromJson_m76EA71F7C19264504DE2FBCDD4927E4EFB1ACCF3 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC72D26EBFF348F2F24B21E29A079A8D9104F553D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataChangeSetBegin();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetBegin() */, __this);
		// _keyPathToJTokenLookup.Clear();
		Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * L_0 = __this->get__keyPathToJTokenLookup_9();
		NullCheck(L_0);
		Dictionary_2_Clear_mC72D26EBFF348F2F24B21E29A079A8D9104F553D(L_0, /*hidden argument*/Dictionary_2_Clear_mC72D26EBFF348F2F24B21E29A079A8D9104F553D_RuntimeMethod_var);
		// _jsonRootNode = JToken.Parse(jsonString);
		String_t* L_1 = ___jsonString0;
		IL2CPP_RUNTIME_CLASS_INIT(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2;
		L_2 = JToken_Parse_mEC0D44C2AEB81496C5778E0BA81D06E4AF555211(L_1, /*hidden argument*/NULL);
		__this->set__jsonRootNode_6(L_2);
		// NotifyListeners();
		DataSourceJson_NotifyListeners_mD4F49FB150F1CC6B04F0C95015B0008019B44779(__this, /*hidden argument*/NULL);
		// DataChangeSetEnd();
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceBase::DataChangeSetEnd() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::NotifyListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson_NotifyListeners_mD4F49FB150F1CC6B04F0C95015B0008019B44779 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mC05E0F8246E3E307B1F0B59BDD4C9CBDAEC2E617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<string> keys = new List<string>(_keyPathToDataConsumers.Keys);
		Dictionary_2_t57BA62A2268804F82DF9E18027DC4FEBF98CCB7C * L_0 = ((DataSourceBase_t6D5861D4CB1440522475EF536C0047866BA38C73 *)__this)->get__keyPathToDataConsumers_1();
		NullCheck(L_0);
		KeyCollection_t1344D31D8D6AF80C1C083D86FBBE722B3934010F * L_1;
		L_1 = Dictionary_2_get_Keys_mC05E0F8246E3E307B1F0B59BDD4C9CBDAEC2E617(L_0, /*hidden argument*/Dictionary_2_get_Keys_mC05E0F8246E3E307B1F0B59BDD4C9CBDAEC2E617_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_2, L_1, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		// foreach (string keyPath in keys)
		NullCheck(L_2);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
		L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0018:
		{
			// foreach (string keyPath in keys)
			String_t* L_4;
			L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_1 = L_4;
			// NotifyDataChanged(keyPath, GetValue(keyPath), DataChangeType.DatumModified, false);
			String_t* L_5 = V_1;
			String_t* L_6 = V_1;
			RuntimeObject * L_7;
			L_7 = DataSourceBase_GetValue_m60A12B9C028C93B852DD1A03C2F1857C76EE03B8(__this, L_6, /*hidden argument*/NULL);
			DataSourceBase_NotifyDataChanged_mA156739C2C0688827699B8287BEA6ADB03C7E07E(__this, L_5, L_7, 1, (bool)0, /*hidden argument*/NULL);
		}

IL_0030:
		{
			// foreach (string keyPath in keys)
			bool L_8;
			L_8 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0018;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceJson::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceJson_IsDataAvailable_mD323EB0D6E3DF0F2E3856F4E8D676CD73D0018F8 (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, const RuntimeMethod* method)
{
	{
		// return _jsonRootNode != null;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get__jsonRootNode_6();
		return (bool)((!(((RuntimeObject*)(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceJson__ctor_m7D1887677F82A2C1BBC49801EA9BE871BDE75F7E (DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCEAD4158F0F520E76B43E3563E51CC44EB3F4BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7758A773BE48F6DF22CE7A040518B0B5C41F1E91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB984F10F00616791C365B2051953E91C02B03BA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Regex _arrayTokenRegex = new Regex(ArrayTokenPattern);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteralB984F10F00616791C365B2051953E91C02B03BA6, /*hidden argument*/NULL);
		__this->set__arrayTokenRegex_7(L_0);
		// protected readonly Regex _keyTokenRegex = new Regex(KeyTokenPattern);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_1 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_1, _stringLiteral7758A773BE48F6DF22CE7A040518B0B5C41F1E91, /*hidden argument*/NULL);
		__this->set__keyTokenRegex_8(L_1);
		// protected Dictionary<string, JToken> _keyPathToJTokenLookup = new Dictionary<string, JToken>();
		Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A * L_2 = (Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A *)il2cpp_codegen_object_new(Dictionary_2_tE861F27742A3EDB537197DB3AA9C918F3092816A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCEAD4158F0F520E76B43E3563E51CC44EB3F4BA8(L_2, /*hidden argument*/Dictionary_2__ctor_mCEAD4158F0F520E76B43E3563E51CC44EB3F4BA8_RuntimeMethod_var);
		__this->set__keyPathToJTokenLookup_9(L_2);
		DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceObjects__ctor_mCFF85CD817AEA62D4872A6BE82CDD61E1E21884D (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7758A773BE48F6DF22CE7A040518B0B5C41F1E91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB984F10F00616791C365B2051953E91C02B03BA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Regex _arrayTokenRegex = new Regex(ArrayTokenPattern);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteralB984F10F00616791C365B2051953E91C02B03BA6, /*hidden argument*/NULL);
		__this->set__arrayTokenRegex_6(L_0);
		// protected readonly Regex _keyTokenRegex = new Regex(KeyTokenPattern);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_1 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_1, _stringLiteral7758A773BE48F6DF22CE7A040518B0B5C41F1E91, /*hidden argument*/NULL);
		__this->set__keyTokenRegex_7(L_1);
		// protected Dictionary<string, IDataNode> _keyPathToNodeLookup = new Dictionary<string, IDataNode>();
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_2 = (Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D *)il2cpp_codegen_object_new(Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65(L_2, /*hidden argument*/Dictionary_2__ctor_m2DF0776B46A2211A3B3EEFE97AF3ACC59A898A65_RuntimeMethod_var);
		__this->set__keyPathToNodeLookup_9(L_2);
		// public DataSourceObjects()
		DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD(__this, /*hidden argument*/NULL);
		// _rootNode = new DataNodeObject(DataNodeType.Map);
		DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * L_3 = (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 *)il2cpp_codegen_object_new(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var);
		DataNodeObject__ctor_mE444AEBF444EC3389855232D7C475135849ED0EB(L_3, 3, NULL, /*hidden argument*/NULL);
		__this->set__rootNode_8(L_3);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::IsCollectionAtKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceObjects_IsCollectionAtKeyPath_mBAB475B52656857E5D854B0C24BFE2C1EE818556 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDataNode node = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject* L_1;
		L_1 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (node != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return node.IsArray();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsArray() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_0013:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetCollectionCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSourceObjects_GetCollectionCount_m38D0680E6523D521BC2DDA0F6BCA4E2241484E88 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDataNode node = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject* L_1;
		L_1 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (node != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return node.GetCollectionCount();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Microsoft.MixedReality.Toolkit.Data.IDataNode::GetCollectionCount() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_0013:
	{
		// return 0;
		return 0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetNthCollectionKeyPathAt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceObjects_GetNthCollectionKeyPathAt_m06C68355713FF1F4B15BA90A1A6A3C275A948B5E (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDataNode dataNode = KeyPathToNode(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject* L_1;
		L_1 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (dataNode != null && dataNode.IsArray() && n < dataNode.GetCollectionCount())
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsArray() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = ___n1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Microsoft.MixedReality.Toolkit.Data.IDataNode::GetCollectionCount() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// return string.Format(CollectionElementkeyPathPrefixFormat, resolvedKeyPath, n);
		String_t* L_8 = ___resolvedKeyPath0;
		int32_t L_9 = ___n1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_002f:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::SetValueInternal(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceObjects_SetValueInternal_m252398A1A216DC41C4BFB10997AF807B49FF0099 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDataNode dataNode = KeyPathToNode(resolvedKeyPath, true);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject* L_1;
		L_1 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (dataNode != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// dataNode.SetValue(value);
		RuntimeObject* L_3 = V_0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataNode::SetValue(System.Object) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_GetCollectionKeyPathRange_m31AD5B9521007C2FA6E2CC06C5CA959D0E68E1DA (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// IDataNode dataNode = KeyPathToNode(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject* L_2;
		L_2 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (dataNode != null && dataNode.IsArray())
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsArray() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return GetValueAsArrayKeyPaths(resolvedKeyPath, rangeStart, rangeCount);
		String_t* L_6 = ___resolvedKeyPath0;
		int32_t L_7 = ___rangeStart1;
		int32_t L_8 = ___rangeCount2;
		RuntimeObject* L_9;
		L_9 = DataSourceObjects_GetValueAsArrayKeyPaths_m4E022D8F726324F15E6581E50E3AB8AC5E9B58CA(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0026:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceObjects_GetValueInternal_mE9B2E3DE0873708834A21B48A9E825AC839324A6 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// IDataNode dataNode = KeyPathToNode(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject* L_2;
		L_2 = DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC(__this, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (dataNode != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// if (dataNode.IsArray())
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsArray() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// return GetValueAsArrayKeyPaths(resolvedKeyPath, 0, dataNode.GetCollectionCount());
		String_t* L_6 = ___resolvedKeyPath0;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Microsoft.MixedReality.Toolkit.Data.IDataNode::GetCollectionCount() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9;
		L_9 = DataSourceObjects_GetValueAsArrayKeyPaths_m4E022D8F726324F15E6581E50E3AB8AC5E9B58CA(__this, L_6, 0, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002b:
	{
		// else if (dataNode.IsMap())
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsMap() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return GetValueAsDictionaryKeyPaths(dataNode, resolvedKeyPath);
		RuntimeObject* L_12 = V_0;
		String_t* L_13 = ___resolvedKeyPath0;
		RuntimeObject* L_14;
		L_14 = DataSourceObjects_GetValueAsDictionaryKeyPaths_m3A9C9FED6A9E26C580A04E605168DB7337B50D69(__this, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_003c:
	{
		// return dataNode.GetValue();
		RuntimeObject* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object Microsoft.MixedReality.Toolkit.Data.IDataNode::GetValue() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}

IL_0043:
	{
		// return null;
		return NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetValueAsArrayKeyPaths(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_GetValueAsArrayKeyPaths_m4E022D8F726324F15E6581E50E3AB8AC5E9B58CA (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new KeyPathEnumerable(resolvedKeyPath, rangeStart, rangeCount);
		String_t* L_0 = ___resolvedKeyPath0;
		int32_t L_1 = ___rangeStart1;
		int32_t L_2 = ___rangeCount2;
		KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * L_3 = (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 *)il2cpp_codegen_object_new(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		KeyPathEnumerable__ctor_m1CC6D50F906E6C90B9F3EC12E5899DEED1FB70B6(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::GetValueAsDictionaryKeyPaths(Microsoft.MixedReality.Toolkit.Data.IDataNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_GetValueAsDictionaryKeyPaths_m3A9C9FED6A9E26C580A04E605168DB7337B50D69 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, RuntimeObject* ___mapNode0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<string> keyPaths = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (string key in mapNode.GetMapKeys())
		RuntimeObject* L_1 = ___mapNode0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.IDataNode::GetMapKeys() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0014:
		{
			// foreach (string key in mapNode.GetMapKeys())
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// keyPaths.Add(string.Format(DictionaryElementkeyPathPrefixFormat, resolvedKeyPath, key));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
			String_t* L_7 = ___resolvedKeyPath1;
			String_t* L_8 = V_2;
			String_t* L_9;
			L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_002d:
		{
			// foreach (string key in mapNode.GetMapKeys())
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0014;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// return keyPaths;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = V_0;
		return L_14;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::KeyPathToNode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceObjects_KeyPathToNode_mC772B7741C3158F0D2986BACD4F446FB1B84BCBC (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, String_t* ___resolvedKeyPath0, bool ___createIfMissing1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * V_3 = NULL;
	int32_t V_4 = 0;
	MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// if (_keyPathToNodeLookup.ContainsKey(resolvedKeyPath))
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_0 = __this->get__keyPathToNodeLookup_9();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFB2DF1D11F75AA52B9E994C4ECB0133BFCFC3E42_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _keyPathToNodeLookup[resolvedKeyPath];
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_3 = __this->get__keyPathToNodeLookup_9();
		String_t* L_4 = ___resolvedKeyPath0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mE9F13A4BAE7EE5D2E08B6FD0DD71BBA52654164D_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// IDataNode currentNode = _rootNode;
		DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * L_6 = __this->get__rootNode_8();
		V_0 = L_6;
		// string keyPath = resolvedKeyPath;
		String_t* L_7 = ___resolvedKeyPath0;
		V_1 = L_7;
		goto IL_0155;
	}

IL_0029:
	{
		// int amountToSkip = 0;
		V_2 = 0;
		// MatchCollection arrayMatches = _arrayTokenRegex.Matches(keyPath);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_8 = __this->get__arrayTokenRegex_6();
		String_t* L_9 = V_1;
		NullCheck(L_8);
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_10;
		L_10 = Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (arrayMatches.Count > 0)
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		// string arrayIndexText = arrayMatches[0].Groups[1].Value;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_13 = V_3;
		NullCheck(L_13);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_14;
		L_14 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_13, 0);
		NullCheck(L_14);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_15;
		L_15 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_14);
		NullCheck(L_15);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_16;
		L_16 = GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97(L_15, 1, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_16, /*hidden argument*/NULL);
		// int arrayIndex = int.Parse(arrayIndexText);
		int32_t L_18;
		L_18 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// if (createIfMissing)
		bool L_19 = ___createIfMissing1;
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// if (currentNode.IsUnassigned())
		RuntimeObject* L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsUnassigned() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_007f;
		}
	}
	{
		// currentNode.SetNodeType(DataNodeType.Array);
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataNode::SetNodeType(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_22, 2, NULL);
		goto IL_007f;
	}

IL_0074:
	{
		// currentNode.AddToArray(new DataNodeObject());
		RuntimeObject* L_23 = V_0;
		DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * L_24 = (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 *)il2cpp_codegen_object_new(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var);
		DataNodeObject__ctor_mAAC2A84471BAB8F7394DBE22A695E3C59E12069E(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataNode::AddToArray(Microsoft.MixedReality.Toolkit.Data.IDataNode) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_23, L_24);
	}

IL_007f:
	{
		// while (arrayIndex >= currentNode.GetCollectionCount())
		int32_t L_25 = V_4;
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Microsoft.MixedReality.Toolkit.Data.IDataNode::GetCollectionCount() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_26);
		if ((((int32_t)L_25) >= ((int32_t)L_27)))
		{
			goto IL_0074;
		}
	}

IL_0089:
	{
		// if (currentNode.IsArray())
		RuntimeObject* L_28 = V_0;
		NullCheck(L_28);
		bool L_29;
		L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsArray() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_28);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		// currentNode = currentNode.GetNodeByIndex(arrayIndex);
		RuntimeObject* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.IDataNode::GetNodeByIndex(System.Int32) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_30, L_31);
		V_0 = L_32;
		// }
		goto IL_009e;
	}

IL_009c:
	{
		// currentNode = null;
		V_0 = (RuntimeObject*)NULL;
	}

IL_009e:
	{
		// amountToSkip = arrayMatches[0].Value.Length;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_33 = V_3;
		NullCheck(L_33);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_34;
		L_34 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_33, 0);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		// }
		goto IL_012b;
	}

IL_00b2:
	{
		// MatchCollection keyMatches = _keyTokenRegex.Matches(keyPath);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_37 = __this->get__keyTokenRegex_7();
		String_t* L_38 = V_1;
		NullCheck(L_37);
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_39;
		L_39 = Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465(L_37, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		// if (keyMatches.Count > 0)
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_40 = V_5;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_012b;
		}
	}
	{
		// string key = keyMatches[0].Groups[1].Value;
		MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E * L_42 = V_5;
		NullCheck(L_42);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_43;
		L_43 = VirtFuncInvoker1< Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_42, 0);
		NullCheck(L_43);
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_44;
		L_44 = VirtFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_43);
		NullCheck(L_44);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_45;
		L_45 = GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97(L_44, 1, /*hidden argument*/NULL);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_45, /*hidden argument*/NULL);
		V_6 = L_46;
		// if (createIfMissing)
		bool L_47 = ___createIfMissing1;
		if (!L_47)
		{
			goto IL_010e;
		}
	}
	{
		// if (currentNode.IsUnassigned())
		RuntimeObject* L_48 = V_0;
		NullCheck(L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsUnassigned() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_48);
		if (!L_49)
		{
			goto IL_00f7;
		}
	}
	{
		// currentNode.SetNodeType(DataNodeType.Map);
		RuntimeObject* L_50 = V_0;
		NullCheck(L_50);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataNode::SetNodeType(Microsoft.MixedReality.Toolkit.Data.DataNodeType,System.Object) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_50, 3, NULL);
	}

IL_00f7:
	{
		// if (currentNode.GetNodeByKey(key) == null)
		RuntimeObject* L_51 = V_0;
		String_t* L_52 = V_6;
		NullCheck(L_51);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.IDataNode::GetNodeByKey(System.String) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_51, L_52);
		if (L_53)
		{
			goto IL_010e;
		}
	}
	{
		// currentNode.AddToMap(key, new DataNodeObject());
		RuntimeObject* L_54 = V_0;
		String_t* L_55 = V_6;
		DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * L_56 = (DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 *)il2cpp_codegen_object_new(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612_il2cpp_TypeInfo_var);
		DataNodeObject__ctor_mAAC2A84471BAB8F7394DBE22A695E3C59E12069E(L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Data.IDataNode::AddToMap(System.String,Microsoft.MixedReality.Toolkit.Data.IDataNode) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_54, L_55, L_56);
	}

IL_010e:
	{
		// if (currentNode.IsMap())
		RuntimeObject* L_57 = V_0;
		NullCheck(L_57);
		bool L_58;
		L_58 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.IDataNode::IsMap() */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_57);
		if (!L_58)
		{
			goto IL_0121;
		}
	}
	{
		// currentNode = currentNode.GetNodeByKey(key);
		RuntimeObject* L_59 = V_0;
		String_t* L_60 = V_6;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Data.IDataNode Microsoft.MixedReality.Toolkit.Data.IDataNode::GetNodeByKey(System.String) */, IDataNode_t02B6A3C8E6FAFAE5F792E22F8E89D16E8FAB16CB_il2cpp_TypeInfo_var, L_59, L_60);
		V_0 = L_61;
		// }
		goto IL_0123;
	}

IL_0121:
	{
		// currentNode = null;
		V_0 = (RuntimeObject*)NULL;
	}

IL_0123:
	{
		// amountToSkip = key.Length;
		String_t* L_62 = V_6;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_62, /*hidden argument*/NULL);
		V_2 = L_63;
	}

IL_012b:
	{
		// if (keyPath.Length > amountToSkip && keyPath[amountToSkip] == '.')
		String_t* L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_64, /*hidden argument*/NULL);
		int32_t L_66 = V_2;
		if ((((int32_t)L_65) <= ((int32_t)L_66)))
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		Il2CppChar L_69;
		L_69 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_67, L_68, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0143;
		}
	}
	{
		// amountToSkip++;
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0143:
	{
		// if (amountToSkip > 0)
		int32_t L_71 = V_2;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		// keyPath = keyPath.Substring(amountToSkip);
		String_t* L_72 = V_1;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		String_t* L_74;
		L_74 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_72, L_73, /*hidden argument*/NULL);
		V_1 = L_74;
		// }
		goto IL_0155;
	}

IL_0151:
	{
		// currentNode = null;
		V_0 = (RuntimeObject*)NULL;
		// break;      // was not a valid path piece
		goto IL_016b;
	}

IL_0155:
	{
		// while (currentNode != null && keyPath != null && keyPath != "")
		RuntimeObject* L_75 = V_0;
		if (!L_75)
		{
			goto IL_016b;
		}
	}
	{
		String_t* L_76 = V_1;
		if (!L_76)
		{
			goto IL_016b;
		}
	}
	{
		String_t* L_77 = V_1;
		bool L_78;
		L_78 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_77, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0029;
		}
	}

IL_016b:
	{
		// if (currentNode != null)
		RuntimeObject* L_79 = V_0;
		if (!L_79)
		{
			goto IL_017b;
		}
	}
	{
		// _keyPathToNodeLookup[resolvedKeyPath] = currentNode;
		Dictionary_2_t72CF47626DB9152C9178524348FF5069DA6BEA4D * L_80 = __this->get__keyPathToNodeLookup_9();
		String_t* L_81 = ___resolvedKeyPath0;
		RuntimeObject* L_82 = V_0;
		NullCheck(L_80);
		Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD(L_80, L_81, L_82, /*hidden argument*/Dictionary_2_set_Item_mC1EE720B2FD84F1CDCEBCBD74BFE549BB36710FD_RuntimeMethod_var);
	}

IL_017b:
	{
		// return currentNode;
		RuntimeObject* L_83 = V_0;
		return L_83;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceObjects::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceObjects_IsDataAvailable_mB69E0531829C7E329A3FA038EE5D6EDBE503A111 (DataSourceObjects_tA8E49DD0D2CB41794FB0DC309927994DB4AA07BA * __this, const RuntimeMethod* method)
{
	{
		// return _rootNode != null;
		DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 * L_0 = __this->get__rootNode_8();
		return (bool)((!(((RuntimeObject*)(DataNodeObject_tE5FB82846A5E1E0497945C42C55CCDD243F03612 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection__ctor_m5D4D17D041FD672A16ABD5E48216F9180D6D96C7 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject * ___dataSourceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m421164C5FA44C9BAF0D26B2C6DE2BFA7C4E3ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2__ctor_m664CC119449F1C34CBF22AB08638111A242BE4DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CollectionObserver> _collectionObservers = new Dictionary<string, CollectionObserver>();
		Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * L_0 = (Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 *)il2cpp_codegen_object_new(Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m421164C5FA44C9BAF0D26B2C6DE2BFA7C4E3ADF6(L_0, /*hidden argument*/Dictionary_2__ctor_m421164C5FA44C9BAF0D26B2C6DE2BFA7C4E3ADF6_RuntimeMethod_var);
		__this->set__collectionObservers_9(L_0);
		// protected LeastRecentlyUsedCache<string, LRUItem> _lruKeyPathToObjectCache = new LeastRecentlyUsedCache<string, LRUItem>(DefaultLRUCacheSize);
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields*)il2cpp_codegen_static_fields_for(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var))->get_DefaultLRUCacheSize_10();
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_2 = (LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F *)il2cpp_codegen_object_new(LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F_il2cpp_TypeInfo_var);
		LeastRecentlyUsedCache_2__ctor_m664CC119449F1C34CBF22AB08638111A242BE4DA(L_2, L_1, (bool)1, /*hidden argument*/LeastRecentlyUsedCache_2__ctor_m664CC119449F1C34CBF22AB08638111A242BE4DA_RuntimeMethod_var);
		__this->set__lruKeyPathToObjectCache_11(L_2);
		// public DataSourceReflection(object dataSourceObject)
		DataSourceBase__ctor_mEC06DB2F3916C522CA86C044C53423E4C84863AD(__this, /*hidden argument*/NULL);
		// _dataSourceObject = dataSourceObject;
		RuntimeObject * L_3 = ___dataSourceObject0;
		__this->set__dataSourceObject_8(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::SetDataSourceObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_SetDataSourceObject_m1E5AB518E083E1950099F86C4DA137CC16D621E8 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject * ___dataSourceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lruKeyPathToObjectCache.Clear();
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_0 = __this->get__lruKeyPathToObjectCache_11();
		NullCheck(L_0);
		LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E(L_0, /*hidden argument*/LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E_RuntimeMethod_var);
		// _dataSourceObject = dataSourceObject;
		RuntimeObject * L_1 = ___dataSourceObject0;
		__this->set__dataSourceObject_8(L_1);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsCollectionAtKeyPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsCollectionAtKeyPath_m37DBC9C8C62756518B65364C2EE7643452928D72 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	Type_t * G_B3_0 = NULL;
	{
		// return IsArrayOrList(KeyPathToObject(resolvedKeyPath)?.GetType());
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject * L_1;
		L_1 = DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((Type_t *)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DataSourceReflection_IsArrayOrList_m72844B34FA8EFE638306ED727344150886551E17(G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetCollectionCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSourceReflection_GetCollectionCount_mB6BAA475BBFCF4171EF67BCC1ACF807758596756 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		// switch(KeyPathToObject(resolvedKeyPath))
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject * L_1;
		L_1 = DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387(__this, L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		RuntimeObject * L_2 = V_2;
		V_0 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_2, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray * L_3 = V_0;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_4 = V_2;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_1;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002c;
	}

IL_001e:
	{
		// case Array arr:  return arr.Length;
		RuntimeArray * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		// case IList list: return list.Count;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_8);
		return L_9;
	}

IL_002c:
	{
		// default:         return 0;
		return 0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::NotifyCollectionDataChanged(System.String,System.Object,Microsoft.MixedReality.Toolkit.Data.DataChangeType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___collectionKeyPath0, RuntimeObject * ___value1, int32_t ___changeType2, bool ___isAtomicChange3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (changeType == DataChangeType.CollectionItemRemoved || changeType == DataChangeType.CollectionReset)
		int32_t L_0 = ___changeType2;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___changeType2;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		// _lruKeyPathToObjectCache.Clear();
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_2 = __this->get__lruKeyPathToObjectCache_11();
		NullCheck(L_2);
		LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E(L_2, /*hidden argument*/LeastRecentlyUsedCache_2_Clear_m0897002EC1F1E1A3C88070508E96CB39A1AE681E_RuntimeMethod_var);
	}

IL_0013:
	{
		// NotifyDataChanged(collectionKeyPath, value, changeType, isAtomicChange);
		String_t* L_3 = ___collectionKeyPath0;
		RuntimeObject * L_4 = ___value1;
		int32_t L_5 = ___changeType2;
		bool L_6 = ___isAtomicChange3;
		DataSourceBase_NotifyDataChanged_mA156739C2C0688827699B8287BEA6ADB03C7E07E(__this, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetNthCollectionKeyPathAt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSourceReflection_GetNthCollectionKeyPathAt_mB4FD114FFC7C161902EE1C7616BBF7C8F1DB4D92 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object value = KeyPathToObject(resolvedKeyPath);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject * L_1;
		L_1 = DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387(__this, L_0, /*hidden argument*/NULL);
		// if (IsArrayOrList(value.GetType()))
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DataSourceReflection_IsArrayOrList_m72844B34FA8EFE638306ED727344150886551E17(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// return string.Format(CollectionElementkeyPathPrefixFormat, resolvedKeyPath, n);
		String_t* L_4 = ___resolvedKeyPath0;
		int32_t L_5 = ___n1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16, L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0025:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::SetValueInternal(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_SetValueInternal_m97BD51D2787DF1A8E40F4CBF94905450CA387D10 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfo_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// KeyPathToValueWithMemberInfo(resolvedKeyPath, out MemberInfo memberInfo, out object containingObject);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject * L_1;
		L_1 = DataSourceReflection_KeyPathToValueWithMemberInfo_m30A78854E6F5C07619FC99142FABFD73FFB23488(__this, L_0, (MemberInfo_t **)(&V_0), (RuntimeObject **)(&V_1), /*hidden argument*/NULL);
		// if (memberInfo != null && containingObject != null)
		MemberInfo_t * L_2 = V_0;
		bool L_3;
		L_3 = MemberInfo_op_Inequality_m3C69F1834F6F8F947A618FE183AAF1B6B72DA0E2(L_2, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// SetValueFromFieldOrProperty(containingObject, memberInfo, value);
		RuntimeObject * L_5 = V_1;
		MemberInfo_t * L_6 = V_0;
		RuntimeObject * L_7 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		DataSourceReflection_SetValueFromFieldOrProperty_m4E265D6D65736A941D921AA9183AB6EFCF135151(L_5, L_6, L_7, /*hidden argument*/NULL);
		// _lruKeyPathToObjectCache.AddOrUpdateValue(resolvedKeyPath, MakeLRUItem(value, containingObject, memberInfo));
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_8 = __this->get__lruKeyPathToObjectCache_11();
		String_t* L_9 = ___resolvedKeyPath0;
		RuntimeObject * L_10 = ___value1;
		RuntimeObject * L_11 = V_1;
		MemberInfo_t * L_12 = V_0;
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_13;
		L_13 = DataSourceReflection_MakeLRUItem_m5E7EF65E6B25ADC41637049231A0509898398C1D(L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23(L_8, L_9, L_13, (bool)1, /*hidden argument*/LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23_RuntimeMethod_var);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetCollectionKeyPathRange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceReflection_GetCollectionKeyPathRange_m952C3E449F9F3BD7F122314006083129453666AA (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// object objectAtKeyPath = KeyPathToObject(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject * L_2;
		L_2 = DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (objectAtKeyPath != null)
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// if (IsArrayOrList(objectAtKeyPath.GetType()))
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DataSourceReflection_IsArrayOrList_m72844B34FA8EFE638306ED727344150886551E17(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return GetValueAsArrayKeyPaths(resolvedKeyPath, rangeStart, rangeCount);
		String_t* L_7 = ___resolvedKeyPath0;
		int32_t L_8 = ___rangeStart1;
		int32_t L_9 = ___rangeCount2;
		RuntimeObject* L_10;
		L_10 = DataSourceReflection_GetValueAsArrayKeyPaths_mFA94A3AA77A05CF3CAFFCE7AA765B0C6F40D0437(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002a:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_GetValueInternal_m418BA4F5FB234008A2422C66DA0DB692AE50696F (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// if (IsDataAvailable())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceBase::IsDataAvailable() */, __this);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// object objectAtKeyPath = KeyPathToObject(resolvedKeyPath);
		String_t* L_1 = ___resolvedKeyPath0;
		RuntimeObject * L_2;
		L_2 = DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (objectAtKeyPath != null)
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (objectAtKeyPath is IList)
		RuntimeObject * L_4 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		// return objectAtKeyPath;
		RuntimeObject * L_5 = V_0;
		return L_5;
	}

IL_001d:
	{
		// else if (objectAtKeyPath is IDictionary)
		RuntimeObject * L_6 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		// return GetValueAsDictionaryKeyPaths(objectAtKeyPath as IDictionary, resolvedKeyPath);
		RuntimeObject * L_7 = V_0;
		String_t* L_8 = ___resolvedKeyPath0;
		RuntimeObject* L_9;
		L_9 = DataSourceReflection_GetValueAsDictionaryKeyPaths_m030A63472A7C20F67BE618563010019E8ADCEF35(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0033:
	{
		// return objectAtKeyPath;
		RuntimeObject * L_10 = V_0;
		return L_10;
	}

IL_0035:
	{
		// return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::RemoveDataConsumerListener(System.String,Microsoft.MixedReality.Toolkit.Data.IDataConsumer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_RemoveDataConsumerListener_mF7414E643C130488EACD6CEEA9314551F2683941 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, RuntimeObject* ___dataConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_TryRemove_m6F7EAEFC800DDAD4DE384EFD7C3F73899A8D5172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.RemoveDataConsumerListener(resolvedKeyPath, dataConsumer);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject* L_1 = ___dataConsumer1;
		DataSourceBase_RemoveDataConsumerListener_m00EBED186F07902ADF4108E589A5D51479C3BBF2(__this, L_0, L_1, /*hidden argument*/NULL);
		// _lruKeyPathToObjectCache.TryRemove(resolvedKeyPath);
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_2 = __this->get__lruKeyPathToObjectCache_11();
		String_t* L_3 = ___resolvedKeyPath0;
		NullCheck(L_2);
		bool L_4;
		L_4 = LeastRecentlyUsedCache_2_TryRemove_m6F7EAEFC800DDAD4DE384EFD7C3F73899A8D5172(L_2, L_3, /*hidden argument*/LeastRecentlyUsedCache_2_TryRemove_m6F7EAEFC800DDAD4DE384EFD7C3F73899A8D5172_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueAsArrayKeyPaths(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceReflection_GetValueAsArrayKeyPaths_mFA94A3AA77A05CF3CAFFCE7AA765B0C6F40D0437 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new KeyPathEnumerable(resolvedKeyPath, rangeStart, rangeCount);
		String_t* L_0 = ___resolvedKeyPath0;
		int32_t L_1 = ___rangeStart1;
		int32_t L_2 = ___rangeCount2;
		KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * L_3 = (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 *)il2cpp_codegen_object_new(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		KeyPathEnumerable__ctor_m1CC6D50F906E6C90B9F3EC12E5899DEED1FB70B6(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueAsDictionaryKeyPaths(System.Collections.IDictionary,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceReflection_GetValueAsDictionaryKeyPaths_m030A63472A7C20F67BE618563010019E8ADCEF35 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, RuntimeObject* ___dict0, String_t* ___resolvedKeyPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<string> keyPaths = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (string key in dict.Keys)
		RuntimeObject* L_1 = ___dict0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0014:
		{
			// foreach (string key in dict.Keys)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			// keyPaths.Add(string.Format(DictionaryElementkeyPathPrefixFormat, resolvedKeyPath, key));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
			String_t* L_7 = ___resolvedKeyPath1;
			String_t* L_8 = V_2;
			String_t* L_9;
			L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0032:
		{
			// foreach (string key in dict.Keys)
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// return keyPaths;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = V_0;
		return L_15;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::KeyPathToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_KeyPathToObject_m932725694266492DD4D4658F48DB97413D688387 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	MemberInfo_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// return KeyPathToValueWithMemberInfo(resolvedKeyPath, out _, out _);
		String_t* L_0 = ___resolvedKeyPath0;
		RuntimeObject * L_1;
		L_1 = DataSourceReflection_KeyPathToValueWithMemberInfo_m30A78854E6F5C07619FC99142FABFD73FFB23488(__this, L_0, (MemberInfo_t **)(&V_0), (RuntimeObject **)(&V_1), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::KeyPathToValueWithMemberInfo(System.String,System.Reflection.MemberInfo&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_KeyPathToValueWithMemberInfo_m30A78854E6F5C07619FC99142FABFD73FFB23488 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, MemberInfo_t ** ___memberInfoOut1, RuntimeObject ** ___containingObjectOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_ContainsKey_m56270BAE6B7158CFAE20EA33A7D14FF4541FDDEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_FindByKey_m91D17CA9B50C4EB4A7D8CD43B496EF4C967AFC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB621DC24FF3E939648E534699890E09840B21334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB75C7F8F591C047DD2FA96FCBACCFCC05053DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Type_t * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	RuntimeArray * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Type_t * V_12 = NULL;
	String_t* V_13 = NULL;
	RuntimeObject * G_B10_0 = NULL;
	RuntimeObject * G_B15_0 = NULL;
	{
		// if (_lruKeyPathToObjectCache.ContainsKey(resolvedKeyPath))
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_0 = __this->get__lruKeyPathToObjectCache_11();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = LeastRecentlyUsedCache_2_ContainsKey_m56270BAE6B7158CFAE20EA33A7D14FF4541FDDEA(L_0, L_1, /*hidden argument*/LeastRecentlyUsedCache_2_ContainsKey_m56270BAE6B7158CFAE20EA33A7D14FF4541FDDEA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// LRUItem item = _lruKeyPathToObjectCache.FindByKey(resolvedKeyPath);
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_3 = __this->get__lruKeyPathToObjectCache_11();
		String_t* L_4 = ___resolvedKeyPath0;
		NullCheck(L_3);
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_5;
		L_5 = LeastRecentlyUsedCache_2_FindByKey_m91D17CA9B50C4EB4A7D8CD43B496EF4C967AFC9D(L_3, L_4, /*hidden argument*/LeastRecentlyUsedCache_2_FindByKey_m91D17CA9B50C4EB4A7D8CD43B496EF4C967AFC9D_RuntimeMethod_var);
		V_0 = L_5;
		// memberInfoOut       = item.memberInfo;
		MemberInfo_t ** L_6 = ___memberInfoOut1;
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_7 = V_0;
		MemberInfo_t * L_8 = L_7.get_memberInfo_1();
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_8);
		// containingObjectOut = item.containingObject;
		RuntimeObject ** L_9 = ___containingObjectOut2;
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_10 = V_0;
		RuntimeObject * L_11 = L_10.get_containingObject_2();
		*((RuntimeObject **)L_9) = (RuntimeObject *)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)L_11);
		// return item.value;
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_12 = V_0;
		RuntimeObject * L_13 = L_12.get_value_3();
		return L_13;
	}

IL_0032:
	{
		// object currentObject = _dataSourceObject;
		RuntimeObject * L_14 = __this->get__dataSourceObject_8();
		V_1 = L_14;
		// string keyPath       = resolvedKeyPath;
		String_t* L_15 = ___resolvedKeyPath0;
		V_2 = L_15;
		// containingObjectOut = null;
		RuntimeObject ** L_16 = ___containingObjectOut2;
		*((RuntimeObject **)L_16) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)NULL);
		// memberInfoOut = null;
		MemberInfo_t ** L_17 = ___memberInfoOut1;
		*((RuntimeObject **)L_17) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_17, (void*)(RuntimeObject *)NULL);
		goto IL_0187;
	}

IL_0046:
	{
		// int amountToSkip = 0;
		V_3 = 0;
		// if (DataParser.FindKeypathArrayToken(keyPath, out int arrayStart, out int arrayEnd))
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = DataParser_FindKeypathArrayToken_mC0355E7784E6A78DABC645415C46A597DDFC5BF3(L_18, (int32_t*)(&V_4), (int32_t*)(&V_5), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_010d;
		}
	}
	{
		// if (!DataParser.TryParseIntSubstring(keyPath, arrayStart, arrayEnd, out int arrayIndex))
		String_t* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		bool L_23;
		L_23 = DataParser_TryParseIntSubstring_mE65D4FBF9C1CE1640681DC4EA08C2206F87B04C9(L_20, L_21, L_22, (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// Debug.LogWarning($"Unparsable DataBind keypath array token '{keyPath.Substring(arrayStart, arrayEnd - arrayStart)}' in '{keyPath}'");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralCB75C7F8F591C047DD2FA96FCBACCFCC05053DF7);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCB75C7F8F591C047DD2FA96FCBACCFCC05053DF7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		String_t* L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = V_4;
		NullCheck(L_27);
		String_t* L_31;
		L_31 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_27, L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_30)), /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_26;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralB621DC24FF3E939648E534699890E09840B21334);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB621DC24FF3E939648E534699890E09840B21334);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		String_t* L_34 = V_2;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_36;
		L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_36, /*hidden argument*/NULL);
		// return null;
		return NULL;
	}

IL_00a3:
	{
		// memberInfoOut = null;
		MemberInfo_t ** L_37 = ___memberInfoOut1;
		*((RuntimeObject **)L_37) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_37, (void*)(RuntimeObject *)NULL);
		// Type currType = currentObject.GetType();
		RuntimeObject * L_38 = V_1;
		NullCheck(L_38);
		Type_t * L_39;
		L_39 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_38, /*hidden argument*/NULL);
		V_7 = L_39;
		// if (IsList(currType))
		Type_t * L_40 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = DataSourceReflection_IsList_m9300A2F48C9DBEF274FDC142A756CA2F73CF1061(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00d9;
		}
	}
	{
		// IList list = currentObject as IList;
		RuntimeObject * L_42 = V_1;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_42, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		// currentObject = arrayIndex < list.Count
		//     ? list[arrayIndex]
		//     : null;
		int32_t L_43 = V_6;
		RuntimeObject* L_44 = V_8;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_44);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_00cd;
		}
	}
	{
		G_B10_0 = NULL;
		goto IL_00d6;
	}

IL_00cd:
	{
		RuntimeObject* L_46 = V_8;
		int32_t L_47 = V_6;
		NullCheck(L_46);
		RuntimeObject * L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_46, L_47);
		G_B10_0 = L_48;
	}

IL_00d6:
	{
		V_1 = G_B10_0;
		// }
		goto IL_0106;
	}

IL_00d9:
	{
		// else if (currType.IsArray)
		Type_t * L_49 = V_7;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0104;
		}
	}
	{
		// Array array = currentObject as Array;
		RuntimeObject * L_51 = V_1;
		V_9 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_51, RuntimeArray_il2cpp_TypeInfo_var));
		// currentObject = arrayIndex < array.Length
		//     ? array.GetValue(arrayIndex)
		//     : null;
		int32_t L_52 = V_6;
		RuntimeArray * L_53 = V_9;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00f8;
		}
	}
	{
		G_B15_0 = NULL;
		goto IL_0101;
	}

IL_00f8:
	{
		RuntimeArray * L_55 = V_9;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		RuntimeObject * L_57;
		L_57 = Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1(L_55, L_56, /*hidden argument*/NULL);
		G_B15_0 = L_57;
	}

IL_0101:
	{
		V_1 = G_B15_0;
		// }
		goto IL_0106;
	}

IL_0104:
	{
		// currentObject = null;
		V_1 = NULL;
	}

IL_0106:
	{
		// amountToSkip = arrayEnd + 1;
		int32_t L_58 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		// }
		goto IL_0157;
	}

IL_010d:
	{
		// if (DataParser.FindKeypathToken(keyPath, out int tokenStart, out int tokenEnd))
		String_t* L_59 = V_2;
		bool L_60;
		L_60 = DataParser_FindKeypathToken_m6D71A3EB51302F7E773FF5AA3107B70187CC3525(L_59, (int32_t*)(&V_10), (int32_t*)(&V_11), /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0157;
		}
	}
	{
		// Type currType = currentObject.GetType();
		RuntimeObject * L_61 = V_1;
		NullCheck(L_61);
		Type_t * L_62;
		L_62 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_61, /*hidden argument*/NULL);
		V_12 = L_62;
		// if (IsStructOrClass(currType))
		Type_t * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = DataSourceReflection_IsStructOrClass_mF6C8C8972EC88DBCD6B60D67B16080A5740E3272(L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0151;
		}
	}
	{
		// string key = keyPath.Substring(tokenStart, tokenEnd - tokenStart);
		String_t* L_65 = V_2;
		int32_t L_66 = V_10;
		int32_t L_67 = V_11;
		int32_t L_68 = V_10;
		NullCheck(L_65);
		String_t* L_69;
		L_69 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_65, L_66, ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68)), /*hidden argument*/NULL);
		V_13 = L_69;
		// containingObjectOut = currentObject;
		RuntimeObject ** L_70 = ___containingObjectOut2;
		RuntimeObject * L_71 = V_1;
		*((RuntimeObject **)L_70) = (RuntimeObject *)L_71;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_70, (void*)(RuntimeObject *)L_71);
		// memberInfoOut       = GetNamedFieldOrPropertyInfo(currType, key);
		MemberInfo_t ** L_72 = ___memberInfoOut1;
		Type_t * L_73 = V_12;
		String_t* L_74 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		MemberInfo_t * L_75;
		L_75 = DataSourceReflection_GetNamedFieldOrPropertyInfo_mD070F8D819F5202F135BA300F6967379878D9B84(L_73, L_74, /*hidden argument*/NULL);
		*((RuntimeObject **)L_72) = (RuntimeObject *)L_75;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_72, (void*)(RuntimeObject *)L_75);
		// currentObject       = GetValueFromFieldOrProperty(containingObjectOut, memberInfoOut);
		RuntimeObject ** L_76 = ___containingObjectOut2;
		RuntimeObject * L_77 = *((RuntimeObject **)L_76);
		MemberInfo_t ** L_78 = ___memberInfoOut1;
		MemberInfo_t * L_79 = *((MemberInfo_t **)L_78);
		RuntimeObject * L_80;
		L_80 = DataSourceReflection_GetValueFromFieldOrProperty_mFCD4B4664BCD896911DB01226783BC2797C53588(L_77, L_79, /*hidden argument*/NULL);
		V_1 = L_80;
	}

IL_0151:
	{
		// amountToSkip = tokenEnd - tokenStart;
		int32_t L_81 = V_11;
		int32_t L_82 = V_10;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82));
	}

IL_0157:
	{
		// if (keyPath.Length > amountToSkip && keyPath[amountToSkip] == '.')
		String_t* L_83 = V_2;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_83, /*hidden argument*/NULL);
		int32_t L_85 = V_3;
		if ((((int32_t)L_84) <= ((int32_t)L_85)))
		{
			goto IL_016f;
		}
	}
	{
		String_t* L_86 = V_2;
		int32_t L_87 = V_3;
		NullCheck(L_86);
		Il2CppChar L_88;
		L_88 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_86, L_87, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_016f;
		}
	}
	{
		// amountToSkip++;
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_016f:
	{
		// if (amountToSkip > 0)
		int32_t L_90 = V_3;
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}
	{
		// keyPath = keyPath.Substring(amountToSkip);
		String_t* L_91 = V_2;
		int32_t L_92 = V_3;
		NullCheck(L_91);
		String_t* L_93;
		L_93 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_91, L_92, /*hidden argument*/NULL);
		V_2 = L_93;
		// }
		goto IL_0187;
	}

IL_017d:
	{
		// memberInfoOut = null;
		MemberInfo_t ** L_94 = ___memberInfoOut1;
		*((RuntimeObject **)L_94) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_94, (void*)(RuntimeObject *)NULL);
		// currentObject = null;
		V_1 = NULL;
		// containingObjectOut = null;
		RuntimeObject ** L_95 = ___containingObjectOut2;
		*((RuntimeObject **)L_95) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_95, (void*)(RuntimeObject *)NULL);
		// break;      // was not a valid path piece
		goto IL_019d;
	}

IL_0187:
	{
		// while (currentObject != null && keyPath != null && keyPath != "")
		RuntimeObject * L_96 = V_1;
		if (!L_96)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_97 = V_2;
		if (!L_97)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_98 = V_2;
		bool L_99;
		L_99 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_98, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_99)
		{
			goto IL_0046;
		}
	}

IL_019d:
	{
		// if (currentObject != null)
		RuntimeObject * L_100 = V_1;
		if (!L_100)
		{
			goto IL_01ac;
		}
	}
	{
		// AddOrUpdateItemInLRUCache(resolvedKeyPath, currentObject, containingObjectOut, memberInfoOut);
		String_t* L_101 = ___resolvedKeyPath0;
		RuntimeObject * L_102 = V_1;
		RuntimeObject ** L_103 = ___containingObjectOut2;
		RuntimeObject * L_104 = *((RuntimeObject **)L_103);
		MemberInfo_t ** L_105 = ___memberInfoOut1;
		MemberInfo_t * L_106 = *((MemberInfo_t **)L_105);
		DataSourceReflection_AddOrUpdateItemInLRUCache_m8FEED847FF564E89209027926438D41E07B5DB54(__this, L_101, L_102, L_104, L_106, /*hidden argument*/NULL);
	}

IL_01ac:
	{
		// return currentObject;
		RuntimeObject * L_107 = V_1;
		return L_107;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::AddOrUpdateItemInLRUCache(System.String,System.Object,System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_AddOrUpdateItemInLRUCache_m8FEED847FF564E89209027926438D41E07B5DB54 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___keyPath0, RuntimeObject * ___value1, RuntimeObject * ___containingObject2, MemberInfo_t * ___memberInfo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lruKeyPathToObjectCache.AddOrUpdateValue(keyPath, MakeLRUItem(value, containingObject, memberInfo));
		LeastRecentlyUsedCache_2_t169385F1D00FDF47AF5B4B1404D605A2E8A6028F * L_0 = __this->get__lruKeyPathToObjectCache_11();
		String_t* L_1 = ___keyPath0;
		RuntimeObject * L_2 = ___value1;
		RuntimeObject * L_3 = ___containingObject2;
		MemberInfo_t * L_4 = ___memberInfo3;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_5;
		L_5 = DataSourceReflection_MakeLRUItem_m5E7EF65E6B25ADC41637049231A0509898398C1D(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23(L_0, L_1, L_5, (bool)1, /*hidden argument*/LeastRecentlyUsedCache_2_AddOrUpdateValue_mBF7A6D1DC4D3C142947840F82E1114D0E419BB23_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::MakeLRUItem(System.Object,System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  DataSourceReflection_MakeLRUItem_m5E7EF65E6B25ADC41637049231A0509898398C1D (RuntimeObject * ___value0, RuntimeObject * ___containingObject1, MemberInfo_t * ___memberInfo2, const RuntimeMethod* method)
{
	LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LRUItem item = new LRUItem();
		il2cpp_codegen_initobj((&V_0), sizeof(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D ));
		// item.memberInfo = memberInfo;
		MemberInfo_t * L_0 = ___memberInfo2;
		(&V_0)->set_memberInfo_1(L_0);
		// item.containingObject = containingObject;
		RuntimeObject * L_1 = ___containingObject1;
		(&V_0)->set_containingObject_2(L_1);
		// item.value = value;
		RuntimeObject * L_2 = ___value0;
		(&V_0)->set_value_3(L_2);
		// return item;
		LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D  L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.MemberInfo Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetNamedFieldOrPropertyInfo(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * DataSourceReflection_GetNamedFieldOrPropertyInfo_mD070F8D819F5202F135BA300F6967379878D9B84 (Type_t * ___objType0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m50B81205FDD68CEFC46AEDEF14199A14A62677A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7858BA6DA6999BD9274132CE30EF02D73BD513A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* V_0 = NULL;
	int32_t V_1 = 0;
	MemberInfo_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!memberInfoCache.TryGetValue(objType, out members))
			IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
			Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * L_0 = ((DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields*)il2cpp_codegen_static_fields_for(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var))->get_memberInfoCache_12();
			Type_t * L_1 = ___objType0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_TryGetValue_m50B81205FDD68CEFC46AEDEF14199A14A62677A8(L_0, L_1, (MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m50B81205FDD68CEFC46AEDEF14199A14A62677A8_RuntimeMethod_var);
			if (L_2)
			{
				goto IL_0024;
			}
		}

IL_000f:
		{
			// members = objType.GetMembers(BindingFlags.Public | BindingFlags.Instance);
			Type_t * L_3 = ___objType0;
			NullCheck(L_3);
			MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_4;
			L_4 = VirtFuncInvoker1< MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*, int32_t >::Invoke(64 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_3, ((int32_t)20));
			V_0 = L_4;
			// memberInfoCache[objType] = members;
			IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
			Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * L_5 = ((DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields*)il2cpp_codegen_static_fields_for(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var))->get_memberInfoCache_12();
			Type_t * L_6 = ___objType0;
			MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_7 = V_0;
			NullCheck(L_5);
			Dictionary_2_set_Item_m7858BA6DA6999BD9274132CE30EF02D73BD513A2(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m7858BA6DA6999BD9274132CE30EF02D73BD513A2_RuntimeMethod_var);
		}

IL_0024:
		{
			// for (int i = 0; i < members.Length; i++)
			V_1 = 0;
			goto IL_0042;
		}

IL_0028:
		{
			// if (string.Equals(members[i].Name, key))
			MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_8 = V_0;
			int32_t L_9 = V_1;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			MemberInfo_t * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
			String_t* L_13 = ___key1;
			bool L_14;
			L_14 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_12, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			// return members[i];
			MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_15 = V_0;
			int32_t L_16 = V_1;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			MemberInfo_t * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			V_2 = L_18;
			goto IL_004f;
		}

IL_003e:
		{
			// for (int i = 0; i < members.Length; i++)
			int32_t L_19 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		}

IL_0042:
		{
			// for (int i = 0; i < members.Length; i++)
			int32_t L_20 = V_1;
			MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_21 = V_0;
			NullCheck(L_21);
			if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
			{
				goto IL_0028;
			}
		}

IL_0048:
		{
			// }
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004a;
		}
		throw e;
	}

CATCH_004a:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		// return null;
		return (MemberInfo_t *)NULL;
	}

IL_004f:
	{
		// }
		MemberInfo_t * L_22 = V_2;
		return L_22;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::GetValueFromFieldOrProperty(System.Object,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSourceReflection_GetValueFromFieldOrProperty_mFCD4B4664BCD896911DB01226783BC2797C53588 (RuntimeObject * ___containingObject0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	FieldInfo_t * V_1 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo1;
		V_0 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		MemberInfo_t * L_2 = ___memberInfo1;
		V_1 = ((FieldInfo_t *)IsInstClass((RuntimeObject*)L_2, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_3 = V_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0026;
	}

IL_0016:
	{
		// case PropertyInfo info: return info.GetValue(containingObject);
		PropertyInfo_t * L_4 = V_0;
		RuntimeObject * L_5 = ___containingObject0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		// case FieldInfo    info: return info.GetValue(containingObject);
		FieldInfo_t * L_7 = V_1;
		RuntimeObject * L_8 = ___containingObject0;
		NullCheck(L_7);
		RuntimeObject * L_9;
		L_9 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_7, L_8);
		return L_9;
	}

IL_0026:
	{
		// default:                return null;
		return NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::SetValueFromFieldOrProperty(System.Object,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_SetValueFromFieldOrProperty_m4E265D6D65736A941D921AA9183AB6EFCF135151 (RuntimeObject * ___containingObject0, MemberInfo_t * ___memberInfo1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	FieldInfo_t * V_1 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo1;
		V_0 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		MemberInfo_t * L_2 = ___memberInfo1;
		V_1 = ((FieldInfo_t *)IsInstClass((RuntimeObject*)L_2, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_3 = V_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0015:
	{
		// case PropertyInfo info: info.SetValue(containingObject, value); break;
		PropertyInfo_t * L_4 = V_0;
		RuntimeObject * L_5 = ___containingObject0;
		RuntimeObject * L_6 = ___value2;
		NullCheck(L_4);
		PropertyInfo_SetValue_m8397EBC06D7DC1EFB56EEA65E7DB4AA362CA4170(L_4, L_5, L_6, /*hidden argument*/NULL);
		// case PropertyInfo info: info.SetValue(containingObject, value); break;
		return;
	}

IL_001e:
	{
		// case FieldInfo    info: info.SetValue(containingObject, value); break;
		FieldInfo_t * L_7 = V_1;
		RuntimeObject * L_8 = ___containingObject0;
		RuntimeObject * L_9 = ___value2;
		NullCheck(L_7);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsList_m9300A2F48C9DBEF274FDC142A756CA2F73CF1061 (Type_t * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => source != null && typeof(IList).IsAssignableFrom(source);
		Type_t * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = ___source0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(118 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_3, L_4);
		return L_5;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsArrayOrList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsArrayOrList_m72844B34FA8EFE638306ED727344150886551E17 (Type_t * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return source != null && (source.IsArray || IsList(source));
		Type_t * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_2 = ___source0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_4 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DataSourceReflection_IsList_m9300A2F48C9DBEF274FDC142A756CA2F73CF1061(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0018:
	{
		return (bool)1;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsStructOrClass(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsStructOrClass_mF6C8C8972EC88DBCD6B60D67B16080A5740E3272 (Type_t * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * V_0 = NULL;
	{
		// if (source != null)
		Type_t * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// TypeInfo typeInfo = source.GetTypeInfo();
		Type_t * L_2 = ___source0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return typeInfo.IsClass || (typeInfo.IsValueType && !typeInfo.IsPrimitive && !typeInfo.IsEnum);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0032;
		}
	}
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsEnum() */, L_10);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}

IL_0034:
	{
		return (bool)1;
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSourceReflection_IsDataAvailable_m11E1E1AB191AE813E0E177562D95657D2A370D3A (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, const RuntimeMethod* method)
{
	{
		// return _dataSourceObject != null;
		RuntimeObject * L_0 = __this->get__dataSourceObject_8();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::OnCollectionListenerAdded(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_OnCollectionListenerAdded_mD589665FA638E0FEFF65326B4C8D93382A452BC5 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, RuntimeObject * ___collection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m244613A2F128CA8D2FA0C6319A9F9157495F70E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_t150EC64FCE9C13B15F08BD1863D08321C79E539A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * V_1 = NULL;
	{
		// Type collectionType = collection.GetType();
		RuntimeObject * L_0 = ___collection1;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (typeof(INotifyPropertyChanged).IsAssignableFrom(collectionType))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (INotifyPropertyChanged_t150EC64FCE9C13B15F08BD1863D08321C79E539A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(118 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// CollectionObserver collectionObserver = new CollectionObserver(this, resolvedKeyPath, collection);
		String_t* L_6 = ___resolvedKeyPath0;
		RuntimeObject * L_7 = ___collection1;
		CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * L_8 = (CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 *)il2cpp_codegen_object_new(CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394_il2cpp_TypeInfo_var);
		CollectionObserver__ctor_mAAD7B67093ED6D1DF0DB03C8CE05DC626F587780(L_8, __this, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// _collectionObservers[resolvedKeyPath] = collectionObserver;
		Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * L_9 = __this->get__collectionObservers_9();
		String_t* L_10 = ___resolvedKeyPath0;
		CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * L_11 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_m244613A2F128CA8D2FA0C6319A9F9157495F70E1(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m244613A2F128CA8D2FA0C6319A9F9157495F70E1_RuntimeMethod_var);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::OnCollectionListenerRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection_OnCollectionListenerRemoved_mFE0759385891C354A1C6AC601B46B4437AA82CB1 (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * __this, String_t* ___resolvedKeyPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE9D8F3BEB6165F60B6EEA2B0355ED85F8B7A8C63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _collectionObservers.Remove(resolvedKeyPath);
		Dictionary_2_tD5916A854A606B3AEE9A85C1BCC9BA979D9CE126 * L_0 = __this->get__collectionObservers_9();
		String_t* L_1 = ___resolvedKeyPath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mE9D8F3BEB6165F60B6EEA2B0355ED85F8B7A8C63(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mE9D8F3BEB6165F60B6EEA2B0355ED85F8B7A8C63_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceReflection__cctor_mF151457BB68E5B76A6AD3F9FD40514C08583D736 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m911E2EBE3EDC37A54AD2B18B21E0B6FCB3A85DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int DefaultLRUCacheSize = 100;    // TODO: Should this be configurable via inspector property or is that overkill?
		((DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields*)il2cpp_codegen_static_fields_for(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var))->set_DefaultLRUCacheSize_10(((int32_t)100));
		// private static Dictionary<Type, MemberInfo[]> memberInfoCache = new Dictionary<Type, MemberInfo[]>();
		Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 * L_0 = (Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6 *)il2cpp_codegen_object_new(Dictionary_2_t420A80F45CF9B201D27F572F11B584250D4931B6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m911E2EBE3EDC37A54AD2B18B21E0B6FCB3A85DAA(L_0, /*hidden argument*/Dictionary_2__ctor_m911E2EBE3EDC37A54AD2B18B21E0B6FCB3A85DAA_RuntimeMethod_var);
		((DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_StaticFields*)il2cpp_codegen_static_fields_for(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var))->set_memberInfoCache_12(L_0);
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
// UnityEngine.ScriptableObject Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::get_ThemeProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * DataSourceThemeProvider_get_ThemeProfile_mC3140A158C95C2E32FDB338E2BDB3D85B65E4D07 (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, const RuntimeMethod* method)
{
	{
		// return themeProfile;
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = __this->get_themeProfile_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::set_ThemeProfile(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceThemeProvider_set_ThemeProfile_mD1B035D1DF53E28E0B621D5DFAD527ED25823280 (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___value0, const RuntimeMethod* method)
{
	{
		// SetTheme(themeProfile);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = __this->get_themeProfile_9();
		DataSourceThemeProvider_SetTheme_m95FDA3C4B82ABB80E88E0507E5044BD3123A090A(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Data.IDataSource Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::AllocateDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSourceThemeProvider_AllocateDataSource_mDE5F4384FE74CAD0D94703060507891A31810121 (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dataSourceReflection = new DataSourceReflection(themeProfile);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = __this->get_themeProfile_9();
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_1 = (DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 *)il2cpp_codegen_object_new(DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24_il2cpp_TypeInfo_var);
		DataSourceReflection__ctor_m5D4D17D041FD672A16ABD5E48216F9180D6D96C7(L_1, L_0, /*hidden argument*/NULL);
		__this->set__dataSourceReflection_10(L_1);
		// return _dataSourceReflection;
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_2 = __this->get__dataSourceReflection_10();
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::InitializeDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceThemeProvider_InitializeDataSource_mA1E4C6631FA6DF99098D67AE80E4DAEF3532A9CF (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CAC27F83DC44AF310E612499D57A53A7C8B81DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataSourceType == null || DataSourceType == "")
		String_t* L_0;
		L_0 = DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1;
		L_1 = DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		// DataSourceType = "theme";
		DataSourceGOBase_set_DataSourceType_m47610AB0B2B05A1232E7782C7EEDDB527FE37284_inline(__this, _stringLiteral9CAC27F83DC44AF310E612499D57A53A7C8B81DA, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::SetTheme(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceThemeProvider_SetTheme_m95FDA3C4B82ABB80E88E0507E5044BD3123A090A (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___themeProfile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dataSourceReflection != null && themeProfile != this.themeProfile)
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_0 = __this->get__dataSourceReflection_10();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_1 = ___themeProfile0;
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_2 = __this->get_themeProfile_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.themeProfile = themeProfile;
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_4 = ___themeProfile0;
		__this->set_themeProfile_9(L_4);
		// _dataSourceReflection.SetDataSourceObject(themeProfile);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_5 = __this->get__dataSourceReflection_10();
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_6 = ___themeProfile0;
		NullCheck(L_5);
		DataSourceReflection_SetDataSourceObject_m1E5AB518E083E1950099F86C4DA137CC16D621E8(L_5, L_6, /*hidden argument*/NULL);
		// _dataSourceReflection.NotifyAllChanged();
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_7 = __this->get__dataSourceReflection_10();
		NullCheck(L_7);
		DataSourceBase_NotifyAllChanged_mFCE4FC187460DA751FCED76650A946989B8CAE34(L_7, 1, (RuntimeObject*)NULL, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceThemeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSourceThemeProvider__ctor_m547F530F2BE6089A21BB46B1F51B25F4986E124B (DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * __this, const RuntimeMethod* method)
{
	{
		DataSourceGOBase__ctor_mA3B9D044F7E7A3827C83867F2706C1F92FFA0527(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPathEnumerable__ctor_m1CC6D50F906E6C90B9F3EC12E5899DEED1FB70B6 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, String_t* ___keyPathPrefix0, int32_t ___rangeStart1, int32_t ___rangeCount2, const RuntimeMethod* method)
{
	{
		// public KeyPathEnumerable(string keyPathPrefix, int rangeStart, int rangeCount)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _rangeStart = rangeStart;
		int32_t L_0 = ___rangeStart1;
		__this->set__rangeStart_1(L_0);
		// _rangeEnd = rangeStart + rangeCount;
		int32_t L_1 = ___rangeStart1;
		int32_t L_2 = ___rangeCount2;
		__this->set__rangeEnd_2(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
		// _keyPathPrefix = keyPathPrefix;
		String_t* L_3 = ___keyPathPrefix0;
		__this->set__keyPathPrefix_4(L_3);
		// _currentIndex = _rangeStart;
		int32_t L_4 = __this->get__rangeStart_1();
		__this->set__currentIndex_3(L_4);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyPathEnumerable_GetEnumerator_m9C9882B3913C42202108584A14EA1F321BB6F455 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyPathEnumerable_System_Collections_IEnumerable_GetEnumerator_m6140CF3DAECA19D743273AEE81243A0AFB222338 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = KeyPathEnumerable_GetEnumerator_m9C9882B3913C42202108584A14EA1F321BB6F455(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyPathEnumerable_get_Current_m4A85E319B45B5A244EE1C2728721F203D3B1D184 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// if (_currentIndex > _rangeStart && _currentIndex <= _rangeEnd)
		int32_t L_0 = __this->get__currentIndex_3();
		int32_t L_1 = __this->get__rangeStart_1();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = __this->get__currentIndex_3();
		int32_t L_3 = __this->get__rangeEnd_2();
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// return GenerateKeyPath();
		String_t* L_4;
		L_4 = KeyPathEnumerable_GenerateKeyPath_m030D4F575D4D52C1AB388BE1725401363D55C285(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyPathEnumerable_get_Current_m4A85E319B45B5A244EE1C2728721F203D3B1D184_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyPathEnumerable_System_Collections_IEnumerator_get_Current_m282B01E890C78F13EA861F037C05DFE3510154F8 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current { get { return Current; } }
		String_t* L_0;
		L_0 = KeyPathEnumerable_get_Current_m4A85E319B45B5A244EE1C2728721F203D3B1D184(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPathEnumerable_Reset_m046BD1765E782731CC0D6E5C382352A050904AA6 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// _currentIndex = _rangeStart;
		int32_t L_0 = __this->get__rangeStart_1();
		__this->set__currentIndex_3(L_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyPathEnumerable_MoveNext_m1D8DDF5D4C54912206D6CEBD9F4FDDC0C969A18D (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// if (_currentIndex <= _rangeEnd)
		int32_t L_0 = __this->get__currentIndex_3();
		int32_t L_1 = __this->get__rangeEnd_2();
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// _currentIndex++;
		int32_t L_2 = __this->get__currentIndex_3();
		__this->set__currentIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_001c:
	{
		// return _currentIndex <= _rangeEnd;
		int32_t L_3 = __this->get__currentIndex_3();
		int32_t L_4 = __this->get__rangeEnd_2();
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::GenerateKeyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyPathEnumerable_GenerateKeyPath_m030D4F575D4D52C1AB388BE1725401363D55C285 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(CollectionElementkeyPathPrefixFormat, _keyPathPrefix, _currentIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_StaticFields*)il2cpp_codegen_static_fields_for(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var))->get_CollectionElementkeyPathPrefixFormat_0();
		String_t* L_1 = __this->get__keyPathPrefix_4();
		int32_t L_2 = __this->get__currentIndex_3();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(L_0, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPathEnumerable_System_IDisposable_Dispose_mADEE094B2ABCD9B07461FCA28ADB6BF0112C8D38 (KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8 * __this, const RuntimeMethod* method)
{
	{
		// void IDisposable.Dispose() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.KeyPathEnumerable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPathEnumerable__cctor_m6C880EAF3F302DFE31C2C48B839A5DB73CE5C525 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly string CollectionElementkeyPathPrefixFormat = "{0}[{1:d}]";
		((KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_StaticFields*)il2cpp_codegen_static_fields_for(KeyPathEnumerable_t0C0590B600288649411088D0D33CA6FE907E9AC8_il2cpp_TypeInfo_var))->set_CollectionElementkeyPathPrefixFormat_0(_stringLiteral7F77EDDEF11DFFEDF60CB0E97DC2E7013D569F16);
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
// System.Int32 Microsoft.MixedReality.Toolkit.Data.ThemeSelector::get_CurrentTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThemeSelector_get_CurrentTheme_m1A1F07001C9D4805B1120140825B18515C6F1EB9 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method)
{
	{
		// return currentTheme;
		int32_t L_0 = __this->get_currentTheme_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::set_CurrentTheme(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_set_CurrentTheme_m144B5C19FA895C94D4B6FA887B40D9E13975C6D8 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// SetTheme(currentTheme);
		int32_t L_0 = __this->get_currentTheme_6();
		ThemeSelector_SetTheme_mEE04620263EDBDBD5540AE538E3D5A925828AD33(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::SetTheme(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_SetTheme_mEE04620263EDBDBD5540AE538E3D5A925828AD33 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, int32_t ___whichTheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (themeProvider != null && whichTheme < themeProfiles.Length)
		DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * L_0 = __this->get_themeProvider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___whichTheme0;
		ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* L_3 = __this->get_themeProfiles_4();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		// currentTheme = whichTheme;
		int32_t L_4 = ___whichTheme0;
		__this->set_currentTheme_6(L_4);
		// themeProvider.SetTheme(themeProfiles[whichTheme]);
		DataSourceThemeProvider_t9B0AF6F6880F4181E2CB12C8143935F58358E913 * L_5 = __this->get_themeProvider_5();
		ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* L_6 = __this->get_themeProfiles_4();
		int32_t L_7 = ___whichTheme0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		DataSourceThemeProvider_SetTheme_m95FDA3C4B82ABB80E88E0507E5044BD3123A090A(L_5, L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_OnStart_m2083D22155F988DAFBD5F16C9511F4785ECA3DCB (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method)
{
	{
		// SetTheme(currentTheme);
		int32_t L_0 = __this->get_currentTheme_6();
		ThemeSelector_SetTheme_mEE04620263EDBDBD5540AE538E3D5A925828AD33(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector_OnValidate_m7709B7A67BAA1F9C6DB9C05010564D05DE303D26 (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentTheme < 0)
		int32_t L_0;
		L_0 = ThemeSelector_get_CurrentTheme_m1A1F07001C9D4805B1120140825B18515C6F1EB9_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// CurrentTheme = 0;
		ThemeSelector_set_CurrentTheme_m144B5C19FA895C94D4B6FA887B40D9E13975C6D8(__this, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		// if (CurrentTheme >= themeProfiles.Length)
		int32_t L_1;
		L_1 = ThemeSelector_get_CurrentTheme_m1A1F07001C9D4805B1120140825B18515C6F1EB9_inline(__this, /*hidden argument*/NULL);
		ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* L_2 = __this->get_themeProfiles_4();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		// CurrentTheme = themeProfiles.Length - 1;
		ScriptableObjectU5BU5D_tA5117515D714DD945669F5BAE310FC6F26311208* L_3 = __this->get_themeProfiles_4();
		NullCheck(L_3);
		ThemeSelector_set_CurrentTheme_m144B5C19FA895C94D4B6FA887B40D9E13975C6D8(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0030:
	{
		// SetTheme(currentTheme);
		int32_t L_4 = __this->get_currentTheme_6();
		ThemeSelector_SetTheme_mEE04620263EDBDBD5540AE538E3D5A925828AD33(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.ThemeSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeSelector__ctor_m53F488BC157CF9699F1E6009A4BB222406C41D0A (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataKeyPathMapperGODictionary/ViewToDataKeypathMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewToDataKeypathMap__ctor_mB7245CE327E3426101401CD7B5E6B1C0CDDDC672 (ViewToDataKeypathMap_tC52A2FA19E2A728C6826169EF022AA422DCF64CD * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7__ctor_m1F4279B0CB9F2D174964CAD93F36E30E95AE6591 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7_System_IDisposable_Dispose_m9A4EB7C0D7F21520533804369D7CED460405E290 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CStartJsonRequestU3Ed__7_U3CU3Em__Finally1_m200ADA6834881AA173E896DD489EA5554DB90556(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartJsonRequestU3Ed__7_MoveNext_m6754FEE145597CA3FDA9B2BFCA8791A17E544ECC (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005b;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00fa;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
			String_t* L_4 = __this->get_uri_2();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
			L_5 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_4, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_7(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return webRequest.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwebRequestU3E5__2_7();
			NullCheck(L_6);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_7;
			L_7 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_6, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_7);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00fa;
		}

IL_005b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (webRequest.result == UnityWebRequest.Result.ProtocolError || webRequest.result == UnityWebRequest.Result.ConnectionError)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CwebRequestU3E5__2_7();
			NullCheck(L_8);
			int32_t L_9;
			L_9 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_8, /*hidden argument*/NULL);
			if ((((int32_t)L_9) == ((int32_t)3)))
			{
				goto IL_007f;
			}
		}

IL_0071:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwebRequestU3E5__2_7();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)2))))
			{
				goto IL_00a5;
			}
		}

IL_007f:
		{
			// if (failureDelegate != null)
			RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * L_12 = __this->get_failureDelegate_3();
			if (!L_12)
			{
				goto IL_00e2;
			}
		}

IL_0087:
		{
			// failureDelegate.Invoke(webRequest.error, requestRef);
			RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * L_13 = __this->get_failureDelegate_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwebRequestU3E5__2_7();
			NullCheck(L_14);
			String_t* L_15;
			L_15 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_14, /*hidden argument*/NULL);
			RuntimeObject * L_16 = __this->get_requestRef_4();
			NullCheck(L_13);
			RequestFailureDelegate_Invoke_mF42A0A38B2ABB2B78258F01461527A18490238A9(L_13, L_15, L_16, /*hidden argument*/NULL);
			// }
			goto IL_00e2;
		}

IL_00a5:
		{
			// string jsonText = RemoveCallbackWrapper(webRequest.downloadHandler.text);
			DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * L_17 = V_2;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = __this->get_U3CwebRequestU3E5__2_7();
			NullCheck(L_18);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_19;
			L_19 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_19, /*hidden argument*/NULL);
			NullCheck(L_17);
			String_t* L_21;
			L_21 = DataSourceGOJson_RemoveCallbackWrapper_mBB704999676460271CEEFAEC845934057EAF3E12(L_17, L_20, /*hidden argument*/NULL);
			V_3 = L_21;
			// DataSourceJson.UpdateFromJson(jsonText);
			DataSourceGOJson_t4B4207DC0D552B80B1B82CAE5514D5C3558B6BBA * L_22 = V_2;
			NullCheck(L_22);
			DataSourceJson_t2E24C8022C346C9C7F49E710DCB1CFC63679795C * L_23;
			L_23 = DataSourceGOJson_get_DataSourceJson_m8BBAC95B7DADD8156B675970C18CEF080DEC75F8(L_22, /*hidden argument*/NULL);
			String_t* L_24 = V_3;
			NullCheck(L_23);
			DataSourceJson_UpdateFromJson_m76EA71F7C19264504DE2FBCDD4927E4EFB1ACCF3(L_23, L_24, /*hidden argument*/NULL);
			// if (successDelegate != null)
			RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * L_25 = __this->get_successDelegate_6();
			if (!L_25)
			{
				goto IL_00e2;
			}
		}

IL_00d0:
		{
			// successDelegate.Invoke(jsonText, requestRef);
			RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * L_26 = __this->get_successDelegate_6();
			String_t* L_27 = V_3;
			RuntimeObject * L_28 = __this->get_requestRef_4();
			NullCheck(L_26);
			RequestSuccessDelegate_Invoke_m2D0932872108DA7F55F254CB7106F5CABF4ACDCB(L_26, L_27, L_28, /*hidden argument*/NULL);
		}

IL_00e2:
		{
			// }
			U3CStartJsonRequestU3Ed__7_U3CU3Em__Finally1_m200ADA6834881AA173E896DD489EA5554DB90556(__this, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_7((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00fa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00f3;
	}

FAULT_00f3:
	{ // begin fault (depth: 1)
		U3CStartJsonRequestU3Ed__7_System_IDisposable_Dispose_m9A4EB7C0D7F21520533804369D7CED460405E290(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(243)
	} // end fault
	IL2CPP_CLEANUP(243)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fa:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7_U3CU3Em__Finally1_m200ADA6834881AA173E896DD489EA5554DB90556 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3E5__2_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwebRequestU3E5__2_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartJsonRequestU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0461D17C86BE2F4967404343B1B1084585B2E7DE (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartJsonRequestU3Ed__7_System_Collections_IEnumerator_Reset_mF95B212707DDB193CDF3C8662B09583180D8F362 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartJsonRequestU3Ed__7_System_Collections_IEnumerator_Reset_mF95B212707DDB193CDF3C8662B09583180D8F362_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/<StartJsonRequest>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartJsonRequestU3Ed__7_System_Collections_IEnumerator_get_Current_m93F61D87D70151E58E58EF0E662E8E192E76ABC7 (U3CStartJsonRequestU3Ed__7_tB49444396677B374EFEEF71440360BEEA0F09B3D * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailureDelegate__ctor_m9550834ABA057FD775640BB9B879185BD23196E5 (RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailureDelegate_Invoke_mF42A0A38B2ABB2B78258F01461527A18490238A9 (RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * __this, String_t* ___errorString0, RuntimeObject * ___requestRef1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorString0, ___requestRef1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorString0, ___requestRef1, targetMethod);
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
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___errorString0, ___requestRef1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___errorString0, ___requestRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorString0, ___requestRef1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorString0, ___requestRef1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorString0, ___requestRef1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___errorString0, ___requestRef1);
					else
						GenericVirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___errorString0, ___requestRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorString0, ___requestRef1);
					else
						VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorString0, ___requestRef1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorString0, ___requestRef1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorString0, ___requestRef1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate::BeginInvoke(System.String,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestFailureDelegate_BeginInvoke_m3B5207EDC346FFEDF94CACB77F83B2B714C3D34D (RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * __this, String_t* ___errorString0, RuntimeObject * ___requestRef1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___errorString0;
	__d_args[1] = ___requestRef1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestFailureDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailureDelegate_EndInvoke_m7BA9C14D90FBCBF42DDCF500B933E24EFDD6B781 (RequestFailureDelegate_t36F7FF9FB73DABDE12F3D76E99D42EE2F3F58960 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccessDelegate__ctor_m49B8501CE27B7497D1FD89300C5600CDFB1DDD9F (RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccessDelegate_Invoke_m2D0932872108DA7F55F254CB7106F5CABF4ACDCB (RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * __this, String_t* ___jsonText0, RuntimeObject * ___requestRef1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jsonText0, ___requestRef1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jsonText0, ___requestRef1, targetMethod);
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
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___jsonText0, ___requestRef1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___jsonText0, ___requestRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jsonText0, ___requestRef1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jsonText0, ___requestRef1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jsonText0, ___requestRef1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___jsonText0, ___requestRef1);
					else
						GenericVirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___jsonText0, ___requestRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jsonText0, ___requestRef1);
					else
						VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jsonText0, ___requestRef1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jsonText0, ___requestRef1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jsonText0, ___requestRef1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate::BeginInvoke(System.String,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestSuccessDelegate_BeginInvoke_m500B108F6C3D4E9FAE8D38017E76A3C7C4CA0DF6 (RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * __this, String_t* ___jsonText0, RuntimeObject * ___requestRef1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___jsonText0;
	__d_args[1] = ___requestRef1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceGOJson/RequestSuccessDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestSuccessDelegate_EndInvoke_m1EF00CF0CE1E80000683419F08CAA85FFECC7ADD (RequestSuccessDelegate_t1266679BCCE392AF4E559F157203E88393CB02A7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::.ctor(Microsoft.MixedReality.Toolkit.Data.DataSourceReflection,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionObserver__ctor_mAAD7B67093ED6D1DF0DB03C8CE05DC626F587780 (CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * __this, DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * ___dataSource0, String_t* ___keyPath1, RuntimeObject * ___collection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionObserver_CollectionChangedHandler_m70B2768970E69570103C16B770D992C4DBE935A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEAAD24056F9C67931A53E2EC1B32480575B1F10);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t * V_0 = NULL;
	{
		// public CollectionObserver(DataSourceReflection dataSource, string keyPath, object collection)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// dataSourceToNotify = dataSource;
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_0 = ___dataSource0;
		__this->set_dataSourceToNotify_2(L_0);
		// collectionKeyPath = keyPath;
		String_t* L_1 = ___keyPath1;
		__this->set_collectionKeyPath_1(L_1);
		// collectionToObserve = collection;
		RuntimeObject * L_2 = ___collection2;
		__this->set_collectionToObserve_0(L_2);
		// Delegate collectionChangedHandler = (NotifyCollectionChangedEventHandler)CollectionChangedHandler;
		NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * L_3 = (NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 *)il2cpp_codegen_object_new(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621_il2cpp_TypeInfo_var);
		NotifyCollectionChangedEventHandler__ctor_mF25C1F41D0B942C2B78006C32C9BE89A1D4758C0(L_3, __this, (intptr_t)((intptr_t)CollectionObserver_CollectionChangedHandler_m70B2768970E69570103C16B770D992C4DBE935A1_RuntimeMethod_var), /*hidden argument*/NULL);
		V_0 = L_3;
		// EventInfo collectionChangedEventInfo = collection.GetType().GetEvent("CollectionChanged");
		RuntimeObject * L_4 = ___collection2;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventInfo_t * L_6;
		L_6 = Type_GetEvent_m1CA007B4B4D801535D888D036C0A5DC1E1B02840(L_5, _stringLiteralBEAAD24056F9C67931A53E2EC1B32480575B1F10, /*hidden argument*/NULL);
		// collectionChangedEventInfo.AddEventHandler(collection, collectionChangedHandler);
		RuntimeObject * L_7 = ___collection2;
		Delegate_t * L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< RuntimeObject *, Delegate_t * >::Invoke(18 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_6, L_7, L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/CollectionObserver::CollectionChangedHandler(System.Object,System.Collections.Specialized.NotifyCollectionChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionObserver_CollectionChangedHandler_m70B2768970E69570103C16B770D992C4DBE935A1 (CollectionObserver_t71EA64A344720D5E951A71A8EDA275315BDFC394 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * V_6 = NULL;
	{
		// switch (eventArgs.Action)
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_0 = ___eventArgs1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NotifyCollectionChangedEventArgs_get_Action_mB2E52BFC9F6858B253A21D031B36AABA3B5DA713_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_010d;
			}
			case 3:
			{
				goto IL_010d;
			}
			case 4:
			{
				goto IL_00ed;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_0026:
	{
		// for (int n = 0; n < eventArgs.NewItems.Count; n++)
		V_1 = 0;
		goto IL_0064;
	}

IL_002a:
	{
		// int itemIdx = eventArgs.NewStartingIndex + n;
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_3 = ___eventArgs1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NotifyCollectionChangedEventArgs_get_NewStartingIndex_m6A2892FA50878A3167224773B093E3AC2EBF07B4_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		// string itemKeyPath = dataSourceToNotify.GetNthCollectionKeyPathAt(collectionKeyPath, itemIdx);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_6 = __this->get_dataSourceToNotify_2();
		String_t* L_7 = __this->get_collectionKeyPath_1();
		int32_t L_8 = V_2;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = VirtFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(27 /* System.String Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetNthCollectionKeyPathAt(System.String,System.Int32) */, L_6, L_7, L_8);
		// CollectionItemIdentifier itemIdentifier = new CollectionItemIdentifier(itemKeyPath, itemIdx);
		int32_t L_10 = V_2;
		CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * L_11 = (CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F *)il2cpp_codegen_object_new(CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F_il2cpp_TypeInfo_var);
		CollectionItemIdentifier__ctor_m9E4019FB4C732B08E1CC98852566029A07A74CB4(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// dataSourceToNotify.NotifyCollectionDataChanged(collectionKeyPath, itemIdentifier, DataChangeType.CollectionItemAdded, true);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_12 = __this->get_dataSourceToNotify_2();
		String_t* L_13 = __this->get_collectionKeyPath_1();
		CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * L_14 = V_3;
		NullCheck(L_12);
		DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA(L_12, L_13, L_14, 4, (bool)1, /*hidden argument*/NULL);
		// for (int n = 0; n < eventArgs.NewItems.Count; n++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0064:
	{
		// for (int n = 0; n < eventArgs.NewItems.Count; n++)
		int32_t L_16 = V_1;
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_17 = ___eventArgs1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = NotifyCollectionChangedEventArgs_get_NewItems_m6942B041C79771EA73E94775F0BE42F762BE759E_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_002a;
		}
	}
	{
		// break;
		return;
	}

IL_0073:
	{
		// if (eventArgs.OldStartingIndex == 0)
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_20 = ___eventArgs1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NotifyCollectionChangedEventArgs_get_OldStartingIndex_mF8714953EE064A75DEE9F34574F6FAAD417772E2_inline(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0094;
		}
	}
	{
		// dataSourceToNotify.NotifyCollectionDataChanged(collectionKeyPath, collectionToObserve, DataChangeType.CollectionReset, true);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_22 = __this->get_dataSourceToNotify_2();
		String_t* L_23 = __this->get_collectionKeyPath_1();
		RuntimeObject * L_24 = __this->get_collectionToObserve_0();
		NullCheck(L_22);
		DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA(L_22, L_23, L_24, 3, (bool)1, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// for (int n = eventArgs.OldItems.Count - 1; n >= 0; n--)
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_25 = ___eventArgs1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = NotifyCollectionChangedEventArgs_get_OldItems_m7EA3AF08E09190B1AE3656BDB8283B20FD4F37F6_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_26);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		goto IL_00e7;
	}

IL_00a5:
	{
		// int itemIdx = eventArgs.OldStartingIndex + n;
		NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * L_28 = ___eventArgs1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = NotifyCollectionChangedEventArgs_get_OldStartingIndex_mF8714953EE064A75DEE9F34574F6FAAD417772E2_inline(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		// string itemKeyPath = dataSourceToNotify.GetNthCollectionKeyPathAt(collectionKeyPath, itemIdx);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_31 = __this->get_dataSourceToNotify_2();
		String_t* L_32 = __this->get_collectionKeyPath_1();
		int32_t L_33 = V_5;
		NullCheck(L_31);
		String_t* L_34;
		L_34 = VirtFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(27 /* System.String Microsoft.MixedReality.Toolkit.Data.DataSourceBase::GetNthCollectionKeyPathAt(System.String,System.Int32) */, L_31, L_32, L_33);
		// CollectionItemIdentifier itemIdentifier = new CollectionItemIdentifier(itemKeyPath, itemIdx);
		int32_t L_35 = V_5;
		CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * L_36 = (CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F *)il2cpp_codegen_object_new(CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F_il2cpp_TypeInfo_var);
		CollectionItemIdentifier__ctor_m9E4019FB4C732B08E1CC98852566029A07A74CB4(L_36, L_34, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		// dataSourceToNotify.NotifyCollectionDataChanged(collectionKeyPath, itemIdentifier, DataChangeType.CollectionItemRemoved, true);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_37 = __this->get_dataSourceToNotify_2();
		String_t* L_38 = __this->get_collectionKeyPath_1();
		CollectionItemIdentifier_t51BFD8D88419AC48811D4C0C88D395DC5DED423F * L_39 = V_6;
		NullCheck(L_37);
		DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA(L_37, L_38, L_39, 5, (bool)1, /*hidden argument*/NULL);
		// for (int n = eventArgs.OldItems.Count - 1; n >= 0; n--)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
	}

IL_00e7:
	{
		// for (int n = eventArgs.OldItems.Count - 1; n >= 0; n--)
		int32_t L_41 = V_4;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		// break;
		return;
	}

IL_00ed:
	{
		// dataSourceToNotify.NotifyCollectionDataChanged(collectionKeyPath, collectionToObserve, DataChangeType.CollectionReset, true);
		DataSourceReflection_tB9E588C0C572FE7DAD11F0324C4B9E4ABFB8CF24 * L_42 = __this->get_dataSourceToNotify_2();
		String_t* L_43 = __this->get_collectionKeyPath_1();
		RuntimeObject * L_44 = __this->get_collectionToObserve_0();
		NullCheck(L_42);
		DataSourceReflection_NotifyCollectionDataChanged_mD4C2240ED9EE9E7EF93D822D170067D13CE0E5AA(L_42, L_43, L_44, 3, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0107:
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_45 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CollectionObserver_CollectionChangedHandler_m70B2768970E69570103C16B770D992C4DBE935A1_RuntimeMethod_var)));
	}

IL_010d:
	{
		// }
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_pinvoke(const LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D& unmarshaled, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___memberInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'memberInfo' of type 'LRUItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___memberInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_pinvoke_back(const LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_pinvoke& marshaled, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D& unmarshaled)
{
	Exception_t* ___memberInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'memberInfo' of type 'LRUItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___memberInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_pinvoke_cleanup(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_com(const LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D& unmarshaled, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_com& marshaled)
{
	Exception_t* ___memberInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'memberInfo' of type 'LRUItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___memberInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_com_back(const LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_com& marshaled, LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D& unmarshaled)
{
	Exception_t* ___memberInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'memberInfo' of type 'LRUItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___memberInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem
IL2CPP_EXTERN_C void LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshal_com_cleanup(LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LRUItem_get_Key_m5A409CDAF31031B1696AD87B3DB29DBCF4709FB1 (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, const RuntimeMethod* method)
{
	{
		// public string Key { get; set; }
		String_t* L_0 = __this->get_U3CKeyU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* LRUItem_get_Key_m5A409CDAF31031B1696AD87B3DB29DBCF4709FB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * _thisAdjusted = reinterpret_cast<LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LRUItem_get_Key_m5A409CDAF31031B1696AD87B3DB29DBCF4709FB1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Data.DataSourceReflection/LRUItem::set_Key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUItem_set_Key_m585FF473CAF2EF151E307D6E21272CEC110592ED (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Key { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CKeyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LRUItem_set_Key_m585FF473CAF2EF151E307D6E21272CEC110592ED_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * _thisAdjusted = reinterpret_cast<LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D *>(__this + _offset);
	LRUItem_set_Key_m585FF473CAF2EF151E307D6E21272CEC110592ED_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataSourceGOBase_get_DataSourceType_m345338C0C990F9A55F9E36C92862ADF3CED87C40_inline (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, const RuntimeMethod* method)
{
	{
		// get => dataSourceType;
		String_t* L_0 = __this->get_dataSourceType_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSourceGOBase_set_DataSourceType_m47610AB0B2B05A1232E7782C7EEDDB527FE37284_inline (DataSourceGOBase_t4F41398DA881B7357BB12A2A02B19ACF59484D94 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => dataSourceType = value;
		String_t* L_0 = ___value0;
		__this->set_dataSourceType_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ThemeSelector_get_CurrentTheme_m1A1F07001C9D4805B1120140825B18515C6F1EB9_inline (ThemeSelector_t7554DFEBAF9DBB5CEE3F13D6B3588A1EEEB8B88A * __this, const RuntimeMethod* method)
{
	{
		// return currentTheme;
		int32_t L_0 = __this->get_currentTheme_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_Action_mB2E52BFC9F6858B253A21D031B36AABA3B5DA713_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__action_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_NewStartingIndex_m6A2892FA50878A3167224773B093E3AC2EBF07B4_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__newStartingIndex_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_NewItems_m6942B041C79771EA73E94775F0BE42F762BE759E_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__newItems_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_OldStartingIndex_mF8714953EE064A75DEE9F34574F6FAAD417772E2_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__oldStartingIndex_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_OldItems_m7EA3AF08E09190B1AE3656BDB8283B20FD4F37F6_inline (NotifyCollectionChangedEventArgs_t14F446EE6F071CED56CEB6BC73F3BACCFC95D453 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__oldItems_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LRUItem_get_Key_m5A409CDAF31031B1696AD87B3DB29DBCF4709FB1_inline (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, const RuntimeMethod* method)
{
	{
		// public string Key { get; set; }
		String_t* L_0 = __this->get_U3CKeyU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LRUItem_set_Key_m585FF473CAF2EF151E307D6E21272CEC110592ED_inline (LRUItem_tE1B6C1A9C622B4253B507F4A86FE42E9452DD03D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Key { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CKeyU3Ek__BackingField_0(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m2CCCCA8F2AC3C52BBFDE257E16189AC172B18AEF_gshared_inline (Enumerator_tC65CCC1226A8ADC61C1D0B645D6B48EDC74C7713 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}
