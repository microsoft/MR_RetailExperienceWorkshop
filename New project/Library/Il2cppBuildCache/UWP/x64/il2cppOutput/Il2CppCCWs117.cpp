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

// System.Action`2<System.Int32,System.Boolean>
struct Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00;
// System.Comparison`1<System.Data.DataRow>
struct Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F;
// System.Collections.Generic.Dictionary`2<System.Data.DataRow,System.Data.DataRowView>
struct Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F;
// System.Collections.Generic.Dictionary`2<System.String,System.Data.Index>
struct Dictionary_2_tB01C80AFA2DC7351E0E6AECB9510F29AFB79233B;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Xml.Schema.DatatypeImplementation[]
struct DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D;
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Xml.Schema.XmlSchemaSimpleType[]
struct XmlSchemaSimpleTypeU5BU5D_t862CBDAFFEF794FFBD20DDF16B3DC2803B848F21;
// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[]
struct SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA;
// System.Data.DataRow
struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE;
// System.Data.DataTable
struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827;
// System.Data.DataView
struct DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF;
// System.Data.DataViewListener
struct DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E;
// System.Data.DataViewManager
struct DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A;
// System.Xml.Schema.DatatypeImplementation
struct DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15;
// UnityEngine.Rendering.DebugActionDesc
struct DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A;
// UnityEngine.Rendering.DebugActionState
struct DebugActionState_t647473023098F758272E6656AE45FF04F9883B73;
// System.Linq.Expressions.Interpreter.DebugInfo
struct DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC;
// UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle
struct DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63;
// UnityEngine.Rendering.UI.DebugUIHandlerPanel
struct DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0;
// UnityEngine.Rendering.UI.DebugUIHandlerValue
struct DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0;
// UnityEngine.Rendering.UI.DebugUIHandlerWidget
struct DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667;
// UnityEngine.Rendering.UI.DebugUIPrefabBundle
struct DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D;
// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E;
// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Xml.Schema.FacetsChecker
struct FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Data.IFilter
struct IFilter_t32771D0A6957396D3FE580FEA3CCFFAD35813F9B;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// System.Data.Index
struct Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Xml.Schema.RestrictionFacets
struct RestrictionFacets_tCB9F2F24F3B08A03D9ED4211125F3229E5C868DA;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763;
// System.Linq.Expressions.Interpreter.DebugInfo/DebugInfoComparer
struct DebugInfoComparer_t50EAB83A182EED5FC08D9F05068520870AACDD63;
// UnityEngine.Rendering.DebugUI/Panel
struct Panel_t804EBDD5708282E712D5FE6B39DB87136410EBB5;
// UnityEngine.Rendering.DebugUI/Value
struct Value_t5CB80BD1516B9BE487B0C681A12340E8077B14E2;
// UnityEngine.Rendering.DebugUI/Widget
struct Widget_t7CB209495D292E15C11767D22EEC646A2FAC8D7D;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC;
struct IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953;
struct IIterator_1_t4CB2F2B842647632E40065034FA102B1FFA39A95;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6;
struct DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0;
struct DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D;
struct DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1;
struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826;
struct DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489;
struct DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81;
struct DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E;
struct DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D;
struct DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9;
struct DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883;
struct DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF;
struct DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145;
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
struct DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A;
struct DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011;
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1;
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC;
struct DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E;
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.DateTimeOffset>
struct NOVTABLE IIterable_1_tE561E678308D433C6385F3D0D210096F59B79FED : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA413ED72A121882E2845BC36E3400D9387C3A016(IIterator_1_t4CB2F2B842647632E40065034FA102B1FFA39A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IList>
struct NOVTABLE IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB(IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.DateTimeOffset>
struct NOVTABLE IReferenceArray_1_t76CDC078663BA9D9E851D9C6078F01C33446E6A0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mB5D52AE55E16630B075126FFD3088872DC3D7729(uint32_t* comReturnValueArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IEnumerable>
struct NOVTABLE IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IList>
struct NOVTABLE IVectorView_1_tA88887470E0CCCD43F8D64B6B683CE91E6820CC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m8A2D66D6F27B61C8F26650687B9FF74EC981AB8A(uint32_t ___index0, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2715B11E6635CADBED696FD1960C1E53C863A658(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5D5E2AEF6315D36B6A00635C6F1A0D3845FF5428(IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m47281D0A40AED89E6205D41741B118BC31D5C7FD(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
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

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Data.DataViewListener
struct DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E  : public RuntimeObject
{
public:
	// System.WeakReference System.Data.DataViewListener::_dvWeak
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____dvWeak_0;
	// System.Data.DataTable System.Data.DataViewListener::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_1;
	// System.Data.Index System.Data.DataViewListener::_index
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____index_2;
	// System.Int32 System.Data.DataViewListener::_objectID
	int32_t ____objectID_3;

public:
	inline static int32_t get_offset_of__dvWeak_0() { return static_cast<int32_t>(offsetof(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E, ____dvWeak_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__dvWeak_0() const { return ____dvWeak_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__dvWeak_0() { return &____dvWeak_0; }
	inline void set__dvWeak_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____dvWeak_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dvWeak_0), (void*)value);
	}

	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E, ____table_1)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_1() const { return ____table_1; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E, ____index_2)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__index_2() const { return ____index_2; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____index_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____index_2), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_3() { return static_cast<int32_t>(offsetof(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E, ____objectID_3)); }
	inline int32_t get__objectID_3() const { return ____objectID_3; }
	inline int32_t* get_address_of__objectID_3() { return &____objectID_3; }
	inline void set__objectID_3(int32_t value)
	{
		____objectID_3 = value;
	}
};


// System.Linq.Expressions.Interpreter.DebugInfo
struct DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.DebugInfo::StartLine
	int32_t ___StartLine_0;
	// System.Int32 System.Linq.Expressions.Interpreter.DebugInfo::EndLine
	int32_t ___EndLine_1;
	// System.Int32 System.Linq.Expressions.Interpreter.DebugInfo::Index
	int32_t ___Index_2;
	// System.String System.Linq.Expressions.Interpreter.DebugInfo::FileName
	String_t* ___FileName_3;
	// System.Boolean System.Linq.Expressions.Interpreter.DebugInfo::IsClear
	bool ___IsClear_4;

public:
	inline static int32_t get_offset_of_StartLine_0() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC, ___StartLine_0)); }
	inline int32_t get_StartLine_0() const { return ___StartLine_0; }
	inline int32_t* get_address_of_StartLine_0() { return &___StartLine_0; }
	inline void set_StartLine_0(int32_t value)
	{
		___StartLine_0 = value;
	}

	inline static int32_t get_offset_of_EndLine_1() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC, ___EndLine_1)); }
	inline int32_t get_EndLine_1() const { return ___EndLine_1; }
	inline int32_t* get_address_of_EndLine_1() { return &___EndLine_1; }
	inline void set_EndLine_1(int32_t value)
	{
		___EndLine_1 = value;
	}

	inline static int32_t get_offset_of_Index_2() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC, ___Index_2)); }
	inline int32_t get_Index_2() const { return ___Index_2; }
	inline int32_t* get_address_of_Index_2() { return &___Index_2; }
	inline void set_Index_2(int32_t value)
	{
		___Index_2 = value;
	}

	inline static int32_t get_offset_of_FileName_3() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC, ___FileName_3)); }
	inline String_t* get_FileName_3() const { return ___FileName_3; }
	inline String_t** get_address_of_FileName_3() { return &___FileName_3; }
	inline void set_FileName_3(String_t* value)
	{
		___FileName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileName_3), (void*)value);
	}

	inline static int32_t get_offset_of_IsClear_4() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC, ___IsClear_4)); }
	inline bool get_IsClear_4() const { return ___IsClear_4; }
	inline bool* get_address_of_IsClear_4() { return &___IsClear_4; }
	inline void set_IsClear_4(bool value)
	{
		___IsClear_4 = value;
	}
};

struct DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.DebugInfo/DebugInfoComparer System.Linq.Expressions.Interpreter.DebugInfo::s_debugComparer
	DebugInfoComparer_t50EAB83A182EED5FC08D9F05068520870AACDD63 * ___s_debugComparer_5;

public:
	inline static int32_t get_offset_of_s_debugComparer_5() { return static_cast<int32_t>(offsetof(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC_StaticFields, ___s_debugComparer_5)); }
	inline DebugInfoComparer_t50EAB83A182EED5FC08D9F05068520870AACDD63 * get_s_debugComparer_5() const { return ___s_debugComparer_5; }
	inline DebugInfoComparer_t50EAB83A182EED5FC08D9F05068520870AACDD63 ** get_address_of_s_debugComparer_5() { return &___s_debugComparer_5; }
	inline void set_s_debugComparer_5(DebugInfoComparer_t50EAB83A182EED5FC08D9F05068520870AACDD63 * value)
	{
		___s_debugComparer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_debugComparer_5), (void*)value);
	}
};


// UnityEngine.Rendering.UI.DebugUIPrefabBundle
struct DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.UI.DebugUIPrefabBundle::type
	String_t* ___type_0;
	// UnityEngine.RectTransform UnityEngine.Rendering.UI.DebugUIPrefabBundle::prefab
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___prefab_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_prefab_1() { return static_cast<int32_t>(offsetof(DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D, ___prefab_1)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_prefab_1() const { return ___prefab_1; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_prefab_1() { return &___prefab_1; }
	inline void set_prefab_1(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_1), (void*)value);
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

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_1), (void*)value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___events_2)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_2), (void*)value);
	}
};

struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_0), (void*)value);
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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t857F76DDC0B34F4FC5DDA7AEF2736EB3660A4C38  : public RuntimeObject
{
public:

public:
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// UnityEngine.FrustumPlanes
struct FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C 
{
public:
	// System.Single UnityEngine.FrustumPlanes::left
	float ___left_0;
	// System.Single UnityEngine.FrustumPlanes::right
	float ___right_1;
	// System.Single UnityEngine.FrustumPlanes::bottom
	float ___bottom_2;
	// System.Single UnityEngine.FrustumPlanes::top
	float ___top_3;
	// System.Single UnityEngine.FrustumPlanes::zNear
	float ___zNear_4;
	// System.Single UnityEngine.FrustumPlanes::zFar
	float ___zFar_5;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___left_0)); }
	inline float get_left_0() const { return ___left_0; }
	inline float* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(float value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___right_1)); }
	inline float get_right_1() const { return ___right_1; }
	inline float* get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(float value)
	{
		___right_1 = value;
	}

	inline static int32_t get_offset_of_bottom_2() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___bottom_2)); }
	inline float get_bottom_2() const { return ___bottom_2; }
	inline float* get_address_of_bottom_2() { return &___bottom_2; }
	inline void set_bottom_2(float value)
	{
		___bottom_2 = value;
	}

	inline static int32_t get_offset_of_top_3() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___top_3)); }
	inline float get_top_3() const { return ___top_3; }
	inline float* get_address_of_top_3() { return &___top_3; }
	inline void set_top_3(float value)
	{
		___top_3 = value;
	}

	inline static int32_t get_offset_of_zNear_4() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___zNear_4)); }
	inline float get_zNear_4() const { return ___zNear_4; }
	inline float* get_address_of_zNear_4() { return &___zNear_4; }
	inline void set_zNear_4(float value)
	{
		___zNear_4 = value;
	}

	inline static int32_t get_offset_of_zFar_5() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___zFar_5)); }
	inline float get_zFar_5() const { return ___zFar_5; }
	inline float* get_address_of_zFar_5() { return &___zFar_5; }
	inline void set_zFar_5(float value)
	{
		___zFar_5 = value;
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


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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

// Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>
struct NOVTABLE IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m205FD1337FA6BE98E9A05FC308E16BD62271593A(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mA2CEDA812EDC8200D7D40FCEB09E5400BA985A6D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m285F9B50D710FA50D466290E7983ED5CD7ACB401(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mDFD36BB8A480AE106C43957AC58D67A8CD70AB03(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>
struct NOVTABLE IVector_1_tA3657D05F8011DD7F0C252A905B15C9F09A35AA9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m5C8841B2AB571F44FD282E8F3020488A5BF8501E(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m8E48C3F60C392B6497C7BB3890CA2DF7BF91C598(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m30A0508FC6C3AA5C70811456C6BD3BEB7FEEC743(IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3CD56229D7E2E7201860B378918E56FF72F21F29(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mA653B838FFE729F90227B3BBB13DF1BECDD02A29(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6808595E023D8F8C47206BEBC122C50DFC29074B(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m70933D153838CBD542CAB5C148871C467F703CCA(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2F093B92EDBA57D69534DB3612C89B6B78DC78A8(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mA5D0C5BD3EA169C60A822648F506200772F6163F() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m4AF7AB446B0E4A20612673DF85CCD0B853CBA026() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2F9D8827AFABF3314AC649385C92E6C8BC40050A(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5DC15ED918012946CB9FBEA6A5C5C30C8C7D69B8(uint32_t ___items0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items0) = 0;
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


// System.Data.DataViewRowState
struct DataViewRowState_tC9DE64EF31373901D787D817AE055A72A73CF3CA 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataViewRowState_tC9DE64EF31373901D787D817AE055A72A73CF3CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// UnityEngine.Rendering.DebugActionRepeatMode
struct DebugActionRepeatMode_t7F9C1834E88D04397E4DC57FEA5A9CF1353B3D03 
{
public:
	// System.Int32 UnityEngine.Rendering.DebugActionRepeatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugActionRepeatMode_t7F9C1834E88D04397E4DC57FEA5A9CF1353B3D03, ___value___2)); }
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

// Microsoft.MixedReality.Toolkit.UX.DialogButtonType
struct DialogButtonType_tBA78662045F429118D0266009E163C925B7CC502 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UX.DialogButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DialogButtonType_tBA78662045F429118D0266009E163C925B7CC502, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * ____mainDisplay_2;
	// System.Int32 UnityEngine.Display::m_ActiveEditorGameViewTarget
	int32_t ___m_ActiveEditorGameViewTarget_3;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * ___onDisplaysUpdated_4;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displays_1), (void*)value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ____mainDisplay_2)); }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainDisplay_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveEditorGameViewTarget_3() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___m_ActiveEditorGameViewTarget_3)); }
	inline int32_t get_m_ActiveEditorGameViewTarget_3() const { return ___m_ActiveEditorGameViewTarget_3; }
	inline int32_t* get_address_of_m_ActiveEditorGameViewTarget_3() { return &___m_ActiveEditorGameViewTarget_3; }
	inline void set_m_ActiveEditorGameViewTarget_3(int32_t value)
	{
		___m_ActiveEditorGameViewTarget_3 = value;
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_4() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___onDisplaysUpdated_4)); }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * get_onDisplaysUpdated_4() const { return ___onDisplaysUpdated_4; }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 ** get_address_of_onDisplaysUpdated_4() { return &___onDisplaysUpdated_4; }
	inline void set_onDisplaysUpdated_4(DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * value)
	{
		___onDisplaysUpdated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDisplaysUpdated_4), (void*)value);
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
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


// System.Xml.Schema.XmlSchemaDatatypeVariety
struct XmlSchemaDatatypeVariety_tC3E3DA50C51D19A6958479C5851FD90C59435E7B 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDatatypeVariety::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDatatypeVariety_tC3E3DA50C51D19A6958479C5851FD90C59435E7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.DebugActionState/DebugActionKeyType
struct DebugActionKeyType_t7CF275434E0FBC28038A6BF8B496D692F5F084DD 
{
public:
	// System.Int32 UnityEngine.Rendering.DebugActionState/DebugActionKeyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugActionKeyType_t7CF275434E0FBC28038A6BF8B496D692F5F084DD, ___value___2)); }
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


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.PreTile>
struct NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Data.DataView
struct DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Data.DataViewManager System.Data.DataView::_dataViewManager
	DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * ____dataViewManager_3;
	// System.Data.DataTable System.Data.DataView::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_4;
	// System.Boolean System.Data.DataView::_locked
	bool ____locked_5;
	// System.Data.Index System.Data.DataView::_index
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____index_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Data.Index> System.Data.DataView::_findIndexes
	Dictionary_2_tB01C80AFA2DC7351E0E6AECB9510F29AFB79233B * ____findIndexes_7;
	// System.String System.Data.DataView::_sort
	String_t* ____sort_8;
	// System.Comparison`1<System.Data.DataRow> System.Data.DataView::_comparison
	Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * ____comparison_9;
	// System.Data.IFilter System.Data.DataView::_rowFilter
	RuntimeObject* ____rowFilter_10;
	// System.Data.DataViewRowState System.Data.DataView::_recordStates
	int32_t ____recordStates_11;
	// System.Boolean System.Data.DataView::_shouldOpen
	bool ____shouldOpen_12;
	// System.Boolean System.Data.DataView::_open
	bool ____open_13;
	// System.Boolean System.Data.DataView::_allowNew
	bool ____allowNew_14;
	// System.Boolean System.Data.DataView::_allowEdit
	bool ____allowEdit_15;
	// System.Boolean System.Data.DataView::_allowDelete
	bool ____allowDelete_16;
	// System.Boolean System.Data.DataView::_applyDefaultSort
	bool ____applyDefaultSort_17;
	// System.Data.DataRow System.Data.DataView::_addNewRow
	DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ____addNewRow_18;
	// System.ComponentModel.ListChangedEventArgs System.Data.DataView::_addNewMoved
	ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * ____addNewMoved_19;
	// System.ComponentModel.ListChangedEventHandler System.Data.DataView::_onListChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____onListChanged_20;
	// System.Data.DataViewRowState System.Data.DataView::_delayedRecordStates
	int32_t ____delayedRecordStates_22;
	// System.Boolean System.Data.DataView::_fEndInitInProgress
	bool ____fEndInitInProgress_23;
	// System.Collections.Generic.Dictionary`2<System.Data.DataRow,System.Data.DataRowView> System.Data.DataView::_rowViewCache
	Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * ____rowViewCache_24;
	// System.Collections.Generic.Dictionary`2<System.Data.DataRow,System.Data.DataRowView> System.Data.DataView::_rowViewBuffer
	Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * ____rowViewBuffer_25;
	// System.Data.DataViewListener System.Data.DataView::_dvListener
	DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * ____dvListener_26;
	// System.Int32 System.Data.DataView::_objectID
	int32_t ____objectID_28;

public:
	inline static int32_t get_offset_of__dataViewManager_3() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____dataViewManager_3)); }
	inline DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * get__dataViewManager_3() const { return ____dataViewManager_3; }
	inline DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A ** get_address_of__dataViewManager_3() { return &____dataViewManager_3; }
	inline void set__dataViewManager_3(DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * value)
	{
		____dataViewManager_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataViewManager_3), (void*)value);
	}

	inline static int32_t get_offset_of__table_4() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____table_4)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_4() const { return ____table_4; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_4() { return &____table_4; }
	inline void set__table_4(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_4), (void*)value);
	}

	inline static int32_t get_offset_of__locked_5() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____locked_5)); }
	inline bool get__locked_5() const { return ____locked_5; }
	inline bool* get_address_of__locked_5() { return &____locked_5; }
	inline void set__locked_5(bool value)
	{
		____locked_5 = value;
	}

	inline static int32_t get_offset_of__index_6() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____index_6)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__index_6() const { return ____index_6; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__index_6() { return &____index_6; }
	inline void set__index_6(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____index_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____index_6), (void*)value);
	}

	inline static int32_t get_offset_of__findIndexes_7() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____findIndexes_7)); }
	inline Dictionary_2_tB01C80AFA2DC7351E0E6AECB9510F29AFB79233B * get__findIndexes_7() const { return ____findIndexes_7; }
	inline Dictionary_2_tB01C80AFA2DC7351E0E6AECB9510F29AFB79233B ** get_address_of__findIndexes_7() { return &____findIndexes_7; }
	inline void set__findIndexes_7(Dictionary_2_tB01C80AFA2DC7351E0E6AECB9510F29AFB79233B * value)
	{
		____findIndexes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____findIndexes_7), (void*)value);
	}

	inline static int32_t get_offset_of__sort_8() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____sort_8)); }
	inline String_t* get__sort_8() const { return ____sort_8; }
	inline String_t** get_address_of__sort_8() { return &____sort_8; }
	inline void set__sort_8(String_t* value)
	{
		____sort_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sort_8), (void*)value);
	}

	inline static int32_t get_offset_of__comparison_9() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____comparison_9)); }
	inline Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * get__comparison_9() const { return ____comparison_9; }
	inline Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F ** get_address_of__comparison_9() { return &____comparison_9; }
	inline void set__comparison_9(Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * value)
	{
		____comparison_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparison_9), (void*)value);
	}

	inline static int32_t get_offset_of__rowFilter_10() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____rowFilter_10)); }
	inline RuntimeObject* get__rowFilter_10() const { return ____rowFilter_10; }
	inline RuntimeObject** get_address_of__rowFilter_10() { return &____rowFilter_10; }
	inline void set__rowFilter_10(RuntimeObject* value)
	{
		____rowFilter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowFilter_10), (void*)value);
	}

	inline static int32_t get_offset_of__recordStates_11() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____recordStates_11)); }
	inline int32_t get__recordStates_11() const { return ____recordStates_11; }
	inline int32_t* get_address_of__recordStates_11() { return &____recordStates_11; }
	inline void set__recordStates_11(int32_t value)
	{
		____recordStates_11 = value;
	}

	inline static int32_t get_offset_of__shouldOpen_12() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____shouldOpen_12)); }
	inline bool get__shouldOpen_12() const { return ____shouldOpen_12; }
	inline bool* get_address_of__shouldOpen_12() { return &____shouldOpen_12; }
	inline void set__shouldOpen_12(bool value)
	{
		____shouldOpen_12 = value;
	}

	inline static int32_t get_offset_of__open_13() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____open_13)); }
	inline bool get__open_13() const { return ____open_13; }
	inline bool* get_address_of__open_13() { return &____open_13; }
	inline void set__open_13(bool value)
	{
		____open_13 = value;
	}

	inline static int32_t get_offset_of__allowNew_14() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____allowNew_14)); }
	inline bool get__allowNew_14() const { return ____allowNew_14; }
	inline bool* get_address_of__allowNew_14() { return &____allowNew_14; }
	inline void set__allowNew_14(bool value)
	{
		____allowNew_14 = value;
	}

	inline static int32_t get_offset_of__allowEdit_15() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____allowEdit_15)); }
	inline bool get__allowEdit_15() const { return ____allowEdit_15; }
	inline bool* get_address_of__allowEdit_15() { return &____allowEdit_15; }
	inline void set__allowEdit_15(bool value)
	{
		____allowEdit_15 = value;
	}

	inline static int32_t get_offset_of__allowDelete_16() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____allowDelete_16)); }
	inline bool get__allowDelete_16() const { return ____allowDelete_16; }
	inline bool* get_address_of__allowDelete_16() { return &____allowDelete_16; }
	inline void set__allowDelete_16(bool value)
	{
		____allowDelete_16 = value;
	}

	inline static int32_t get_offset_of__applyDefaultSort_17() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____applyDefaultSort_17)); }
	inline bool get__applyDefaultSort_17() const { return ____applyDefaultSort_17; }
	inline bool* get_address_of__applyDefaultSort_17() { return &____applyDefaultSort_17; }
	inline void set__applyDefaultSort_17(bool value)
	{
		____applyDefaultSort_17 = value;
	}

	inline static int32_t get_offset_of__addNewRow_18() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____addNewRow_18)); }
	inline DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * get__addNewRow_18() const { return ____addNewRow_18; }
	inline DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE ** get_address_of__addNewRow_18() { return &____addNewRow_18; }
	inline void set__addNewRow_18(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * value)
	{
		____addNewRow_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addNewRow_18), (void*)value);
	}

	inline static int32_t get_offset_of__addNewMoved_19() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____addNewMoved_19)); }
	inline ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * get__addNewMoved_19() const { return ____addNewMoved_19; }
	inline ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 ** get_address_of__addNewMoved_19() { return &____addNewMoved_19; }
	inline void set__addNewMoved_19(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * value)
	{
		____addNewMoved_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addNewMoved_19), (void*)value);
	}

	inline static int32_t get_offset_of__onListChanged_20() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____onListChanged_20)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__onListChanged_20() const { return ____onListChanged_20; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__onListChanged_20() { return &____onListChanged_20; }
	inline void set__onListChanged_20(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____onListChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onListChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of__delayedRecordStates_22() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____delayedRecordStates_22)); }
	inline int32_t get__delayedRecordStates_22() const { return ____delayedRecordStates_22; }
	inline int32_t* get_address_of__delayedRecordStates_22() { return &____delayedRecordStates_22; }
	inline void set__delayedRecordStates_22(int32_t value)
	{
		____delayedRecordStates_22 = value;
	}

	inline static int32_t get_offset_of__fEndInitInProgress_23() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____fEndInitInProgress_23)); }
	inline bool get__fEndInitInProgress_23() const { return ____fEndInitInProgress_23; }
	inline bool* get_address_of__fEndInitInProgress_23() { return &____fEndInitInProgress_23; }
	inline void set__fEndInitInProgress_23(bool value)
	{
		____fEndInitInProgress_23 = value;
	}

	inline static int32_t get_offset_of__rowViewCache_24() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____rowViewCache_24)); }
	inline Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * get__rowViewCache_24() const { return ____rowViewCache_24; }
	inline Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F ** get_address_of__rowViewCache_24() { return &____rowViewCache_24; }
	inline void set__rowViewCache_24(Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * value)
	{
		____rowViewCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowViewCache_24), (void*)value);
	}

	inline static int32_t get_offset_of__rowViewBuffer_25() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____rowViewBuffer_25)); }
	inline Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * get__rowViewBuffer_25() const { return ____rowViewBuffer_25; }
	inline Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F ** get_address_of__rowViewBuffer_25() { return &____rowViewBuffer_25; }
	inline void set__rowViewBuffer_25(Dictionary_2_tCDB6574C0C0C9023DA44FC2553EFEF614AF49F5F * value)
	{
		____rowViewBuffer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowViewBuffer_25), (void*)value);
	}

	inline static int32_t get_offset_of__dvListener_26() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____dvListener_26)); }
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * get__dvListener_26() const { return ____dvListener_26; }
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E ** get_address_of__dvListener_26() { return &____dvListener_26; }
	inline void set__dvListener_26(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * value)
	{
		____dvListener_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dvListener_26), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_28() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF, ____objectID_28)); }
	inline int32_t get__objectID_28() const { return ____objectID_28; }
	inline int32_t* get_address_of__objectID_28() { return &____objectID_28; }
	inline void set__objectID_28(int32_t value)
	{
		____objectID_28 = value;
	}
};

