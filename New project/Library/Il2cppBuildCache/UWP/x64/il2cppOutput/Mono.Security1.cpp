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

// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D;
// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5;
// System.Security.Cryptography.CspParameters
struct CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC;
// System.Security.Cryptography.DSA
struct DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007;
// Mono.Security.X509.X509Extension
struct X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487;
// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA;
// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1;
// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A;

IL2CPP_EXTERN_C RuntimeClass* ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS1_t1EFBCFDC3430F0E83D50FB99876E117CF52C4E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19;
IL2CPP_EXTERN_C String_t* _stringLiteral1045B6110EDC3126BBD5A19E37F361FC6C1BEF73;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9D5DF8D363B563E3F4B00A79ABC1FCCF634926;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28;
IL2CPP_EXTERN_C String_t* _stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral6F27085477FEF835533F57795ECCC582A399A354;
IL2CPP_EXTERN_C String_t* _stringLiteral713F80EC870389B7162B470F3D04ACB2C5D5A99A;
IL2CPP_EXTERN_C String_t* _stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB;
IL2CPP_EXTERN_C String_t* _stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341;
IL2CPP_EXTERN_C String_t* _stringLiteral7B73AE650FB092AAEEF5A713A7829FD5C6DB2252;
IL2CPP_EXTERN_C String_t* _stringLiteral860E8E41981CF09A35AF77AFF02EC3B0843F918C;
IL2CPP_EXTERN_C String_t* _stringLiteral961BD3F36FA5CCDDE0B6A6F6F9A67C64BB0BC8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E;
IL2CPP_EXTERN_C String_t* _stringLiteral99226315FDF5AD4FC8F149EACEFFD00809BB7E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD;
IL2CPP_EXTERN_C String_t* _stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6;
IL2CPP_EXTERN_C String_t* _stringLiteralE27CA3F3042EF2220CE3FB15F5626369069FFC3E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E;
IL2CPP_EXTERN_C const RuntimeMethod* ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_RightShift_m609BADF35E34FDE8AF59E5BA07E5224F7C194541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_modInverse_mF0EFBFDE4FB6CF7E807BDB10EAB681452C8B27D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection__ctor_m8EBE054B35F089A5E46889F53CFB3D16B6FAD07A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_aValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___elist_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elist_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
};


// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___data_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};

struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallPrimes_2), (void*)value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rng_3), (void*)value);
	}
};


// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Security.Cryptography.CspParameters
struct CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;

public:
	inline static int32_t get_offset_of_ProviderType_0() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___ProviderType_0)); }
	inline int32_t get_ProviderType_0() const { return ___ProviderType_0; }
	inline int32_t* get_address_of_ProviderType_0() { return &___ProviderType_0; }
	inline void set_ProviderType_0(int32_t value)
	{
		___ProviderType_0 = value;
	}

	inline static int32_t get_offset_of_ProviderName_1() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___ProviderName_1)); }
	inline String_t* get_ProviderName_1() const { return ___ProviderName_1; }
	inline String_t** get_address_of_ProviderName_1() { return &___ProviderName_1; }
	inline void set_ProviderName_1(String_t* value)
	{
		___ProviderName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProviderName_1), (void*)value);
	}

	inline static int32_t get_offset_of_KeyContainerName_2() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___KeyContainerName_2)); }
	inline String_t* get_KeyContainerName_2() const { return ___KeyContainerName_2; }
	inline String_t** get_address_of_KeyContainerName_2() { return &___KeyContainerName_2; }
	inline void set_KeyContainerName_2(String_t* value)
	{
		___KeyContainerName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyContainerName_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyNumber_3() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___KeyNumber_3)); }
	inline int32_t get_KeyNumber_3() const { return ___KeyNumber_3; }
	inline int32_t* get_address_of_KeyNumber_3() { return &___KeyNumber_3; }
	inline void set_KeyNumber_3(int32_t value)
	{
		___KeyNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___m_flags_4)); }
	inline int32_t get_m_flags_4() const { return ___m_flags_4; }
	inline int32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(int32_t value)
	{
		___m_flags_4 = value;
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


// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
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

// Mono.Security.X509.X509Extension
struct X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extnOid_0), (void*)value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096, ___extnValue_2)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extnValue_2), (void*)value);
	}
};


// Mono.Security.X509.X509Store
struct X509Store_t9E8C718CDF565BF8C8547407070D69F07D051E06  : public RuntimeObject
{
public:

public:
};


// Mono.Math.BigInteger/Kernel
struct Kernel_tF5EF3E9BB3524F5D50896C4825A177A366B38E7E  : public RuntimeObject
{
public:

public:
};


// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA, ___mod_0)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mod_0), (void*)value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA, ___constant_1)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constant_1), (void*)value);
	}
};


// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashName_3), (void*)value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A, ____password_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_5), (void*)value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A, ____salt_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____salt_6), (void*)value);
	}
};

struct DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyDiversifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ivDiversifier_1), (void*)value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___macDiversifier_2), (void*)value);
	}
};


// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2, ___content_1)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_content_1() const { return ___content_1; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_1), (void*)value);
	}
};


// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____content_1)); }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * get__content_1() const { return ____content_1; }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_1), (void*)value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____encryptionAlgorithm_2)); }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encryptionAlgorithm_2), (void*)value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____encrypted_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encrypted_3), (void*)value);
	}
};


// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____algorithm_0), (void*)value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____salt_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____salt_1), (void*)value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}
};


// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____algorithm_1), (void*)value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____key_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_2), (void*)value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____list_3)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_3() const { return ____list_3; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_3), (void*)value);
	}
};


// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Security.Cryptography.DSA
struct DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Security.Cryptography.DSAParameters
struct DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___P_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_0), (void*)value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Q_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_1), (void*)value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___G_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___G_2), (void*)value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Y_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Y_3), (void*)value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___J_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___J_4), (void*)value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___X_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X_5), (void*)value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Seed_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Seed_6), (void*)value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
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


// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Exponent_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Modulus_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modulus_1), (void*)value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___P_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_2), (void*)value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Q_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_3), (void*)value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DP_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DP_4), (void*)value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DQ_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DQ_5), (void*)value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___InverseQ_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InverseQ_6), (void*)value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___D_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0 
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
		uint8_t __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0__padding[10];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D 
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
		uint8_t __StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D__padding[14];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14 
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
		uint8_t __StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14__padding[20];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B 
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
		uint8_t __StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 
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
		uint8_t __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900__padding[3];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct __StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF 
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
		uint8_t __StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF__padding[3132];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086__padding[32];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B 
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
		uint8_t __StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B__padding[48];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E 
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
		uint8_t __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E__padding[64];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A__padding[9];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1;
	// System.Int64 <PrivateImplementationDetails>::16968835DEF6DD3BB86EABA9DEC53BF41851CD6D
	int64_t ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  ___56DFA5053B3131883637F53219E7D88CCEF35949_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11;
	// System.Int64 <PrivateImplementationDetails>::6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF
	int64_t ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___736D39815215889F11249D9958F6ED12D37B9F57_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___86F4F563FA2C61798AE6238D789139739428463A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18;
	// System.Int64 <PrivateImplementationDetails>::AEA5F1CC5CFE1660539EDD691FE017F775F63A0D
	int64_t ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D2C5BAE967587C6F3D9F2C4551911E0575A1101F
	__StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B  ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  ___E75835D001C843F156FBA01B001DFE1B8029AC17_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27;

public:
	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1 = value;
	}

	inline static int32_t get_offset_of_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2)); }
	inline int64_t get_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() const { return ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2; }
	inline int64_t* get_address_of_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() { return &___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2; }
	inline void set_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2(int64_t value)
	{
		___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5)); }
	inline __StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5; }
	inline __StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5(__StaticArrayInitTypeSizeU3D14_t63F0087268E7BCA0CCB29A376C4A38B2A83B655D  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6)); }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6; }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6(__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8)); }
	inline __StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8; }
	inline __StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8(__StaticArrayInitTypeSizeU3D48_t4A4887119F3A0506541D52ECDF4B942B0D4E0C5B  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_9)); }
	inline __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  get_U356DFA5053B3131883637F53219E7D88CCEF35949_9() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_9; }
	inline __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_9() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_9; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_9(__StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_9 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10)); }
	inline __StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10; }
	inline __StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10(__StaticArrayInitTypeSizeU3D9_t68D16EA7963A316576AA6C483FD18BF5E59C4B6A  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11)); }
	inline __StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11; }
	inline __StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11(__StaticArrayInitTypeSizeU3D3132_t5266AB6A989A53DCA2DA55008971D1317A7CD1BF  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11 = value;
	}

	inline static int32_t get_offset_of_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12)); }
	inline int64_t get_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() const { return ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12; }
	inline int64_t* get_address_of_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() { return &___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12; }
	inline void set_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12(int64_t value)
	{
		___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_13)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U3736D39815215889F11249D9958F6ED12D37B9F57_13() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_13; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_13() { return &___736D39815215889F11249D9958F6ED12D37B9F57_13; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_13(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_13 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_14)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U386F4F563FA2C61798AE6238D789139739428463A_14() const { return ___86F4F563FA2C61798AE6238D789139739428463A_14; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_14() { return &___86F4F563FA2C61798AE6238D789139739428463A_14; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_14(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_14 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16)); }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16; }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16(__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_18; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_18(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_18 = value;
	}

	inline static int32_t get_offset_of_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19)); }
	inline int64_t get_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() const { return ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19; }
	inline int64_t* get_address_of_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() { return &___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19; }
	inline void set_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19(int64_t value)
	{
		___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20)); }
	inline __StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20; }
	inline __StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14 * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20(__StaticArrayInitTypeSizeU3D20_t0B723519EBE6CB53DFE4ACB86CB779616C611E14  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22)); }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22; }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22(__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23)); }
	inline __StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23; }
	inline __StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086 * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23(__StaticArrayInitTypeSizeU3D32_t69DCCD3023A0F8B0040015CE0990995B5CE76086  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23 = value;
	}

	inline static int32_t get_offset_of_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24)); }
	inline __StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B  get_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() const { return ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24; }
	inline __StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B * get_address_of_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() { return &___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24; }
	inline void set_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24(__StaticArrayInitTypeSizeU3D256_t73856C5D7D313055A5519AD1783C05586D36B76B  value)
	{
		___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_25)); }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  get_E75835D001C843F156FBA01B001DFE1B8029AC17_25() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_25; }
	inline __StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_25() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_25; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_25(__StaticArrayInitTypeSizeU3D64_tCC10F0E5623056225F779E85ED6B59085EF1592E  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_25 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26)); }
	inline __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26; }
	inline __StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26(__StaticArrayInitTypeSizeU3D10_tCFA3D2B97B642FF1E9FC9C28270437D5A80B56A0  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27)); }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27; }
	inline __StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27(__StaticArrayInitTypeSizeU3D3_t41E631AB71813DBEBDB3979E222418FF6F661900  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27 = value;
	}
};


// System.Security.Cryptography.CspProviderFlags
struct CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ____rsa_14;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ____dsa_15;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serialnumber_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___issuerUniqueID_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___subjectUniqueID_19;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * ___extensions_20;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___decoder_0)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_encodedcert_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encodedcert_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_from_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_until_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuer_4)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_issuername_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgo_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgoparams_7), (void*)value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subject_8)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_subject_8() const { return ___subject_8; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_publickey_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_publickey_10), (void*)value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___signature_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgoparams_13), (void*)value);
	}

	inline static int32_t get_offset_of__rsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____rsa_14)); }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * get__rsa_14() const { return ____rsa_14; }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B ** get_address_of__rsa_14() { return &____rsa_14; }
	inline void set__rsa_14(RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * value)
	{
		____rsa_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rsa_14), (void*)value);
	}

	inline static int32_t get_offset_of__dsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____dsa_15)); }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * get__dsa_15() const { return ____dsa_15; }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 ** get_address_of__dsa_15() { return &____dsa_15; }
	inline void set__dsa_15(DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * value)
	{
		____dsa_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dsa_15), (void*)value);
	}

	inline static int32_t get_offset_of_version_16() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___version_16)); }
	inline int32_t get_version_16() const { return ___version_16; }
	inline int32_t* get_address_of_version_16() { return &___version_16; }
	inline void set_version_16(int32_t value)
	{
		___version_16 = value;
	}

	inline static int32_t get_offset_of_serialnumber_17() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___serialnumber_17)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_serialnumber_17() const { return ___serialnumber_17; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_serialnumber_17() { return &___serialnumber_17; }
	inline void set_serialnumber_17(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___serialnumber_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialnumber_17), (void*)value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuerUniqueID_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_issuerUniqueID_18() const { return ___issuerUniqueID_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_issuerUniqueID_18() { return &___issuerUniqueID_18; }
	inline void set_issuerUniqueID_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___issuerUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuerUniqueID_18), (void*)value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subjectUniqueID_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_subjectUniqueID_19() const { return ___subjectUniqueID_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_subjectUniqueID_19() { return &___subjectUniqueID_19; }
	inline void set_subjectUniqueID_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___subjectUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectUniqueID_19), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_20() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___extensions_20)); }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * get_extensions_20() const { return ___extensions_20; }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 ** get_address_of_extensions_20() { return &___extensions_20; }
	inline void set_extensions_20(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * value)
	{
		___extensions_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_20), (void*)value);
	}
};

struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_21;

public:
	inline static int32_t get_offset_of_encoding_error_21() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields, ___encoding_error_21)); }
	inline String_t* get_encoding_error_21() const { return ___encoding_error_21; }
	inline String_t** get_address_of_encoding_error_21() { return &___encoding_error_21; }
	inline void set_encoding_error_21(String_t* value)
	{
		___encoding_error_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_error_21), (void*)value);
	}
};


// Mono.Math.BigInteger/Sign
struct Sign_tBC452D61C7C5A6CFBD54BF3FD5675D925EC6A89B 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_tBC452D61C7C5A6CFBD54BF3FD5675D925EC6A89B, ___value___2)); }
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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_3)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_3), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_8)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_8), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * m_Items[1];

public:
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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



// System.Void System.Collections.CollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase__ctor_mC65199871A81FB0FF4071DF95CD38D5ECEBEE1A4 (CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mA4B27732F618D126931E8402D567F66D798652BE (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_m3BD78211E43E218299519AF5F88401FB04125D5E (X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * CollectionBase_get_InnerList_m6489379165DADB6E706A8748F9E4BAE99DE62C1F (CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, int32_t ___sign0, uint32_t ___len1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Implicit_m1FC11FDE7ECF4D251F510EF8EB9DC9B5357D742F (uint32_t ___value0, const RuntimeMethod* method);
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_m2C45218B8EE4E2ECDC85068A37BDB93E07FA5858 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104 (int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9C372289E672EC45500A2346BD39BCBBB1B1E111 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, const RuntimeMethod* method);
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* Kernel_DwordDivMod_mA55718811BFF0286A3DB25B4EEF0B0FF005BB2B5 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___n0, uint32_t ___d1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_LeftShift_mD63F9627F80FBAF4DE122CE66DC18FC3BF54EC64 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_RightShift_m908AD9F9676FCE3A9AFB5A75E2ACA708E584B10D (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m32F3FC1BBD22BBD41BEF443E9D510555DDD336C1 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, uint32_t ___len1, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m09E68D30D670ED308F34F02EBC047FD60B91D78F (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, uint32_t ___ui1, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_mAE70326F9AD6797DD3FC42DE574E855FB63EFAB4 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, uint32_t ___modulus1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_m97D99B27E28AB20BBE2836B04D5466DA81456BCC (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___modulus0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Multiply_m28820029500895BCAE0C547024B6BD72A9688500 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___b1, const RuntimeMethod* method);
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* Kernel_multiByteDivide_mEB8FB4B5D405F43102EF158131E33806DF03588B (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m6B8B6D52141713E7267691469F79A0990DBB5E63 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, uint32_t ___ui1, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mF0A8511D61010600F89D30A110198F5E63D5DFE5 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Division_mBB896F6E9247AB3B3D47E1B125624FA68EE5C4EC (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m47EE24F797DD6009167F0F5B9059C72CBD31D8CD (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_mE8E796D86E0098053DEF7755FF1605D774AAED49 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m4225BB4FF0A26B307FD6C34A44CCA3BFB104BC30 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_m0A41AF713CCF44AB62FD5E1288AA2C5BD470E967 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___big0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___small1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m4C2965A8B169E32B98FE7A60AE8C09505428B246 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m34669FCE574F8B3EF00808F69DB97CA5504D2C85 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m8C3BE7CDEE443C682DB5E7DDCDF69293D773D663 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, uint32_t ___ui1, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m67BB32BE6636B141DD00245C130BE236C8C18A9C (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Modulus_mF4B55A9D8FCFF2B70A1A55BA31A6E0D75367D779 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___x0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * BigInteger_op_Subtraction_mEB2B6795E0AF13288A96D87826031CEC054E6052 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m2D9EC292E7198117AACAD6C1306C971BC74B5E83 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, uint32_t ___ui0, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m42A773C5309B8F9B3441C33FC07FFD5022EC9029 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, int32_t ___bitNum0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Multiply_m3246E3E3C60AA391E6D442E9CE85AF73C972AAB8 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___b1, const RuntimeMethod* method);
// System.Int32 Mono.Math.BigInteger::BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m45B7662F932C61BE4F5587C5C54C09F04B186825 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * __this, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Pow_m6AA03EF88208478DB150ADF4E8ABC327B2369192 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___k1, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.PKCS1::CreateFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * PKCS1_CreateFromName_mBBB3D4843B9B1E678C85DDAD8EDE2FDF8169D7B5 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashAlgorithm_TransformBlock_mC2D44001FB38682B4BDFBD9D8C9C3D79922E9972 (HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HashAlgorithm_TransformFinalBlock_m0FF6D2A6326D05E043C229FAFF24318F7751F5A7 (HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HashAlgorithm_ComputeHash_m18D758AA4A5FDB6132C9DA8BB7445D774D71FBA2 (HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_Adjust_mD75D44B02A7BD2A607D6B00853917CA6096A9259 (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, int32_t ___aOff1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b2, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeriveBytes_Derive_mCDAFFDF120F6CD3F058A5A86FA1F4D9DC735850F (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___diversifier0, int32_t ___n1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB (String_t* ___oid0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * RandomNumberGenerator_Create_m04A5418F8572F0498EE0659633B4C0620CB55721 (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, int32_t ___length1, const RuntimeMethod* method);
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * RSA_Create_m044F1B4384248B4C9FEA4DAB01DB85B0A829A383 (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CspParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters__ctor_mA5F11E1EA0F0841876916834296DD6C49A0D5978 (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters_set_Flags_m73AF2CE4BA5726935B70AD6242491B14C7294A55 (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m044CC794956315D9C47B26A043EE435534EFFAB1 (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * __this, CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * ___parameters0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromUnsignedBigInteger(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___big0, const RuntimeMethod* method);
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * DSA_Create_m1BB98278D12EF7F48DDF0B52FCF7CA0602AFC618 (const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ___rsa0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139 (DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ___dsa0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE2C0822BD84EF90D7851CC9D164E187DED6EADF1 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___format0, String_t* ___insert1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mA4B27732F618D126931E8402D567F66D798652BE (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mC65199871A81FB0FF4071DF95CD38D5ECEBEE1A4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m8EBE054B35F089A5E46889F53CFB3D16B6FAD07A (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096 * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_mA4B27732F618D126931E8402D567F66D798652BE(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral961BD3F36FA5CCDDE0B6A6F6F9A67C64BB0BC8C1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ExtensionCollection__ctor_m8EBE054B35F089A5E46889F53CFB3D16B6FAD07A_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096 * L_7 = (X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096 *)il2cpp_codegen_object_new(X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096_il2cpp_TypeInfo_var);
		X509Extension__ctor_m3BD78211E43E218299519AF5F88401FB04125D5E(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_8;
		L_8 = CollectionBase_get_InnerList_m6489379165DADB6E706A8748F9E4BAE99DE62C1F(__this, /*hidden argument*/NULL);
		X509Extension_tEA3DC87C439C9992FFCBBAD363A9FBF5A73AB096 * L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_12 = V_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_13 = ___asn10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m5EFA7D8288E00B93FE4BFEBA2C380B444B7D0077 (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0;
		L_0 = CollectionBase_get_InnerList_m6489379165DADB6E706A8748F9E4BAE99DE62C1F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
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
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * Kernel_Subtract_mF62E0A4C04E4DCE6C4F66719F57DED7BD71BD9B7 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___big0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___small1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_0 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_2 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___big0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_2, 1, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = L_3->get_data_1();
		V_1 = L_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___big0;
		NullCheck(L_5);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = L_5->get_data_1();
		V_2 = L_6;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7 = ___small1;
		NullCheck(L_7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = L_7->get_data_1();
		V_3 = L_8;
		V_4 = 0;
		V_5 = 0;
	}

IL_0028:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = V_3;
		uint32_t L_10 = V_4;
		NullCheck(L_9);
		uint32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		uint32_t L_13 = V_6;
		uint32_t L_14 = V_5;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		V_6 = L_15;
		uint32_t L_16 = V_5;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = V_1;
		uint32_t L_18 = V_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = V_2;
		uint32_t L_20 = V_4;
		NullCheck(L_19);
		uint32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint32_t L_23 = V_6;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
		V_7 = L_24;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_24);
		uint32_t L_25 = V_7;
		uint32_t L_26 = V_6;
		if (!((int32_t)((int32_t)((!(((uint32_t)L_15) >= ((uint32_t)L_16)))? 1 : 0)|(int32_t)((!(((uint32_t)L_25) <= ((uint32_t)((~L_26)))))? 1 : 0))))
		{
			goto IL_0057;
		}
	}
	{
		V_5 = 1;
		goto IL_005a;
	}

IL_0057:
	{
		V_5 = 0;
	}

IL_005a:
	{
		uint32_t L_27 = V_4;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		V_4 = L_28;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_29 = ___small1;
		NullCheck(L_29);
		uint32_t L_30 = L_29->get_length_0();
		if ((!(((uint32_t)L_28) >= ((uint32_t)L_30))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_31 = V_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_32 = ___big0;
		NullCheck(L_32);
		uint32_t L_33 = L_32->get_length_0();
		if ((((int32_t)L_31) == ((int32_t)L_33)))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_34 = V_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}

IL_0078:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_35 = V_1;
		uint32_t L_36 = V_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_37 = V_2;
		uint32_t L_38 = V_4;
		NullCheck(L_37);
		uint32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_41 = V_2;
		uint32_t L_42 = V_4;
		uint32_t L_43 = L_42;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		NullCheck(L_41);
		uint32_t L_44 = L_43;
		uint32_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_46 = V_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->get_length_0();
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_48))))
		{
			goto IL_0078;
		}
	}

IL_0097:
	{
		uint32_t L_49 = V_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_50 = ___big0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->get_length_0();
		if ((((int32_t)L_49) == ((int32_t)L_51)))
		{
			goto IL_00b8;
		}
	}

IL_00a1:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_52 = V_1;
		uint32_t L_53 = V_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_54 = V_2;
		uint32_t L_55 = V_4;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint32_t)L_57);
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		V_4 = L_59;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_60 = ___big0;
		NullCheck(L_60);
		uint32_t L_61 = L_60->get_length_0();
		if ((!(((uint32_t)L_59) >= ((uint32_t)L_61))))
		{
			goto IL_00a1;
		}
	}

IL_00b8:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_62 = V_0;
		NullCheck(L_62);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_62, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_63 = V_0;
		return L_63;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_m0A41AF713CCF44AB62FD5E1288AA2C5BD470E967 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___big0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___small1, const RuntimeMethod* method)
{
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___big0;
		NullCheck(L_0);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0->get_data_1();
		V_0 = L_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___small1;
		NullCheck(L_2);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = L_2->get_data_1();
		V_1 = L_3;
		V_2 = 0;
		V_3 = 0;
	}

IL_0012:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = V_1;
		uint32_t L_5 = V_2;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		uint32_t L_8 = V_4;
		uint32_t L_9 = V_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		V_4 = L_10;
		uint32_t L_11 = V_3;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = V_0;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		uint32_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16 = V_4;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		V_5 = L_17;
		*((int32_t*)L_14) = (int32_t)L_17;
		uint32_t L_18 = V_5;
		uint32_t L_19 = V_4;
		if (!((int32_t)((int32_t)((!(((uint32_t)L_10) >= ((uint32_t)L_11)))? 1 : 0)|(int32_t)((!(((uint32_t)L_18) <= ((uint32_t)((~L_19)))))? 1 : 0))))
		{
			goto IL_003f;
		}
	}
	{
		V_3 = 1;
		goto IL_0041;
	}

IL_003f:
	{
		V_3 = 0;
	}

IL_0041:
	{
		uint32_t L_20 = V_2;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		V_2 = L_21;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_22 = ___small1;
		NullCheck(L_22);
		uint32_t L_23 = L_22->get_length_0();
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_23))))
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_24 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_25 = ___big0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->get_length_0();
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_27 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}

IL_005b:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_28 = V_0;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		int32_t L_31 = *((uint32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_32 = V_0;
		uint32_t L_33 = V_2;
		uint32_t L_34 = L_33;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (L_36)
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_37 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_38 = ___big0;
		NullCheck(L_38);
		uint32_t L_39 = L_38->get_length_0();
		if ((!(((uint32_t)L_37) >= ((uint32_t)L_39))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0089;
	}

IL_007b:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_40 = ___big0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_41 = L_40;
		NullCheck(L_41);
		uint32_t L_42 = L_41->get_length_0();
		NullCheck(L_41);
		L_41->set_length_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)));
	}

IL_0089:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_43 = ___big0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->get_length_0();
		if ((!(((uint32_t)L_44) > ((uint32_t)0))))
		{
			goto IL_00a3;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_45 = ___big0;
		NullCheck(L_45);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_46 = L_45->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->get_length_0();
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_007b;
		}
	}

