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

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>>
struct Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// System.Collections.Generic.List`1<System.Security.Claims.Claim>
struct List_1_t8BAF47F89605F5DE54C67557D63C291478F11812;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_t4C637A7731966BC90A187F079F9E026B019BBA33;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F;
// System.Xml.DomNameTable
struct DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tE715F6572D858174C1BDCF0076B3C6415B226CD0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tC697CEDEA24AC6EF87E998BF72B96EDBD84DB229;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Net.MonoChunkStream
struct MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7;
// Mono.Net.Security.MonoTlsStream
struct MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.Net.NetworkCredential
struct NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686;
// System.Security.Cryptography.Oid
struct Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800;
// System.Xml.OnRemoveWriter
struct OnRemoveWriter_t7810F8F0B2E83630AB109B52D2A06F3A9AA8A30B;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88;
// System.Net.WebConnectionTunnel
struct WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654;
// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t4BDF7F8E6884045DFACB204BE0BD72FF7546F3C0;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358;
// System.Xml.XmlEventCache
struct XmlEventCache_t7429BFB736D94B0281F53167E418058D78A4C028;
// System.Xml.XmlImplementation
struct XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.XmlName
struct XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771;
// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9;
// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5;
// System.Xml.XmlRawWriterBase64Encoder
struct XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// System.Xml.XmlResolver
struct XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0;
// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Security.Claims.ClaimsIdentity
struct ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Claims.ClaimsIdentity::m_userSerializationData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_userSerializationData_0;
	// System.Collections.Generic.List`1<System.Security.Claims.Claim> System.Security.Claims.ClaimsIdentity::m_instanceClaims
	List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * ___m_instanceClaims_1;
	// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> System.Security.Claims.ClaimsIdentity::m_externalClaims
	Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * ___m_externalClaims_2;
	// System.String System.Security.Claims.ClaimsIdentity::m_nameType
	String_t* ___m_nameType_3;
	// System.String System.Security.Claims.ClaimsIdentity::m_roleType
	String_t* ___m_roleType_4;
	// System.String System.Security.Claims.ClaimsIdentity::m_version
	String_t* ___m_version_5;
	// System.Security.Claims.ClaimsIdentity System.Security.Claims.ClaimsIdentity::m_actor
	ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * ___m_actor_6;
	// System.String System.Security.Claims.ClaimsIdentity::m_authenticationType
	String_t* ___m_authenticationType_7;
	// System.Object System.Security.Claims.ClaimsIdentity::m_bootstrapContext
	RuntimeObject * ___m_bootstrapContext_8;
	// System.String System.Security.Claims.ClaimsIdentity::m_label
	String_t* ___m_label_9;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedNameType
	String_t* ___m_serializedNameType_10;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedRoleType
	String_t* ___m_serializedRoleType_11;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedClaims
	String_t* ___m_serializedClaims_12;

public:
	inline static int32_t get_offset_of_m_userSerializationData_0() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_userSerializationData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_userSerializationData_0() const { return ___m_userSerializationData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_userSerializationData_0() { return &___m_userSerializationData_0; }
	inline void set_m_userSerializationData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_userSerializationData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_userSerializationData_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_instanceClaims_1() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_instanceClaims_1)); }
	inline List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * get_m_instanceClaims_1() const { return ___m_instanceClaims_1; }
	inline List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 ** get_address_of_m_instanceClaims_1() { return &___m_instanceClaims_1; }
	inline void set_m_instanceClaims_1(List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * value)
	{
		___m_instanceClaims_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_instanceClaims_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_externalClaims_2() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_externalClaims_2)); }
	inline Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * get_m_externalClaims_2() const { return ___m_externalClaims_2; }
	inline Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 ** get_address_of_m_externalClaims_2() { return &___m_externalClaims_2; }
	inline void set_m_externalClaims_2(Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * value)
	{
		___m_externalClaims_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_externalClaims_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameType_3() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_nameType_3)); }
	inline String_t* get_m_nameType_3() const { return ___m_nameType_3; }
	inline String_t** get_address_of_m_nameType_3() { return &___m_nameType_3; }
	inline void set_m_nameType_3(String_t* value)
	{
		___m_nameType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_roleType_4() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_roleType_4)); }
	inline String_t* get_m_roleType_4() const { return ___m_roleType_4; }
	inline String_t** get_address_of_m_roleType_4() { return &___m_roleType_4; }
	inline void set_m_roleType_4(String_t* value)
	{
		___m_roleType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_roleType_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_version_5() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_version_5)); }
	inline String_t* get_m_version_5() const { return ___m_version_5; }
	inline String_t** get_address_of_m_version_5() { return &___m_version_5; }
	inline void set_m_version_5(String_t* value)
	{
		___m_version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_actor_6() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_actor_6)); }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * get_m_actor_6() const { return ___m_actor_6; }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 ** get_address_of_m_actor_6() { return &___m_actor_6; }
	inline void set_m_actor_6(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * value)
	{
		___m_actor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actor_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_authenticationType_7() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_authenticationType_7)); }
	inline String_t* get_m_authenticationType_7() const { return ___m_authenticationType_7; }
	inline String_t** get_address_of_m_authenticationType_7() { return &___m_authenticationType_7; }
	inline void set_m_authenticationType_7(String_t* value)
	{
		___m_authenticationType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_authenticationType_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_bootstrapContext_8() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_bootstrapContext_8)); }
	inline RuntimeObject * get_m_bootstrapContext_8() const { return ___m_bootstrapContext_8; }
	inline RuntimeObject ** get_address_of_m_bootstrapContext_8() { return &___m_bootstrapContext_8; }
	inline void set_m_bootstrapContext_8(RuntimeObject * value)
	{
		___m_bootstrapContext_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_bootstrapContext_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_9() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_label_9)); }
	inline String_t* get_m_label_9() const { return ___m_label_9; }
	inline String_t** get_address_of_m_label_9() { return &___m_label_9; }
	inline void set_m_label_9(String_t* value)
	{
		___m_label_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedNameType_10() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedNameType_10)); }
	inline String_t* get_m_serializedNameType_10() const { return ___m_serializedNameType_10; }
	inline String_t** get_address_of_m_serializedNameType_10() { return &___m_serializedNameType_10; }
	inline void set_m_serializedNameType_10(String_t* value)
	{
		___m_serializedNameType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedNameType_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedRoleType_11() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedRoleType_11)); }
	inline String_t* get_m_serializedRoleType_11() const { return ___m_serializedRoleType_11; }
	inline String_t** get_address_of_m_serializedRoleType_11() { return &___m_serializedRoleType_11; }
	inline void set_m_serializedRoleType_11(String_t* value)
	{
		___m_serializedRoleType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedRoleType_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedClaims_12() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedClaims_12)); }
	inline String_t* get_m_serializedClaims_12() const { return ___m_serializedClaims_12; }
	inline String_t** get_address_of_m_serializedClaims_12() { return &___m_serializedClaims_12; }
	inline void set_m_serializedClaims_12(String_t* value)
	{
		___m_serializedClaims_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedClaims_12), (void*)value);
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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
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

// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___impl_0)); }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509CertificateImpl::cachedCertificateHash
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cachedCertificateHash_0;

public:
	inline static int32_t get_offset_of_cachedCertificateHash_0() { return static_cast<int32_t>(offsetof(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219, ___cachedCertificateHash_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cachedCertificateHash_0() const { return ___cachedCertificateHash_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cachedCertificateHash_0() { return &___cachedCertificateHash_0; }
	inline void set_cachedCertificateHash_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cachedCertificateHash_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCertificateHash_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372, ___list_0)); }
	inline List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * get_list_0() const { return ___list_0; }
	inline List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37, ___impl_0)); }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1, ____list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_0() const { return ____list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlNodeList
struct XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138  : public RuntimeObject
{
public:

public:
};

struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___writeNodeBuffer_0;

public:
	inline static int32_t get_offset_of_writeNodeBuffer_0() { return static_cast<int32_t>(offsetof(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D, ___writeNodeBuffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_writeNodeBuffer_0() const { return ___writeNodeBuffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_writeNodeBuffer_0() { return &___writeNodeBuffer_0; }
	inline void set_writeNodeBuffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___writeNodeBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeNodeBuffer_0), (void*)value);
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
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


// UnityEngine.Rendering.VolumeIsolationScope
struct VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E__padding[1];
	};

public:
};


// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD  : public X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::friendlyName
	String_t* ___friendlyName_4;

public:
	inline static int32_t get_offset_of_friendlyName_4() { return static_cast<int32_t>(offsetof(X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD, ___friendlyName_4)); }
	inline String_t* get_friendlyName_4() const { return ___friendlyName_4; }
	inline String_t** get_address_of_friendlyName_4() { return &___friendlyName_4; }
	inline void set_friendlyName_4(String_t* value)
	{
		___friendlyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendlyName_4), (void*)value);
	}
};

struct X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signedData_5;

public:
	inline static int32_t get_offset_of_signedData_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_StaticFields, ___signedData_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_signedData_5() const { return ___signedData_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_signedData_5() { return &___signedData_5; }
	inline void set_signedData_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___signedData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signedData_5), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct X509Certificate2Impl_tDCB69D59B05B2D9BAD62CC5EE4579A17EF521A2B  : public X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219
{
public:

public:
};


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateImplMono
struct X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5  : public X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateImplMono::x509
	X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * ___x509_1;

public:
	inline static int32_t get_offset_of_x509_1() { return static_cast<int32_t>(offsetof(X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5, ___x509_1)); }
	inline X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * get_x509_1() const { return ___x509_1; }
	inline X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF ** get_address_of_x509_1() { return &___x509_1; }
	inline void set_x509_1(X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * value)
	{
		___x509_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x509_1), (void*)value);
	}
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


// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// System.Xml.Serialization.XmlAnyElementAttributes
struct XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Xml.Serialization.XmlArrayItemAttributes
struct XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Xml.XmlAsyncCheckReader
struct XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036  : public XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138
{
public:
	// System.Xml.XmlReader System.Xml.XmlAsyncCheckReader::coreReader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___coreReader_3;
	// System.Threading.Tasks.Task System.Xml.XmlAsyncCheckReader::lastTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___lastTask_4;

public:
	inline static int32_t get_offset_of_coreReader_3() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036, ___coreReader_3)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_coreReader_3() const { return ___coreReader_3; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_coreReader_3() { return &___coreReader_3; }
	inline void set_coreReader_3(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___coreReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreReader_3), (void*)value);
	}

	inline static int32_t get_offset_of_lastTask_4() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036, ___lastTask_4)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_lastTask_4() const { return ___lastTask_4; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_lastTask_4() { return &___lastTask_4; }
	inline void set_lastTask_4(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___lastTask_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTask_4), (void*)value);
	}
};


// System.Xml.XmlAsyncCheckWriter
struct XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlWriter System.Xml.XmlAsyncCheckWriter::coreWriter
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___coreWriter_1;
	// System.Threading.Tasks.Task System.Xml.XmlAsyncCheckWriter::lastTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___lastTask_2;

public:
	inline static int32_t get_offset_of_coreWriter_1() { return static_cast<int32_t>(offsetof(XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0, ___coreWriter_1)); }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * get_coreWriter_1() const { return ___coreWriter_1; }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D ** get_address_of_coreWriter_1() { return &___coreWriter_1; }
	inline void set_coreWriter_1(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * value)
	{
		___coreWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastTask_2() { return static_cast<int32_t>(offsetof(XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0, ___lastTask_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_lastTask_2() const { return ___lastTask_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_lastTask_2() { return &___lastTask_2; }
	inline void set_lastTask_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___lastTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTask_2), (void*)value);
	}
};


// System.Xml.XmlAttribute
struct XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___name_1)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_1() const { return ___name_1; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_2() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___lastChild_2)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_2() const { return ___lastChild_2; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_2() { return &___lastChild_2; }
	inline void set_lastChild_2(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_2), (void*)value);
	}
};


// System.Xml.XmlChildNodes
struct XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB  : public XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9
{
public:
	// System.Xml.XmlNode System.Xml.XmlChildNodes::container
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___container_0;

public:
	inline static int32_t get_offset_of_container_0() { return static_cast<int32_t>(offsetof(XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB, ___container_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_container_0() const { return ___container_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_container_0() { return &___container_0; }
	inline void set_container_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___container_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___container_0), (void*)value);
	}
};


// System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject * ___objLock_40;

public:
	inline static int32_t get_offset_of_implementation_1() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___implementation_1)); }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * get_implementation_1() const { return ___implementation_1; }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 ** get_address_of_implementation_1() { return &___implementation_1; }
	inline void set_implementation_1(XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * value)
	{
		___implementation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementation_1), (void*)value);
	}

	inline static int32_t get_offset_of_domNameTable_2() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___domNameTable_2)); }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * get_domNameTable_2() const { return ___domNameTable_2; }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB ** get_address_of_domNameTable_2() { return &___domNameTable_2; }
	inline void set_domNameTable_2(DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * value)
	{
		___domNameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domNameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_3() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___lastChild_3)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_3() const { return ___lastChild_3; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_3() { return &___lastChild_3; }
	inline void set_lastChild_3(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_3), (void*)value);
	}

	inline static int32_t get_offset_of_entities_4() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___entities_4)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_entities_4() const { return ___entities_4; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_entities_4() { return &___entities_4; }
	inline void set_entities_4(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___entities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_4), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIdMap_5() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIdMap_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIdMap_5() const { return ___htElementIdMap_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIdMap_5() { return &___htElementIdMap_5; }
	inline void set_htElementIdMap_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIdMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIdMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIDAttrDecl_6() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIDAttrDecl_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIDAttrDecl_6() const { return ___htElementIDAttrDecl_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIDAttrDecl_6() { return &___htElementIDAttrDecl_6; }
	inline void set_htElementIDAttrDecl_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIDAttrDecl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIDAttrDecl_6), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemaInfo_7)); }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemas_8)); }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_8), (void*)value);
	}

	inline static int32_t get_offset_of_reportValidity_9() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___reportValidity_9)); }
	inline bool get_reportValidity_9() const { return ___reportValidity_9; }
	inline bool* get_address_of_reportValidity_9() { return &___reportValidity_9; }
	inline void set_reportValidity_9(bool value)
	{
		___reportValidity_9 = value;
	}

	inline static int32_t get_offset_of_actualLoadingStatus_10() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___actualLoadingStatus_10)); }
	inline bool get_actualLoadingStatus_10() const { return ___actualLoadingStatus_10; }
	inline bool* get_address_of_actualLoadingStatus_10() { return &___actualLoadingStatus_10; }
	inline void set_actualLoadingStatus_10(bool value)
	{
		___actualLoadingStatus_10 = value;
	}

	inline static int32_t get_offset_of_onNodeInsertingDelegate_11() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertingDelegate_11)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertingDelegate_11() const { return ___onNodeInsertingDelegate_11; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertingDelegate_11() { return &___onNodeInsertingDelegate_11; }
	inline void set_onNodeInsertingDelegate_11(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertingDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertingDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeInsertedDelegate_12() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertedDelegate_12)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertedDelegate_12() const { return ___onNodeInsertedDelegate_12; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertedDelegate_12() { return &___onNodeInsertedDelegate_12; }
	inline void set_onNodeInsertedDelegate_12(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertedDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertedDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovingDelegate_13() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovingDelegate_13)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovingDelegate_13() const { return ___onNodeRemovingDelegate_13; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovingDelegate_13() { return &___onNodeRemovingDelegate_13; }
	inline void set_onNodeRemovingDelegate_13(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovingDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovingDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovedDelegate_14() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovedDelegate_14)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovedDelegate_14() const { return ___onNodeRemovedDelegate_14; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovedDelegate_14() { return &___onNodeRemovedDelegate_14; }
	inline void set_onNodeRemovedDelegate_14(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovedDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovedDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangingDelegate_15() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangingDelegate_15)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangingDelegate_15() const { return ___onNodeChangingDelegate_15; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangingDelegate_15() { return &___onNodeChangingDelegate_15; }
	inline void set_onNodeChangingDelegate_15(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangingDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangingDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangedDelegate_16() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangedDelegate_16)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangedDelegate_16() const { return ___onNodeChangedDelegate_16; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangedDelegate_16() { return &___onNodeChangedDelegate_16; }
	inline void set_onNodeChangedDelegate_16(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangedDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangedDelegate_16), (void*)value);
	}

	inline static int32_t get_offset_of_fEntRefNodesPresent_17() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fEntRefNodesPresent_17)); }
	inline bool get_fEntRefNodesPresent_17() const { return ___fEntRefNodesPresent_17; }
	inline bool* get_address_of_fEntRefNodesPresent_17() { return &___fEntRefNodesPresent_17; }
	inline void set_fEntRefNodesPresent_17(bool value)
	{
		___fEntRefNodesPresent_17 = value;
	}

	inline static int32_t get_offset_of_fCDataNodesPresent_18() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fCDataNodesPresent_18)); }
	inline bool get_fCDataNodesPresent_18() const { return ___fCDataNodesPresent_18; }
	inline bool* get_address_of_fCDataNodesPresent_18() { return &___fCDataNodesPresent_18; }
	inline void set_fCDataNodesPresent_18(bool value)
	{
		___fCDataNodesPresent_18 = value;
	}

	inline static int32_t get_offset_of_preserveWhitespace_19() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___preserveWhitespace_19)); }
	inline bool get_preserveWhitespace_19() const { return ___preserveWhitespace_19; }
	inline bool* get_address_of_preserveWhitespace_19() { return &___preserveWhitespace_19; }
	inline void set_preserveWhitespace_19(bool value)
	{
		___preserveWhitespace_19 = value;
	}

	inline static int32_t get_offset_of_isLoading_20() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___isLoading_20)); }
	inline bool get_isLoading_20() const { return ___isLoading_20; }
	inline bool* get_address_of_isLoading_20() { return &___isLoading_20; }
	inline void set_isLoading_20(bool value)
	{
		___isLoading_20 = value;
	}

	inline static int32_t get_offset_of_strDocumentName_21() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentName_21)); }
	inline String_t* get_strDocumentName_21() const { return ___strDocumentName_21; }
	inline String_t** get_address_of_strDocumentName_21() { return &___strDocumentName_21; }
	inline void set_strDocumentName_21(String_t* value)
	{
		___strDocumentName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentName_21), (void*)value);
	}

	inline static int32_t get_offset_of_strDocumentFragmentName_22() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentFragmentName_22)); }
	inline String_t* get_strDocumentFragmentName_22() const { return ___strDocumentFragmentName_22; }
	inline String_t** get_address_of_strDocumentFragmentName_22() { return &___strDocumentFragmentName_22; }
	inline void set_strDocumentFragmentName_22(String_t* value)
	{
		___strDocumentFragmentName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentFragmentName_22), (void*)value);
	}

	inline static int32_t get_offset_of_strCommentName_23() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCommentName_23)); }
	inline String_t* get_strCommentName_23() const { return ___strCommentName_23; }
	inline String_t** get_address_of_strCommentName_23() { return &___strCommentName_23; }
	inline void set_strCommentName_23(String_t* value)
	{
		___strCommentName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCommentName_23), (void*)value);
	}

	inline static int32_t get_offset_of_strTextName_24() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strTextName_24)); }
	inline String_t* get_strTextName_24() const { return ___strTextName_24; }
	inline String_t** get_address_of_strTextName_24() { return &___strTextName_24; }
	inline void set_strTextName_24(String_t* value)
	{
		___strTextName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strTextName_24), (void*)value);
	}

	inline static int32_t get_offset_of_strCDataSectionName_25() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCDataSectionName_25)); }
	inline String_t* get_strCDataSectionName_25() const { return ___strCDataSectionName_25; }
	inline String_t** get_address_of_strCDataSectionName_25() { return &___strCDataSectionName_25; }
	inline void set_strCDataSectionName_25(String_t* value)
	{
		___strCDataSectionName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCDataSectionName_25), (void*)value);
	}

	inline static int32_t get_offset_of_strEntityName_26() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEntityName_26)); }
	inline String_t* get_strEntityName_26() const { return ___strEntityName_26; }
	inline String_t** get_address_of_strEntityName_26() { return &___strEntityName_26; }
	inline void set_strEntityName_26(String_t* value)
	{
		___strEntityName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEntityName_26), (void*)value);
	}

	inline static int32_t get_offset_of_strID_27() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strID_27)); }
	inline String_t* get_strID_27() const { return ___strID_27; }
	inline String_t** get_address_of_strID_27() { return &___strID_27; }
	inline void set_strID_27(String_t* value)
	{
		___strID_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strID_27), (void*)value);
	}

	inline static int32_t get_offset_of_strXmlns_28() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXmlns_28)); }
	inline String_t* get_strXmlns_28() const { return ___strXmlns_28; }
	inline String_t** get_address_of_strXmlns_28() { return &___strXmlns_28; }
	inline void set_strXmlns_28(String_t* value)
	{
		___strXmlns_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXmlns_28), (void*)value);
	}

	inline static int32_t get_offset_of_strXml_29() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXml_29)); }
	inline String_t* get_strXml_29() const { return ___strXml_29; }
	inline String_t** get_address_of_strXml_29() { return &___strXml_29; }
	inline void set_strXml_29(String_t* value)
	{
		___strXml_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXml_29), (void*)value);
	}

	inline static int32_t get_offset_of_strSpace_30() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSpace_30)); }
	inline String_t* get_strSpace_30() const { return ___strSpace_30; }
	inline String_t** get_address_of_strSpace_30() { return &___strSpace_30; }
	inline void set_strSpace_30(String_t* value)
	{
		___strSpace_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSpace_30), (void*)value);
	}

	inline static int32_t get_offset_of_strLang_31() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strLang_31)); }
	inline String_t* get_strLang_31() const { return ___strLang_31; }
	inline String_t** get_address_of_strLang_31() { return &___strLang_31; }
	inline void set_strLang_31(String_t* value)
	{
		___strLang_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strLang_31), (void*)value);
	}

	inline static int32_t get_offset_of_strEmpty_32() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEmpty_32)); }
	inline String_t* get_strEmpty_32() const { return ___strEmpty_32; }
	inline String_t** get_address_of_strEmpty_32() { return &___strEmpty_32; }
	inline void set_strEmpty_32(String_t* value)
	{
		___strEmpty_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEmpty_32), (void*)value);
	}

	inline static int32_t get_offset_of_strNonSignificantWhitespaceName_33() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strNonSignificantWhitespaceName_33)); }
	inline String_t* get_strNonSignificantWhitespaceName_33() const { return ___strNonSignificantWhitespaceName_33; }
	inline String_t** get_address_of_strNonSignificantWhitespaceName_33() { return &___strNonSignificantWhitespaceName_33; }
	inline void set_strNonSignificantWhitespaceName_33(String_t* value)
	{
		___strNonSignificantWhitespaceName_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strNonSignificantWhitespaceName_33), (void*)value);
	}

	inline static int32_t get_offset_of_strSignificantWhitespaceName_34() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSignificantWhitespaceName_34)); }
	inline String_t* get_strSignificantWhitespaceName_34() const { return ___strSignificantWhitespaceName_34; }
	inline String_t** get_address_of_strSignificantWhitespaceName_34() { return &___strSignificantWhitespaceName_34; }
	inline void set_strSignificantWhitespaceName_34(String_t* value)
	{
		___strSignificantWhitespaceName_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSignificantWhitespaceName_34), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXmlns_35() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXmlns_35)); }
	inline String_t* get_strReservedXmlns_35() const { return ___strReservedXmlns_35; }
	inline String_t** get_address_of_strReservedXmlns_35() { return &___strReservedXmlns_35; }
	inline void set_strReservedXmlns_35(String_t* value)
	{
		___strReservedXmlns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXmlns_35), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXml_36() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXml_36)); }
	inline String_t* get_strReservedXml_36() const { return ___strReservedXml_36; }
	inline String_t** get_address_of_strReservedXml_36() { return &___strReservedXml_36; }
	inline void set_strReservedXml_36(String_t* value)
	{
		___strReservedXml_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXml_36), (void*)value);
	}

	inline static int32_t get_offset_of_baseURI_37() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___baseURI_37)); }
	inline String_t* get_baseURI_37() const { return ___baseURI_37; }
	inline String_t** get_address_of_baseURI_37() { return &___baseURI_37; }
	inline void set_baseURI_37(String_t* value)
	{
		___baseURI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseURI_37), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_38() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___resolver_38)); }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * get_resolver_38() const { return ___resolver_38; }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A ** get_address_of_resolver_38() { return &___resolver_38; }
	inline void set_resolver_38(XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * value)
	{
		___resolver_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_38), (void*)value);
	}

	inline static int32_t get_offset_of_bSetResolver_39() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___bSetResolver_39)); }
	inline bool get_bSetResolver_39() const { return ___bSetResolver_39; }
	inline bool* get_address_of_bSetResolver_39() { return &___bSetResolver_39; }
	inline void set_bSetResolver_39(bool value)
	{
		___bSetResolver_39 = value;
	}

	inline static int32_t get_offset_of_objLock_40() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___objLock_40)); }
	inline RuntimeObject * get_objLock_40() const { return ___objLock_40; }
	inline RuntimeObject ** get_address_of_objLock_40() { return &___objLock_40; }
	inline void set_objLock_40(RuntimeObject * value)
	{
		___objLock_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objLock_40), (void*)value);
	}
};

struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields
{
public:
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_41() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___EmptyEnumerator_41)); }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * get_EmptyEnumerator_41() const { return ___EmptyEnumerator_41; }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 ** get_address_of_EmptyEnumerator_41() { return &___EmptyEnumerator_41; }
	inline void set_EmptyEnumerator_41(EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * value)
	{
		___EmptyEnumerator_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyEnumerator_41), (void*)value);
	}

	inline static int32_t get_offset_of_NotKnownSchemaInfo_42() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___NotKnownSchemaInfo_42)); }
	inline RuntimeObject* get_NotKnownSchemaInfo_42() const { return ___NotKnownSchemaInfo_42; }
	inline RuntimeObject** get_address_of_NotKnownSchemaInfo_42() { return &___NotKnownSchemaInfo_42; }
	inline void set_NotKnownSchemaInfo_42(RuntimeObject* value)
	{
		___NotKnownSchemaInfo_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotKnownSchemaInfo_42), (void*)value);
	}

	inline static int32_t get_offset_of_ValidSchemaInfo_43() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___ValidSchemaInfo_43)); }
	inline RuntimeObject* get_ValidSchemaInfo_43() const { return ___ValidSchemaInfo_43; }
	inline RuntimeObject** get_address_of_ValidSchemaInfo_43() { return &___ValidSchemaInfo_43; }
	inline void set_ValidSchemaInfo_43(RuntimeObject* value)
	{
		___ValidSchemaInfo_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidSchemaInfo_43), (void*)value);
	}

	inline static int32_t get_offset_of_InvalidSchemaInfo_44() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___InvalidSchemaInfo_44)); }
	inline RuntimeObject* get_InvalidSchemaInfo_44() const { return ___InvalidSchemaInfo_44; }
	inline RuntimeObject** get_address_of_InvalidSchemaInfo_44() { return &___InvalidSchemaInfo_44; }
	inline void set_InvalidSchemaInfo_44(RuntimeObject* value)
	{
		___InvalidSchemaInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidSchemaInfo_44), (void*)value);
	}
};


// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0, ___next_1)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlRawWriterBase64Encoder System.Xml.XmlRawWriter::base64Encoder
	XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * ___base64Encoder_1;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlRawWriter::resolver
	RuntimeObject* ___resolver_2;

public:
	inline static int32_t get_offset_of_base64Encoder_1() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___base64Encoder_1)); }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * get_base64Encoder_1() const { return ___base64Encoder_1; }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB ** get_address_of_base64Encoder_1() { return &___base64Encoder_1; }
	inline void set_base64Encoder_1(XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * value)
	{
		___base64Encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_2() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___resolver_2)); }
	inline RuntimeObject* get_resolver_2() const { return ___resolver_2; }
	inline RuntimeObject** get_address_of_resolver_2() { return &___resolver_2; }
	inline void set_resolver_2(RuntimeObject* value)
	{
		___resolver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_2), (void*)value);
	}
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE 
{
public:
	// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::field
	RuntimeObject * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE, ___field_0)); }
	inline RuntimeObject * get_field_0() const { return ___field_0; }
	inline RuntimeObject ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(RuntimeObject * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com
{
	Il2CppIUnknown* ___field_0;
};

// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Net.HttpStatusCode
struct HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) = 0;
};

// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.StoreLocation
struct StoreLocation_t6651125F57CF07C4C064CD12198BEA60A704B36F 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreLocation_t6651125F57CF07C4C064CD12198BEA60A704B36F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}

	inline static int32_t get_offset_of_m_VfxAsset_2() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_VfxAsset_2)); }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * get_m_VfxAsset_2() const { return ___m_VfxAsset_2; }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 ** get_address_of_m_VfxAsset_2() { return &___m_VfxAsset_2; }
	inline void set_m_VfxAsset_2(VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * value)
	{
		___m_VfxAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VfxAsset_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
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


// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88  : public RuntimeObject
{
public:
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * ___ntlm_credentials_0;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated_1;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing_2;
	// System.IO.Stream System.Net.WebConnection::networkStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___networkStream_3;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_4;
	// Mono.Net.Security.MonoTlsStream System.Net.WebConnection::monoTlsStream
	MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * ___monoTlsStream_5;
	// System.Net.WebConnectionTunnel System.Net.WebConnection::tunnel
	WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * ___tunnel_6;
	// System.Int32 System.Net.WebConnection::disposed
	int32_t ___disposed_7;
	// System.Net.ServicePoint System.Net.WebConnection::<ServicePoint>k__BackingField
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___U3CServicePointU3Ek__BackingField_8;
	// System.DateTime System.Net.WebConnection::idleSince
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___idleSince_9;
	// System.Net.WebOperation System.Net.WebConnection::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_10;

public:
	inline static int32_t get_offset_of_ntlm_credentials_0() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_credentials_0)); }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * get_ntlm_credentials_0() const { return ___ntlm_credentials_0; }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 ** get_address_of_ntlm_credentials_0() { return &___ntlm_credentials_0; }
	inline void set_ntlm_credentials_0(NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * value)
	{
		___ntlm_credentials_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ntlm_credentials_0), (void*)value);
	}

	inline static int32_t get_offset_of_ntlm_authenticated_1() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_authenticated_1)); }
	inline bool get_ntlm_authenticated_1() const { return ___ntlm_authenticated_1; }
	inline bool* get_address_of_ntlm_authenticated_1() { return &___ntlm_authenticated_1; }
	inline void set_ntlm_authenticated_1(bool value)
	{
		___ntlm_authenticated_1 = value;
	}

	inline static int32_t get_offset_of_unsafe_sharing_2() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___unsafe_sharing_2)); }
	inline bool get_unsafe_sharing_2() const { return ___unsafe_sharing_2; }
	inline bool* get_address_of_unsafe_sharing_2() { return &___unsafe_sharing_2; }
	inline void set_unsafe_sharing_2(bool value)
	{
		___unsafe_sharing_2 = value;
	}

	inline static int32_t get_offset_of_networkStream_3() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___networkStream_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_networkStream_3() const { return ___networkStream_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_networkStream_3() { return &___networkStream_3; }
	inline void set_networkStream_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___networkStream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_3), (void*)value);
	}

	inline static int32_t get_offset_of_socket_4() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___socket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_4() const { return ___socket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_4() { return &___socket_4; }
	inline void set_socket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_4), (void*)value);
	}

	inline static int32_t get_offset_of_monoTlsStream_5() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___monoTlsStream_5)); }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * get_monoTlsStream_5() const { return ___monoTlsStream_5; }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 ** get_address_of_monoTlsStream_5() { return &___monoTlsStream_5; }
	inline void set_monoTlsStream_5(MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * value)
	{
		___monoTlsStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoTlsStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_tunnel_6() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___tunnel_6)); }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * get_tunnel_6() const { return ___tunnel_6; }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 ** get_address_of_tunnel_6() { return &___tunnel_6; }
	inline void set_tunnel_6(WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * value)
	{
		___tunnel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tunnel_6), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___disposed_7)); }
	inline int32_t get_disposed_7() const { return ___disposed_7; }
	inline int32_t* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(int32_t value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_U3CServicePointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___U3CServicePointU3Ek__BackingField_8)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_U3CServicePointU3Ek__BackingField_8() const { return ___U3CServicePointU3Ek__BackingField_8; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_U3CServicePointU3Ek__BackingField_8() { return &___U3CServicePointU3Ek__BackingField_8; }
	inline void set_U3CServicePointU3Ek__BackingField_8(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___U3CServicePointU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServicePointU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_idleSince_9() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___idleSince_9)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_idleSince_9() const { return ___idleSince_9; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_idleSince_9() { return &___idleSince_9; }
	inline void set_idleSince_9(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___idleSince_9 = value;
	}

	inline static int32_t get_offset_of_currentOperation_10() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___currentOperation_10)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_10() const { return ___currentOperation_10; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_10() { return &___currentOperation_10; }
	inline void set_currentOperation_10(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_10), (void*)value);
	}
};


// System.Net.WebConnectionStream
struct WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Boolean System.Net.WebConnectionStream::closed
	bool ___closed_4;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_5;
	// System.Object System.Net.WebConnectionStream::locker
	RuntimeObject * ___locker_6;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_7;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_8;
	// System.Boolean System.Net.WebConnectionStream::IgnoreIOErrors
	bool ___IgnoreIOErrors_9;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::<Request>k__BackingField
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___U3CRequestU3Ek__BackingField_10;
	// System.Net.WebConnection System.Net.WebConnectionStream::<Connection>k__BackingField
	WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * ___U3CConnectionU3Ek__BackingField_11;
	// System.Net.WebOperation System.Net.WebConnectionStream::<Operation>k__BackingField
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___U3COperationU3Ek__BackingField_12;
	// System.IO.Stream System.Net.WebConnectionStream::<InnerStream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CInnerStreamU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_closed_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___closed_4)); }
	inline bool get_closed_4() const { return ___closed_4; }
	inline bool* get_address_of_closed_4() { return &___closed_4; }
	inline void set_closed_4(bool value)
	{
		___closed_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___locker_6)); }
	inline RuntimeObject * get_locker_6() const { return ___locker_6; }
	inline RuntimeObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(RuntimeObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_6), (void*)value);
	}

	inline static int32_t get_offset_of_read_timeout_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___read_timeout_7)); }
	inline int32_t get_read_timeout_7() const { return ___read_timeout_7; }
	inline int32_t* get_address_of_read_timeout_7() { return &___read_timeout_7; }
	inline void set_read_timeout_7(int32_t value)
	{
		___read_timeout_7 = value;
	}

	inline static int32_t get_offset_of_write_timeout_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___write_timeout_8)); }
	inline int32_t get_write_timeout_8() const { return ___write_timeout_8; }
	inline int32_t* get_address_of_write_timeout_8() { return &___write_timeout_8; }
	inline void set_write_timeout_8(int32_t value)
	{
		___write_timeout_8 = value;
	}

	inline static int32_t get_offset_of_IgnoreIOErrors_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___IgnoreIOErrors_9)); }
	inline bool get_IgnoreIOErrors_9() const { return ___IgnoreIOErrors_9; }
	inline bool* get_address_of_IgnoreIOErrors_9() { return &___IgnoreIOErrors_9; }
	inline void set_IgnoreIOErrors_9(bool value)
	{
		___IgnoreIOErrors_9 = value;
	}

	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CRequestU3Ek__BackingField_10)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_U3CRequestU3Ek__BackingField_10() const { return ___U3CRequestU3Ek__BackingField_10; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_U3CRequestU3Ek__BackingField_10() { return &___U3CRequestU3Ek__BackingField_10; }
	inline void set_U3CRequestU3Ek__BackingField_10(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___U3CRequestU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CConnectionU3Ek__BackingField_11)); }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * get_U3CConnectionU3Ek__BackingField_11() const { return ___U3CConnectionU3Ek__BackingField_11; }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 ** get_address_of_U3CConnectionU3Ek__BackingField_11() { return &___U3CConnectionU3Ek__BackingField_11; }
	inline void set_U3CConnectionU3Ek__BackingField_11(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * value)
	{
		___U3CConnectionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COperationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3COperationU3Ek__BackingField_12)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_U3COperationU3Ek__BackingField_12() const { return ___U3COperationU3Ek__BackingField_12; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_U3COperationU3Ek__BackingField_12() { return &___U3COperationU3Ek__BackingField_12; }
	inline void set_U3COperationU3Ek__BackingField_12(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___U3COperationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInnerStreamU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CInnerStreamU3Ek__BackingField_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CInnerStreamU3Ek__BackingField_13() const { return ___U3CInnerStreamU3Ek__BackingField_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CInnerStreamU3Ek__BackingField_13() { return &___U3CInnerStreamU3Ek__BackingField_13; }
	inline void set_U3CInnerStreamU3Ek__BackingField_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CInnerStreamU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInnerStreamU3Ek__BackingField_13), (void*)value);
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_7;

public:
	inline static int32_t get_offset_of__winRtStream_4() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____winRtStream_4)); }
	inline RuntimeObject * get__winRtStream_4() const { return ____winRtStream_4; }
	inline RuntimeObject ** get_address_of__winRtStream_4() { return &____winRtStream_4; }
	inline void set__winRtStream_4(RuntimeObject * value)
	{
		____winRtStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_4), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canRead_5)); }
	inline bool get__canRead_5() const { return ____canRead_5; }
	inline bool* get_address_of__canRead_5() { return &____canRead_5; }
	inline void set__canRead_5(bool value)
	{
		____canRead_5 = value;
	}

	inline static int32_t get_offset_of__canWrite_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canWrite_6)); }
	inline bool get__canWrite_6() const { return ____canWrite_6; }
	inline bool* get_address_of__canWrite_6() { return &____canWrite_6; }
	inline void set__canWrite_6(bool value)
	{
		____canWrite_6 = value;
	}

	inline static int32_t get_offset_of__canSeek_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canSeek_7)); }
	inline bool get__canSeek_7() const { return ____canSeek_7; }
	inline bool* get_address_of__canSeek_7() { return &____canSeek_7; }
	inline void set__canSeek_7(bool value)
	{
		____canSeek_7 = value;
	}
};