struct DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF_StaticFields
{
public:
	// System.ComponentModel.ListChangedEventArgs System.Data.DataView::s_resetEventArgs
	ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * ___s_resetEventArgs_21;
	// System.Int32 System.Data.DataView::s_objectTypeCount
	int32_t ___s_objectTypeCount_27;

public:
	inline static int32_t get_offset_of_s_resetEventArgs_21() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF_StaticFields, ___s_resetEventArgs_21)); }
	inline ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * get_s_resetEventArgs_21() const { return ___s_resetEventArgs_21; }
	inline ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 ** get_address_of_s_resetEventArgs_21() { return &___s_resetEventArgs_21; }
	inline void set_s_resetEventArgs_21(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * value)
	{
		___s_resetEventArgs_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resetEventArgs_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_objectTypeCount_27() { return static_cast<int32_t>(offsetof(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF_StaticFields, ___s_objectTypeCount_27)); }
	inline int32_t get_s_objectTypeCount_27() const { return ___s_objectTypeCount_27; }
	inline int32_t* get_address_of_s_objectTypeCount_27() { return &___s_objectTypeCount_27; }
	inline void set_s_objectTypeCount_27(int32_t value)
	{
		___s_objectTypeCount_27 = value;
	}
};


// System.Xml.Schema.DatatypeImplementation
struct DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15  : public XmlSchemaDatatype_t857F76DDC0B34F4FC5DDA7AEF2736EB3660A4C38
{
public:
	// System.Xml.Schema.XmlSchemaDatatypeVariety System.Xml.Schema.DatatypeImplementation::variety
	int32_t ___variety_0;
	// System.Xml.Schema.RestrictionFacets System.Xml.Schema.DatatypeImplementation::restriction
	RestrictionFacets_tCB9F2F24F3B08A03D9ED4211125F3229E5C868DA * ___restriction_1;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::baseType
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___baseType_2;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.DatatypeImplementation::valueConverter
	XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * ___valueConverter_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.DatatypeImplementation::parentSchemaType
	XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * ___parentSchemaType_4;

public:
	inline static int32_t get_offset_of_variety_0() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15, ___variety_0)); }
	inline int32_t get_variety_0() const { return ___variety_0; }
	inline int32_t* get_address_of_variety_0() { return &___variety_0; }
	inline void set_variety_0(int32_t value)
	{
		___variety_0 = value;
	}

	inline static int32_t get_offset_of_restriction_1() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15, ___restriction_1)); }
	inline RestrictionFacets_tCB9F2F24F3B08A03D9ED4211125F3229E5C868DA * get_restriction_1() const { return ___restriction_1; }
	inline RestrictionFacets_tCB9F2F24F3B08A03D9ED4211125F3229E5C868DA ** get_address_of_restriction_1() { return &___restriction_1; }
	inline void set_restriction_1(RestrictionFacets_tCB9F2F24F3B08A03D9ED4211125F3229E5C868DA * value)
	{
		___restriction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restriction_1), (void*)value);
	}

	inline static int32_t get_offset_of_baseType_2() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15, ___baseType_2)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_baseType_2() const { return ___baseType_2; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_baseType_2() { return &___baseType_2; }
	inline void set_baseType_2(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___baseType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseType_2), (void*)value);
	}

	inline static int32_t get_offset_of_valueConverter_3() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15, ___valueConverter_3)); }
	inline XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * get_valueConverter_3() const { return ___valueConverter_3; }
	inline XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 ** get_address_of_valueConverter_3() { return &___valueConverter_3; }
	inline void set_valueConverter_3(XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * value)
	{
		___valueConverter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueConverter_3), (void*)value);
	}

	inline static int32_t get_offset_of_parentSchemaType_4() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15, ___parentSchemaType_4)); }
	inline XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * get_parentSchemaType_4() const { return ___parentSchemaType_4; }
	inline XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA ** get_address_of_parentSchemaType_4() { return &___parentSchemaType_4; }
	inline void set_parentSchemaType_4(XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * value)
	{
		___parentSchemaType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentSchemaType_4), (void*)value);
	}
};