IL_00a3:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_51 = ___big0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->get_length_0();
		if (L_52)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_53 = ___big0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_54 = L_53;
		NullCheck(L_54);
		uint32_t L_55 = L_54->get_length_0();
		NullCheck(L_54);
		L_54->set_length_0(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
	}

IL_00b9:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m4C2965A8B169E32B98FE7A60AE8C09505428B246 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method)
{
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_6 = NULL;
	uint64_t V_7 = 0;
	bool V_8 = false;
	uint32_t V_9 = 0;
	{
		V_4 = 0;
		V_5 = (bool)0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->get_length_0();
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		V_5 = (bool)1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = ___bi21;
		NullCheck(L_4);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = L_4->get_data_1();
		V_0 = L_5;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_6 = ___bi21;
		NullCheck(L_6);
		uint32_t L_7 = L_6->get_length_0();
		V_3 = L_7;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = ___bi10;
		NullCheck(L_8);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = L_8->get_data_1();
		V_1 = L_9;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10 = ___bi10;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_length_0();
		V_2 = L_11;
		goto IL_0051;
	}

IL_0035:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_12 = ___bi10;
		NullCheck(L_12);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = L_12->get_data_1();
		V_0 = L_13;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_14 = ___bi10;
		NullCheck(L_14);
		uint32_t L_15 = L_14->get_length_0();
		V_3 = L_15;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = L_16->get_data_1();
		V_1 = L_17;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_18 = ___bi21;
		NullCheck(L_18);
		uint32_t L_19 = L_18->get_length_0();
		V_2 = L_19;
	}

IL_0051:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_20 = ___bi10;
		NullCheck(L_20);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_21 = L_20->get_data_1();
		V_6 = L_21;
		V_7 = ((int64_t)((int64_t)0));
	}

IL_005d:
	{
		uint64_t L_22 = V_7;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_23 = V_0;
		uint32_t L_24 = V_4;
		NullCheck(L_23);
		uint32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_27 = V_1;
		uint32_t L_28 = V_4;
		NullCheck(L_27);
		uint32_t L_29 = L_28;
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_26)), (int64_t)((int64_t)((uint64_t)L_30))))));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_31 = V_6;
		uint32_t L_32 = V_4;
		uint64_t L_33 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)((uint32_t)L_33)));
		uint64_t L_34 = V_7;
		V_7 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint32_t L_35 = V_4;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		V_4 = L_36;
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_38 = V_7;
		V_8 = (bool)((!(((uint64_t)L_38) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_3;
		if ((!(((uint32_t)L_40) < ((uint32_t)L_41))))
		{
			goto IL_00bb;
		}
	}

IL_0097:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_42 = V_6;
		uint32_t L_43 = V_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_44 = V_0;
		uint32_t L_45 = V_4;
		NullCheck(L_44);
		uint32_t L_46 = L_45;
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		V_9 = L_48;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint32_t)L_48);
		uint32_t L_49 = V_9;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		uint32_t L_50 = V_4;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		V_4 = L_51;
		uint32_t L_52 = V_3;
		bool L_53 = V_8;
		if (((int32_t)((int32_t)((!(((uint32_t)L_51) >= ((uint32_t)L_52)))? 1 : 0)&(int32_t)L_53)))
		{
			goto IL_0097;
		}
	}

IL_00bb:
	{
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_00d3;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_55 = V_6;
		uint32_t L_56 = V_4;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint32_t)1);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_57 = ___bi10;
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		V_4 = L_59;
		NullCheck(L_57);
		L_57->set_length_0(L_59);
		return;
	}

IL_00d3:
	{
		bool L_60 = V_5;
		if (!L_60)
		{
			goto IL_00f1;
		}
	}
	{
		uint32_t L_61 = V_4;
		uint32_t L_62 = V_3;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1))))))
		{
			goto IL_00f1;
		}
	}

IL_00de:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_63 = V_6;
		uint32_t L_64 = V_4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_65 = V_0;
		uint32_t L_66 = V_4;
		NullCheck(L_65);
		uint32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		uint32_t L_69 = V_4;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		V_4 = L_70;
		uint32_t L_71 = V_3;
		if ((!(((uint32_t)L_70) >= ((uint32_t)L_71))))
		{
			goto IL_00de;
		}
	}

IL_00f1:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_72 = ___bi10;
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		L_72->set_length_0(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_74 = ___bi10;
		NullCheck(L_74);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_74, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_m2C45218B8EE4E2ECDC85068A37BDB93E07FA5858 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		V_0 = L_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->get_length_0();
		V_1 = L_3;
		goto IL_0014;
	}

IL_0010:
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_6 = ___bi10;
		NullCheck(L_6);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = L_6->get_data_1();
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_002a:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_003a;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_13 = ___bi21;
		NullCheck(L_13);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_14 = L_13->get_data_1();
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0026;
		}
	}

IL_003a:
	{
		uint32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_19 = V_1;
		if (L_19)
		{
			goto IL_0042;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0042:
	{
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_20) < ((uint32_t)L_21))))
		{
			goto IL_0048;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0048:
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		if ((!(((uint32_t)L_22) > ((uint32_t)L_23))))
		{
			goto IL_004e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_004e:
	{
		uint32_t L_24 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_0058;
	}

IL_0054:
	{
		uint32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0058:
	{
		uint32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_27 = ___bi10;
		NullCheck(L_27);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_28 = L_27->get_data_1();
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_32 = ___bi21;
		NullCheck(L_32);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_33 = L_32->get_data_1();
		uint32_t L_34 = V_2;
		NullCheck(L_33);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_31) == ((int32_t)L_36)))
		{
			goto IL_0054;
		}
	}

IL_006d:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_37 = ___bi10;
		NullCheck(L_37);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_38 = L_37->get_data_1();
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_42 = ___bi21;
		NullCheck(L_42);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_43 = L_42->get_data_1();
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		uint32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_46))))
		{
			goto IL_0081;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0081:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_47 = ___bi10;
		NullCheck(L_47);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_48 = L_47->get_data_1();
		uint32_t L_49 = V_2;
		NullCheck(L_48);
		uint32_t L_50 = L_49;
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_52 = ___bi21;
		NullCheck(L_52);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_53 = L_52->get_data_1();
		uint32_t L_54 = V_2;
		NullCheck(L_53);
		uint32_t L_55 = L_54;
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_51) > ((uint32_t)L_56))))
		{
			goto IL_0095;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0095:
	{
		return (int32_t)(0);
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_mA797A6BBEB759D97847E10A6A8B8ADD53B5B8F27 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		V_1 = L_1;
		goto IL_002f;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<(int32_t)((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = L_4->get_data_1();
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|(int64_t)((int64_t)((uint64_t)L_8))));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = ___n0;
		NullCheck(L_9);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = L_9->get_data_1();
		uint32_t L_11 = V_1;
		uint64_t L_12 = V_0;
		uint32_t L_13 = ___d1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)((int64_t)((uint64_t)L_13)))))));
		uint64_t L_14 = V_0;
		uint32_t L_15 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_14%(uint64_t)(int64_t)((int64_t)((uint64_t)L_15))));
	}

IL_002f:
	{
		uint32_t L_16 = V_1;
		uint32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		if ((!(((uint32_t)L_17) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_18 = ___n0;
		NullCheck(L_18);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_18, /*hidden argument*/NULL);
		uint64_t L_19 = V_0;
		return ((int32_t)((uint32_t)L_19));
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m174B02D0DE310C71A61CEE61C44274FB706FE5DE (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		V_1 = L_1;
		goto IL_0022;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<(int32_t)((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = L_4->get_data_1();
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|(int64_t)((int64_t)((uint64_t)L_8))));
		uint64_t L_9 = V_0;
		uint32_t L_10 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_9%(uint64_t)(int64_t)((int64_t)((uint64_t)L_10))));
	}

IL_0022:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		if ((!(((uint32_t)L_12) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_13 = V_0;
		return ((int32_t)((uint32_t)L_13));
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* Kernel_DwordDivMod_mA55718811BFF0286A3DB25B4EEF0B0FF005BB2B5 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_0 = NULL;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_3 = NULL;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_2, 1, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = ((int64_t)((int64_t)0));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_3 = ___n0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->get_length_0();
		V_2 = L_4;
		goto IL_003c;
	}

IL_0019:
	{
		uint64_t L_5 = V_1;
		V_1 = ((int64_t)((int64_t)L_5<<(int32_t)((int32_t)32)));
		uint64_t L_6 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7 = ___n0;
		NullCheck(L_7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = L_7->get_data_1();
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int64_t)((int64_t)L_6|(int64_t)((int64_t)((uint64_t)L_11))));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = L_12->get_data_1();
		uint32_t L_14 = V_2;
		uint64_t L_15 = V_1;
		uint32_t L_16 = ___d1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_15/(uint64_t)(int64_t)((int64_t)((uint64_t)L_16)))))));
		uint64_t L_17 = V_1;
		uint32_t L_18 = ___d1;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_17%(uint64_t)(int64_t)((int64_t)((uint64_t)L_18))));
	}