// System.Security.Principal.WindowsAccountType
struct WindowsAccountType_tDDEC69E12A03FDCB70435F956344B17F7F63B0EE 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsAccountType_tDDEC69E12A03FDCB70435F956344B17F7F63B0EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Principal.WindowsImpersonationContext
struct WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsImpersonationContext::_token
	intptr_t ____token_0;
	// System.Boolean System.Security.Principal.WindowsImpersonationContext::undo
	bool ___undo_1;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of_undo_1() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1, ___undo_1)); }
	inline bool get_undo_1() const { return ___undo_1; }
	inline bool* get_address_of_undo_1() { return &___undo_1; }
	inline void set_undo_1(bool value)
	{
		___undo_1 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____pinHandle_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20  : public X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B
{
public:

public:
};

struct X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_StaticFields
{
public:
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___newline_split_1;

public:
	inline static int32_t get_offset_of_newline_split_1() { return static_cast<int32_t>(offsetof(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_StaticFields, ___newline_split_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_newline_split_1() const { return ___newline_split_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_newline_split_1() { return &___newline_split_1; }
	inline void set_newline_split_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___newline_split_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newline_split_1), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6  : public X509Certificate2Impl_tDCB69D59B05B2D9BAD62CC5EE4579A17EF521A2B
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_archived
	bool ____archived_1;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_extensions
	X509ExtensionCollection_t4BDF7F8E6884045DFACB204BE0BD72FF7546F3C0 * ____extensions_2;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_publicKey
	PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * ____publicKey_3;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::issuer_name
	X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * ___issuer_name_4;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::subject_name
	X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * ___subject_name_5;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signature_algorithm
	Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * ___signature_algorithm_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::intermediateCerts
	X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372 * ___intermediateCerts_7;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_cert
	X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * ____cert_8;

public:
	inline static int32_t get_offset_of__archived_1() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ____archived_1)); }
	inline bool get__archived_1() const { return ____archived_1; }
	inline bool* get_address_of__archived_1() { return &____archived_1; }
	inline void set__archived_1(bool value)
	{
		____archived_1 = value;
	}

	inline static int32_t get_offset_of__extensions_2() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ____extensions_2)); }
	inline X509ExtensionCollection_t4BDF7F8E6884045DFACB204BE0BD72FF7546F3C0 * get__extensions_2() const { return ____extensions_2; }
	inline X509ExtensionCollection_t4BDF7F8E6884045DFACB204BE0BD72FF7546F3C0 ** get_address_of__extensions_2() { return &____extensions_2; }
	inline void set__extensions_2(X509ExtensionCollection_t4BDF7F8E6884045DFACB204BE0BD72FF7546F3C0 * value)
	{
		____extensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_2), (void*)value);
	}

	inline static int32_t get_offset_of__publicKey_3() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ____publicKey_3)); }
	inline PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * get__publicKey_3() const { return ____publicKey_3; }
	inline PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 ** get_address_of__publicKey_3() { return &____publicKey_3; }
	inline void set__publicKey_3(PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * value)
	{
		____publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____publicKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_issuer_name_4() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ___issuer_name_4)); }
	inline X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * get_issuer_name_4() const { return ___issuer_name_4; }
	inline X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 ** get_address_of_issuer_name_4() { return &___issuer_name_4; }
	inline void set_issuer_name_4(X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * value)
	{
		___issuer_name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_4), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_5() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ___subject_name_5)); }
	inline X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * get_subject_name_5() const { return ___subject_name_5; }
	inline X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 ** get_address_of_subject_name_5() { return &___subject_name_5; }
	inline void set_subject_name_5(X500DistinguishedName_t35C155F2F27C4C7A82979C18763FBFE8D43F5654 * value)
	{
		___subject_name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_5), (void*)value);
	}

	inline static int32_t get_offset_of_signature_algorithm_6() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ___signature_algorithm_6)); }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * get_signature_algorithm_6() const { return ___signature_algorithm_6; }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 ** get_address_of_signature_algorithm_6() { return &___signature_algorithm_6; }
	inline void set_signature_algorithm_6(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * value)
	{
		___signature_algorithm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_algorithm_6), (void*)value);
	}

	inline static int32_t get_offset_of_intermediateCerts_7() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ___intermediateCerts_7)); }
	inline X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372 * get_intermediateCerts_7() const { return ___intermediateCerts_7; }
	inline X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372 ** get_address_of_intermediateCerts_7() { return &___intermediateCerts_7; }
	inline void set_intermediateCerts_7(X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372 * value)
	{
		___intermediateCerts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intermediateCerts_7), (void*)value);
	}

	inline static int32_t get_offset_of__cert_8() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6, ____cert_8)); }
	inline X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * get__cert_8() const { return ____cert_8; }
	inline X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 ** get_address_of__cert_8() { return &____cert_8; }
	inline void set__cert_8(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * value)
	{
		____cert_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cert_8), (void*)value);
	}
};

struct X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::empty_error
	String_t* ___empty_error_9;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::commonName
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___commonName_10;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::email
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___email_11;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signedData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signedData_12;

public:
	inline static int32_t get_offset_of_empty_error_9() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_StaticFields, ___empty_error_9)); }
	inline String_t* get_empty_error_9() const { return ___empty_error_9; }
	inline String_t** get_address_of_empty_error_9() { return &___empty_error_9; }
	inline void set_empty_error_9(String_t* value)
	{
		___empty_error_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_error_9), (void*)value);
	}

	inline static int32_t get_offset_of_commonName_10() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_StaticFields, ___commonName_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_commonName_10() const { return ___commonName_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_commonName_10() { return &___commonName_10; }
	inline void set_commonName_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___commonName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commonName_10), (void*)value);
	}

	inline static int32_t get_offset_of_email_11() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_StaticFields, ___email_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_email_11() const { return ___email_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_email_11() { return &___email_11; }
	inline void set_email_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___email_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___email_11), (void*)value);
	}

	inline static int32_t get_offset_of_signedData_12() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_StaticFields, ___signedData_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_signedData_12() const { return ___signedData_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_signedData_12() { return &___signedData_12; }
	inline void set_signedData_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___signedData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signedData_12), (void*)value);
	}
};


// Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456  : public X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::elements
	X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * ___elements_0;
	// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::nativeCertificateChain
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___nativeCertificateChain_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy Mono.Unity.X509ChainImplUnityTls::policy
	X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * ___policy_2;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus> Mono.Unity.X509ChainImplUnityTls::chainStatusList
	List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * ___chainStatusList_3;

public:
	inline static int32_t get_offset_of_elements_0() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___elements_0)); }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * get_elements_0() const { return ___elements_0; }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 ** get_address_of_elements_0() { return &___elements_0; }
	inline void set_elements_0(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * value)
	{
		___elements_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_0), (void*)value);
	}

	inline static int32_t get_offset_of_nativeCertificateChain_1() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___nativeCertificateChain_1)); }
	inline unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  get_nativeCertificateChain_1() const { return ___nativeCertificateChain_1; }
	inline unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * get_address_of_nativeCertificateChain_1() { return &___nativeCertificateChain_1; }
	inline void set_nativeCertificateChain_1(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  value)
	{
		___nativeCertificateChain_1 = value;
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___policy_2)); }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___policy_2), (void*)value);
	}

	inline static int32_t get_offset_of_chainStatusList_3() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___chainStatusList_3)); }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * get_chainStatusList_3() const { return ___chainStatusList_3; }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 ** get_address_of_chainStatusList_3() { return &___chainStatusList_3; }
	inline void set_chainStatusList_3(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * value)
	{
		___chainStatusList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chainStatusList_3), (void*)value);
	}
};


// System.Xml.XmlAsyncCheckReaderWithLineInfo
struct XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A  : public XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036
{
public:
	// System.Xml.IXmlLineInfo System.Xml.XmlAsyncCheckReaderWithLineInfo::readerAsIXmlLineInfo
	RuntimeObject* ___readerAsIXmlLineInfo_5;

public:
	inline static int32_t get_offset_of_readerAsIXmlLineInfo_5() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A, ___readerAsIXmlLineInfo_5)); }
	inline RuntimeObject* get_readerAsIXmlLineInfo_5() const { return ___readerAsIXmlLineInfo_5; }
	inline RuntimeObject** get_address_of_readerAsIXmlLineInfo_5() { return &___readerAsIXmlLineInfo_5; }
	inline void set_readerAsIXmlLineInfo_5(RuntimeObject* value)
	{
		___readerAsIXmlLineInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readerAsIXmlLineInfo_5), (void*)value);
	}
};


// System.Xml.XmlAsyncCheckReaderWithNS
struct XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC  : public XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlAsyncCheckReaderWithNS::readerAsIXmlNamespaceResolver
	RuntimeObject* ___readerAsIXmlNamespaceResolver_5;

public:
	inline static int32_t get_offset_of_readerAsIXmlNamespaceResolver_5() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC, ___readerAsIXmlNamespaceResolver_5)); }
	inline RuntimeObject* get_readerAsIXmlNamespaceResolver_5() const { return ___readerAsIXmlNamespaceResolver_5; }
	inline RuntimeObject** get_address_of_readerAsIXmlNamespaceResolver_5() { return &___readerAsIXmlNamespaceResolver_5; }
	inline void set_readerAsIXmlNamespaceResolver_5(RuntimeObject* value)
	{
		___readerAsIXmlNamespaceResolver_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readerAsIXmlNamespaceResolver_5), (void*)value);
	}
};


// System.Xml.XmlAutoDetectWriter
struct XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76  : public XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5
{
public:
	// System.Xml.XmlRawWriter System.Xml.XmlAutoDetectWriter::wrapped
	XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___wrapped_3;
	// System.Xml.OnRemoveWriter System.Xml.XmlAutoDetectWriter::onRemove
	OnRemoveWriter_t7810F8F0B2E83630AB109B52D2A06F3A9AA8A30B * ___onRemove_4;
	// System.Xml.XmlWriterSettings System.Xml.XmlAutoDetectWriter::writerSettings
	XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * ___writerSettings_5;
	// System.Xml.XmlEventCache System.Xml.XmlAutoDetectWriter::eventCache
	XmlEventCache_t7429BFB736D94B0281F53167E418058D78A4C028 * ___eventCache_6;
	// System.IO.TextWriter System.Xml.XmlAutoDetectWriter::textWriter
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___textWriter_7;
	// System.IO.Stream System.Xml.XmlAutoDetectWriter::strm
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___strm_8;

public:
	inline static int32_t get_offset_of_wrapped_3() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___wrapped_3)); }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * get_wrapped_3() const { return ___wrapped_3; }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 ** get_address_of_wrapped_3() { return &___wrapped_3; }
	inline void set_wrapped_3(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * value)
	{
		___wrapped_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapped_3), (void*)value);
	}

	inline static int32_t get_offset_of_onRemove_4() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___onRemove_4)); }
	inline OnRemoveWriter_t7810F8F0B2E83630AB109B52D2A06F3A9AA8A30B * get_onRemove_4() const { return ___onRemove_4; }
	inline OnRemoveWriter_t7810F8F0B2E83630AB109B52D2A06F3A9AA8A30B ** get_address_of_onRemove_4() { return &___onRemove_4; }
	inline void set_onRemove_4(OnRemoveWriter_t7810F8F0B2E83630AB109B52D2A06F3A9AA8A30B * value)
	{
		___onRemove_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemove_4), (void*)value);
	}

	inline static int32_t get_offset_of_writerSettings_5() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___writerSettings_5)); }
	inline XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * get_writerSettings_5() const { return ___writerSettings_5; }
	inline XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 ** get_address_of_writerSettings_5() { return &___writerSettings_5; }
	inline void set_writerSettings_5(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * value)
	{
		___writerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventCache_6() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___eventCache_6)); }
	inline XmlEventCache_t7429BFB736D94B0281F53167E418058D78A4C028 * get_eventCache_6() const { return ___eventCache_6; }
	inline XmlEventCache_t7429BFB736D94B0281F53167E418058D78A4C028 ** get_address_of_eventCache_6() { return &___eventCache_6; }
	inline void set_eventCache_6(XmlEventCache_t7429BFB736D94B0281F53167E418058D78A4C028 * value)
	{
		___eventCache_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventCache_6), (void*)value);
	}

	inline static int32_t get_offset_of_textWriter_7() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___textWriter_7)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_textWriter_7() const { return ___textWriter_7; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_textWriter_7() { return &___textWriter_7; }
	inline void set_textWriter_7(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___textWriter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textWriter_7), (void*)value);
	}

	inline static int32_t get_offset_of_strm_8() { return static_cast<int32_t>(offsetof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76, ___strm_8)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_strm_8() const { return ___strm_8; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_strm_8() { return &___strm_8; }
	inline void set_strm_8(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___strm_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strm_8), (void*)value);
	}
};