struct DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields
{
public:
	// System.Collections.Hashtable System.Xml.Schema.DatatypeImplementation::builtinTypes
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___builtinTypes_5;
	// System.Xml.Schema.XmlSchemaSimpleType[] System.Xml.Schema.DatatypeImplementation::enumToTypeCode
	XmlSchemaSimpleTypeU5BU5D_t862CBDAFFEF794FFBD20DDF16B3DC2803B848F21* ___enumToTypeCode_6;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anySimpleType
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___anySimpleType_7;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anyAtomicType
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___anyAtomicType_8;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::untypedAtomicType
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___untypedAtomicType_9;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::yearMonthDurationType
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___yearMonthDurationType_10;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::dayTimeDurationType
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___dayTimeDurationType_11;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::normalizedStringTypeV1Compat
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___normalizedStringTypeV1Compat_12;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::tokenTypeV1Compat
	XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * ___tokenTypeV1Compat_13;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnySimpleType
	XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * ___QnAnySimpleType_14;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnyType
	XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * ___QnAnyType_15;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::stringFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___stringFacetsChecker_16;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::miscFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___miscFacetsChecker_17;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::numeric2FacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___numeric2FacetsChecker_18;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::binaryFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___binaryFacetsChecker_19;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::dateTimeFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___dateTimeFacetsChecker_20;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::durationFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___durationFacetsChecker_21;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::listFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___listFacetsChecker_22;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::qnameFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___qnameFacetsChecker_23;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::unionFacetsChecker
	FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * ___unionFacetsChecker_24;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anySimpleType
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_anySimpleType_25;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyURI
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_anyURI_26;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_base64Binary
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_base64Binary_27;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_boolean
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_boolean_28;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_byte
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_byte_29;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_char
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_char_30;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_date
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_date_31;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTime
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_dateTime_32;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeNoTz
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_dateTimeNoTz_33;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeTz
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_dateTimeTz_34;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_day
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_day_35;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_decimal
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_decimal_36;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_double
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_double_37;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_doubleXdr
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_doubleXdr_38;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_duration
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_duration_39;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITY
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_ENTITY_40;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITIES
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_ENTITIES_41;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENUMERATION
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_ENUMERATION_42;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_fixed
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_fixed_43;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_float
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_float_44;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_floatXdr
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_floatXdr_45;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_hexBinary
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_hexBinary_46;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ID
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_ID_47;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREF
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_IDREF_48;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREFS
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_IDREFS_49;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_int
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_int_50;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_integer
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_integer_51;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_language
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_language_52;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_long
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_long_53;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_month
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_month_54;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_monthDay
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_monthDay_55;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_Name
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_Name_56;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NCName
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_NCName_57;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_negativeInteger
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_negativeInteger_58;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKEN
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_NMTOKEN_59;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKENS
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_NMTOKENS_60;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonNegativeInteger
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_nonNegativeInteger_61;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonPositiveInteger
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_nonPositiveInteger_62;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedString
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_normalizedString_63;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NOTATION
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_NOTATION_64;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_positiveInteger
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_positiveInteger_65;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QName
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_QName_66;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QNameXdr
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_QNameXdr_67;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_short
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_short_68;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_string
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_string_69;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_time
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_time_70;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeNoTz
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_timeNoTz_71;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeTz
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_timeTz_72;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_token
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_token_73;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedByte
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_unsignedByte_74;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedInt
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_unsignedInt_75;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedLong
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_unsignedLong_76;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedShort
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_unsignedShort_77;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_uuid
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_uuid_78;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_year
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_year_79;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonth
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_yearMonth_80;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedStringV1Compat
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_normalizedStringV1Compat_81;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_tokenV1Compat
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_tokenV1Compat_82;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyAtomicType
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_anyAtomicType_83;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dayTimeDuration
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_dayTimeDuration_84;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_untypedAtomicType
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_untypedAtomicType_85;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonthDuration
	DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * ___c_yearMonthDuration_86;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypes
	DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* ___c_tokenizedTypes_87;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypesXsd
	DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* ___c_tokenizedTypesXsd_88;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XdrTypes
	SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* ___c_XdrTypes_89;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XsdTypes
	SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* ___c_XsdTypes_90;

public:
	inline static int32_t get_offset_of_builtinTypes_5() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___builtinTypes_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_builtinTypes_5() const { return ___builtinTypes_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_builtinTypes_5() { return &___builtinTypes_5; }
	inline void set_builtinTypes_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___builtinTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builtinTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumToTypeCode_6() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___enumToTypeCode_6)); }
	inline XmlSchemaSimpleTypeU5BU5D_t862CBDAFFEF794FFBD20DDF16B3DC2803B848F21* get_enumToTypeCode_6() const { return ___enumToTypeCode_6; }
	inline XmlSchemaSimpleTypeU5BU5D_t862CBDAFFEF794FFBD20DDF16B3DC2803B848F21** get_address_of_enumToTypeCode_6() { return &___enumToTypeCode_6; }
	inline void set_enumToTypeCode_6(XmlSchemaSimpleTypeU5BU5D_t862CBDAFFEF794FFBD20DDF16B3DC2803B848F21* value)
	{
		___enumToTypeCode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumToTypeCode_6), (void*)value);
	}

	inline static int32_t get_offset_of_anySimpleType_7() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___anySimpleType_7)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_anySimpleType_7() const { return ___anySimpleType_7; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_anySimpleType_7() { return &___anySimpleType_7; }
	inline void set_anySimpleType_7(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___anySimpleType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anySimpleType_7), (void*)value);
	}

	inline static int32_t get_offset_of_anyAtomicType_8() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___anyAtomicType_8)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_anyAtomicType_8() const { return ___anyAtomicType_8; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_anyAtomicType_8() { return &___anyAtomicType_8; }
	inline void set_anyAtomicType_8(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___anyAtomicType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anyAtomicType_8), (void*)value);
	}

	inline static int32_t get_offset_of_untypedAtomicType_9() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___untypedAtomicType_9)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_untypedAtomicType_9() const { return ___untypedAtomicType_9; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_untypedAtomicType_9() { return &___untypedAtomicType_9; }
	inline void set_untypedAtomicType_9(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___untypedAtomicType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___untypedAtomicType_9), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthDurationType_10() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___yearMonthDurationType_10)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_yearMonthDurationType_10() const { return ___yearMonthDurationType_10; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_yearMonthDurationType_10() { return &___yearMonthDurationType_10; }
	inline void set_yearMonthDurationType_10(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___yearMonthDurationType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthDurationType_10), (void*)value);
	}

	inline static int32_t get_offset_of_dayTimeDurationType_11() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___dayTimeDurationType_11)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_dayTimeDurationType_11() const { return ___dayTimeDurationType_11; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_dayTimeDurationType_11() { return &___dayTimeDurationType_11; }
	inline void set_dayTimeDurationType_11(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___dayTimeDurationType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayTimeDurationType_11), (void*)value);
	}

	inline static int32_t get_offset_of_normalizedStringTypeV1Compat_12() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___normalizedStringTypeV1Compat_12)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_normalizedStringTypeV1Compat_12() const { return ___normalizedStringTypeV1Compat_12; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_normalizedStringTypeV1Compat_12() { return &___normalizedStringTypeV1Compat_12; }
	inline void set_normalizedStringTypeV1Compat_12(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___normalizedStringTypeV1Compat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalizedStringTypeV1Compat_12), (void*)value);
	}

	inline static int32_t get_offset_of_tokenTypeV1Compat_13() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___tokenTypeV1Compat_13)); }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * get_tokenTypeV1Compat_13() const { return ___tokenTypeV1Compat_13; }
	inline XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C ** get_address_of_tokenTypeV1Compat_13() { return &___tokenTypeV1Compat_13; }
	inline void set_tokenTypeV1Compat_13(XmlSchemaSimpleType_tC0ABB2E0CDA541FB1D3AAF14180DF86A4C25697C * value)
	{
		___tokenTypeV1Compat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenTypeV1Compat_13), (void*)value);
	}

	inline static int32_t get_offset_of_QnAnySimpleType_14() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___QnAnySimpleType_14)); }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * get_QnAnySimpleType_14() const { return ___QnAnySimpleType_14; }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 ** get_address_of_QnAnySimpleType_14() { return &___QnAnySimpleType_14; }
	inline void set_QnAnySimpleType_14(XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * value)
	{
		___QnAnySimpleType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnAnySimpleType_14), (void*)value);
	}

	inline static int32_t get_offset_of_QnAnyType_15() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___QnAnyType_15)); }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * get_QnAnyType_15() const { return ___QnAnyType_15; }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 ** get_address_of_QnAnyType_15() { return &___QnAnyType_15; }
	inline void set_QnAnyType_15(XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * value)
	{
		___QnAnyType_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QnAnyType_15), (void*)value);
	}

	inline static int32_t get_offset_of_stringFacetsChecker_16() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___stringFacetsChecker_16)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_stringFacetsChecker_16() const { return ___stringFacetsChecker_16; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_stringFacetsChecker_16() { return &___stringFacetsChecker_16; }
	inline void set_stringFacetsChecker_16(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___stringFacetsChecker_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringFacetsChecker_16), (void*)value);
	}

	inline static int32_t get_offset_of_miscFacetsChecker_17() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___miscFacetsChecker_17)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_miscFacetsChecker_17() const { return ___miscFacetsChecker_17; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_miscFacetsChecker_17() { return &___miscFacetsChecker_17; }
	inline void set_miscFacetsChecker_17(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___miscFacetsChecker_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___miscFacetsChecker_17), (void*)value);
	}

	inline static int32_t get_offset_of_numeric2FacetsChecker_18() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___numeric2FacetsChecker_18)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_numeric2FacetsChecker_18() const { return ___numeric2FacetsChecker_18; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_numeric2FacetsChecker_18() { return &___numeric2FacetsChecker_18; }
	inline void set_numeric2FacetsChecker_18(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___numeric2FacetsChecker_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numeric2FacetsChecker_18), (void*)value);
	}

	inline static int32_t get_offset_of_binaryFacetsChecker_19() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___binaryFacetsChecker_19)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_binaryFacetsChecker_19() const { return ___binaryFacetsChecker_19; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_binaryFacetsChecker_19() { return &___binaryFacetsChecker_19; }
	inline void set_binaryFacetsChecker_19(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___binaryFacetsChecker_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binaryFacetsChecker_19), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeFacetsChecker_20() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___dateTimeFacetsChecker_20)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_dateTimeFacetsChecker_20() const { return ___dateTimeFacetsChecker_20; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_dateTimeFacetsChecker_20() { return &___dateTimeFacetsChecker_20; }
	inline void set_dateTimeFacetsChecker_20(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___dateTimeFacetsChecker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeFacetsChecker_20), (void*)value);
	}

	inline static int32_t get_offset_of_durationFacetsChecker_21() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___durationFacetsChecker_21)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_durationFacetsChecker_21() const { return ___durationFacetsChecker_21; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_durationFacetsChecker_21() { return &___durationFacetsChecker_21; }
	inline void set_durationFacetsChecker_21(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___durationFacetsChecker_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durationFacetsChecker_21), (void*)value);
	}

	inline static int32_t get_offset_of_listFacetsChecker_22() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___listFacetsChecker_22)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_listFacetsChecker_22() const { return ___listFacetsChecker_22; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_listFacetsChecker_22() { return &___listFacetsChecker_22; }
	inline void set_listFacetsChecker_22(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___listFacetsChecker_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listFacetsChecker_22), (void*)value);
	}

	inline static int32_t get_offset_of_qnameFacetsChecker_23() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___qnameFacetsChecker_23)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_qnameFacetsChecker_23() const { return ___qnameFacetsChecker_23; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_qnameFacetsChecker_23() { return &___qnameFacetsChecker_23; }
	inline void set_qnameFacetsChecker_23(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___qnameFacetsChecker_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qnameFacetsChecker_23), (void*)value);
	}

	inline static int32_t get_offset_of_unionFacetsChecker_24() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___unionFacetsChecker_24)); }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * get_unionFacetsChecker_24() const { return ___unionFacetsChecker_24; }
	inline FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 ** get_address_of_unionFacetsChecker_24() { return &___unionFacetsChecker_24; }
	inline void set_unionFacetsChecker_24(FacetsChecker_t7E7724953E7F8DD59B86B4EE87387120395C7DF8 * value)
	{
		___unionFacetsChecker_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unionFacetsChecker_24), (void*)value);
	}

	inline static int32_t get_offset_of_c_anySimpleType_25() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_anySimpleType_25)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_anySimpleType_25() const { return ___c_anySimpleType_25; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_anySimpleType_25() { return &___c_anySimpleType_25; }
	inline void set_c_anySimpleType_25(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_anySimpleType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_anySimpleType_25), (void*)value);
	}

	inline static int32_t get_offset_of_c_anyURI_26() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_anyURI_26)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_anyURI_26() const { return ___c_anyURI_26; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_anyURI_26() { return &___c_anyURI_26; }
	inline void set_c_anyURI_26(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_anyURI_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_anyURI_26), (void*)value);
	}

	inline static int32_t get_offset_of_c_base64Binary_27() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_base64Binary_27)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_base64Binary_27() const { return ___c_base64Binary_27; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_base64Binary_27() { return &___c_base64Binary_27; }
	inline void set_c_base64Binary_27(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_base64Binary_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_base64Binary_27), (void*)value);
	}

	inline static int32_t get_offset_of_c_boolean_28() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_boolean_28)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_boolean_28() const { return ___c_boolean_28; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_boolean_28() { return &___c_boolean_28; }
	inline void set_c_boolean_28(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_boolean_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_boolean_28), (void*)value);
	}

	inline static int32_t get_offset_of_c_byte_29() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_byte_29)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_byte_29() const { return ___c_byte_29; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_byte_29() { return &___c_byte_29; }
	inline void set_c_byte_29(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_byte_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_byte_29), (void*)value);
	}

	inline static int32_t get_offset_of_c_char_30() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_char_30)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_char_30() const { return ___c_char_30; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_char_30() { return &___c_char_30; }
	inline void set_c_char_30(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_char_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_char_30), (void*)value);
	}

	inline static int32_t get_offset_of_c_date_31() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_date_31)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_date_31() const { return ___c_date_31; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_date_31() { return &___c_date_31; }
	inline void set_c_date_31(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_date_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_date_31), (void*)value);
	}

	inline static int32_t get_offset_of_c_dateTime_32() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_dateTime_32)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_dateTime_32() const { return ___c_dateTime_32; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_dateTime_32() { return &___c_dateTime_32; }
	inline void set_c_dateTime_32(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_dateTime_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_dateTime_32), (void*)value);
	}

	inline static int32_t get_offset_of_c_dateTimeNoTz_33() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_dateTimeNoTz_33)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_dateTimeNoTz_33() const { return ___c_dateTimeNoTz_33; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_dateTimeNoTz_33() { return &___c_dateTimeNoTz_33; }
	inline void set_c_dateTimeNoTz_33(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_dateTimeNoTz_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_dateTimeNoTz_33), (void*)value);
	}

	inline static int32_t get_offset_of_c_dateTimeTz_34() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_dateTimeTz_34)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_dateTimeTz_34() const { return ___c_dateTimeTz_34; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_dateTimeTz_34() { return &___c_dateTimeTz_34; }
	inline void set_c_dateTimeTz_34(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_dateTimeTz_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_dateTimeTz_34), (void*)value);
	}

	inline static int32_t get_offset_of_c_day_35() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_day_35)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_day_35() const { return ___c_day_35; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_day_35() { return &___c_day_35; }
	inline void set_c_day_35(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_day_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_day_35), (void*)value);
	}

	inline static int32_t get_offset_of_c_decimal_36() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_decimal_36)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_decimal_36() const { return ___c_decimal_36; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_decimal_36() { return &___c_decimal_36; }
	inline void set_c_decimal_36(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_decimal_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_decimal_36), (void*)value);
	}

	inline static int32_t get_offset_of_c_double_37() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_double_37)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_double_37() const { return ___c_double_37; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_double_37() { return &___c_double_37; }
	inline void set_c_double_37(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_double_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_double_37), (void*)value);
	}

	inline static int32_t get_offset_of_c_doubleXdr_38() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_doubleXdr_38)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_doubleXdr_38() const { return ___c_doubleXdr_38; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_doubleXdr_38() { return &___c_doubleXdr_38; }
	inline void set_c_doubleXdr_38(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_doubleXdr_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_doubleXdr_38), (void*)value);
	}

	inline static int32_t get_offset_of_c_duration_39() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_duration_39)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_duration_39() const { return ___c_duration_39; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_duration_39() { return &___c_duration_39; }
	inline void set_c_duration_39(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_duration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_duration_39), (void*)value);
	}

	inline static int32_t get_offset_of_c_ENTITY_40() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_ENTITY_40)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_ENTITY_40() const { return ___c_ENTITY_40; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_ENTITY_40() { return &___c_ENTITY_40; }
	inline void set_c_ENTITY_40(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_ENTITY_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_ENTITY_40), (void*)value);
	}

	inline static int32_t get_offset_of_c_ENTITIES_41() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_ENTITIES_41)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_ENTITIES_41() const { return ___c_ENTITIES_41; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_ENTITIES_41() { return &___c_ENTITIES_41; }
	inline void set_c_ENTITIES_41(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_ENTITIES_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_ENTITIES_41), (void*)value);
	}

	inline static int32_t get_offset_of_c_ENUMERATION_42() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_ENUMERATION_42)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_ENUMERATION_42() const { return ___c_ENUMERATION_42; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_ENUMERATION_42() { return &___c_ENUMERATION_42; }
	inline void set_c_ENUMERATION_42(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_ENUMERATION_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_ENUMERATION_42), (void*)value);
	}

	inline static int32_t get_offset_of_c_fixed_43() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_fixed_43)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_fixed_43() const { return ___c_fixed_43; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_fixed_43() { return &___c_fixed_43; }
	inline void set_c_fixed_43(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_fixed_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_fixed_43), (void*)value);
	}

	inline static int32_t get_offset_of_c_float_44() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_float_44)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_float_44() const { return ___c_float_44; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_float_44() { return &___c_float_44; }
	inline void set_c_float_44(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_float_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_float_44), (void*)value);
	}

	inline static int32_t get_offset_of_c_floatXdr_45() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_floatXdr_45)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_floatXdr_45() const { return ___c_floatXdr_45; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_floatXdr_45() { return &___c_floatXdr_45; }
	inline void set_c_floatXdr_45(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_floatXdr_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_floatXdr_45), (void*)value);
	}

	inline static int32_t get_offset_of_c_hexBinary_46() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_hexBinary_46)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_hexBinary_46() const { return ___c_hexBinary_46; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_hexBinary_46() { return &___c_hexBinary_46; }
	inline void set_c_hexBinary_46(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_hexBinary_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_hexBinary_46), (void*)value);
	}

	inline static int32_t get_offset_of_c_ID_47() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_ID_47)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_ID_47() const { return ___c_ID_47; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_ID_47() { return &___c_ID_47; }
	inline void set_c_ID_47(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_ID_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_ID_47), (void*)value);
	}

	inline static int32_t get_offset_of_c_IDREF_48() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_IDREF_48)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_IDREF_48() const { return ___c_IDREF_48; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_IDREF_48() { return &___c_IDREF_48; }
	inline void set_c_IDREF_48(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_IDREF_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_IDREF_48), (void*)value);
	}

	inline static int32_t get_offset_of_c_IDREFS_49() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_IDREFS_49)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_IDREFS_49() const { return ___c_IDREFS_49; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_IDREFS_49() { return &___c_IDREFS_49; }
	inline void set_c_IDREFS_49(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_IDREFS_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_IDREFS_49), (void*)value);
	}

	inline static int32_t get_offset_of_c_int_50() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_int_50)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_int_50() const { return ___c_int_50; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_int_50() { return &___c_int_50; }
	inline void set_c_int_50(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_int_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_int_50), (void*)value);
	}

	inline static int32_t get_offset_of_c_integer_51() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_integer_51)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_integer_51() const { return ___c_integer_51; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_integer_51() { return &___c_integer_51; }
	inline void set_c_integer_51(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_integer_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_integer_51), (void*)value);
	}

	inline static int32_t get_offset_of_c_language_52() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_language_52)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_language_52() const { return ___c_language_52; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_language_52() { return &___c_language_52; }
	inline void set_c_language_52(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_language_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_language_52), (void*)value);
	}

	inline static int32_t get_offset_of_c_long_53() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_long_53)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_long_53() const { return ___c_long_53; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_long_53() { return &___c_long_53; }
	inline void set_c_long_53(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_long_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_long_53), (void*)value);
	}

	inline static int32_t get_offset_of_c_month_54() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_month_54)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_month_54() const { return ___c_month_54; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_month_54() { return &___c_month_54; }
	inline void set_c_month_54(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_month_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_month_54), (void*)value);
	}

	inline static int32_t get_offset_of_c_monthDay_55() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_monthDay_55)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_monthDay_55() const { return ___c_monthDay_55; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_monthDay_55() { return &___c_monthDay_55; }
	inline void set_c_monthDay_55(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_monthDay_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_monthDay_55), (void*)value);
	}

	inline static int32_t get_offset_of_c_Name_56() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_Name_56)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_Name_56() const { return ___c_Name_56; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_Name_56() { return &___c_Name_56; }
	inline void set_c_Name_56(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_Name_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_Name_56), (void*)value);
	}

	inline static int32_t get_offset_of_c_NCName_57() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_NCName_57)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_NCName_57() const { return ___c_NCName_57; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_NCName_57() { return &___c_NCName_57; }
	inline void set_c_NCName_57(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_NCName_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_NCName_57), (void*)value);
	}

	inline static int32_t get_offset_of_c_negativeInteger_58() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_negativeInteger_58)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_negativeInteger_58() const { return ___c_negativeInteger_58; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_negativeInteger_58() { return &___c_negativeInteger_58; }
	inline void set_c_negativeInteger_58(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_negativeInteger_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_negativeInteger_58), (void*)value);
	}

	inline static int32_t get_offset_of_c_NMTOKEN_59() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_NMTOKEN_59)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_NMTOKEN_59() const { return ___c_NMTOKEN_59; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_NMTOKEN_59() { return &___c_NMTOKEN_59; }
	inline void set_c_NMTOKEN_59(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_NMTOKEN_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_NMTOKEN_59), (void*)value);
	}

	inline static int32_t get_offset_of_c_NMTOKENS_60() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_NMTOKENS_60)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_NMTOKENS_60() const { return ___c_NMTOKENS_60; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_NMTOKENS_60() { return &___c_NMTOKENS_60; }
	inline void set_c_NMTOKENS_60(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_NMTOKENS_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_NMTOKENS_60), (void*)value);
	}

	inline static int32_t get_offset_of_c_nonNegativeInteger_61() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_nonNegativeInteger_61)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_nonNegativeInteger_61() const { return ___c_nonNegativeInteger_61; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_nonNegativeInteger_61() { return &___c_nonNegativeInteger_61; }
	inline void set_c_nonNegativeInteger_61(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_nonNegativeInteger_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_nonNegativeInteger_61), (void*)value);
	}

	inline static int32_t get_offset_of_c_nonPositiveInteger_62() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_nonPositiveInteger_62)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_nonPositiveInteger_62() const { return ___c_nonPositiveInteger_62; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_nonPositiveInteger_62() { return &___c_nonPositiveInteger_62; }
	inline void set_c_nonPositiveInteger_62(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_nonPositiveInteger_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_nonPositiveInteger_62), (void*)value);
	}

	inline static int32_t get_offset_of_c_normalizedString_63() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_normalizedString_63)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_normalizedString_63() const { return ___c_normalizedString_63; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_normalizedString_63() { return &___c_normalizedString_63; }
	inline void set_c_normalizedString_63(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_normalizedString_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_normalizedString_63), (void*)value);
	}

	inline static int32_t get_offset_of_c_NOTATION_64() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_NOTATION_64)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_NOTATION_64() const { return ___c_NOTATION_64; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_NOTATION_64() { return &___c_NOTATION_64; }
	inline void set_c_NOTATION_64(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_NOTATION_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_NOTATION_64), (void*)value);
	}

	inline static int32_t get_offset_of_c_positiveInteger_65() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_positiveInteger_65)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_positiveInteger_65() const { return ___c_positiveInteger_65; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_positiveInteger_65() { return &___c_positiveInteger_65; }
	inline void set_c_positiveInteger_65(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_positiveInteger_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_positiveInteger_65), (void*)value);
	}

	inline static int32_t get_offset_of_c_QName_66() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_QName_66)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_QName_66() const { return ___c_QName_66; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_QName_66() { return &___c_QName_66; }
	inline void set_c_QName_66(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_QName_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_QName_66), (void*)value);
	}

	inline static int32_t get_offset_of_c_QNameXdr_67() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_QNameXdr_67)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_QNameXdr_67() const { return ___c_QNameXdr_67; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_QNameXdr_67() { return &___c_QNameXdr_67; }
	inline void set_c_QNameXdr_67(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_QNameXdr_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_QNameXdr_67), (void*)value);
	}

	inline static int32_t get_offset_of_c_short_68() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_short_68)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_short_68() const { return ___c_short_68; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_short_68() { return &___c_short_68; }
	inline void set_c_short_68(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_short_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_short_68), (void*)value);
	}

	inline static int32_t get_offset_of_c_string_69() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_string_69)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_string_69() const { return ___c_string_69; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_string_69() { return &___c_string_69; }
	inline void set_c_string_69(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_string_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_string_69), (void*)value);
	}

	inline static int32_t get_offset_of_c_time_70() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_time_70)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_time_70() const { return ___c_time_70; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_time_70() { return &___c_time_70; }
	inline void set_c_time_70(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_time_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_time_70), (void*)value);
	}

	inline static int32_t get_offset_of_c_timeNoTz_71() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_timeNoTz_71)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_timeNoTz_71() const { return ___c_timeNoTz_71; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_timeNoTz_71() { return &___c_timeNoTz_71; }
	inline void set_c_timeNoTz_71(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_timeNoTz_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_timeNoTz_71), (void*)value);
	}

	inline static int32_t get_offset_of_c_timeTz_72() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_timeTz_72)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_timeTz_72() const { return ___c_timeTz_72; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_timeTz_72() { return &___c_timeTz_72; }
	inline void set_c_timeTz_72(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_timeTz_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_timeTz_72), (void*)value);
	}

	inline static int32_t get_offset_of_c_token_73() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_token_73)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_token_73() const { return ___c_token_73; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_token_73() { return &___c_token_73; }
	inline void set_c_token_73(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_token_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_token_73), (void*)value);
	}

	inline static int32_t get_offset_of_c_unsignedByte_74() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_unsignedByte_74)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_unsignedByte_74() const { return ___c_unsignedByte_74; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_unsignedByte_74() { return &___c_unsignedByte_74; }
	inline void set_c_unsignedByte_74(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_unsignedByte_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_unsignedByte_74), (void*)value);
	}

	inline static int32_t get_offset_of_c_unsignedInt_75() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_unsignedInt_75)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_unsignedInt_75() const { return ___c_unsignedInt_75; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_unsignedInt_75() { return &___c_unsignedInt_75; }
	inline void set_c_unsignedInt_75(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_unsignedInt_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_unsignedInt_75), (void*)value);
	}

	inline static int32_t get_offset_of_c_unsignedLong_76() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_unsignedLong_76)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_unsignedLong_76() const { return ___c_unsignedLong_76; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_unsignedLong_76() { return &___c_unsignedLong_76; }
	inline void set_c_unsignedLong_76(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_unsignedLong_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_unsignedLong_76), (void*)value);
	}

	inline static int32_t get_offset_of_c_unsignedShort_77() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_unsignedShort_77)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_unsignedShort_77() const { return ___c_unsignedShort_77; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_unsignedShort_77() { return &___c_unsignedShort_77; }
	inline void set_c_unsignedShort_77(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_unsignedShort_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_unsignedShort_77), (void*)value);
	}

	inline static int32_t get_offset_of_c_uuid_78() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_uuid_78)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_uuid_78() const { return ___c_uuid_78; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_uuid_78() { return &___c_uuid_78; }
	inline void set_c_uuid_78(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_uuid_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_uuid_78), (void*)value);
	}

	inline static int32_t get_offset_of_c_year_79() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_year_79)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_year_79() const { return ___c_year_79; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_year_79() { return &___c_year_79; }
	inline void set_c_year_79(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_year_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_year_79), (void*)value);
	}

	inline static int32_t get_offset_of_c_yearMonth_80() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_yearMonth_80)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_yearMonth_80() const { return ___c_yearMonth_80; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_yearMonth_80() { return &___c_yearMonth_80; }
	inline void set_c_yearMonth_80(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_yearMonth_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_yearMonth_80), (void*)value);
	}

	inline static int32_t get_offset_of_c_normalizedStringV1Compat_81() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_normalizedStringV1Compat_81)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_normalizedStringV1Compat_81() const { return ___c_normalizedStringV1Compat_81; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_normalizedStringV1Compat_81() { return &___c_normalizedStringV1Compat_81; }
	inline void set_c_normalizedStringV1Compat_81(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_normalizedStringV1Compat_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_normalizedStringV1Compat_81), (void*)value);
	}

	inline static int32_t get_offset_of_c_tokenV1Compat_82() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_tokenV1Compat_82)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_tokenV1Compat_82() const { return ___c_tokenV1Compat_82; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_tokenV1Compat_82() { return &___c_tokenV1Compat_82; }
	inline void set_c_tokenV1Compat_82(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_tokenV1Compat_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_tokenV1Compat_82), (void*)value);
	}

	inline static int32_t get_offset_of_c_anyAtomicType_83() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_anyAtomicType_83)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_anyAtomicType_83() const { return ___c_anyAtomicType_83; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_anyAtomicType_83() { return &___c_anyAtomicType_83; }
	inline void set_c_anyAtomicType_83(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_anyAtomicType_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_anyAtomicType_83), (void*)value);
	}

	inline static int32_t get_offset_of_c_dayTimeDuration_84() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_dayTimeDuration_84)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_dayTimeDuration_84() const { return ___c_dayTimeDuration_84; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_dayTimeDuration_84() { return &___c_dayTimeDuration_84; }
	inline void set_c_dayTimeDuration_84(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_dayTimeDuration_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_dayTimeDuration_84), (void*)value);
	}

	inline static int32_t get_offset_of_c_untypedAtomicType_85() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_untypedAtomicType_85)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_untypedAtomicType_85() const { return ___c_untypedAtomicType_85; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_untypedAtomicType_85() { return &___c_untypedAtomicType_85; }
	inline void set_c_untypedAtomicType_85(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_untypedAtomicType_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_untypedAtomicType_85), (void*)value);
	}

	inline static int32_t get_offset_of_c_yearMonthDuration_86() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_yearMonthDuration_86)); }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * get_c_yearMonthDuration_86() const { return ___c_yearMonthDuration_86; }
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** get_address_of_c_yearMonthDuration_86() { return &___c_yearMonthDuration_86; }
	inline void set_c_yearMonthDuration_86(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		___c_yearMonthDuration_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_yearMonthDuration_86), (void*)value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypes_87() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_tokenizedTypes_87)); }
	inline DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* get_c_tokenizedTypes_87() const { return ___c_tokenizedTypes_87; }
	inline DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D** get_address_of_c_tokenizedTypes_87() { return &___c_tokenizedTypes_87; }
	inline void set_c_tokenizedTypes_87(DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* value)
	{
		___c_tokenizedTypes_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_tokenizedTypes_87), (void*)value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypesXsd_88() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_tokenizedTypesXsd_88)); }
	inline DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* get_c_tokenizedTypesXsd_88() const { return ___c_tokenizedTypesXsd_88; }
	inline DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D** get_address_of_c_tokenizedTypesXsd_88() { return &___c_tokenizedTypesXsd_88; }
	inline void set_c_tokenizedTypesXsd_88(DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D* value)
	{
		___c_tokenizedTypesXsd_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_tokenizedTypesXsd_88), (void*)value);
	}

	inline static int32_t get_offset_of_c_XdrTypes_89() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_XdrTypes_89)); }
	inline SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* get_c_XdrTypes_89() const { return ___c_XdrTypes_89; }
	inline SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA** get_address_of_c_XdrTypes_89() { return &___c_XdrTypes_89; }
	inline void set_c_XdrTypes_89(SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* value)
	{
		___c_XdrTypes_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_XdrTypes_89), (void*)value);
	}

	inline static int32_t get_offset_of_c_XsdTypes_90() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15_StaticFields, ___c_XsdTypes_90)); }
	inline SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* get_c_XsdTypes_90() const { return ___c_XsdTypes_90; }
	inline SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA** get_address_of_c_XsdTypes_90() { return &___c_XsdTypes_90; }
	inline void set_c_XsdTypes_90(SchemaDatatypeMapU5BU5D_t7856FBF2902E516E9BAC4B53C80C181CE4B619DA* value)
	{
		___c_XsdTypes_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_XsdTypes_90), (void*)value);
	}
};