IL_003c:
	{
		uint32_t L_19 = V_2;
		uint32_t L_20 = L_19;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		if ((!(((uint32_t)L_20) <= ((uint32_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21 = V_0;
		NullCheck(L_21);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_21, /*hidden argument*/NULL);
		uint64_t L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_23;
		L_23 = BigInteger_op_Implicit_m1FC11FDE7ECF4D251F510EF8EB9DC9B5357D742F(((int32_t)((uint32_t)L_22)), /*hidden argument*/NULL);
		V_3 = L_23;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_24 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_25 = L_24;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_26);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_27 = L_25;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_28 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_28);
		return L_27;
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* Kernel_multiByteDivide_mEB8FB4B5D405F43102EF158131E33806DF03588B (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi10, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_6 = NULL;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_7 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* V_13 = NULL;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint64_t V_19 = 0;
	uint32_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___bi10;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_m2C45218B8EE4E2ECDC85068A37BDB93E07FA5858(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_3 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5;
		L_5 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_5);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_6 = L_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7 = ___bi10;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9C372289E672EC45500A2346BD39BCBBB1B1E111(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_8);
		return L_6;
	}

IL_0023:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = ___bi10;
		NullCheck(L_9);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_9, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10 = ___bi21;
		NullCheck(L_10);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_10, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11 = ___bi21;
		NullCheck(L_11);
		uint32_t L_12 = L_11->get_length_0();
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_13 = ___bi10;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_15 = L_14->get_data_1();
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_18;
		L_18 = Kernel_DwordDivMod_mA55718811BFF0286A3DB25B4EEF0B0FF005BB2B5(L_13, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0047:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19 = ___bi10;
		NullCheck(L_19);
		uint32_t L_20 = L_19->get_length_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21 = ___bi21;
		NullCheck(L_21);
		uint32_t L_22 = L_21->get_length_0();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		V_2 = ((int32_t)-2147483648LL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_23 = ___bi21;
		NullCheck(L_23);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_24 = L_23->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_25 = ___bi21;
		NullCheck(L_25);
		uint32_t L_26 = L_25->get_length_0();
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		uint32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		V_4 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_29 = ___bi10;
		NullCheck(L_29);
		uint32_t L_30 = L_29->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_31 = ___bi21;
		NullCheck(L_31);
		uint32_t L_32 = L_31->get_length_0();
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_32));
		goto IL_008d;
	}

IL_0083:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		uint32_t L_34 = V_2;
		V_2 = ((int32_t)((uint32_t)L_34>>1));
	}

IL_008d:
	{
		uint32_t L_35 = V_2;
		if (!L_35)
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_36 = V_3;
		uint32_t L_37 = V_2;
		if (!((int32_t)((int32_t)L_36&(int32_t)L_37)))
		{
			goto IL_0083;
		}
	}

IL_0095:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_38 = ___bi10;
		NullCheck(L_38);
		uint32_t L_39 = L_38->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_40 = ___bi21;
		NullCheck(L_40);
		uint32_t L_41 = L_40->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_42 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_42, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_41)), (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_42;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_43 = ___bi10;
		int32_t L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_45;
		L_45 = BigInteger_op_LeftShift_mD63F9627F80FBAF4DE122CE66DC18FC3BF54EC64(L_43, L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_46 = V_7;
		NullCheck(L_46);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_47 = L_46->get_data_1();
		V_8 = L_47;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_48 = ___bi21;
		int32_t L_49 = V_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_50;
		L_50 = BigInteger_op_LeftShift_mD63F9627F80FBAF4DE122CE66DC18FC3BF54EC64(L_48, L_49, /*hidden argument*/NULL);
		___bi21 = L_50;
		uint32_t L_51 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_52 = ___bi21;
		NullCheck(L_52);
		uint32_t L_53 = L_52->get_length_0();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_53));
		uint32_t L_54 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_55 = ___bi21;
		NullCheck(L_55);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_56 = L_55->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_57 = ___bi21;
		NullCheck(L_57);
		uint32_t L_58 = L_57->get_length_0();
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1));
		uint32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_11 = L_60;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_61 = ___bi21;
		NullCheck(L_61);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_62 = L_61->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_63 = ___bi21;
		NullCheck(L_63);
		uint32_t L_64 = L_63->get_length_0();
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)2));
		uint32_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_12 = ((int64_t)((uint64_t)L_66));
		goto IL_0233;
	}

IL_0100:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_67 = V_8;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_71 = V_8;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int64_t L_75 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_70))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_74))));
		uint32_t L_76 = V_11;
		V_14 = ((int64_t)((uint64_t)(int64_t)L_75/(uint64_t)(int64_t)((int64_t)((uint64_t)L_76))));
		uint32_t L_77 = V_11;
		V_15 = ((int64_t)((uint64_t)(int64_t)L_75%(uint64_t)(int64_t)((int64_t)((uint64_t)L_77))));
	}

IL_011f:
	{
		uint64_t L_78 = V_14;
		if ((((int64_t)L_78) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0141;
		}
	}
	{
		uint64_t L_79 = V_14;
		uint64_t L_80 = V_12;
		uint64_t L_81 = V_15;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_82 = V_8;
		int32_t L_83 = V_10;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)2));
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))) > ((uint64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_81<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_85))))))))
		{
			goto IL_015d;
		}
	}

IL_0141:
	{
		uint64_t L_86 = V_14;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_86, (int64_t)((int64_t)((int64_t)1))));
		uint64_t L_87 = V_15;
		uint32_t L_88 = V_11;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, (int64_t)((int64_t)((uint64_t)L_88))));
		uint64_t L_89 = V_15;
		if ((!(((uint64_t)L_89) >= ((uint64_t)((int64_t)4294967296LL)))))
		{
			goto IL_011f;
		}
	}

IL_015d:
	{
		V_17 = 0;
		int32_t L_90 = V_10;
		int32_t L_91 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_91)), (int32_t)1));
		V_19 = ((int64_t)((int64_t)0));
		uint64_t L_92 = V_14;
		V_20 = ((int32_t)((uint32_t)L_92));
	}

IL_0171:
	{
		uint64_t L_93 = V_19;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_94 = ___bi21;
		NullCheck(L_94);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_95 = L_94->get_data_1();
		uint32_t L_96 = V_17;
		NullCheck(L_95);
		uint32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint32_t L_99 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_98)), (int64_t)((int64_t)((uint64_t)L_99))))));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_100 = V_8;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_16 = L_103;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_104 = V_8;
		int32_t L_105 = V_18;
		NullCheck(L_104);
		uint32_t* L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
		int32_t L_107 = *((uint32_t*)L_106);
		uint64_t L_108 = V_19;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)((int32_t)((uint32_t)L_108))));
		uint64_t L_109 = V_19;
		V_19 = ((int64_t)((uint64_t)L_109>>((int32_t)32)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_110 = V_8;
		int32_t L_111 = V_18;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		uint32_t L_114 = V_16;
		if ((!(((uint32_t)L_113) > ((uint32_t)L_114))))
		{
			goto IL_01b2;
		}
	}
	{
		uint64_t L_115 = V_19;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)((int64_t)((int64_t)1))));
	}

IL_01b2:
	{
		uint32_t L_116 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_117 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		uint32_t L_118 = V_17;
		int32_t L_119 = V_1;
		if ((((int64_t)((int64_t)((uint64_t)L_118))) < ((int64_t)((int64_t)((int64_t)L_119)))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_120 = V_10;
		int32_t L_121 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_120, (int32_t)L_121)), (int32_t)1));
		V_17 = 0;
		uint64_t L_122 = V_19;
		if (!L_122)
		{
			goto IL_0216;
		}
	}
	{
		uint32_t L_123 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)1));
		V_21 = ((int64_t)((int64_t)0));
	}

IL_01de:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_124 = V_8;
		int32_t L_125 = V_18;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_128 = ___bi21;
		NullCheck(L_128);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_129 = L_128->get_data_1();
		uint32_t L_130 = V_17;
		NullCheck(L_129);
		uint32_t L_131 = L_130;
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint64_t L_133 = V_21;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_127)), (int64_t)((int64_t)((uint64_t)L_132)))), (int64_t)L_133));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_134 = V_8;
		int32_t L_135 = V_18;
		uint64_t L_136 = V_21;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)((int32_t)((uint32_t)L_136)));
		uint64_t L_137 = V_21;
		V_21 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint32_t L_138 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		int32_t L_139 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		uint32_t L_140 = V_17;
		int32_t L_141 = V_1;
		if ((((int64_t)((int64_t)((uint64_t)L_140))) < ((int64_t)((int64_t)((int64_t)L_141)))))
		{
			goto IL_01de;
		}
	}

IL_0216:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_143 = L_142->get_data_1();
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)1));
		uint32_t L_146 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint32_t)L_146);
		int32_t L_147 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)1));
		int32_t L_148 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
	}

IL_0233:
	{
		int32_t L_149 = V_9;
		if ((((int32_t)L_149) > ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_150 = V_6;
		NullCheck(L_150);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_150, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_151 = V_7;
		NullCheck(L_151);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_151, /*hidden argument*/NULL);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_152 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_153 = L_152;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_154 = V_6;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_154);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_154);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_155 = L_153;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_156 = V_7;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_156);
		V_13 = L_155;
		int32_t L_157 = V_4;
		if (!L_157)
		{
			goto IL_0271;
		}
	}
	{
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_158 = V_13;
		NullCheck(L_158);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** L_159 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_160 = *((BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D **)L_159);
		int32_t L_161 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_162;
		L_162 = BigInteger_op_RightShift_m908AD9F9676FCE3A9AFB5A75E2ACA708E584B10D(L_160, L_161, /*hidden argument*/NULL);
		*((RuntimeObject **)L_159) = (RuntimeObject *)L_162;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_159, (void*)(RuntimeObject *)L_162);
	}

IL_0271:
	{
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_163 = V_13;
		return L_163;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___bi0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___bi0;
		NullCheck(L_2);
		uint32_t L_3 = L_2->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_m32F3FC1BBD22BBD41BEF443E9D510555DDD336C1(L_4, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0012:
	{
		int32_t L_5 = ___n1;
		V_0 = ((int32_t)((int32_t)L_5>>(int32_t)5));
		int32_t L_6 = ___n1;
		___n1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7 = ___bi0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->get_length_0();
		int32_t L_9 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_10, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)L_9)), /*hidden argument*/NULL);
		V_1 = L_10;
		V_2 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11 = ___bi0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->get_length_0();
		V_3 = L_12;
		int32_t L_13 = ___n1;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		V_5 = 0;
		goto IL_006f;
	}

IL_003e:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_14 = ___bi0;
		NullCheck(L_14);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_15 = L_14->get_data_1();
		uint32_t L_16 = V_2;
		NullCheck(L_15);
		uint32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19 = V_1;
		NullCheck(L_19);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_20 = L_19->get_data_1();
		uint32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)L_22))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF_RuntimeMethod_var);
		uint32_t L_23 = V_4;
		int32_t L_24 = ___n1;
		uint32_t L_25 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)L_22)))))), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)31)))))|(int32_t)L_25)));
		uint32_t L_26 = V_4;
		int32_t L_27 = ___n1;
		V_5 = ((int32_t)((uint32_t)L_26>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_27))&(int32_t)((int32_t)31)))));
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006f:
	{
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) >= ((uint32_t)L_30))))
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_31 = V_1;
		NullCheck(L_31);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_32 = L_31->get_data_1();
		uint32_t L_33 = V_2;
		int32_t L_34 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_33)), (int64_t)((int64_t)((int64_t)L_34))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF_RuntimeMethod_var);
		uint32_t L_35 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_33)), (int64_t)((int64_t)((int64_t)L_34)))))), (uint32_t)L_35);
		goto IL_00a1;
	}

IL_0084:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_36 = V_1;
		NullCheck(L_36);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_37 = L_36->get_data_1();
		uint32_t L_38 = V_2;
		int32_t L_39 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_38)), (int64_t)((int64_t)((int64_t)L_39))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mEEEE8733CA2CC152C4CD9A782C063CC93DB573DF_RuntimeMethod_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_40 = ___bi0;
		NullCheck(L_40);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_41 = L_40->get_data_1();
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		uint32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_38)), (int64_t)((int64_t)((int64_t)L_39)))))), (uint32_t)L_44);
		uint32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_009d:
	{
		uint32_t L_46 = V_2;
		uint32_t L_47 = V_3;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_47))))
		{
			goto IL_0084;
		}
	}

IL_00a1:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_48 = V_1;
		NullCheck(L_48);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_48, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_49 = V_1;
		return L_49;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * Kernel_RightShift_m609BADF35E34FDE8AF59E5BA07E5224F7C194541 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_RightShift_m609BADF35E34FDE8AF59E5BA07E5224F7C194541_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___bi0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9C372289E672EC45500A2346BD39BCBBB1B1E111(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		int32_t L_3 = ___n1;
		V_0 = ((int32_t)((int32_t)L_3>>(int32_t)5));
		int32_t L_4 = ___n1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___bi0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->get_length_0();
		int32_t L_7 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_8, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_8;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = L_9->get_data_1();
		NullCheck(L_10);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), (int32_t)1));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))
		{
			goto IL_007e;
		}
	}
	{
		V_4 = 0;
		goto IL_005f;
	}

IL_0035:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11 = ___bi0;
		NullCheck(L_11);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = L_11->get_data_1();
		uint32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)L_14))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_m609BADF35E34FDE8AF59E5BA07E5224F7C194541_RuntimeMethod_var);
		NullCheck(L_12);
		intptr_t L_15 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)L_14)))));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_17 = V_1;
		NullCheck(L_17);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_18 = L_17->get_data_1();
		uint32_t L_19 = V_2;
		uint32_t L_20 = V_3;
		int32_t L_21 = ___n1;
		uint32_t L_22 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_20>>((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)))))|(int32_t)L_22)));
		uint32_t L_23 = V_3;
		int32_t L_24 = ___n1;
		V_4 = ((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_24))&(int32_t)((int32_t)31)))));
	}