// System.Xml.XmlCharacterData
struct XmlCharacterData_tDE362DEBB89559C552E40DB1346331A259C9205B  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(XmlCharacterData_tDE362DEBB89559C552E40DB1346331A259C9205B, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlDeclaration::version
	String_t* ___version_2;
	// System.String System.Xml.XmlDeclaration::encoding
	String_t* ___encoding_3;
	// System.String System.Xml.XmlDeclaration::standalone
	String_t* ___standalone_4;

public:
	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_2), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___encoding_3)); }
	inline String_t* get_encoding_3() const { return ___encoding_3; }
	inline String_t** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(String_t* value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_standalone_4() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___standalone_4)); }
	inline String_t* get_standalone_4() const { return ___standalone_4; }
	inline String_t** get_address_of_standalone_4() { return &___standalone_4; }
	inline void set_standalone_4(String_t* value)
	{
		___standalone_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standalone_4), (void*)value);
	}
};


// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parent_0;
	// System.Xml.XmlNamedNodeMap/SmallXmlNodeList System.Xml.XmlNamedNodeMap::nodes
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  ___nodes_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___parent_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parent_0() const { return ___parent_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_nodes_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___nodes_1)); }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  get_nodes_1() const { return ___nodes_1; }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * get_address_of_nodes_1() { return &___nodes_1; }
	inline void set_nodes_1(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  value)
	{
		___nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodes_1))->___field_0), (void*)NULL);
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.ComponentModel.WeakHashtable
struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:

public:
};

struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_21;

public:
	inline static int32_t get_offset_of__comparer_21() { return static_cast<int32_t>(offsetof(WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_StaticFields, ____comparer_21)); }
	inline RuntimeObject* get__comparer_21() const { return ____comparer_21; }
	inline RuntimeObject** get_address_of__comparer_21() { return &____comparer_21; }
	inline void set__comparer_21(RuntimeObject* value)
	{
		____comparer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_21), (void*)value);
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_12() const { return ___m_CommonHeaders_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_12() { return &___m_CommonHeaders_12; }
	inline void set_m_CommonHeaders_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_13)); }
	inline int32_t get_m_NumCommonHeaders_13() const { return ___m_NumCommonHeaders_13; }
	inline int32_t* get_address_of_m_NumCommonHeaders_13() { return &___m_NumCommonHeaders_13; }
	inline void set_m_NumCommonHeaders_13(int32_t value)
	{
		___m_NumCommonHeaders_13 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_16)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_16() const { return ___m_InnerCollection_16; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_16() { return &___m_InnerCollection_16; }
	inline void set_m_InnerCollection_16(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_17() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_17)); }
	inline uint16_t get_m_Type_17() const { return ___m_Type_17; }
	inline uint16_t* get_address_of_m_Type_17() { return &___m_Type_17; }
	inline void set_m_Type_17(uint16_t value)
	{
		___m_Type_17 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_19;

public:
	inline static int32_t get_offset_of_HInfo_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_11)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_11() const { return ___HInfo_11; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_11() { return &___HInfo_11; }
	inline void set_HInfo_11(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_14)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_14() const { return ___s_CommonHeaderNames_14; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_14() { return &___s_CommonHeaderNames_14; }
	inline void set_s_CommonHeaderNames_14(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_15)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_15() const { return ___s_CommonHeaderHints_15; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_15() { return &___s_CommonHeaderHints_15; }
	inline void set_s_CommonHeaderHints_15(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_15), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_18() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_18)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_18() const { return ___HttpTrimCharacters_18; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_18() { return &___HttpTrimCharacters_18; }
	inline void set_HttpTrimCharacters_18(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_18), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_19() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_19)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_19() const { return ___RfcCharMap_19; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_19() { return &___RfcCharMap_19; }
	inline void set_RfcCharMap_19(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_19), (void*)value);
	}
};


// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.IO.MemoryStream System.Net.WebRequestStream::writeBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___writeBuffer_15;
	// System.Boolean System.Net.WebRequestStream::requestWritten
	bool ___requestWritten_16;
	// System.Boolean System.Net.WebRequestStream::allowBuffering
	bool ___allowBuffering_17;
	// System.Boolean System.Net.WebRequestStream::sendChunked
	bool ___sendChunked_18;
	// System.Net.WebCompletionSource System.Net.WebRequestStream::pendingWrite
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingWrite_19;
	// System.Int64 System.Net.WebRequestStream::totalWritten
	int64_t ___totalWritten_20;
	// System.Byte[] System.Net.WebRequestStream::headers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headers_21;
	// System.Boolean System.Net.WebRequestStream::headersSent
	bool ___headersSent_22;
	// System.Int32 System.Net.WebRequestStream::completeRequestWritten
	int32_t ___completeRequestWritten_23;
	// System.Int32 System.Net.WebRequestStream::chunkTrailerWritten
	int32_t ___chunkTrailerWritten_24;
	// System.Boolean System.Net.WebRequestStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_writeBuffer_15() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___writeBuffer_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_writeBuffer_15() const { return ___writeBuffer_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_writeBuffer_15() { return &___writeBuffer_15; }
	inline void set_writeBuffer_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___writeBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_requestWritten_16() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___requestWritten_16)); }
	inline bool get_requestWritten_16() const { return ___requestWritten_16; }
	inline bool* get_address_of_requestWritten_16() { return &___requestWritten_16; }
	inline void set_requestWritten_16(bool value)
	{
		___requestWritten_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_sendChunked_18() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___sendChunked_18)); }
	inline bool get_sendChunked_18() const { return ___sendChunked_18; }
	inline bool* get_address_of_sendChunked_18() { return &___sendChunked_18; }
	inline void set_sendChunked_18(bool value)
	{
		___sendChunked_18 = value;
	}

	inline static int32_t get_offset_of_pendingWrite_19() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___pendingWrite_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingWrite_19() const { return ___pendingWrite_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingWrite_19() { return &___pendingWrite_19; }
	inline void set_pendingWrite_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingWrite_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingWrite_19), (void*)value);
	}

	inline static int32_t get_offset_of_totalWritten_20() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___totalWritten_20)); }
	inline int64_t get_totalWritten_20() const { return ___totalWritten_20; }
	inline int64_t* get_address_of_totalWritten_20() { return &___totalWritten_20; }
	inline void set_totalWritten_20(int64_t value)
	{
		___totalWritten_20 = value;
	}

	inline static int32_t get_offset_of_headers_21() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headers_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_headers_21() const { return ___headers_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_headers_21() { return &___headers_21; }
	inline void set_headers_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___headers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_21), (void*)value);
	}

	inline static int32_t get_offset_of_headersSent_22() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headersSent_22)); }
	inline bool get_headersSent_22() const { return ___headersSent_22; }
	inline bool* get_address_of_headersSent_22() { return &___headersSent_22; }
	inline void set_headersSent_22(bool value)
	{
		___headersSent_22 = value;
	}

	inline static int32_t get_offset_of_completeRequestWritten_23() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___completeRequestWritten_23)); }
	inline int32_t get_completeRequestWritten_23() const { return ___completeRequestWritten_23; }
	inline int32_t* get_address_of_completeRequestWritten_23() { return &___completeRequestWritten_23; }
	inline void set_completeRequestWritten_23(int32_t value)
	{
		___completeRequestWritten_23 = value;
	}

	inline static int32_t get_offset_of_chunkTrailerWritten_24() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___chunkTrailerWritten_24)); }
	inline int32_t get_chunkTrailerWritten_24() const { return ___chunkTrailerWritten_24; }
	inline int32_t* get_address_of_chunkTrailerWritten_24() { return &___chunkTrailerWritten_24; }
	inline void set_chunkTrailerWritten_24(int32_t value)
	{
		___chunkTrailerWritten_24 = value;
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___U3CKeepAliveU3Ek__BackingField_25)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_25() const { return ___U3CKeepAliveU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_25() { return &___U3CKeepAliveU3Ek__BackingField_25; }
	inline void set_U3CKeepAliveU3Ek__BackingField_25(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_25 = value;
	}
};

struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields
{
public:
	// System.Byte[] System.Net.WebRequestStream::crlf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___crlf_14;

public:
	inline static int32_t get_offset_of_crlf_14() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields, ___crlf_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_crlf_14() const { return ___crlf_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_crlf_14() { return &___crlf_14; }
	inline void set_crlf_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___crlf_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crlf_14), (void*)value);
	}
};


// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.Net.BufferOffsetSize System.Net.WebResponseStream::readBuffer
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___readBuffer_14;
	// System.Int64 System.Net.WebResponseStream::contentLength
	int64_t ___contentLength_15;
	// System.Int64 System.Net.WebResponseStream::totalRead
	int64_t ___totalRead_16;
	// System.Boolean System.Net.WebResponseStream::nextReadCalled
	bool ___nextReadCalled_17;
	// System.Int32 System.Net.WebResponseStream::stream_length
	int32_t ___stream_length_18;
	// System.Net.WebCompletionSource System.Net.WebResponseStream::pendingRead
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingRead_19;
	// System.Object System.Net.WebResponseStream::locker
	RuntimeObject * ___locker_20;
	// System.Int32 System.Net.WebResponseStream::nestedRead
	int32_t ___nestedRead_21;
	// System.Boolean System.Net.WebResponseStream::read_eof
	bool ___read_eof_22;
	// System.Net.WebRequestStream System.Net.WebResponseStream::<RequestStream>k__BackingField
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___U3CRequestStreamU3Ek__BackingField_23;
	// System.Net.WebHeaderCollection System.Net.WebResponseStream::<Headers>k__BackingField
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___U3CHeadersU3Ek__BackingField_24;
	// System.Net.HttpStatusCode System.Net.WebResponseStream::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_25;
	// System.String System.Net.WebResponseStream::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_26;
	// System.Version System.Net.WebResponseStream::<Version>k__BackingField
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U3CVersionU3Ek__BackingField_27;
	// System.Boolean System.Net.WebResponseStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_28;
	// System.Boolean System.Net.WebResponseStream::<ChunkedRead>k__BackingField
	bool ___U3CChunkedReadU3Ek__BackingField_29;
	// System.Net.MonoChunkStream System.Net.WebResponseStream::<ChunkStream>k__BackingField
	MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___U3CChunkStreamU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_readBuffer_14() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___readBuffer_14)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_readBuffer_14() const { return ___readBuffer_14; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_readBuffer_14() { return &___readBuffer_14; }
	inline void set_readBuffer_14(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___readBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_15() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___contentLength_15)); }
	inline int64_t get_contentLength_15() const { return ___contentLength_15; }
	inline int64_t* get_address_of_contentLength_15() { return &___contentLength_15; }
	inline void set_contentLength_15(int64_t value)
	{
		___contentLength_15 = value;
	}

	inline static int32_t get_offset_of_totalRead_16() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___totalRead_16)); }
	inline int64_t get_totalRead_16() const { return ___totalRead_16; }
	inline int64_t* get_address_of_totalRead_16() { return &___totalRead_16; }
	inline void set_totalRead_16(int64_t value)
	{
		___totalRead_16 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_17() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nextReadCalled_17)); }
	inline bool get_nextReadCalled_17() const { return ___nextReadCalled_17; }
	inline bool* get_address_of_nextReadCalled_17() { return &___nextReadCalled_17; }
	inline void set_nextReadCalled_17(bool value)
	{
		___nextReadCalled_17 = value;
	}

	inline static int32_t get_offset_of_stream_length_18() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___stream_length_18)); }
	inline int32_t get_stream_length_18() const { return ___stream_length_18; }
	inline int32_t* get_address_of_stream_length_18() { return &___stream_length_18; }
	inline void set_stream_length_18(int32_t value)
	{
		___stream_length_18 = value;
	}

	inline static int32_t get_offset_of_pendingRead_19() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___pendingRead_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingRead_19() const { return ___pendingRead_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingRead_19() { return &___pendingRead_19; }
	inline void set_pendingRead_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingRead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingRead_19), (void*)value);
	}

	inline static int32_t get_offset_of_locker_20() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___locker_20)); }
	inline RuntimeObject * get_locker_20() const { return ___locker_20; }
	inline RuntimeObject ** get_address_of_locker_20() { return &___locker_20; }
	inline void set_locker_20(RuntimeObject * value)
	{
		___locker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_20), (void*)value);
	}

	inline static int32_t get_offset_of_nestedRead_21() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nestedRead_21)); }
	inline int32_t get_nestedRead_21() const { return ___nestedRead_21; }
	inline int32_t* get_address_of_nestedRead_21() { return &___nestedRead_21; }
	inline void set_nestedRead_21(int32_t value)
	{
		___nestedRead_21 = value;
	}

	inline static int32_t get_offset_of_read_eof_22() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___read_eof_22)); }
	inline bool get_read_eof_22() const { return ___read_eof_22; }
	inline bool* get_address_of_read_eof_22() { return &___read_eof_22; }
	inline void set_read_eof_22(bool value)
	{
		___read_eof_22 = value;
	}

	inline static int32_t get_offset_of_U3CRequestStreamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CRequestStreamU3Ek__BackingField_23)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_U3CRequestStreamU3Ek__BackingField_23() const { return ___U3CRequestStreamU3Ek__BackingField_23; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_U3CRequestStreamU3Ek__BackingField_23() { return &___U3CRequestStreamU3Ek__BackingField_23; }
	inline void set_U3CRequestStreamU3Ek__BackingField_23(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___U3CRequestStreamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestStreamU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CHeadersU3Ek__BackingField_24)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_U3CHeadersU3Ek__BackingField_24() const { return ___U3CHeadersU3Ek__BackingField_24; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_U3CHeadersU3Ek__BackingField_24() { return &___U3CHeadersU3Ek__BackingField_24; }
	inline void set_U3CHeadersU3Ek__BackingField_24(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___U3CHeadersU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusCodeU3Ek__BackingField_25)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_25() const { return ___U3CStatusCodeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_25() { return &___U3CStatusCodeU3Ek__BackingField_25; }
	inline void set_U3CStatusCodeU3Ek__BackingField_25(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusDescriptionU3Ek__BackingField_26)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_26() const { return ___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_26() { return &___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_26(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CVersionU3Ek__BackingField_27)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_U3CVersionU3Ek__BackingField_27() const { return ___U3CVersionU3Ek__BackingField_27; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_U3CVersionU3Ek__BackingField_27() { return &___U3CVersionU3Ek__BackingField_27; }
	inline void set_U3CVersionU3Ek__BackingField_27(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___U3CVersionU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CKeepAliveU3Ek__BackingField_28)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_28() const { return ___U3CKeepAliveU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_28() { return &___U3CKeepAliveU3Ek__BackingField_28; }
	inline void set_U3CKeepAliveU3Ek__BackingField_28(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CChunkedReadU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkedReadU3Ek__BackingField_29)); }
	inline bool get_U3CChunkedReadU3Ek__BackingField_29() const { return ___U3CChunkedReadU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CChunkedReadU3Ek__BackingField_29() { return &___U3CChunkedReadU3Ek__BackingField_29; }
	inline void set_U3CChunkedReadU3Ek__BackingField_29(bool value)
	{
		___U3CChunkedReadU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CChunkStreamU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkStreamU3Ek__BackingField_30)); }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * get_U3CChunkStreamU3Ek__BackingField_30() const { return ___U3CChunkStreamU3Ek__BackingField_30; }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 ** get_address_of_U3CChunkStreamU3Ek__BackingField_30() { return &___U3CChunkStreamU3Ek__BackingField_30; }
	inline void set_U3CChunkStreamU3Ek__BackingField_30(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * value)
	{
		___U3CChunkStreamU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChunkStreamU3Ek__BackingField_30), (void*)value);
	}
};


// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A  : public ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_13;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_14;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_15;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_16;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_17;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____info_18;

public:
	inline static int32_t get_offset_of__token_13() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____token_13)); }
	inline intptr_t get__token_13() const { return ____token_13; }
	inline intptr_t* get_address_of__token_13() { return &____token_13; }
	inline void set__token_13(intptr_t value)
	{
		____token_13 = value;
	}

	inline static int32_t get_offset_of__type_14() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____type_14)); }
	inline String_t* get__type_14() const { return ____type_14; }
	inline String_t** get_address_of__type_14() { return &____type_14; }
	inline void set__type_14(String_t* value)
	{
		____type_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_14), (void*)value);
	}

	inline static int32_t get_offset_of__account_15() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____account_15)); }
	inline int32_t get__account_15() const { return ____account_15; }
	inline int32_t* get_address_of__account_15() { return &____account_15; }
	inline void set__account_15(int32_t value)
	{
		____account_15 = value;
	}

	inline static int32_t get_offset_of__authenticated_16() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____authenticated_16)); }
	inline bool get__authenticated_16() const { return ____authenticated_16; }
	inline bool* get_address_of__authenticated_16() { return &____authenticated_16; }
	inline void set__authenticated_16(bool value)
	{
		____authenticated_16 = value;
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}

	inline static int32_t get_offset_of__info_18() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____info_18)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__info_18() const { return ____info_18; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__info_18() { return &____info_18; }
	inline void set__info_18(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____info_18), (void*)value);
	}
};

struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_19;

public:
	inline static int32_t get_offset_of_invalidWindows_19() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_StaticFields, ___invalidWindows_19)); }
	inline intptr_t get_invalidWindows_19() const { return ___invalidWindows_19; }
	inline intptr_t* get_address_of_invalidWindows_19() { return &___invalidWindows_19; }
	inline void set_invalidWindows_19(intptr_t value)
	{
		___invalidWindows_19 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174  : public X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::status
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___status_3;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_public_key
	AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * ___working_public_key_5;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainImplMono::bce_restriction
	X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * ___bce_restriction_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::roots
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___roots_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::cas
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___cas_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::root_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___root_store_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::ca_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___ca_store_10;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_root_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___user_root_store_11;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_ca_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___user_ca_store_12;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::collection
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___collection_13;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___elements_1)); }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_1), (void*)value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___policy_2)); }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___policy_2), (void*)value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___status_3)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___status_3), (void*)value);
	}

	inline static int32_t get_offset_of_working_public_key_5() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___working_public_key_5)); }
	inline AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * get_working_public_key_5() const { return ___working_public_key_5; }
	inline AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F ** get_address_of_working_public_key_5() { return &___working_public_key_5; }
	inline void set_working_public_key_5(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * value)
	{
		___working_public_key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___working_public_key_5), (void*)value);
	}

	inline static int32_t get_offset_of_bce_restriction_6() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___bce_restriction_6)); }
	inline X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * get_bce_restriction_6() const { return ___bce_restriction_6; }
	inline X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 ** get_address_of_bce_restriction_6() { return &___bce_restriction_6; }
	inline void set_bce_restriction_6(X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * value)
	{
		___bce_restriction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bce_restriction_6), (void*)value);
	}

	inline static int32_t get_offset_of_roots_7() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___roots_7)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_roots_7() const { return ___roots_7; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_roots_7() { return &___roots_7; }
	inline void set_roots_7(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___roots_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roots_7), (void*)value);
	}

	inline static int32_t get_offset_of_cas_8() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___cas_8)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_cas_8() const { return ___cas_8; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_cas_8() { return &___cas_8; }
	inline void set_cas_8(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___cas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cas_8), (void*)value);
	}

	inline static int32_t get_offset_of_root_store_9() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___root_store_9)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_root_store_9() const { return ___root_store_9; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_root_store_9() { return &___root_store_9; }
	inline void set_root_store_9(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___root_store_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_store_9), (void*)value);
	}

	inline static int32_t get_offset_of_ca_store_10() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___ca_store_10)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_ca_store_10() const { return ___ca_store_10; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_ca_store_10() { return &___ca_store_10; }
	inline void set_ca_store_10(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___ca_store_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ca_store_10), (void*)value);
	}

	inline static int32_t get_offset_of_user_root_store_11() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___user_root_store_11)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_user_root_store_11() const { return ___user_root_store_11; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_user_root_store_11() { return &___user_root_store_11; }
	inline void set_user_root_store_11(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___user_root_store_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_root_store_11), (void*)value);
	}

	inline static int32_t get_offset_of_user_ca_store_12() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___user_ca_store_12)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_user_ca_store_12() const { return ___user_ca_store_12; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_user_ca_store_12() { return &___user_ca_store_12; }
	inline void set_user_ca_store_12(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___user_ca_store_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_ca_store_12), (void*)value);
	}

	inline static int32_t get_offset_of_collection_13() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___collection_13)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_collection_13() const { return ___collection_13; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_collection_13() { return &___collection_13; }
	inline void set_collection_13(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___collection_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collection_13), (void*)value);
	}
};

struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Api_1() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_Api_1)); }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * get_m_Api_1() const { return ___m_Api_1; }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E ** get_address_of_m_Api_1() { return &___m_Api_1; }
	inline void set_m_Api_1(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * value)
	{
		___m_Api_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CdimensionsU3Ek__BackingField_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CdimensionsU3Ek__BackingField_3() const { return ___U3CdimensionsU3Ek__BackingField_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CdimensionsU3Ek__BackingField_3() { return &___U3CdimensionsU3Ek__BackingField_3; }
	inline void set_U3CdimensionsU3Ek__BackingField_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CdimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CplaneCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CplaneCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CplaneCountU3Ek__BackingField_4() const { return ___U3CplaneCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CplaneCountU3Ek__BackingField_4() { return &___U3CplaneCountU3Ek__BackingField_4; }
	inline void set_U3CplaneCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CplaneCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CformatU3Ek__BackingField_5)); }
	inline int32_t get_U3CformatU3Ek__BackingField_5() const { return ___U3CformatU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CformatU3Ek__BackingField_5() { return &___U3CformatU3Ek__BackingField_5; }
	inline void set_U3CformatU3Ek__BackingField_5(int32_t value)
	{
		___U3CformatU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CtimestampU3Ek__BackingField_6)); }
	inline double get_U3CtimestampU3Ek__BackingField_6() const { return ___U3CtimestampU3Ek__BackingField_6; }
	inline double* get_address_of_U3CtimestampU3Ek__BackingField_6() { return &___U3CtimestampU3Ek__BackingField_6; }
	inline void set_U3CtimestampU3Ek__BackingField_6(double value)
	{
		___U3CtimestampU3Ek__BackingField_6 = value;
	}
};

struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * ___s_OnAsyncConversionCompleteDelegate_2;

public:
	inline static int32_t get_offset_of_s_OnAsyncConversionCompleteDelegate_2() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields, ___s_OnAsyncConversionCompleteDelegate_2)); }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * get_s_OnAsyncConversionCompleteDelegate_2() const { return ___s_OnAsyncConversionCompleteDelegate_2; }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD ** get_address_of_s_OnAsyncConversionCompleteDelegate_2() { return &___s_OnAsyncConversionCompleteDelegate_2; }
	inline void set_s_OnAsyncConversionCompleteDelegate_2(OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * value)
	{
		___s_OnAsyncConversionCompleteDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncConversionCompleteDelegate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// System.Xml.XmlAsyncCheckReaderWithLineInfoNS
struct XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836  : public XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlAsyncCheckReaderWithLineInfoNS::readerAsIXmlNamespaceResolver
	RuntimeObject* ___readerAsIXmlNamespaceResolver_6;

public:
	inline static int32_t get_offset_of_readerAsIXmlNamespaceResolver_6() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836, ___readerAsIXmlNamespaceResolver_6)); }
	inline RuntimeObject* get_readerAsIXmlNamespaceResolver_6() const { return ___readerAsIXmlNamespaceResolver_6; }
	inline RuntimeObject** get_address_of_readerAsIXmlNamespaceResolver_6() { return &___readerAsIXmlNamespaceResolver_6; }
	inline void set_readerAsIXmlNamespaceResolver_6(RuntimeObject* value)
	{
		___readerAsIXmlNamespaceResolver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readerAsIXmlNamespaceResolver_6), (void*)value);
	}
};


// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3  : public XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771
{
public:

public:
};


// System.Xml.XmlCDataSection
struct XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA  : public XmlCharacterData_tDE362DEBB89559C552E40DB1346331A259C9205B
{
public:

public:
};


// System.Xml.XmlCachedStream
struct XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83  : public MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C
{
public:
	// System.Uri System.Xml.XmlCachedStream::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_14;

public:
	inline static int32_t get_offset_of_uri_14() { return static_cast<int32_t>(offsetof(XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83, ___uri_14)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_14() const { return ___uri_14; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_14() { return &___uri_14; }
	inline void set_uri_14(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_14), (void*)value);
	}
};


// System.Xml.XmlComment
struct XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66  : public XmlCharacterData_tDE362DEBB89559C552E40DB1346331A259C9205B
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Identifiers_2;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_Positions_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Positions_0() const { return ___m_Positions_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Positions_0 = value;
	}

	inline static int32_t get_offset_of_m_ConfidenceValues_1() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_ConfidenceValues_1)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_m_ConfidenceValues_1() const { return ___m_ConfidenceValues_1; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_m_ConfidenceValues_1() { return &___m_ConfidenceValues_1; }
	inline void set_m_ConfidenceValues_1(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___m_ConfidenceValues_1 = value;
	}

	inline static int32_t get_offset_of_m_Identifiers_2() { return static_cast<int32_t>(offsetof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177, ___m_Identifiers_2)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Identifiers_2() const { return ___m_Identifiers_2; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Identifiers_2() { return &___m_Identifiers_2; }
	inline void set_m_Identifiers_2(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Identifiers_2 = value;
	}
};


// System.Xml.XmlAsyncCheckReaderWithLineInfoNSSchema
struct XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C  : public XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836
{
public:
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAsyncCheckReaderWithLineInfoNSSchema::readerAsIXmlSchemaInfo
	RuntimeObject* ___readerAsIXmlSchemaInfo_7;

public:
	inline static int32_t get_offset_of_readerAsIXmlSchemaInfo_7() { return static_cast<int32_t>(offsetof(XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C, ___readerAsIXmlSchemaInfo_7)); }
	inline RuntimeObject* get_readerAsIXmlSchemaInfo_7() const { return ___readerAsIXmlSchemaInfo_7; }
	inline RuntimeObject** get_address_of_readerAsIXmlSchemaInfo_7() { return &___readerAsIXmlSchemaInfo_7; }
	inline void set_readerAsIXmlSchemaInfo_7(RuntimeObject* value)
	{
		___readerAsIXmlSchemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readerAsIXmlSchemaInfo_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);


// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.VolumeIsolationScope
struct VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.WeakHashtable
struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Principal.WindowsImpersonationContext
struct WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F, IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434
{
	inline WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0)
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

		if (::memcmp(&iid, &IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434*>(this);
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
		interfaceIds[0] = IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		intptr_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pCid5' to managed representation
		Guid_t  ____pCid5_empty;
		memset((&____pCid5_empty), 0, sizeof(____pCid5_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, (&____pCid5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___pCid5' back from managed representation
		*___pCid5 = ____pCid5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pSize5' to managed representation
		uint32_t ____pSize5_empty = 0;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, (&____pSize5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___pSize5' back from managed representation
		*___pSize5 = ____pSize5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639(__thisValue, ___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppv2' to managed representation
		intptr_t ____ppv2_empty;
		memset((&____ppv2_empty), 0, sizeof(____ppv2_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39(__thisValue, ___pStm0, ___riid1, (&____ppv2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___ppv2' back from managed representation
		*___ppv2 = ____ppv2_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF(__thisValue, ___pStm0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC(__thisValue, ___dwReserved0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2_t2FF04591FB660272854D92805B5DB1A5C22E37DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2ImplMono_tED2F52FB9A9061E1AC3941D761401970449233F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateImplMono
struct X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRPointCloudData_t3AFE7A70A93C061F8C3B3B7AEDE07EDF6A86B177_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Serialization.XmlAnyElementAttributes
struct XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Serialization.XmlArrayItemAttributes
struct XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckReader
struct XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckReader_tD0429D7F2F5302F1590B6D74DE9165BB622D5036_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckReaderWithLineInfo
struct XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckReaderWithLineInfo_t15F1D47D83B0FB1351F838010D354C5092FDF20A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckReaderWithLineInfoNS
struct XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckReaderWithLineInfoNS_t144B51DEA77C5D0D555A437C579FD9A9F0001836_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckReaderWithLineInfoNSSchema
struct XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckReaderWithLineInfoNSSchema_tEE208C3C22EC4BE0F29AF0579C01DE2982D6621C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckReaderWithNS
struct XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckReaderWithNS_t9B50E595CBB16E3C65915388F7B5E6C3902009CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAsyncCheckWriter
struct XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAsyncCheckWriter_tF98BA28B966687A04E07F4904100F20B98D467D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAttribute
struct XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlAutoDetectWriter
struct XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlAutoDetectWriter_tEED4D660141047CF0BA4F92D660149263F984E76_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlCDataSection
struct XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlCDataSection_tFC05DCD14B7C2893C0C5AF56AB629E77151A8BEA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlCachedStream
struct XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlCachedStream_t16365C843A7DEB2CD28A1C6550229581A2913D83_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlChildNodes
struct XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlChildNodes_t2146FA67722B453134AC4DC4B33C3B670B8BE2BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlComment
struct XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlComment_t8945C1C6FC86151538A51D1CBFD3AEEEEC422F66_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