// UnityEngine.Rendering.DebugActionDesc
struct DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.Rendering.DebugActionDesc::buttonAction
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___buttonAction_0;
	// UnityEngine.Rendering.DebugActionRepeatMode UnityEngine.Rendering.DebugActionDesc::repeatMode
	int32_t ___repeatMode_1;
	// System.Single UnityEngine.Rendering.DebugActionDesc::repeatDelay
	float ___repeatDelay_2;

public:
	inline static int32_t get_offset_of_buttonAction_0() { return static_cast<int32_t>(offsetof(DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A, ___buttonAction_0)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_buttonAction_0() const { return ___buttonAction_0; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_buttonAction_0() { return &___buttonAction_0; }
	inline void set_buttonAction_0(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___buttonAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_repeatMode_1() { return static_cast<int32_t>(offsetof(DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A, ___repeatMode_1)); }
	inline int32_t get_repeatMode_1() const { return ___repeatMode_1; }
	inline int32_t* get_address_of_repeatMode_1() { return &___repeatMode_1; }
	inline void set_repeatMode_1(int32_t value)
	{
		___repeatMode_1 = value;
	}

	inline static int32_t get_offset_of_repeatDelay_2() { return static_cast<int32_t>(offsetof(DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A, ___repeatDelay_2)); }
	inline float get_repeatDelay_2() const { return ___repeatDelay_2; }
	inline float* get_address_of_repeatDelay_2() { return &___repeatDelay_2; }
	inline void set_repeatDelay_2(float value)
	{
		___repeatDelay_2 = value;
	}
};


// UnityEngine.Rendering.DebugActionState
struct DebugActionState_t647473023098F758272E6656AE45FF04F9883B73  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DebugActionState/DebugActionKeyType UnityEngine.Rendering.DebugActionState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.Rendering.DebugActionState::inputAction
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___inputAction_1;
	// System.Boolean[] UnityEngine.Rendering.DebugActionState::m_TriggerPressedUp
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___m_TriggerPressedUp_2;
	// System.Single UnityEngine.Rendering.DebugActionState::m_Timer
	float ___m_Timer_3;
	// System.Boolean UnityEngine.Rendering.DebugActionState::<runningAction>k__BackingField
	bool ___U3CrunningActionU3Ek__BackingField_4;
	// System.Single UnityEngine.Rendering.DebugActionState::<actionState>k__BackingField
	float ___U3CactionStateU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_inputAction_1() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___inputAction_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_inputAction_1() const { return ___inputAction_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_inputAction_1() { return &___inputAction_1; }
	inline void set_inputAction_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___inputAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerPressedUp_2() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___m_TriggerPressedUp_2)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_m_TriggerPressedUp_2() const { return ___m_TriggerPressedUp_2; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_m_TriggerPressedUp_2() { return &___m_TriggerPressedUp_2; }
	inline void set_m_TriggerPressedUp_2(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___m_TriggerPressedUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerPressedUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timer_3() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___m_Timer_3)); }
	inline float get_m_Timer_3() const { return ___m_Timer_3; }
	inline float* get_address_of_m_Timer_3() { return &___m_Timer_3; }
	inline void set_m_Timer_3(float value)
	{
		___m_Timer_3 = value;
	}

	inline static int32_t get_offset_of_U3CrunningActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___U3CrunningActionU3Ek__BackingField_4)); }
	inline bool get_U3CrunningActionU3Ek__BackingField_4() const { return ___U3CrunningActionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CrunningActionU3Ek__BackingField_4() { return &___U3CrunningActionU3Ek__BackingField_4; }
	inline void set_U3CrunningActionU3Ek__BackingField_4(bool value)
	{
		___U3CrunningActionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CactionStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebugActionState_t647473023098F758272E6656AE45FF04F9883B73, ___U3CactionStateU3Ek__BackingField_5)); }
	inline float get_U3CactionStateU3Ek__BackingField_5() const { return ___U3CactionStateU3Ek__BackingField_5; }
	inline float* get_address_of_U3CactionStateU3Ek__BackingField_5() { return &___U3CactionStateU3Ek__BackingField_5; }
	inline void set_U3CactionStateU3Ek__BackingField_5(float value)
	{
		___U3CactionStateU3Ek__BackingField_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UX.DialogButtonContext
struct DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7 
{
public:
	// Microsoft.MixedReality.Toolkit.UX.DialogButtonType Microsoft.MixedReality.Toolkit.UX.DialogButtonContext::<ButtonType>k__BackingField
	int32_t ___U3CButtonTypeU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.UX.DialogButtonContext::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CButtonTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7, ___U3CButtonTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CButtonTypeU3Ek__BackingField_0() const { return ___U3CButtonTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CButtonTypeU3Ek__BackingField_0() { return &___U3CButtonTypeU3Ek__BackingField_0; }
	inline void set_U3CButtonTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CButtonTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7, ___U3CLabelU3Ek__BackingField_1)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_1() const { return ___U3CLabelU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_1() { return &___U3CLabelU3Ek__BackingField_1; }
	inline void set_U3CLabelU3Ek__BackingField_1(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.UX.DialogButtonContext
struct DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7_marshaled_pinvoke
{
	int32_t ___U3CButtonTypeU3Ek__BackingField_0;
	char* ___U3CLabelU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.UX.DialogButtonContext
struct DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7_marshaled_com
{
	int32_t ___U3CButtonTypeU3Ek__BackingField_0;
	Il2CppChar* ___U3CLabelU3Ek__BackingField_1;
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

// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilePixelWidth
	int32_t ___m_TilePixelWidth_0;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilePixelHeight
	int32_t ___m_TilePixelHeight_1;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileXCount
	int32_t ___m_TileXCount_2;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileYCount
	int32_t ___m_TileYCount_3;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileHeaderSize
	int32_t ___m_TileHeaderSize_4;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_AvgLightPerTile
	int32_t ___m_AvgLightPerTile_5;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilerLevel
	int32_t ___m_TilerLevel_6;
	// UnityEngine.FrustumPlanes UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_FrustumPlanes
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_IsOrthographic
	bool ___m_IsOrthographic_8;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_Counters
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	// Unity.Collections.NativeArray`1<System.UInt16> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileData
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	// Unity.Collections.NativeArray`1<System.UInt32> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileHeaders
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.PreTile> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_PreTiles
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;

public:
	inline static int32_t get_offset_of_m_TilePixelWidth_0() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilePixelWidth_0)); }
	inline int32_t get_m_TilePixelWidth_0() const { return ___m_TilePixelWidth_0; }
	inline int32_t* get_address_of_m_TilePixelWidth_0() { return &___m_TilePixelWidth_0; }
	inline void set_m_TilePixelWidth_0(int32_t value)
	{
		___m_TilePixelWidth_0 = value;
	}

	inline static int32_t get_offset_of_m_TilePixelHeight_1() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilePixelHeight_1)); }
	inline int32_t get_m_TilePixelHeight_1() const { return ___m_TilePixelHeight_1; }
	inline int32_t* get_address_of_m_TilePixelHeight_1() { return &___m_TilePixelHeight_1; }
	inline void set_m_TilePixelHeight_1(int32_t value)
	{
		___m_TilePixelHeight_1 = value;
	}

	inline static int32_t get_offset_of_m_TileXCount_2() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileXCount_2)); }
	inline int32_t get_m_TileXCount_2() const { return ___m_TileXCount_2; }
	inline int32_t* get_address_of_m_TileXCount_2() { return &___m_TileXCount_2; }
	inline void set_m_TileXCount_2(int32_t value)
	{
		___m_TileXCount_2 = value;
	}

	inline static int32_t get_offset_of_m_TileYCount_3() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileYCount_3)); }
	inline int32_t get_m_TileYCount_3() const { return ___m_TileYCount_3; }
	inline int32_t* get_address_of_m_TileYCount_3() { return &___m_TileYCount_3; }
	inline void set_m_TileYCount_3(int32_t value)
	{
		___m_TileYCount_3 = value;
	}

	inline static int32_t get_offset_of_m_TileHeaderSize_4() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileHeaderSize_4)); }
	inline int32_t get_m_TileHeaderSize_4() const { return ___m_TileHeaderSize_4; }
	inline int32_t* get_address_of_m_TileHeaderSize_4() { return &___m_TileHeaderSize_4; }
	inline void set_m_TileHeaderSize_4(int32_t value)
	{
		___m_TileHeaderSize_4 = value;
	}

	inline static int32_t get_offset_of_m_AvgLightPerTile_5() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_AvgLightPerTile_5)); }
	inline int32_t get_m_AvgLightPerTile_5() const { return ___m_AvgLightPerTile_5; }
	inline int32_t* get_address_of_m_AvgLightPerTile_5() { return &___m_AvgLightPerTile_5; }
	inline void set_m_AvgLightPerTile_5(int32_t value)
	{
		___m_AvgLightPerTile_5 = value;
	}

	inline static int32_t get_offset_of_m_TilerLevel_6() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilerLevel_6)); }
	inline int32_t get_m_TilerLevel_6() const { return ___m_TilerLevel_6; }
	inline int32_t* get_address_of_m_TilerLevel_6() { return &___m_TilerLevel_6; }
	inline void set_m_TilerLevel_6(int32_t value)
	{
		___m_TilerLevel_6 = value;
	}

	inline static int32_t get_offset_of_m_FrustumPlanes_7() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_FrustumPlanes_7)); }
	inline FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  get_m_FrustumPlanes_7() const { return ___m_FrustumPlanes_7; }
	inline FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C * get_address_of_m_FrustumPlanes_7() { return &___m_FrustumPlanes_7; }
	inline void set_m_FrustumPlanes_7(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  value)
	{
		___m_FrustumPlanes_7 = value;
	}

	inline static int32_t get_offset_of_m_IsOrthographic_8() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_IsOrthographic_8)); }
	inline bool get_m_IsOrthographic_8() const { return ___m_IsOrthographic_8; }
	inline bool* get_address_of_m_IsOrthographic_8() { return &___m_IsOrthographic_8; }
	inline void set_m_IsOrthographic_8(bool value)
	{
		___m_IsOrthographic_8 = value;
	}

	inline static int32_t get_offset_of_m_Counters_9() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_Counters_9)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Counters_9() const { return ___m_Counters_9; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Counters_9() { return &___m_Counters_9; }
	inline void set_m_Counters_9(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Counters_9 = value;
	}

	inline static int32_t get_offset_of_m_TileData_10() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileData_10)); }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  get_m_TileData_10() const { return ___m_TileData_10; }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A * get_address_of_m_TileData_10() { return &___m_TileData_10; }
	inline void set_m_TileData_10(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  value)
	{
		___m_TileData_10 = value;
	}

	inline static int32_t get_offset_of_m_TileHeaders_11() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileHeaders_11)); }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  get_m_TileHeaders_11() const { return ___m_TileHeaders_11; }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * get_address_of_m_TileHeaders_11() { return &___m_TileHeaders_11; }
	inline void set_m_TileHeaders_11(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  value)
	{
		___m_TileHeaders_11 = value;
	}

	inline static int32_t get_offset_of_m_PreTiles_12() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_PreTiles_12)); }
	inline NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  get_m_PreTiles_12() const { return ___m_PreTiles_12; }
	inline NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA * get_address_of_m_PreTiles_12() { return &___m_PreTiles_12; }
	inline void set_m_PreTiles_12(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  value)
	{
		___m_PreTiles_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_pinvoke
{
	int32_t ___m_TilePixelWidth_0;
	int32_t ___m_TilePixelHeight_1;
	int32_t ___m_TileXCount_2;
	int32_t ___m_TileYCount_3;
	int32_t ___m_TileHeaderSize_4;
	int32_t ___m_AvgLightPerTile_5;
	int32_t ___m_TilerLevel_6;
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	int32_t ___m_IsOrthographic_8;
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_com
{
	int32_t ___m_TilePixelWidth_0;
	int32_t ___m_TilePixelHeight_1;
	int32_t ___m_TileXCount_2;
	int32_t ___m_TileYCount_3;
	int32_t ___m_TileHeaderSize_4;
	int32_t ___m_AvgLightPerTile_5;
	int32_t ___m_TilerLevel_6;
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	int32_t ___m_IsOrthographic_8;
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Rendering.UI.DebugUIHandlerPanel
struct DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UnityEngine.Rendering.UI.DebugUIHandlerPanel::nameLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameLabel_4;
	// UnityEngine.UI.ScrollRect UnityEngine.Rendering.UI.DebugUIHandlerPanel::scrollRect
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___scrollRect_5;
	// UnityEngine.RectTransform UnityEngine.Rendering.UI.DebugUIHandlerPanel::viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___viewport_6;
	// UnityEngine.RectTransform UnityEngine.Rendering.UI.DebugUIHandlerPanel::m_ScrollTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ScrollTransform_7;
	// UnityEngine.RectTransform UnityEngine.Rendering.UI.DebugUIHandlerPanel::m_ContentTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContentTransform_8;
	// UnityEngine.RectTransform UnityEngine.Rendering.UI.DebugUIHandlerPanel::m_MaskTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_MaskTransform_9;
	// UnityEngine.Rendering.DebugUI/Panel UnityEngine.Rendering.UI.DebugUIHandlerPanel::m_Panel
	Panel_t804EBDD5708282E712D5FE6B39DB87136410EBB5 * ___m_Panel_10;

public:
	inline static int32_t get_offset_of_nameLabel_4() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___nameLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameLabel_4() const { return ___nameLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameLabel_4() { return &___nameLabel_4; }
	inline void set_nameLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of_scrollRect_5() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___scrollRect_5)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_scrollRect_5() const { return ___scrollRect_5; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_scrollRect_5() { return &___scrollRect_5; }
	inline void set_scrollRect_5(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___scrollRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_viewport_6() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___viewport_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_viewport_6() const { return ___viewport_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_viewport_6() { return &___viewport_6; }
	inline void set_viewport_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___viewport_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewport_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollTransform_7() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___m_ScrollTransform_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ScrollTransform_7() const { return ___m_ScrollTransform_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ScrollTransform_7() { return &___m_ScrollTransform_7; }
	inline void set_m_ScrollTransform_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ScrollTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentTransform_8() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___m_ContentTransform_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContentTransform_8() const { return ___m_ContentTransform_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContentTransform_8() { return &___m_ContentTransform_8; }
	inline void set_m_ContentTransform_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContentTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaskTransform_9() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___m_MaskTransform_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_MaskTransform_9() const { return ___m_MaskTransform_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_MaskTransform_9() { return &___m_MaskTransform_9; }
	inline void set_m_MaskTransform_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_MaskTransform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskTransform_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Panel_10() { return static_cast<int32_t>(offsetof(DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0, ___m_Panel_10)); }
	inline Panel_t804EBDD5708282E712D5FE6B39DB87136410EBB5 * get_m_Panel_10() const { return ___m_Panel_10; }
	inline Panel_t804EBDD5708282E712D5FE6B39DB87136410EBB5 ** get_address_of_m_Panel_10() { return &___m_Panel_10; }
	inline void set_m_Panel_10(Panel_t804EBDD5708282E712D5FE6B39DB87136410EBB5 * value)
	{
		___m_Panel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Panel_10), (void*)value);
	}
};


// UnityEngine.Rendering.UI.DebugUIHandlerWidget
struct DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color UnityEngine.Rendering.UI.DebugUIHandlerWidget::colorDefault
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorDefault_4;
	// UnityEngine.Color UnityEngine.Rendering.UI.DebugUIHandlerWidget::colorSelected
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorSelected_5;
	// UnityEngine.Rendering.UI.DebugUIHandlerWidget UnityEngine.Rendering.UI.DebugUIHandlerWidget::<parentUIHandler>k__BackingField
	DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * ___U3CparentUIHandlerU3Ek__BackingField_6;
	// UnityEngine.Rendering.UI.DebugUIHandlerWidget UnityEngine.Rendering.UI.DebugUIHandlerWidget::<previousUIHandler>k__BackingField
	DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * ___U3CpreviousUIHandlerU3Ek__BackingField_7;
	// UnityEngine.Rendering.UI.DebugUIHandlerWidget UnityEngine.Rendering.UI.DebugUIHandlerWidget::<nextUIHandler>k__BackingField
	DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * ___U3CnextUIHandlerU3Ek__BackingField_8;
	// UnityEngine.Rendering.DebugUI/Widget UnityEngine.Rendering.UI.DebugUIHandlerWidget::m_Widget
	Widget_t7CB209495D292E15C11767D22EEC646A2FAC8D7D * ___m_Widget_9;

public:
	inline static int32_t get_offset_of_colorDefault_4() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___colorDefault_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorDefault_4() const { return ___colorDefault_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorDefault_4() { return &___colorDefault_4; }
	inline void set_colorDefault_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorDefault_4 = value;
	}

	inline static int32_t get_offset_of_colorSelected_5() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___colorSelected_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorSelected_5() const { return ___colorSelected_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorSelected_5() { return &___colorSelected_5; }
	inline void set_colorSelected_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorSelected_5 = value;
	}

	inline static int32_t get_offset_of_U3CparentUIHandlerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___U3CparentUIHandlerU3Ek__BackingField_6)); }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * get_U3CparentUIHandlerU3Ek__BackingField_6() const { return ___U3CparentUIHandlerU3Ek__BackingField_6; }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 ** get_address_of_U3CparentUIHandlerU3Ek__BackingField_6() { return &___U3CparentUIHandlerU3Ek__BackingField_6; }
	inline void set_U3CparentUIHandlerU3Ek__BackingField_6(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * value)
	{
		___U3CparentUIHandlerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparentUIHandlerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpreviousUIHandlerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___U3CpreviousUIHandlerU3Ek__BackingField_7)); }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * get_U3CpreviousUIHandlerU3Ek__BackingField_7() const { return ___U3CpreviousUIHandlerU3Ek__BackingField_7; }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 ** get_address_of_U3CpreviousUIHandlerU3Ek__BackingField_7() { return &___U3CpreviousUIHandlerU3Ek__BackingField_7; }
	inline void set_U3CpreviousUIHandlerU3Ek__BackingField_7(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * value)
	{
		___U3CpreviousUIHandlerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpreviousUIHandlerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnextUIHandlerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___U3CnextUIHandlerU3Ek__BackingField_8)); }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * get_U3CnextUIHandlerU3Ek__BackingField_8() const { return ___U3CnextUIHandlerU3Ek__BackingField_8; }
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 ** get_address_of_U3CnextUIHandlerU3Ek__BackingField_8() { return &___U3CnextUIHandlerU3Ek__BackingField_8; }
	inline void set_U3CnextUIHandlerU3Ek__BackingField_8(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * value)
	{
		___U3CnextUIHandlerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnextUIHandlerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Widget_9() { return static_cast<int32_t>(offsetof(DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667, ___m_Widget_9)); }
	inline Widget_t7CB209495D292E15C11767D22EEC646A2FAC8D7D * get_m_Widget_9() const { return ___m_Widget_9; }
	inline Widget_t7CB209495D292E15C11767D22EEC646A2FAC8D7D ** get_address_of_m_Widget_9() { return &___m_Widget_9; }
	inline void set_m_Widget_9(Widget_t7CB209495D292E15C11767D22EEC646A2FAC8D7D * value)
	{
		___m_Widget_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Widget_9), (void*)value);
	}
};


// UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle
struct DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63  : public DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667
{
public:
	// UnityEngine.UI.Text UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::nameLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameLabel_10;
	// UnityEngine.UI.Toggle UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::valueToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___valueToggle_11;
	// UnityEngine.UI.Image UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::checkmarkImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___checkmarkImage_12;
	// System.Func`2<System.Int32,System.Boolean> UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::getter
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___getter_13;
	// System.Action`2<System.Int32,System.Boolean> UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::setter
	Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * ___setter_14;
	// System.Int32 UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle::index
	int32_t ___index_15;

public:
	inline static int32_t get_offset_of_nameLabel_10() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___nameLabel_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameLabel_10() const { return ___nameLabel_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameLabel_10() { return &___nameLabel_10; }
	inline void set_nameLabel_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameLabel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameLabel_10), (void*)value);
	}

	inline static int32_t get_offset_of_valueToggle_11() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___valueToggle_11)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_valueToggle_11() const { return ___valueToggle_11; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_valueToggle_11() { return &___valueToggle_11; }
	inline void set_valueToggle_11(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___valueToggle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueToggle_11), (void*)value);
	}

	inline static int32_t get_offset_of_checkmarkImage_12() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___checkmarkImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_checkmarkImage_12() const { return ___checkmarkImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_checkmarkImage_12() { return &___checkmarkImage_12; }
	inline void set_checkmarkImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___checkmarkImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkmarkImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_getter_13() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___getter_13)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_getter_13() const { return ___getter_13; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_getter_13() { return &___getter_13; }
	inline void set_getter_13(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___getter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_13), (void*)value);
	}

	inline static int32_t get_offset_of_setter_14() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___setter_14)); }
	inline Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * get_setter_14() const { return ___setter_14; }
	inline Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 ** get_address_of_setter_14() { return &___setter_14; }
	inline void set_setter_14(Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * value)
	{
		___setter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_14), (void*)value);
	}

	inline static int32_t get_offset_of_index_15() { return static_cast<int32_t>(offsetof(DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63, ___index_15)); }
	inline int32_t get_index_15() const { return ___index_15; }
	inline int32_t* get_address_of_index_15() { return &___index_15; }
	inline void set_index_15(int32_t value)
	{
		___index_15 = value;
	}
};