IL_005f:
	{
		uint32_t L_25 = V_2;
		uint32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		if ((!(((uint32_t)L_26) <= ((uint32_t)0))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0086;
	}

IL_0069:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_27 = V_1;
		NullCheck(L_27);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_28 = L_27->get_data_1();
		uint32_t L_29 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_30 = ___bi0;
		NullCheck(L_30);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_31 = L_30->get_data_1();
		uint32_t L_32 = V_2;
		int32_t L_33 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_32)), (int64_t)((int64_t)((int64_t)L_33))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_m609BADF35E34FDE8AF59E5BA07E5224F7C194541_RuntimeMethod_var);
		NullCheck(L_31);
		intptr_t L_34 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_32)), (int64_t)((int64_t)((int64_t)L_33)))));
		uint32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)L_35);
	}

IL_007e:
	{
		uint32_t L_36 = V_2;
		uint32_t L_37 = L_36;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		if ((!(((uint32_t)L_37) <= ((uint32_t)0))))
		{
			goto IL_0069;
		}
	}

IL_0086:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_38 = V_1;
		NullCheck(L_38);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_38, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_39 = V_1;
		return L_39;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m47EE24F797DD6009167F0F5B9059C72CBD31D8CD (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method)
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_3 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_4 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint64_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___x0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = ___y3;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ___d6;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		uint32_t L_13 = ___xOffset1;
		V_6 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_14 = V_6;
		uint32_t L_15 = ___xLen2;
		V_7 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_15)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_16 = V_1;
		uint32_t L_17 = ___yOffset4;
		V_8 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_17)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_18 = V_8;
		uint32_t L_19 = ___yLen5;
		V_9 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_19)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_20 = V_2;
		uint32_t L_21 = ___dOffset7;
		V_10 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)4)))))));
		goto IL_00e3;
	}

IL_0088:
	{
		uint32_t* L_22 = V_6;
		int32_t L_23 = *((uint32_t*)L_22);
		if (!L_23)
		{
			goto IL_00d7;
		}
	}
	{
		V_11 = ((int64_t)((int64_t)0));
		uint32_t* L_24 = V_10;
		V_12 = (uint32_t*)L_24;
		uint32_t* L_25 = V_8;
		V_13 = (uint32_t*)L_25;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_26 = V_11;
		uint32_t* L_27 = V_6;
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t* L_29 = V_13;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_12;
		int32_t L_32 = *((uint32_t*)L_31);
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_28)))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_30)))))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_32))))))));
		uint32_t* L_33 = V_12;
		uint64_t L_34 = V_11;
		*((int32_t*)L_33) = (int32_t)((int32_t)((uint32_t)L_34));
		uint64_t L_35 = V_11;
		V_11 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint32_t* L_36 = V_13;
		V_13 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, (int32_t)4));
		uint32_t* L_37 = V_12;
		V_12 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)4));
	}

IL_00c7:
	{
		uint32_t* L_38 = V_13;
		uint32_t* L_39 = V_9;
		if ((!(((uintptr_t)L_38) >= ((uintptr_t)L_39))))
		{
			goto IL_009b;
		}
	}
	{
		uint64_t L_40 = V_11;
		if (!L_40)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t* L_41 = V_12;
		uint64_t L_42 = V_11;
		*((int32_t*)L_41) = (int32_t)((int32_t)((uint32_t)L_42));
	}

IL_00d7:
	{
		uint32_t* L_43 = V_6;
		V_6 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)4));
		uint32_t* L_44 = V_10;
		V_10 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, (int32_t)4));
	}

IL_00e3:
	{
		uint32_t* L_45 = V_6;
		uint32_t* L_46 = V_7;
		if ((!(((uintptr_t)L_45) >= ((uintptr_t)L_46))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		V_4 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		V_5 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_mE8E796D86E0098053DEF7755FF1605D774AAED49 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method)
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_3 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_4 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint64_t V_12 = 0;
	uint32_t* V_13 = NULL;
	uint32_t* V_14 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___x0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = ___y3;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ___d6;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		int32_t L_13 = ___xOffset1;
		V_6 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_13), (int32_t)4))));
		uint32_t* L_14 = V_6;
		int32_t L_15 = ___xLen2;
		V_7 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_15), (int32_t)4))));
		uint32_t* L_16 = V_1;
		int32_t L_17 = ___yOffest4;
		V_8 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)4))));
		uint32_t* L_18 = V_8;
		int32_t L_19 = ___yLen5;
		V_9 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_19), (int32_t)4))));
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___dOffset7;
		V_10 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_21), (int32_t)4))));
		uint32_t* L_22 = V_10;
		int32_t L_23 = ___mod8;
		V_11 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)4))));
		goto IL_00ef;
	}

IL_0088:
	{
		uint32_t* L_24 = V_6;
		int32_t L_25 = *((uint32_t*)L_24);
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		V_12 = ((int64_t)((int64_t)0));
		uint32_t* L_26 = V_10;
		V_13 = (uint32_t*)L_26;
		uint32_t* L_27 = V_8;
		V_14 = (uint32_t*)L_27;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_28 = V_12;
		uint32_t* L_29 = V_6;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_14;
		int32_t L_32 = *((uint32_t*)L_31);
		uint32_t* L_33 = V_13;
		int32_t L_34 = *((uint32_t*)L_33);
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_30)))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_32)))))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_34))))))));
		uint32_t* L_35 = V_13;
		uint64_t L_36 = V_12;
		*((int32_t*)L_35) = (int32_t)((int32_t)((uint32_t)L_36));
		uint64_t L_37 = V_12;
		V_12 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint32_t* L_38 = V_14;
		V_14 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, (int32_t)4));
		uint32_t* L_39 = V_13;
		V_13 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)4));
	}

IL_00c7:
	{
		uint32_t* L_40 = V_14;
		uint32_t* L_41 = V_9;
		if ((!(((uintptr_t)L_40) < ((uintptr_t)L_41))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t* L_42 = V_13;
		uint32_t* L_43 = V_11;
		if ((!(((uintptr_t)L_42) >= ((uintptr_t)L_43))))
		{
			goto IL_009b;
		}
	}

IL_00d3:
	{
		uint64_t L_44 = V_12;
		if (!L_44)
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_45 = V_13;
		uint32_t* L_46 = V_11;
		if ((!(((uintptr_t)L_45) < ((uintptr_t)L_46))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_47 = V_13;
		uint64_t L_48 = V_12;
		*((int32_t*)L_47) = (int32_t)((int32_t)((uint32_t)L_48));
	}

IL_00e3:
	{
		uint32_t* L_49 = V_6;
		V_6 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)4));
		uint32_t* L_50 = V_10;
		V_10 = (uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, (int32_t)4));
	}

IL_00ef:
	{
		uint32_t* L_51 = V_6;
		uint32_t* L_52 = V_7;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)L_52))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		V_4 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		V_5 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
		return;
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_mAE70326F9AD6797DD3FC42DE574E855FB63EFAB4 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, uint32_t ___modulus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___modulus1;
		V_0 = L_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___bi0;
		uint32_t L_2 = ___modulus1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BigInteger_op_Modulus_m09E68D30D670ED308F34F02EBC047FD60B91D78F(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		V_3 = 1;
		goto IL_0039;
	}

IL_0010:
	{
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_5 = V_3;
		return L_5;
	}

IL_0016:
	{
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)L_8)), (int32_t)L_9))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)L_11));
		uint32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_14 = ___modulus1;
		uint32_t L_15 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_002d:
	{
		uint32_t L_16 = V_3;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(int32_t)L_17/(uint32_t)(int32_t)L_18)), (int32_t)L_19))));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_20%(uint32_t)(int32_t)L_21));
	}

IL_0039:
	{
		uint32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0010;
		}
	}

IL_003c:
	{
		return 0;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * Kernel_modInverse_mF0EFBFDE4FB6CF7E807BDB10EAB681452C8B27D9 (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___bi0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___modulus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* V_0 = NULL;
	BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* V_1 = NULL;
	BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_4 = NULL;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_5 = NULL;
	ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * V_6 = NULL;
	BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* V_7 = NULL;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_8 = NULL;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___modulus1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_length_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___bi0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_3 = ___modulus1;
		NullCheck(L_3);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = L_3->get_data_1();
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = Kernel_modInverse_mAE70326F9AD6797DD3FC42DE574E855FB63EFAB4(L_2, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8;
		L_8 = BigInteger_op_Implicit_m1FC11FDE7ECF4D251F510EF8EB9DC9B5357D742F(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_001d:
	{
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_9 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_10 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11;
		L_11 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_11);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_12 = L_10;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_13;
		L_13 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(1, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_13);
		V_0 = L_12;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_14 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_14;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_15 = (BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B*)SZArrayNew(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_16 = L_15;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_17;
		L_17 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_17);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_18 = L_16;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19;
		L_19 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_19);
		V_2 = L_18;
		V_3 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_20 = ___modulus1;
		V_4 = L_20;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21 = ___bi0;
		V_5 = L_21;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_22 = ___modulus1;
		ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * L_23 = (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA *)il2cpp_codegen_object_new(ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA_il2cpp_TypeInfo_var);
		ModulusRing__ctor_m97D99B27E28AB20BBE2836B04D5466DA81456BCC(L_23, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		goto IL_00c1;
	}

IL_0068:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * L_25 = V_6;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_35;
		L_35 = BigInteger_op_Multiply_m28820029500895BCAE0C547024B6BD72A9688500(L_31, L_34, /*hidden argument*/NULL);
		NullCheck(L_25);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_36;
		L_36 = ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1(L_25, L_28, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_37 = V_0;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_40);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_41 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_42 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_42);
	}

IL_008e:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_43 = V_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_44 = V_5;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_45;
		L_45 = Kernel_multiByteDivide_mEB8FB4B5D405F43102EF158131E33806DF03588B(L_43, L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_46 = V_1;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_49);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_50 = V_1;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_53);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_54 = V_2;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_57);
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_58 = V_2;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_59 = V_7;
		NullCheck(L_59);
		int32_t L_60 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)L_61);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_62 = V_5;
		V_4 = L_62;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = L_65;
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_00c1:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_67 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = BigInteger_op_Inequality_m6B8B6D52141713E7267691469F79A0990DBB5E63(L_67, 0, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0068;
		}
	}
	{
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = BigInteger_op_Inequality_m6B8B6D52141713E7267691469F79A0990DBB5E63(L_71, 1, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_00e1;
		}
	}
	{
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_73 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_mF0A8511D61010600F89D30A110198F5E63D5DFE5(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kernel_modInverse_mF0EFBFDE4FB6CF7E807BDB10EAB681452C8B27D9_RuntimeMethod_var)));
	}

IL_00e1:
	{
		ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * L_74 = V_6;
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B* L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = 0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_84;
		L_84 = BigInteger_op_Multiply_m28820029500895BCAE0C547024B6BD72A9688500(L_80, L_83, /*hidden argument*/NULL);
		NullCheck(L_74);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_85;
		L_85 = ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1(L_74, L_77, L_84, /*hidden argument*/NULL);
		return L_85;
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
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_m97D99B27E28AB20BBE2836B04D5466DA81456BCC (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___modulus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___modulus0;
		__this->set_mod_0(L_0);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = __this->get_mod_0();
		NullCheck(L_1);
		uint32_t L_2 = L_1->get_length_0();
		V_0 = ((int32_t)((int32_t)L_2<<(int32_t)1));
		uint32_t L_3 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_4, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_constant_1(L_4);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = __this->get_constant_1();
		NullCheck(L_5);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = L_5->get_data_1();
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)1);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = __this->get_constant_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10;
		L_10 = BigInteger_op_Division_mBB896F6E9247AB3B3D47E1B125624FA68EE5C4EC(L_8, L_9, /*hidden argument*/NULL);
		__this->set_constant_1(L_10);
		return;
	}
}
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_4 = NULL;
	uint32_t V_5 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_6 = NULL;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_7 = NULL;
	uint32_t G_B7_0 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = __this->get_mod_0();
		V_0 = L_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = V_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->get_length_0();
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint32_t L_4 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___x0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->get_length_0();
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = ___x0;
		NullCheck(L_8);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = L_8->get_data_1();
		NullCheck(L_9);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10 = ___x0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_length_0();
		if ((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))) >= ((int64_t)((int64_t)((uint64_t)L_11)))))
		{
			goto IL_003d;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_12 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5_RuntimeMethod_var)));
	}

