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


// System.Collections.Generic.IEqualityComparer`1<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6B9395AC42C5369E325BCA498211F5889E0E8866;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t261B924C5A81BD7105A5798D8C188A0A50C456C5;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.Serialization.MemberHolder>
struct IEqualityComparer_1_t33A58346F7FA84C153DA0C4B167EE21284B2C96A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct Tables_t665AD6079BA636F540F8847A7B2538FE2B94C493;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.Int32>
struct Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct Tables_tCDE9EFE26740942B74B13ED34F31BF2BB88C17FA;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct Tables_t8CE6AE752F85CECB3D630F846A6EA0AAC3A29400;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Object>
struct Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,System.Func`2<System.Object[],System.Object>>
struct Tables_t57D2E45650734792A8A96BF1AE6678FE5AF83A1C;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D;
struct IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>>
struct NOVTABLE IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7(IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) = 0;
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
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};

// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t665AD6079BA636F540F8847A7B2538FE2B94C493 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94, ____tables_0)); }
	inline Tables_t665AD6079BA636F540F8847A7B2538FE2B94C493 * get__tables_0() const { return ____tables_0; }
	inline Tables_t665AD6079BA636F540F8847A7B2538FE2B94C493 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t665AD6079BA636F540F8847A7B2538FE2B94C493 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____tables_0)); }
	inline Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * get__tables_0() const { return ____tables_0; }
	inline Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>
struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____tables_0)); }
	inline Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * get__tables_0() const { return ____tables_0; }
	inline Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____tables_0)); }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * get__tables_0() const { return ____tables_0; }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tCDE9EFE26740942B74B13ED34F31BF2BB88C17FA * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727, ____tables_0)); }
	inline Tables_tCDE9EFE26740942B74B13ED34F31BF2BB88C17FA * get__tables_0() const { return ____tables_0; }
	inline Tables_tCDE9EFE26740942B74B13ED34F31BF2BB88C17FA ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tCDE9EFE26740942B74B13ED34F31BF2BB88C17FA * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t8CE6AE752F85CECB3D630F846A6EA0AAC3A29400 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D, ____tables_0)); }
	inline Tables_t8CE6AE752F85CECB3D630F846A6EA0AAC3A29400 * get__tables_0() const { return ____tables_0; }
	inline Tables_t8CE6AE752F85CECB3D630F846A6EA0AAC3A29400 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t8CE6AE752F85CECB3D630F846A6EA0AAC3A29400 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____tables_0)); }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * get__tables_0() const { return ____tables_0; }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t57D2E45650734792A8A96BF1AE6678FE5AF83A1C * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7, ____tables_0)); }
	inline Tables_t57D2E45650734792A8A96BF1AE6678FE5AF83A1C * get__tables_0() const { return ____tables_0; }
	inline Tables_t57D2E45650734792A8A96BF1AE6678FE5AF83A1C ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t57D2E45650734792A8A96BF1AE6678FE5AF83A1C * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
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

// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Int32>
struct NOVTABLE IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E(Guid_t  ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Int32>
struct NOVTABLE IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006(Guid_t  ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866(Guid_t  ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0);
il2cpp_hresult_t IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1);
il2cpp_hresult_t IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1);



// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,System.Func`2<System.Object,System.Object>>
struct ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t5B40375D61D2355C123A25B7541EDDDD730E1A94_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>
struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper>, IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816, IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D
{
	inline ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D*>(this);
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
		interfaceIds[0] = IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816::IID;
		interfaceIds[1] = IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006(Guid_t  ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186(Guid_t  ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866(Guid_t  ___key0, int32_t ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D(Guid_t  ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7(IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E(Guid_t  ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4(Guid_t  ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>>
struct ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tE8FCF78F8C1FE14C8E03C21D26945F465B3AE727_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>>
struct ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tEFBF028CBCEE6899DC902D77B5EF8B4EAF26113D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>, IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2
{
	inline ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2*>(this);
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
		interfaceIds[3] = IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID;

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

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tDB580D52AF3666B8825E4A3776115B01EF123DE7_ComCallableWrapper(obj));
}