// UnityEngine.Rendering.UI.DebugUIHandlerValue
struct DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0  : public DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667
{
public:
	// UnityEngine.UI.Text UnityEngine.Rendering.UI.DebugUIHandlerValue::nameLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameLabel_10;
	// UnityEngine.UI.Text UnityEngine.Rendering.UI.DebugUIHandlerValue::valueLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___valueLabel_11;
	// UnityEngine.Rendering.DebugUI/Value UnityEngine.Rendering.UI.DebugUIHandlerValue::m_Field
	Value_t5CB80BD1516B9BE487B0C681A12340E8077B14E2 * ___m_Field_12;
	// System.Single UnityEngine.Rendering.UI.DebugUIHandlerValue::m_Timer
	float ___m_Timer_13;

public:
	inline static int32_t get_offset_of_nameLabel_10() { return static_cast<int32_t>(offsetof(DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0, ___nameLabel_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameLabel_10() const { return ___nameLabel_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameLabel_10() { return &___nameLabel_10; }
	inline void set_nameLabel_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameLabel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameLabel_10), (void*)value);
	}

	inline static int32_t get_offset_of_valueLabel_11() { return static_cast<int32_t>(offsetof(DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0, ___valueLabel_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_valueLabel_11() const { return ___valueLabel_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_valueLabel_11() { return &___valueLabel_11; }
	inline void set_valueLabel_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___valueLabel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueLabel_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Field_12() { return static_cast<int32_t>(offsetof(DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0, ___m_Field_12)); }
	inline Value_t5CB80BD1516B9BE487B0C681A12340E8077B14E2 * get_m_Field_12() const { return ___m_Field_12; }
	inline Value_t5CB80BD1516B9BE487B0C681A12340E8077B14E2 ** get_address_of_m_Field_12() { return &___m_Field_12; }
	inline void set_m_Field_12(Value_t5CB80BD1516B9BE487B0C681A12340E8077B14E2 * value)
	{
		___m_Field_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Field_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timer_13() { return static_cast<int32_t>(offsetof(DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0, ___m_Timer_13)); }
	inline float get_m_Timer_13() const { return ___m_Timer_13; }
	inline float* get_address_of_m_Timer_13() { return &___m_Timer_13; }
	inline void set_m_Timer_13(float value)
	{
		___m_Timer_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Data.DataView[]
struct DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * m_Items[1];

public:
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.DataViewListener[]
struct DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * m_Items[1];

public:
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.Schema.DatatypeImplementation[]
struct DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * m_Items[1];

public:
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  m_Items[1];

public:
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  m_Items[1];

public:
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		m_Items[index] = value;
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
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
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.DebugActionDesc[]
struct DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A * m_Items[1];

public:
	inline DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugActionDesc_t118AA8E3B3F3901CF543CBD9CD4CB2DA793C0B5A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.DebugActionState[]
struct DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 * m_Items[1];

public:
	inline DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugActionState_t647473023098F758272E6656AE45FF04F9883B73 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Interpreter.DebugInfo[]
struct DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * m_Items[1];

public:
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle[]
struct DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 * m_Items[1];

public:
	inline DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugUIHandlerIndirectToggle_t9BD635BBE28E35326B7A365BBEE2E4D0F1586D63 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.UI.DebugUIHandlerPanel[]
struct DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 * m_Items[1];

public:
	inline DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugUIHandlerPanel_t0CACBC9CC69406CF1679E7D770F1A29BA1696EE0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.UI.DebugUIHandlerValue[]
struct DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 * m_Items[1];

public:
	inline DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugUIHandlerValue_t3BA1BAA94189180C50524FA9CDC9C44676D045D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.UI.DebugUIHandlerWidget[]
struct DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * m_Items[1];

public:
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugUIHandlerWidget_t4DAAA02A159BC2E947E4FFBD276B7FB74BB1A667 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.UI.DebugUIPrefabBundle[]
struct DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D * m_Items[1];

public:
	inline DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugUIPrefabBundle_tD29A969BCFAD75E822C5FE5709EA24966E0D660D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  m_Items[1];

public:
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		m_Items[index] = value;
	}
};
// System.ComponentModel.DefaultValueAttribute[]
struct DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 * m_Items[1];

public:
	inline DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DefaultValueAttribute_tE77EAC79E16838DAE97DB0981C95B0E320DD8EC6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.Universal.Internal.DeferredTiler[]
struct DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  m_Items[1];

public:
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  value)
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
// Microsoft.MixedReality.Toolkit.UX.DialogButtonContext[]
struct DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7  m_Items[1];

public:
	inline DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLabelU3Ek__BackingField_1), (void*)NULL);
	}
	inline DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DialogButtonContext_t59231A0A9A89DCDE93178E8F6D72EFCD3C5171D7  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLabelU3Ek__BackingField_1), (void*)NULL);
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  m_Items[1];