IL_003d:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_13 = ___x0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->get_length_0();
		uint32_t L_15 = V_3;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_16 = __this->get_constant_1();
		NullCheck(L_16);
		uint32_t L_17 = L_16->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_18 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_18, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)L_17)), /*hidden argument*/NULL);
		V_4 = L_18;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19 = ___x0;
		NullCheck(L_19);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_20 = L_19->get_data_1();
		uint32_t L_21 = V_3;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_22 = ___x0;
		NullCheck(L_22);
		uint32_t L_23 = L_22->get_length_0();
		uint32_t L_24 = V_3;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_25 = __this->get_constant_1();
		NullCheck(L_25);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_26 = L_25->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_27 = __this->get_constant_1();
		NullCheck(L_27);
		uint32_t L_28 = L_27->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_29 = V_4;
		NullCheck(L_29);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_30 = L_29->get_data_1();
		Kernel_Multiply_m47EE24F797DD6009167F0F5B9059C72CBD31D8CD(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), L_26, 0, L_28, L_30, 0, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_31 = ___x0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->get_length_0();
		uint32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)L_33))))
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_34 = ___x0;
		NullCheck(L_34);
		uint32_t L_35 = L_34->get_length_0();
		G_B7_0 = L_35;
		goto IL_009e;
	}

IL_009d:
	{
		uint32_t L_36 = V_2;
		G_B7_0 = L_36;
	}

IL_009e:
	{
		V_5 = G_B7_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_37 = ___x0;
		uint32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->set_length_0(L_38);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_39 = ___x0;
		NullCheck(L_39);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_39, /*hidden argument*/NULL);
		uint32_t L_40 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_41 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_41, 1, L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_42 = V_4;
		NullCheck(L_42);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_43 = L_42->get_data_1();
		uint32_t L_44 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_45 = V_4;
		NullCheck(L_45);
		uint32_t L_46 = L_45->get_length_0();
		uint32_t L_47 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_49 = L_48->get_data_1();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_50 = V_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_52 = V_6;
		NullCheck(L_52);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_53 = L_52->get_data_1();
		uint32_t L_54 = V_2;
		Kernel_MultiplyMod2p32pmod_mE8E796D86E0098053DEF7755FF1605D774AAED49(L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), L_49, 0, L_51, L_53, 0, L_54, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_55 = V_6;
		NullCheck(L_55);
		BigInteger_Normalize_m2D677E543A7DCC6CDCA4F4ADA126649A5668729B(L_55, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_56 = V_6;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_57 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = BigInteger_op_LessThanOrEqual_m4225BB4FF0A26B307FD6C34A44CCA3BFB104BC30(L_56, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_00fe;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_59 = ___x0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_60 = V_6;
		Kernel_MinusEq_m0A41AF713CCF44AB62FD5E1288AA2C5BD470E967(L_59, L_60, /*hidden argument*/NULL);
		goto IL_012d;
	}

IL_00fe:
	{
		uint32_t L_61 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_62 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_mCC2E747B046C8ED9773CCACA21F56F90A2CD4D42(L_62, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_62;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_63 = V_7;
		NullCheck(L_63);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_64 = L_63->get_data_1();
		uint32_t L_65 = V_2;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint32_t)1);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_66 = V_7;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_67 = V_6;
		Kernel_MinusEq_m0A41AF713CCF44AB62FD5E1288AA2C5BD470E967(L_66, L_67, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_68 = ___x0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_69 = V_7;
		Kernel_PlusEq_m4C2965A8B169E32B98FE7A60AE8C09505428B246(L_68, L_69, /*hidden argument*/NULL);
		goto IL_012d;
	}

IL_0126:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_70 = ___x0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_71 = V_0;
		Kernel_MinusEq_m0A41AF713CCF44AB62FD5E1288AA2C5BD470E967(L_70, L_71, /*hidden argument*/NULL);
	}

IL_012d:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_72 = ___x0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_73 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = BigInteger_op_GreaterThanOrEqual_m34669FCE574F8B3EF00808F69DB97CA5504D2C85(L_72, L_73, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0126;
		}
	}
	{
		return;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Multiply_m3246E3E3C60AA391E6D442E9CE85AF73C972AAB8 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_0 = NULL;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m8C3BE7CDEE443C682DB5E7DDCDF69293D773D663(L_0, 0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m8C3BE7CDEE443C682DB5E7DDCDF69293D773D663(L_2, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4;
		L_4 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___a0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_6 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_GreaterThan_m67BB32BE6636B141DD00245C130BE236C8C18A9C(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = ___a0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10;
		L_10 = BigInteger_op_Modulus_mF4B55A9D8FCFF2B70A1A55BA31A6E0D75367D779(L_8, L_9, /*hidden argument*/NULL);
		___a0 = L_10;
	}

IL_0035:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11 = ___b1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_12 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_GreaterThan_m67BB32BE6636B141DD00245C130BE236C8C18A9C(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_14 = ___b1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_15 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_16;
		L_16 = BigInteger_op_Modulus_mF4B55A9D8FCFF2B70A1A55BA31A6E0D75367D779(L_14, L_15, /*hidden argument*/NULL);
		___b1 = L_16;
	}

IL_0051:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_17 = ___a0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_18 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19;
		L_19 = BigInteger_op_Multiply_m28820029500895BCAE0C547024B6BD72A9688500(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_20 = V_0;
		ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5(__this, L_20, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_1 = NULL;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = ___a0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___b1;
		int32_t L_2;
		L_2 = Kernel_Compare_m2C45218B8EE4E2ECDC85068A37BDB93E07FA5858(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)(-1))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0039;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4;
		L_4 = BigInteger_op_Implicit_m2A8665726D0DA223774962B8139259EAC255A104(0, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___a0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_6 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7;
		L_7 = BigInteger_op_Subtraction_mEB2B6795E0AF13288A96D87826031CEC054E6052(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_003f;
	}

IL_002f:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = ___b1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10;
		L_10 = BigInteger_op_Subtraction_mEB2B6795E0AF13288A96D87826031CEC054E6052(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_Difference_mF52990DBAC72533606158C406FE5055D550EE8B1_RuntimeMethod_var)));
	}

IL_003f:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_12 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_13 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_GreaterThanOrEqual_m34669FCE574F8B3EF00808F69DB97CA5504D2C85(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_15 = V_1;
		NullCheck(L_15);
		uint32_t L_16 = L_15->get_length_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_17 = __this->get_mod_0();
		NullCheck(L_17);
		uint32_t L_18 = L_17->get_length_0();
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)((int32_t)L_18<<(int32_t)1))))))
		{
			goto IL_0071;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_20 = __this->get_mod_0();
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21;
		L_21 = BigInteger_op_Modulus_mF4B55A9D8FCFF2B70A1A55BA31A6E0D75367D779(L_19, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_0078;
	}

IL_0071:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_22 = V_1;
		ModulusRing_BarrettReduction_mEF6900BAA295B45A7661C70DA47EB31193670AB5(__this, L_22, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0089;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_24 = __this->get_mod_0();
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_26;
		L_26 = BigInteger_op_Subtraction_mEB2B6795E0AF13288A96D87826031CEC054E6052(L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
	}

IL_0089:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_27 = V_1;
		return L_27;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Pow_m6AA03EF88208478DB150ADF4E8ABC327B2369192 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___a0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_0 = NULL;
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_0 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2D9EC292E7198117AACAD6C1306C971BC74B5E83(L_0, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = ___k1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_m8C3BE7CDEE443C682DB5E7DDCDF69293D773D663(L_1, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_4 = ___a0;
		V_1 = L_4;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_5 = ___k1;
		NullCheck(L_5);
		bool L_6;
		L_6 = BigInteger_TestBit_m42A773C5309B8F9B3441C33FC07FFD5022EC9029(L_5, 0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_7 = ___a0;
		V_0 = L_7;
	}

IL_001f:
	{
		V_2 = 1;
		goto IL_0042;
	}

IL_0023:
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_8 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_9 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_10;
		L_10 = ModulusRing_Multiply_m3246E3E3C60AA391E6D442E9CE85AF73C972AAB8(__this, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_11 = ___k1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = BigInteger_TestBit_m42A773C5309B8F9B3441C33FC07FFD5022EC9029(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_14 = V_1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_15 = V_0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_16;
		L_16 = ModulusRing_Multiply_m3246E3E3C60AA391E6D442E9CE85AF73C972AAB8(__this, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_18 = V_2;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_19 = ___k1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = BigInteger_BitCount_m45B7662F932C61BE4F5587C5C54C09F04B186825(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ModulusRing_Pow_m66800E0D88B48BEBF441FBE4B509555E03FC1382 (ModulusRing_t98A7A0A45A2FC1BBD366206F688945B6022FF9CA * __this, uint32_t ___b0, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___exp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___b0;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_1 = (BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D *)il2cpp_codegen_object_new(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2D9EC292E7198117AACAD6C1306C971BC74B5E83(L_1, L_0, /*hidden argument*/NULL);
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_2 = ___exp1;
		BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * L_3;
		L_3 = ModulusRing_Pow_m6AA03EF88208478DB150ADF4E8ABC327B2369192(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes__ctor_m2019E1467DEBC9341D451E160A88FDB35311526B (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_set_HashName_m0F931681375810B9E08DA4280BADE04FE4AC998A (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__hashName_3(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_set_IterationCount_mA03E73C42D2C1A4E81E537CDFAEB128B629AD05A (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__iterations_4(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_set_Password_mF8409B8C5B608689A8054B8118494EE5B4F26B2B (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set__password_5(L_1);
		return;
	}

IL_0010:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___value0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		RuntimeObject * L_3;
		L_3 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		__this->set__password_5(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_set_Salt_m4276D3746D53D4CD49A54E99A94B5936CB325143 (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		__this->set__salt_6(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
		return;
	}

IL_0015:
	{
		__this->set__salt_6((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes_Adjust_mD75D44B02A7BD2A607D6B00853917CA6096A9259 (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, int32_t ___aOff1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___b2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b2;
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		int32_t L_5 = ___aOff1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___b2;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))), (int32_t)1));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)255))), (int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255))))), (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___a0;
		int32_t L_10 = ___aOff1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___b2;
		NullCheck(L_11);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)L_12)));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13>>(int32_t)8));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___b2;
		NullCheck(L_14);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), (int32_t)2));
		goto IL_005e;
	}

IL_0037:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___b2;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___a0;
		int32_t L_21 = ___aOff1;
		int32_t L_22 = V_1;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)255))), (int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = ___a0;
		int32_t L_26 = ___aOff1;
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27))), (uint8_t)((int32_t)((uint8_t)L_28)));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29>>(int32_t)8));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeriveBytes_Derive_mCDAFFDF120F6CD3F058A5A86FA1F4D9DC735850F (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___diversifier0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_t1EFBCFDC3430F0E83D50FB99876E117CF52C4E03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		String_t* L_0 = __this->get__hashName_3();
		IL2CPP_RUNTIME_CLASS_INIT(PKCS1_t1EFBCFDC3430F0E83D50FB99876E117CF52C4E03_il2cpp_TypeInfo_var);
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_1;
		L_1 = PKCS1_CreateFromName_mBBB3D4843B9B1E678C85DDAD8EDE2FDF8169D7B5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_2);
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		V_2 = ((int32_t)64);
		int32_t L_4 = ___n1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get__salt_6();
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get__salt_6();
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_8 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get__salt_6();
		NullCheck(L_9);
		int32_t L_10 = V_2;
		int32_t L_11 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)), (int32_t)1))/(int32_t)L_11)))));
		V_4 = L_12;
		V_9 = 0;
		goto IL_0069;
	}

IL_004c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_4;
		int32_t L_14 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get__salt_6();
		int32_t L_16 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get__salt_6();
		NullCheck(L_17);
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)((int32_t)L_16%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_19);
		int32_t L_20 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0069:
	{
		int32_t L_21 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_4;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_007b;
	}

IL_0073:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		V_4 = L_23;
	}

IL_007b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get__password_5();
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get__password_5();
		NullCheck(L_25);
		if (!(((RuntimeArray*)L_25)->max_length))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_26 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get__password_5();
		NullCheck(L_27);
		int32_t L_28 = V_2;
		int32_t L_29 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))), (int32_t)L_28)), (int32_t)1))/(int32_t)L_29)))));
		V_5 = L_30;
		V_10 = 0;
		goto IL_00c5;
	}