public:
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * m_Items[1];

public:
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E * m_Items[1];

public:
	inline DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DisallowMultipleComponent_tDB3D3DBC9AC523A0BD11DA0B7D88F960FDB89E3E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * m_Items[1];

public:
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m8A2D66D6F27B61C8F26650687B9FF74EC981AB8A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m2715B11E6635CADBED696FD1960C1E53C863A658_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m5D5E2AEF6315D36B6A00635C6F1A0D3845FF5428_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m47281D0A40AED89E6205D41741B118BC31D5C7FD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue);
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
il2cpp_hresult_t IVector_1_GetAt_m5C8841B2AB571F44FD282E8F3020488A5BF8501E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m8E48C3F60C392B6497C7BB3890CA2DF7BF91C598_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m30A0508FC6C3AA5C70811456C6BD3BEB7FEEC743_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m3CD56229D7E2E7201860B378918E56FF72F21F29_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mA653B838FFE729F90227B3BBB13DF1BECDD02A29_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m6808595E023D8F8C47206BEBC122C50DFC29074B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m70933D153838CBD542CAB5C148871C467F703CCA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m2F093B92EDBA57D69534DB3612C89B6B78DC78A8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mA5D0C5BD3EA169C60A822648F506200772F6163F_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m4AF7AB446B0E4A20612673DF85CCD0B853CBA026_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m2F9D8827AFABF3314AC649385C92E6C8BC40050A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m5DC15ED918012946CB9FBEA6A5C5C30C8C7D69B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items0);
il2cpp_hresult_t IIterable_1_First_mA413ED72A121882E2845BC36E3400D9387C3A016_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t4CB2F2B842647632E40065034FA102B1FFA39A95** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m205FD1337FA6BE98E9A05FC308E16BD62271593A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mA2CEDA812EDC8200D7D40FCEB09E5400BA985A6D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m285F9B50D710FA50D466290E7983ED5CD7ACB401_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mDFD36BB8A480AE106C43957AC58D67A8CD70AB03_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue);



// COM Callable Wrapper for System.Data.DataView[]
struct DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IVectorView_1_tA88887470E0CCCD43F8D64B6B683CE91E6820CC2, IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tA88887470E0CCCD43F8D64B6B683CE91E6820CC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tA88887470E0CCCD43F8D64B6B683CE91E6820CC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(10);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[6] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[7] = IVectorView_1_tA88887470E0CCCD43F8D64B6B683CE91E6820CC2::IID;
		interfaceIds[8] = IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID;
		interfaceIds[9] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 10;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB(IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m8A2D66D6F27B61C8F26650687B9FF74EC981AB8A(uint32_t ___index0, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m8A2D66D6F27B61C8F26650687B9FF74EC981AB8A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2715B11E6635CADBED696FD1960C1E53C863A658(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m2715B11E6635CADBED696FD1960C1E53C863A658_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5D5E2AEF6315D36B6A00635C6F1A0D3845FF5428(IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5D5E2AEF6315D36B6A00635C6F1A0D3845FF5428_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m47281D0A40AED89E6205D41741B118BC31D5C7FD(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m47281D0A40AED89E6205D41741B118BC31D5C7FD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DataViewU5BU5D_tF33617AA4D0F66F84106486F90B83F672D9D0DF6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.DataViewListener[]
struct DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DataViewListenerU5BU5D_t6647C410E1374F279562881061C3F2577DD524D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Schema.DatatypeImplementation[]
struct DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DatatypeImplementationU5BU5D_t1ECE71BA72FBF60D10F2706390619E7E51202B2D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.DateTime[]
struct DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper>, IVector_1_tA3657D05F8011DD7F0C252A905B15C9F09A35AA9, IIterable_1_tE561E678308D433C6385F3D0D210096F59B79FED, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t76CDC078663BA9D9E851D9C6078F01C33446E6A0, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_tA3657D05F8011DD7F0C252A905B15C9F09A35AA9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tA3657D05F8011DD7F0C252A905B15C9F09A35AA9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tE561E678308D433C6385F3D0D210096F59B79FED::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tE561E678308D433C6385F3D0D210096F59B79FED*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t76CDC078663BA9D9E851D9C6078F01C33446E6A0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t76CDC078663BA9D9E851D9C6078F01C33446E6A0*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_tA3657D05F8011DD7F0C252A905B15C9F09A35AA9::IID;
		interfaceIds[1] = IIterable_1_tE561E678308D433C6385F3D0D210096F59B79FED::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t76CDC078663BA9D9E851D9C6078F01C33446E6A0::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m5C8841B2AB571F44FD282E8F3020488A5BF8501E(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m5C8841B2AB571F44FD282E8F3020488A5BF8501E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m8E48C3F60C392B6497C7BB3890CA2DF7BF91C598(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m8E48C3F60C392B6497C7BB3890CA2DF7BF91C598_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m30A0508FC6C3AA5C70811456C6BD3BEB7FEEC743(IVectorView_1_tF1D6810EB02438F6F1CA5B157C00BC3F60B7EDE1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m30A0508FC6C3AA5C70811456C6BD3BEB7FEEC743_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3CD56229D7E2E7201860B378918E56FF72F21F29(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m3CD56229D7E2E7201860B378918E56FF72F21F29_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mA653B838FFE729F90227B3BBB13DF1BECDD02A29(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mA653B838FFE729F90227B3BBB13DF1BECDD02A29_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6808595E023D8F8C47206BEBC122C50DFC29074B(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m6808595E023D8F8C47206BEBC122C50DFC29074B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m70933D153838CBD542CAB5C148871C467F703CCA(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m70933D153838CBD542CAB5C148871C467F703CCA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2F093B92EDBA57D69534DB3612C89B6B78DC78A8(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m2F093B92EDBA57D69534DB3612C89B6B78DC78A8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mA5D0C5BD3EA169C60A822648F506200772F6163F() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mA5D0C5BD3EA169C60A822648F506200772F6163F_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m4AF7AB446B0E4A20612673DF85CCD0B853CBA026() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m4AF7AB446B0E4A20612673DF85CCD0B853CBA026_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2F9D8827AFABF3314AC649385C92E6C8BC40050A(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m2F9D8827AFABF3314AC649385C92E6C8BC40050A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5DC15ED918012946CB9FBEA6A5C5C30C8C7D69B8(uint32_t ___items0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m5DC15ED918012946CB9FBEA6A5C5C30C8C7D69B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA413ED72A121882E2845BC36E3400D9387C3A016(IIterator_1_t4CB2F2B842647632E40065034FA102B1FFA39A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA413ED72A121882E2845BC36E3400D9387C3A016_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m205FD1337FA6BE98E9A05FC308E16BD62271593A(uint32_t ___index0, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m205FD1337FA6BE98E9A05FC308E16BD62271593A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mA2CEDA812EDC8200D7D40FCEB09E5400BA985A6D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mA2CEDA812EDC8200D7D40FCEB09E5400BA985A6D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m285F9B50D710FA50D466290E7983ED5CD7ACB401(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C  ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m285F9B50D710FA50D466290E7983ED5CD7ACB401_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mDFD36BB8A480AE106C43957AC58D67A8CD70AB03(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mDFD36BB8A480AE106C43957AC58D67A8CD70AB03_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mB5D52AE55E16630B075126FFD3088872DC3D7729(uint32_t* comReturnValueArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* returnValue;
		try
		{
			returnValue = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
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
		uint32_t _returnValue_marshaledArraySize = 0;
		DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C >(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				((_returnValue_marshaled)[i]).set_UniversalTime_0(((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)).get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);
			}
		}
		else
		{
			_returnValue_marshaledArraySize = 0;
			_returnValue_marshaled = NULL;
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
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
			returnValue = 1038;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Byte", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Int16", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "UInt16", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Int32", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "UInt32", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Int64", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "UInt64", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Single", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Double", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "String", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* managedArray = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("DateTimeArray", "DateTime", "Guid", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*>(GetManagedObjectInline());
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				((*___value0)[i]).set_UniversalTime_0(((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)).get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("DateTimeArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.DebugActionDesc[]
struct DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugActionDescU5BU5D_t09396AE16D3CD32F8C5959ED7E7F23D3B1F34489_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.DebugActionState[]
struct DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugActionStateU5BU5D_tCAD201CCCBD54E28636B1F3581D08872DD209E81_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.DebugInfo[]
struct DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugInfoU5BU5D_tBEF3683AA37B65231F98284421C981AE65305B1E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle[]
struct DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugUIHandlerIndirectToggleU5BU5D_tC5EA67A3B409C71D27DD835C2EDC28500E3CC50D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.UI.DebugUIHandlerPanel[]
struct DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugUIHandlerPanelU5BU5D_t348E57CFCE607AF006ADD08B18E8E81A2564EAD9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.UI.DebugUIHandlerValue[]
struct DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugUIHandlerValueU5BU5D_tDE0EDD8535D917D624385E424EADE2098199C883_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.UI.DebugUIHandlerWidget[]
struct DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugUIHandlerWidgetU5BU5D_tAC5DDF1EEE29DDA70F7C88237AE8F8BF5AC0C0DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.UI.DebugUIPrefabBundle[]
struct DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DebugUIPrefabBundleU5BU5D_t88EFB58E7A6E5A9BBBA74E3F3D94F4B2A7125145_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.DefaultValueAttribute[]
struct DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DefaultValueAttributeU5BU5D_t8EC081BF1580E8455C8C3AD1D793E1BCC42E9A2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.Universal.Internal.DeferredTiler[]
struct DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DeferredTilerU5BU5D_tAAA48C99450B6688DFF73BCF2DAC71D1E1326F4C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UX.DialogButtonContext[]
struct DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DialogButtonContextU5BU5D_t16C25BEEE80AB005BC6045F4D90607329AD52011_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DisallowMultipleComponentU5BU5D_t3729B6FD5B0047F32D8A81B9EF750AD70654053E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6_ComCallableWrapper(obj));
}