IL_00a8:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_5;
		int32_t L_32 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get__password_5();
		int32_t L_34 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get__password_5();
		NullCheck(L_35);
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)((int32_t)L_34%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))));
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)L_37);
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_39 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_5;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))))
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00d7;
	}

IL_00cf:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		V_5 = L_41;
	}

IL_00d7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_4;
		NullCheck(L_42);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_5;
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))));
		V_6 = L_44;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_4;
		NullCheck(L_47);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_45, 0, (RuntimeArray *)(RuntimeArray *)L_46, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_4;
		NullCheck(L_50);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_5;
		NullCheck(L_51);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_48, 0, (RuntimeArray *)(RuntimeArray *)L_49, ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))), /*hidden argument*/NULL);
		int32_t L_52 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_52);
		V_7 = L_53;
		int32_t L_54 = ___n1;
		int32_t L_55 = V_1;
		int32_t L_56 = V_1;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)L_55)), (int32_t)1))/(int32_t)L_56));
		V_11 = 1;
		goto IL_01ee;
	}

IL_0121:
	{
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_57 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = ___diversifier0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59 = ___diversifier0;
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = ___diversifier0;
		NullCheck(L_57);
		int32_t L_61;
		L_61 = HashAlgorithm_TransformBlock_mC2D44001FB38682B4BDFBD9D8C9C3D79922E9972(L_57, L_58, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))), L_60, 0, /*hidden argument*/NULL);
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_62 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = V_6;
		NullCheck(L_64);
		NullCheck(L_62);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65;
		L_65 = HashAlgorithm_TransformFinalBlock_m0FF6D2A6326D05E043C229FAFF24318F7751F5A7(L_62, L_63, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))), /*hidden argument*/NULL);
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_66 = V_0;
		NullCheck(L_66);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67;
		L_67 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_66);
		V_12 = L_67;
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_68 = V_0;
		NullCheck(L_68);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_68);
		V_13 = 1;
		goto IL_0165;
	}

IL_0150:
	{
		HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * L_69 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = V_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = V_12;
		NullCheck(L_71);
		NullCheck(L_69);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72;
		L_72 = HashAlgorithm_ComputeHash_m18D758AA4A5FDB6132C9DA8BB7445D774D71FBA2(L_69, L_70, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))), /*hidden argument*/NULL);
		V_12 = L_72;
		int32_t L_73 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0165:
	{
		int32_t L_74 = V_13;
		int32_t L_75 = __this->get__iterations_4();
		if ((!(((uint32_t)L_74) == ((uint32_t)L_75))))
		{
			goto IL_0150;
		}
	}
	{
		V_14 = 0;
		goto IL_0189;
	}

IL_0174:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = V_7;
		int32_t L_77 = V_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_78 = V_12;
		int32_t L_79 = V_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = V_12;
		NullCheck(L_80);
		NullCheck(L_78);
		int32_t L_81 = ((int32_t)((int32_t)L_79%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))));
		uint8_t L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (uint8_t)L_82);
		int32_t L_83 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0189:
	{
		int32_t L_84 = V_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = V_7;
		NullCheck(L_85);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))))
		{
			goto IL_0174;
		}
	}
	{
		V_15 = 0;
		goto IL_01aa;
	}

IL_0196:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = V_6;
		int32_t L_87 = V_15;
		int32_t L_88 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = V_7;
		DeriveBytes_Adjust_mD75D44B02A7BD2A607D6B00853917CA6096A9259(__this, L_86, ((int32_t)il2cpp_codegen_multiply((int32_t)L_87, (int32_t)L_88)), L_89, /*hidden argument*/NULL);
		int32_t L_90 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_01aa:
	{
		int32_t L_91 = V_15;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = V_6;
		NullCheck(L_92);
		int32_t L_93 = V_2;
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)))/(int32_t)L_93))))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_94 = V_11;
		int32_t L_95 = V_8;
		if ((!(((uint32_t)L_94) == ((uint32_t)L_95))))
		{
			goto IL_01d5;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = V_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = V_3;
		int32_t L_98 = V_11;
		int32_t L_99 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = V_11;
		int32_t L_102 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_96, 0, (RuntimeArray *)(RuntimeArray *)L_97, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1)), (int32_t)L_99)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1)), (int32_t)L_102)))), /*hidden argument*/NULL);
		goto IL_01e8;
	}

IL_01d5:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = V_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = V_3;
		int32_t L_105 = V_11;
		int32_t L_106 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107 = V_12;
		NullCheck(L_107);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_103, 0, (RuntimeArray *)(RuntimeArray *)L_104, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1)), (int32_t)L_106)), ((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length))), /*hidden argument*/NULL);
	}

IL_01e8:
	{
		int32_t L_108 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_01ee:
	{
		int32_t L_109 = V_11;
		int32_t L_110 = V_8;
		if ((((int32_t)L_109) <= ((int32_t)L_110)))
		{
			goto IL_0121;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_111 = V_3;
		return L_111;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeriveBytes_DeriveKey_m2FBFDDCCA679D069B66CAC8D868761B663AF0176 (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->get_keyDiversifier_0();
		int32_t L_1 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = DeriveBytes_Derive_mCDAFFDF120F6CD3F058A5A86FA1F4D9DC735850F(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeriveBytes_DeriveIV_m6D75D59C79495FB8E22C3E9334D7465FE95495F5 (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->get_ivDiversifier_1();
		int32_t L_1 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = DeriveBytes_Derive_mCDAFFDF120F6CD3F058A5A86FA1F4D9DC735850F(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeriveBytes_DeriveMAC_mD9A65467231155B8627A9DCE61292B62E2C0FF4C (DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->get_macDiversifier_2();
		int32_t L_1 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = DeriveBytes_Derive_mCDAFFDF120F6CD3F058A5A86FA1F4D9DC735850F(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeriveBytes__cctor_m2AA51D34DE85F489C9083EEBB16C1F20388828D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->set_keyDiversifier_0(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->set_ivDiversifier_1(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t471D5B1E6629296794B5241AF6C06CA1C68FD298____9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_StaticFields*)il2cpp_codegen_static_fields_for(DeriveBytes_tE6209D34297992ECE3EF0AFAF2469A6AD3CC981A_il2cpp_TypeInfo_var))->set_macDiversifier_2(L_7);
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
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)160), /*hidden argument*/NULL);
		__this->set_content_1(L_0);
		return;
	}
}
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_contentType_0(L_0);
		return;
	}
}
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m3314A5824571AE429FD8181D94314025223D39F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0022;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = ___asn10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A9D5DF8D363B563E3F4B00A79ABC1FCCF634926)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var)));
	}

IL_002d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = ___asn10;
		NullCheck(L_7);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8;
		L_8 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		uint8_t L_9;
		L_9 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0047;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE27CA3F3042EF2220CE3FB15F5626369069FFC3E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var)));
	}

IL_0047:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12;
		L_12 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_12, /*hidden argument*/NULL);
		__this->set_contentType_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = ___asn10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = ___asn10;
		NullCheck(L_16);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17;
		L_17 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)160))))
		{
			goto IL_0080;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_19 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral713F80EC870389B7162B470F3D04ACB2C5D5A99A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var)));
	}

IL_0080:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = ___asn10;
		NullCheck(L_20);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21;
		L_21 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_20, 1, /*hidden argument*/NULL);
		__this->set_content_1(L_21);
	}

IL_008d:
	{
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_get_ASN1_m9F6079ADC3917582F67F7E4E9AFD596DABF57FDD (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0;
		L_0 = ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_get_Content_m36F75EEFBB1ED3608A6270E02F059BDB553546EA (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = __this->get_content_1();
		return L_0;
	}
}
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___value0;
		__this->set_content_1(L_0);
		return;
	}
}
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m3042D4F065AD15EA03B33F6A266C9F1381D6A5FC (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_contentType_0();
		return L_0;
	}
}
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo_set_ContentType_m21AC696B1C2DADCF1F39F12AA7B37160D5DA415D (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_contentType_0(L_0);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = V_0;
		String_t* L_2 = __this->get_contentType_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3;
		L_3 = ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4;
		L_4 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_1, L_3, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = __this->get_content_1();
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = __this->get_content_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8 = V_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = __this->get_content_1();
		NullCheck(L_8);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10;
		L_10 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_8, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = V_0;
		return L_11;
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
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set__version_0((uint8_t)0);
		return;
	}
}
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B7_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_0 = NULL;
	{
		EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1045B6110EDC3126BBD5A19E37F361FC6C1BEF73)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_0024:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = ___asn10;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_003e:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = ___asn10;
		NullCheck(L_9);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10;
		L_10 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->set__version_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
		L_15 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_14, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = L_15;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_16;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)48))))
		{
			G_B7_0 = L_16;
			goto IL_006e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99226315FDF5AD4FC8F149EACEFFD00809BB7E2A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_006e:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = G_B7_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20;
		L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 0, /*hidden argument*/NULL);
		V_0 = L_20;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_21, /*hidden argument*/NULL);
		G_B8_0 = L_19;
		if ((((int32_t)L_22) == ((int32_t)6)))
		{
			G_B9_0 = L_19;
			goto IL_008a;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_23 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F27085477FEF835533F57795ECCC582A399A354)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_008a:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = V_0;
		String_t* L_25;
		L_25 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_24, /*hidden argument*/NULL);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_26 = (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 *)il2cpp_codegen_object_new(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9(L_26, L_25, /*hidden argument*/NULL);
		__this->set__content_1(L_26);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = G_B9_0;
		NullCheck(L_27);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28;
		L_28 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_27, 1, /*hidden argument*/NULL);
		V_1 = L_28;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_1;
		NullCheck(L_29);
		uint8_t L_30;
		L_30 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_29, /*hidden argument*/NULL);
		G_B10_0 = L_27;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)48))))
		{
			G_B11_0 = L_27;
			goto IL_00b8;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_31 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860E8E41981CF09A35AF77AFF02EC3B0843F918C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_00b8:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = V_1;
		NullCheck(L_32);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_33;
		L_33 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_32, 0, /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_33, /*hidden argument*/NULL);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_35 = (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 *)il2cpp_codegen_object_new(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9(L_35, L_34, /*hidden argument*/NULL);
		__this->set__encryptionAlgorithm_2(L_35);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_36 = __this->get__encryptionAlgorithm_2();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37 = V_1;
		NullCheck(L_37);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38;
		L_38 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_37, 1, /*hidden argument*/NULL);
		NullCheck(L_36);
		ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline(L_36, L_38, /*hidden argument*/NULL);
		NullCheck(G_B11_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39;
		L_39 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B11_0, 2, /*hidden argument*/NULL);
		V_2 = L_39;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_40 = V_2;
		NullCheck(L_40);
		uint8_t L_41;
		L_41 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)128))))
		{
			goto IL_0100;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_42 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B73AE650FB092AAEEF5A713A7829FD5C6DB2252)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var)));
	}

IL_0100:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_43 = V_2;
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44;
		L_44 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_43, /*hidden argument*/NULL);
		__this->set__encrypted_3(L_44);
		return;
	}
}
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * EncryptedData_get_EncryptionAlgorithm_m144F3DFCF4DB066A6A0E06DD048A8ADB8C2C5F0E (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	{
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_0 = __this->get__encryptionAlgorithm_2();
		return L_0;
	}
}
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedData_get_EncryptedContent_mBA18486D808A211596313C21AD8D1CC4CA7AD675 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__encrypted_3();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__encrypted_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
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
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m342DBA8F50EBE7CC3E8C72FA55A086A44EB0595A (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	{
		EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptedPrivateKeyInfo_get_Algorithm_m6E3979843B72EAD0345E7D190562A054347B26E7 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__algorithm_0();
		return L_0;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedPrivateKeyInfo_get_EncryptedData_m41DB5DB34320FF2B84BF2811ADFF9B449E3B9868 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__data_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}

IL_0019:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedPrivateKeyInfo_get_Salt_m5529731CFA0E535CA09D34EC420D78E143E8C879 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__salt_1();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * L_1;
		L_1 = RandomNumberGenerator_Create_m04A5418F8572F0498EE0659633B4C0620CB55721(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set__salt_1(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__salt_1();
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_3);
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get__salt_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		RuntimeObject * L_5;
		L_5 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_5, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptedPrivateKeyInfo_get_IterationCount_m0FFFFF80E6542001E3AFEC28F9F8DBBA7FEC5FF1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__iterations_2();
		return L_0;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_3 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_4 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B2_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B1_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B4_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B3_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B5_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B14_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B7_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B13_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B12_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = L_1;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_001b:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = G_B2_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
		{
			G_B4_0 = L_5;
			goto IL_0038;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_9 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_0038:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_0;
		NullCheck(L_10);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11;
		L_11 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_10, 0, /*hidden argument*/NULL);
		V_1 = L_11;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_1;
		NullCheck(L_12);
		uint8_t L_13;
		L_13 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_12, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_13) == ((int32_t)6)))
		{
			G_B6_0 = G_B4_0;
			goto IL_0054;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_14 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_0054:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15 = V_1;
		String_t* L_16;
		L_16 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_15, /*hidden argument*/NULL);
		__this->set__algorithm_0(L_16);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_17, /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			G_B14_0 = G_B6_0;
			goto IL_00d7;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20;
		L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = L_20;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_21, /*hidden argument*/NULL);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			G_B9_0 = L_21;
			G_B9_1 = G_B7_0;
			goto IL_0085;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_23 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_0085:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = G_B9_0;
		NullCheck(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25;
		L_25 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_24, 0, /*hidden argument*/NULL);
		V_3 = L_25;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26 = V_3;
		NullCheck(L_26);
		uint8_t L_27;
		L_27 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_26, /*hidden argument*/NULL);
		G_B10_0 = L_24;
		G_B10_1 = G_B9_1;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			G_B11_0 = L_24;
			G_B11_1 = G_B9_1;
			goto IL_00a1;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_28 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_00a1:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30;
		L_30 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_29, /*hidden argument*/NULL);
		__this->set__salt_1(L_30);
		NullCheck(G_B11_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_31;
		L_31 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B11_0, 1, /*hidden argument*/NULL);
		V_4 = L_31;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = V_4;
		NullCheck(L_32);
		uint8_t L_33;
		L_33 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_32, /*hidden argument*/NULL);
		G_B12_0 = G_B11_1;
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			G_B13_0 = G_B11_1;
			goto IL_00ca;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_34 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_00ca:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_35 = V_4;
		int32_t L_36;
		L_36 = ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77(L_35, /*hidden argument*/NULL);
		__this->set__iterations_2(L_36);
		G_B14_0 = G_B13_0;
	}

IL_00d7:
	{
		NullCheck(G_B14_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37;
		L_37 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B14_0, 1, /*hidden argument*/NULL);
		V_2 = L_37;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = V_2;
		NullCheck(L_38);
		uint8_t L_39;
		L_39 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) == ((int32_t)4)))
		{
			goto IL_00f2;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_40 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var)));
	}

IL_00f2:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_41 = V_2;
		NullCheck(L_41);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42;
		L_42 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_41, /*hidden argument*/NULL);
		__this->set__data_3(L_42);
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
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set__version_0(0);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set__list_3(L_0);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m8640F581031D199E229D4A6AA31026B8EA756040 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	{
		PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_get_PrivateKey_mFDE27BD70465C0C71949DA3E3E4F752AB7AE1263 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__key_2();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__key_2();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_3 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_4 = NULL;
	int32_t V_5 = 0;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B5_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var)));
	}

IL_001c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_9 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var)));
	}

IL_0038:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->set__version_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = V_0;
		NullCheck(L_14);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
		L_15 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_14, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = L_15;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_16, /*hidden argument*/NULL);
		G_B5_0 = L_16;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)48))))
		{
			G_B6_0 = L_16;
			goto IL_0062;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_18 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var)));
	}

IL_0062:
	{
		NullCheck(G_B6_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19;
		L_19 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B6_0, 0, /*hidden argument*/NULL);
		V_2 = L_19;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = V_2;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_007d;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_22 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var)));
	}

IL_007d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_23 = V_2;
		String_t* L_24;
		L_24 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_23, /*hidden argument*/NULL);
		__this->set__algorithm_1(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25 = V_0;
		NullCheck(L_25);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26;
		L_26 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_25, 2, /*hidden argument*/NULL);
		V_3 = L_26;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_27, /*hidden argument*/NULL);
		__this->set__key_2(L_28);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)3)))
		{
			goto IL_00da;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_31 = V_0;
		NullCheck(L_31);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32;
		L_32 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_31, 3, /*hidden argument*/NULL);
		V_4 = L_32;
		V_5 = 0;
		goto IL_00cf;
	}

IL_00b4:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_33 = __this->get__list_3();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_36;
		L_36 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_37;
		L_37 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_33, L_36);
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_39 = V_5;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_40 = V_4;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_00b4;
		}
	}

IL_00da:
	{
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bigInt0;
		NullCheck(L_0);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bigInt0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = 1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bigInt0;
		int32_t L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		int32_t L_10 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bigInt0;
		NullCheck(L_0);
		int32_t L_1 = ___length1;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bigInt0;
		return L_2;
	}

IL_0008:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bigInt0;
		NullCheck(L_3);
		int32_t L_4 = ___length1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) <= ((int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bigInt0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0015:
	{
		int32_t L_7 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bigInt0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		int32_t L_11 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bigInt0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___bigInt0;
		NullCheck(L_13);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_9, 0, (RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))), ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_0;
		return L_14;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___keypair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___keypair0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var)));
	}

IL_001c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_8 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var)));
	}

IL_0036:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)9))))
		{
			goto IL_004b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_11 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var)));
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 ));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_0;
		NullCheck(L_12);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_13;
		L_13 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_12, 1, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_14, /*hidden argument*/NULL);
		(&V_1)->set_Modulus_1(L_15);
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_16 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16.get_Modulus_1();
		NullCheck(L_17);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)));
		int32_t L_18 = V_2;
		V_3 = ((int32_t)((int32_t)L_18>>(int32_t)1));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20;
		L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 3, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_21, L_22, /*hidden argument*/NULL);
		(&V_1)->set_D_7(L_23);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = V_0;
		NullCheck(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25;
		L_25 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_24, 6, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_26, L_27, /*hidden argument*/NULL);
		(&V_1)->set_DP_4(L_28);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_0;
		NullCheck(L_29);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_30;
		L_30 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_29, 7, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31;
		L_31 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_31, L_32, /*hidden argument*/NULL);
		(&V_1)->set_DQ_5(L_33);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_34 = V_0;
		NullCheck(L_34);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_35;
		L_35 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_34, 2, /*hidden argument*/NULL);
		NullCheck(L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
		L_36 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_35, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37;
		L_37 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_36, /*hidden argument*/NULL);
		(&V_1)->set_Exponent_0(L_37);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = V_0;
		NullCheck(L_38);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39;
		L_39 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_38, 8, /*hidden argument*/NULL);
		NullCheck(L_39);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
		L_40 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42;
		L_42 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_40, L_41, /*hidden argument*/NULL);
		(&V_1)->set_InverseQ_6(L_42);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_43 = V_0;
		NullCheck(L_43);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_44;
		L_44 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_43, 4, /*hidden argument*/NULL);
		NullCheck(L_44);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45;
		L_45 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47;
		L_47 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_45, L_46, /*hidden argument*/NULL);
		(&V_1)->set_P_2(L_47);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_48 = V_0;
		NullCheck(L_48);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_49;
		L_49 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_48, 5, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50;
		L_50 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52;
		L_52 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_50, L_51, /*hidden argument*/NULL);
		(&V_1)->set_Q_3(L_52);
		V_4 = (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)NULL;
	}

IL_0129:
	try
	{ // begin try (depth: 1)
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_53;
		L_53 = RSA_Create_m044F1B4384248B4C9FEA4DAB01DB85B0A829A383(/*hidden argument*/NULL);
		V_4 = L_53;
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_54 = V_4;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_55 = V_1;
		NullCheck(L_54);
		VirtActionInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_54, L_55);
		goto IL_0158;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013a;
		}
		throw e;
	}

CATCH_013a:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * L_56 = (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC_il2cpp_TypeInfo_var)));
		CspParameters__ctor_mA5F11E1EA0F0841876916834296DD6C49A0D5978(L_56, /*hidden argument*/NULL);
		CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * L_57 = L_56;
		NullCheck(L_57);
		CspParameters_set_Flags_m73AF2CE4BA5726935B70AD6242491B14C7294A55(L_57, 1, /*hidden argument*/NULL);
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_58 = (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var)));
		RSACryptoServiceProvider__ctor_m044CC794956315D9C47B26A043EE435534EFFAB1(L_58, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_59 = V_4;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_60 = V_1;
		NullCheck(L_59);
		VirtActionInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_59, L_60);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0158;
	} // end catch (depth: 1)

IL_0158:
	{
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_61 = V_4;
		return L_61;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ___rsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	{
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_0 = ___rsa0;
		NullCheck(L_0);
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_1;
		L_1 = VirtFuncInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 , bool >::Invoke(10 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_2, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_5, (uint8_t)2, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_3, L_5, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8.get_Modulus_1();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10;
		L_10 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11;
		L_11 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_7, L_10, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13.get_Exponent_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
		L_15 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16;
		L_16 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_12, L_15, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_18 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = L_18.get_D_7();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20;
		L_20 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21;
		L_21 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_17, L_20, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_22 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_23 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = L_23.get_P_2();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25;
		L_25 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26;
		L_26 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_22, L_25, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_28 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = L_28.get_Q_3();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_30;
		L_30 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_31;
		L_31 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_27, L_30, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_33 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33.get_DP_4();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_35;
		L_35 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_36;
		L_36 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_32, L_35, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_38 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = L_38.get_DQ_5();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_40;
		L_40 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_41;
		L_41 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_37, L_40, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_42 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_43 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = L_43.get_InverseQ_6();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_45;
		L_45 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_46;
		L_46 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_42, L_45, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_47 = V_1;
		NullCheck(L_47);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48;
		L_48 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_47);
		return L_48;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___privateKey0, DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  ___dsaParameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___privateKey0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_RuntimeMethod_var)));
	}

IL_001b:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_6, ((int32_t)20), /*hidden argument*/NULL);
		(&___dsaParameters1)->set_X_5(L_7);
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_8;
		L_8 = DSA_Create_m1BB98278D12EF7F48DDF0B52FCF7CA0602AFC618(/*hidden argument*/NULL);
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_9 = L_8;
		DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  L_10 = ___dsaParameters1;
		NullCheck(L_9);
		VirtActionInvoker1< DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  >::Invoke(11 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_9, L_10);
		return L_9;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139 (DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ___dsa0, const RuntimeMethod* method)
{
	{
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_0 = ___dsa0;
		NullCheck(L_0);
		DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  L_1;
		L_1 = VirtFuncInvoker1< DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1 , bool >::Invoke(10 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1.get_X_5();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3;
		L_3 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_3);
		return L_4;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.AsymmetricAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133 (AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_0 = ___aa0;
		if (!((RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)IsInstClass((RuntimeObject*)L_0, RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_1 = ___aa0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C(((RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)CastclassClass((RuntimeObject*)L_1, RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_3 = ___aa0;
		if (!((DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 *)IsInstClass((RuntimeObject*)L_3, DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_4 = ___aa0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139(((DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 *)CastclassClass((RuntimeObject*)L_4, DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}

IL_0028:
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_6 = ___aa0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_8 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE2C0822BD84EF90D7851CC9D164E187DED6EADF1(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6)), L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_RuntimeMethod_var)));
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
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_mEC2E71CDD44D771B588C8E2B263DAA18A161AFF1 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mB39E17F6641982F45D5C147AB8D82E0A17D5ABC0 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyGeneratedEventHandler_BeginInvoke_mFFF44EBD0D651258101E1458AB1B0AD29CF24375 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_EndInvoke_mEE04B5ACD0BC9E784EC2211D7138C3E6309491BF (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m121D2627B82462B1F3AF7637F188AA1013879E1D (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * X509CertificateEnumerator_get_Current_mA9AD4D624A06130CD4A92FCDC0B03A52425D5BE6 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var));
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m60E14E055A388DEF34E5D4AB19A73C2789D8B00B (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7F2C17CFD3DFD79B14CCEF343CA9C593C064169F (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6B7E6EE6C087A2833A11BAF537C0D162619AF889 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m6D9B757FF19EE0AB676DF601D145009646579840 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_nTag_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___value0;
		__this->set_content_1(L_0);
		return;
	}
}
