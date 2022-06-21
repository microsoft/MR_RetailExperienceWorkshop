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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Data.Listeners`1/Action`4<System.Data.DataViewListener,System.Data.DataViewListener,System.ComponentModel.ListChangedEventArgs,System.Boolean,System.Boolean>
struct Action_4_t7C0CDA9ECC22BC1D74B65D061DDC2951769010FA;
// System.Comparison`1<System.Data.DataRow>
struct Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F;
// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn>
struct Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79;
// System.Data.Listeners`1/Func`2<System.Data.DataViewListener,System.Data.DataViewListener,System.Boolean>
struct Func_2_t389B5A9F53CC3CA21378C7BE4542E859EB6C1EB0;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>>
struct IEqualityComparer_1_t83BBB8C9BE9F60D1E0B123BCE005D819FCD31BE7;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D;
// System.Data.Listeners`1<System.Data.DataViewListener>
struct Listeners_1_t7C998D26DFD40B26063C9203609F507B8C2FF5E9;
// System.Data.RBTree`1<System.Data.DataRow>
struct RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49;
// System.Data.RBTree`1<System.Int32>
struct RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11;
// System.Data.RBTree`1<System.Object>
struct RBTree_1_tDF6F84A8D1EE6E176828EB4C2FCB56C871C78AD2;
// System.Data.RBTree`1/TreePage<System.Data.DataRow>[]
struct TreePageU5BU5D_t23A902C89B1F3C4DEBE1BAA3EE0C4A335F62FEBE;
// System.Data.RBTree`1/TreePage<System.Int32>[]
struct TreePageU5BU5D_t119A89645D06C5D41CA7694ABC97CED591EBB0E4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Data.Constraint[]
struct ConstraintU5BU5D_tF3F338E19F54FBB6DF67F46E61DDC496DD2CF65F;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C;
// System.Data.DataRow[]
struct DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD;
// System.Data.DataTable[]
struct DataTableU5BU5D_t83A87BCE9C5AC8A297BFC1274CB5A693E2BAFD34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Data.AutoIncrementValue
struct AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Data.Constraint
struct Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B;
// System.Data.ConstraintCollection
struct ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Data.DataColumn
struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4;
// System.Data.DataColumnCollection
struct DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820;
// System.Data.DataError
struct DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0;
// System.Data.DataExpression
struct DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9;
// System.Data.DataRelation
struct DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9;
// System.Data.DataRelationCollection
struct DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714;
// System.Data.DataRow
struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B;
// System.Data.DataRowCollection
struct DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310;
// System.Data.DataRowCreatedEventHandler
struct DataRowCreatedEventHandler_tE60E7D5E5556337BEB5818E87E217E12F9987102;
// System.Data.DataSet
struct DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B;
// System.Data.DataSetClearEventhandler
struct DataSetClearEventhandler_tBBB7A6036B60539D6C54C4BADC06DC0E14A7494E;
// System.Data.Common.DataStorage
struct DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138;
// System.Data.DataTable
struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35;
// System.Data.DataTableCollection
struct DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B;
// System.Data.DataView
struct DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF;
// System.Data.DataViewListener
struct DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E;
// System.Data.DataViewManager
struct DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Exception
struct Exception_t;
// System.Data.ExpressionNode
struct ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.Data.Index
struct Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t10E3E3F0E24DB1FC0DFEC8687C4D690F5CA57A41;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Data.PropertyCollection
struct PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F;
// System.Data.RecordManager
struct RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Data.SimpleType
struct SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Type
struct Type_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_tE6F9E57AB3C89D88DAB166F1F0A3EC2276C2F062;
// System.Data.ZeroOpNode
struct ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972;
// System.Data.DataRelationCollection/DataSetRelationCollection
struct DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3;
// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E;
// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63;
// System.Data.DataView/DataRowReferenceComparer
struct DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051;
// System.Data.Index/<>c
struct U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033;
// System.Data.Index/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t0A216700852A2F8E0454E0E7A63AF4AB7200DFAB;
// System.Data.Index/IndexTree
struct IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D;
// System.Data.Common.ObjectStorage/TempAssemblyComparer
struct TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129;
// System.Data.XDRSchema/NameType
struct NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B;
// System.Data.XSDSchema/NameType
struct NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE;
// System.Data.XmlToDatasetMap/TableSchemaInfo
struct TableSchemaInfo_t30BCB6D26A3BB9834CB6F80FAE03083BC0D5F830;
// System.Data.XmlToDatasetMap/XmlNodeIdHashtable
struct XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E;
// System.Data.XmlToDatasetMap/XmlNodeIdentety
struct XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454;

IL2CPP_EXTERN_C RuntimeClass* ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRowTree_CompareNode_mBCF6F51999568BCD87DB069D322B3BEF94C81820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRowTree_CompareSateliteTreeNode_mB74E951EDADFA611BFF2F10338BB5B41470139CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSetRelationCollection_AddCore_m102379FA1D8E8B2BA85021375B54C567F89B3BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSetRelationCollection_RemoveCore_m43C1215777512217C0DE3B5B00FB2012964AD910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSetRelationCollection__ctor_mF79F3B7AC2F58429F6784BABEC0D3F185582613B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSetRelationCollection_get_Item_m6AB7BD6754C38767481914AAF967E7725E12F764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSetRelationCollection_get_Item_m801C9F079AAF448785ACBAB01B3B6985D5ADBA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_AddCore_m3257E9A45D276D8201849D6FE2D478660ED4C876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_EnsureDataSet_mCEA71BCCC50AF74B2D08774F6B93A0928C81F042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_RemoveCache_m434228DCEBDE2D480891504B10229B31F3B4D5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_RemoveCore_m0A6F4AFBF5E60ADB157873890F661C6031581CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection__ctor_m7A2DFA537CE65FAC4415F3AFE408D710E0215C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_get_Item_m2B17AF5FBD6241147800D8B84285C8595BF8C3DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataTableRelationCollection_get_Item_m7AB8565259BA33E29870CE8CB735BDB4187FBFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RBTree_1__ctor_m72A0B117F9F8DDF8D7C0241D5485E5E004823AA1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C;
struct DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4, ____items_1)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__items_1() const { return ____items_1; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4_StaticFields, ____emptyArray_5)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Data.Constraint
struct Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B  : public RuntimeObject
{
public:
	// System.String System.Data.Constraint::_schemaName
	String_t* ____schemaName_0;
	// System.Boolean System.Data.Constraint::_inCollection
	bool ____inCollection_1;
	// System.Data.DataSet System.Data.Constraint::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_2;
	// System.String System.Data.Constraint::_name
	String_t* ____name_3;
	// System.Data.PropertyCollection System.Data.Constraint::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_4;

public:
	inline static int32_t get_offset_of__schemaName_0() { return static_cast<int32_t>(offsetof(Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B, ____schemaName_0)); }
	inline String_t* get__schemaName_0() const { return ____schemaName_0; }
	inline String_t** get_address_of__schemaName_0() { return &____schemaName_0; }
	inline void set__schemaName_0(String_t* value)
	{
		____schemaName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemaName_0), (void*)value);
	}

	inline static int32_t get_offset_of__inCollection_1() { return static_cast<int32_t>(offsetof(Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B, ____inCollection_1)); }
	inline bool get__inCollection_1() const { return ____inCollection_1; }
	inline bool* get_address_of__inCollection_1() { return &____inCollection_1; }
	inline void set__inCollection_1(bool value)
	{
		____inCollection_1 = value;
	}

	inline static int32_t get_offset_of__dataSet_2() { return static_cast<int32_t>(offsetof(Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B, ____dataSet_2)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_2() const { return ____dataSet_2; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_2() { return &____dataSet_2; }
	inline void set__dataSet_2(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_2), (void*)value);
	}

	inline static int32_t get_offset_of__name_3() { return static_cast<int32_t>(offsetof(Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B, ____name_3)); }
	inline String_t* get__name_3() const { return ____name_3; }
	inline String_t** get_address_of__name_3() { return &____name_3; }
	inline void set__name_3(String_t* value)
	{
		____name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_3), (void*)value);
	}

	inline static int32_t get_offset_of__extendedProperties_4() { return static_cast<int32_t>(offsetof(Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B, ____extendedProperties_4)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_4() const { return ____extendedProperties_4; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_4() { return &____extendedProperties_4; }
	inline void set__extendedProperties_4(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_4), (void*)value);
	}
};


// System.DBNull
struct DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28  : public RuntimeObject
{
public:

public:
};

struct DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_StaticFields, ___Value_0)); }
	inline DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
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


// System.Data.ExpressionNode
struct ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.ExpressionNode::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_0;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E, ____table_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_0() const { return ____table_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_0), (void*)value);
	}
};


// System.Data.InternalDataCollectionBase
struct InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9  : public RuntimeObject
{
public:

public:
};

struct InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9_StaticFields
{
public:
	// System.ComponentModel.CollectionChangeEventArgs System.Data.InternalDataCollectionBase::s_refreshEventArgs
	CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * ___s_refreshEventArgs_0;

public:
	inline static int32_t get_offset_of_s_refreshEventArgs_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9_StaticFields, ___s_refreshEventArgs_0)); }
	inline CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * get_s_refreshEventArgs_0() const { return ___s_refreshEventArgs_0; }
	inline CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B ** get_address_of_s_refreshEventArgs_0() { return &___s_refreshEventArgs_0; }
	inline void set_s_refreshEventArgs_0(CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * value)
	{
		___s_refreshEventArgs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_refreshEventArgs_0), (void*)value);
	}
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


// System.Data.DataView/DataRowReferenceComparer
struct DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051  : public RuntimeObject
{
public:

public:
};

struct DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_StaticFields
{
public:
	// System.Data.DataView/DataRowReferenceComparer System.Data.DataView/DataRowReferenceComparer::s_default
	DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * ___s_default_0;

public:
	inline static int32_t get_offset_of_s_default_0() { return static_cast<int32_t>(offsetof(DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_StaticFields, ___s_default_0)); }
	inline DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * get_s_default_0() const { return ___s_default_0; }
	inline DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 ** get_address_of_s_default_0() { return &___s_default_0; }
	inline void set_s_default_0(DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * value)
	{
		___s_default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_default_0), (void*)value);
	}
};


// System.Data.Index/<>c
struct U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_StaticFields
{
public:
	// System.Data.Index/<>c System.Data.Index/<>c::<>9
	U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * ___U3CU3E9_0;
	// System.Data.Listeners`1/Func`2<System.Data.DataViewListener,System.Data.DataViewListener,System.Boolean> System.Data.Index/<>c::<>9__22_0
	Func_2_t389B5A9F53CC3CA21378C7BE4542E859EB6C1EB0 * ___U3CU3E9__22_0_1;
	// System.Data.Listeners`1/Action`4<System.Data.DataViewListener,System.Data.DataViewListener,System.ComponentModel.ListChangedEventArgs,System.Boolean,System.Boolean> System.Data.Index/<>c::<>9__85_0
	Action_4_t7C0CDA9ECC22BC1D74B65D061DDC2951769010FA * ___U3CU3E9__85_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_t389B5A9F53CC3CA21378C7BE4542E859EB6C1EB0 * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_t389B5A9F53CC3CA21378C7BE4542E859EB6C1EB0 ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_t389B5A9F53CC3CA21378C7BE4542E859EB6C1EB0 * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_StaticFields, ___U3CU3E9__85_0_2)); }
	inline Action_4_t7C0CDA9ECC22BC1D74B65D061DDC2951769010FA * get_U3CU3E9__85_0_2() const { return ___U3CU3E9__85_0_2; }
	inline Action_4_t7C0CDA9ECC22BC1D74B65D061DDC2951769010FA ** get_address_of_U3CU3E9__85_0_2() { return &___U3CU3E9__85_0_2; }
	inline void set_U3CU3E9__85_0_2(Action_4_t7C0CDA9ECC22BC1D74B65D061DDC2951769010FA * value)
	{
		___U3CU3E9__85_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_0_2), (void*)value);
	}
};


// System.Data.Common.ObjectStorage/TempAssemblyComparer
struct TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129  : public RuntimeObject
{
public:

public:
};

struct TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>> System.Data.Common.ObjectStorage/TempAssemblyComparer::s_default
	RuntimeObject* ___s_default_0;

public:
	inline static int32_t get_offset_of_s_default_0() { return static_cast<int32_t>(offsetof(TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_StaticFields, ___s_default_0)); }
	inline RuntimeObject* get_s_default_0() const { return ___s_default_0; }
	inline RuntimeObject** get_address_of_s_default_0() { return &___s_default_0; }
	inline void set_s_default_0(RuntimeObject* value)
	{
		___s_default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_default_0), (void*)value);
	}
};


// System.Data.XDRSchema/NameType
struct NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B  : public RuntimeObject
{
public:
	// System.String System.Data.XDRSchema/NameType::name
	String_t* ___name_0;
	// System.Type System.Data.XDRSchema/NameType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};


// System.Data.XSDSchema/NameType
struct NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE  : public RuntimeObject
{
public:
	// System.String System.Data.XSDSchema/NameType::name
	String_t* ___name_0;
	// System.Type System.Data.XSDSchema/NameType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};


// System.Data.XmlToDatasetMap/TableSchemaInfo
struct TableSchemaInfo_t30BCB6D26A3BB9834CB6F80FAE03083BC0D5F830  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.XmlToDatasetMap/TableSchemaInfo::TableSchema
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___TableSchema_0;
	// System.Data.XmlToDatasetMap/XmlNodeIdHashtable System.Data.XmlToDatasetMap/TableSchemaInfo::ColumnsSchemaMap
	XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * ___ColumnsSchemaMap_1;

public:
	inline static int32_t get_offset_of_TableSchema_0() { return static_cast<int32_t>(offsetof(TableSchemaInfo_t30BCB6D26A3BB9834CB6F80FAE03083BC0D5F830, ___TableSchema_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get_TableSchema_0() const { return ___TableSchema_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of_TableSchema_0() { return &___TableSchema_0; }
	inline void set_TableSchema_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		___TableSchema_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TableSchema_0), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnsSchemaMap_1() { return static_cast<int32_t>(offsetof(TableSchemaInfo_t30BCB6D26A3BB9834CB6F80FAE03083BC0D5F830, ___ColumnsSchemaMap_1)); }
	inline XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * get_ColumnsSchemaMap_1() const { return ___ColumnsSchemaMap_1; }
	inline XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E ** get_address_of_ColumnsSchemaMap_1() { return &___ColumnsSchemaMap_1; }
	inline void set_ColumnsSchemaMap_1(XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * value)
	{
		___ColumnsSchemaMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnsSchemaMap_1), (void*)value);
	}
};


// System.Data.XmlToDatasetMap/XmlNodeIdentety
struct XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454  : public RuntimeObject
{
public:
	// System.String System.Data.XmlToDatasetMap/XmlNodeIdentety::LocalName
	String_t* ___LocalName_0;
	// System.String System.Data.XmlToDatasetMap/XmlNodeIdentety::NamespaceURI
	String_t* ___NamespaceURI_1;

public:
	inline static int32_t get_offset_of_LocalName_0() { return static_cast<int32_t>(offsetof(XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454, ___LocalName_0)); }
	inline String_t* get_LocalName_0() const { return ___LocalName_0; }
	inline String_t** get_address_of_LocalName_0() { return &___LocalName_0; }
	inline void set_LocalName_0(String_t* value)
	{
		___LocalName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalName_0), (void*)value);
	}

	inline static int32_t get_offset_of_NamespaceURI_1() { return static_cast<int32_t>(offsetof(XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454, ___NamespaceURI_1)); }
	inline String_t* get_NamespaceURI_1() const { return ___NamespaceURI_1; }
	inline String_t** get_address_of_NamespaceURI_1() { return &___NamespaceURI_1; }
	inline void set_NamespaceURI_1(String_t* value)
	{
		___NamespaceURI_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NamespaceURI_1), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>
struct KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3, ___value_1)); }
	inline XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * get_value_1() const { return ___value_1; }
	inline XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * value)
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


// System.Data.ConstraintCollection
struct ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_1;
	// System.Collections.ArrayList System.Data.ConstraintCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_2;
	// System.Int32 System.Data.ConstraintCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::_onCollectionChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ____onCollectionChanged_4;
	// System.Data.Constraint[] System.Data.ConstraintCollection::_delayLoadingConstraints
	ConstraintU5BU5D_tF3F338E19F54FBB6DF67F46E61DDC496DD2CF65F* ____delayLoadingConstraints_5;
	// System.Boolean System.Data.ConstraintCollection::_fLoadForeignKeyConstraintsOnly
	bool ____fLoadForeignKeyConstraintsOnly_6;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____table_1)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_1() const { return ____table_1; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____list_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_2() const { return ____list_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__defaultNameIndex_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____defaultNameIndex_3)); }
	inline int32_t get__defaultNameIndex_3() const { return ____defaultNameIndex_3; }
	inline int32_t* get_address_of__defaultNameIndex_3() { return &____defaultNameIndex_3; }
	inline void set__defaultNameIndex_3(int32_t value)
	{
		____defaultNameIndex_3 = value;
	}

	inline static int32_t get_offset_of__onCollectionChanged_4() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____onCollectionChanged_4)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get__onCollectionChanged_4() const { return ____onCollectionChanged_4; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of__onCollectionChanged_4() { return &____onCollectionChanged_4; }
	inline void set__onCollectionChanged_4(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		____onCollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCollectionChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of__delayLoadingConstraints_5() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____delayLoadingConstraints_5)); }
	inline ConstraintU5BU5D_tF3F338E19F54FBB6DF67F46E61DDC496DD2CF65F* get__delayLoadingConstraints_5() const { return ____delayLoadingConstraints_5; }
	inline ConstraintU5BU5D_tF3F338E19F54FBB6DF67F46E61DDC496DD2CF65F** get_address_of__delayLoadingConstraints_5() { return &____delayLoadingConstraints_5; }
	inline void set__delayLoadingConstraints_5(ConstraintU5BU5D_tF3F338E19F54FBB6DF67F46E61DDC496DD2CF65F* value)
	{
		____delayLoadingConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayLoadingConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of__fLoadForeignKeyConstraintsOnly_6() { return static_cast<int32_t>(offsetof(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1, ____fLoadForeignKeyConstraintsOnly_6)); }
	inline bool get__fLoadForeignKeyConstraintsOnly_6() const { return ____fLoadForeignKeyConstraintsOnly_6; }
	inline bool* get_address_of__fLoadForeignKeyConstraintsOnly_6() { return &____fLoadForeignKeyConstraintsOnly_6; }
	inline void set__fLoadForeignKeyConstraintsOnly_6(bool value)
	{
		____fLoadForeignKeyConstraintsOnly_6 = value;
	}
};


// System.Data.DataColumnCollection
struct DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataTable System.Data.DataColumnCollection::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_1;
	// System.Collections.ArrayList System.Data.DataColumnCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_2;
	// System.Int32 System.Data.DataColumnCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_3;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_delayedAddRangeColumns
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____delayedAddRangeColumns_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn> System.Data.DataColumnCollection::_columnFromName
	Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * ____columnFromName_5;
	// System.Boolean System.Data.DataColumnCollection::_fInClear
	bool ____fInClear_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_columnsImplementingIChangeTracking
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____columnsImplementingIChangeTracking_7;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIChangeTracking
	int32_t ____nColumnsImplementingIChangeTracking_8;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIRevertibleChangeTracking
	int32_t ____nColumnsImplementingIRevertibleChangeTracking_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanging
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___CollectionChanging_11;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::ColumnPropertyChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___ColumnPropertyChanged_12;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____table_1)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_1() const { return ____table_1; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____list_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_2() const { return ____list_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__defaultNameIndex_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____defaultNameIndex_3)); }
	inline int32_t get__defaultNameIndex_3() const { return ____defaultNameIndex_3; }
	inline int32_t* get_address_of__defaultNameIndex_3() { return &____defaultNameIndex_3; }
	inline void set__defaultNameIndex_3(int32_t value)
	{
		____defaultNameIndex_3 = value;
	}

	inline static int32_t get_offset_of__delayedAddRangeColumns_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____delayedAddRangeColumns_4)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__delayedAddRangeColumns_4() const { return ____delayedAddRangeColumns_4; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__delayedAddRangeColumns_4() { return &____delayedAddRangeColumns_4; }
	inline void set__delayedAddRangeColumns_4(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____delayedAddRangeColumns_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedAddRangeColumns_4), (void*)value);
	}

	inline static int32_t get_offset_of__columnFromName_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____columnFromName_5)); }
	inline Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * get__columnFromName_5() const { return ____columnFromName_5; }
	inline Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 ** get_address_of__columnFromName_5() { return &____columnFromName_5; }
	inline void set__columnFromName_5(Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * value)
	{
		____columnFromName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnFromName_5), (void*)value);
	}

	inline static int32_t get_offset_of__fInClear_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____fInClear_6)); }
	inline bool get__fInClear_6() const { return ____fInClear_6; }
	inline bool* get_address_of__fInClear_6() { return &____fInClear_6; }
	inline void set__fInClear_6(bool value)
	{
		____fInClear_6 = value;
	}

	inline static int32_t get_offset_of__columnsImplementingIChangeTracking_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____columnsImplementingIChangeTracking_7)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__columnsImplementingIChangeTracking_7() const { return ____columnsImplementingIChangeTracking_7; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__columnsImplementingIChangeTracking_7() { return &____columnsImplementingIChangeTracking_7; }
	inline void set__columnsImplementingIChangeTracking_7(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____columnsImplementingIChangeTracking_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnsImplementingIChangeTracking_7), (void*)value);
	}

	inline static int32_t get_offset_of__nColumnsImplementingIChangeTracking_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____nColumnsImplementingIChangeTracking_8)); }
	inline int32_t get__nColumnsImplementingIChangeTracking_8() const { return ____nColumnsImplementingIChangeTracking_8; }
	inline int32_t* get_address_of__nColumnsImplementingIChangeTracking_8() { return &____nColumnsImplementingIChangeTracking_8; }
	inline void set__nColumnsImplementingIChangeTracking_8(int32_t value)
	{
		____nColumnsImplementingIChangeTracking_8 = value;
	}

	inline static int32_t get_offset_of__nColumnsImplementingIRevertibleChangeTracking_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____nColumnsImplementingIRevertibleChangeTracking_9)); }
	inline int32_t get__nColumnsImplementingIRevertibleChangeTracking_9() const { return ____nColumnsImplementingIRevertibleChangeTracking_9; }
	inline int32_t* get_address_of__nColumnsImplementingIRevertibleChangeTracking_9() { return &____nColumnsImplementingIRevertibleChangeTracking_9; }
	inline void set__nColumnsImplementingIRevertibleChangeTracking_9(int32_t value)
	{
		____nColumnsImplementingIRevertibleChangeTracking_9 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___CollectionChanged_10)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_CollectionChanged_10() const { return ___CollectionChanged_10; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_CollectionChanged_10() { return &___CollectionChanged_10; }
	inline void set_CollectionChanged_10(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___CollectionChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_CollectionChanging_11() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___CollectionChanging_11)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_CollectionChanging_11() const { return ___CollectionChanging_11; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_CollectionChanging_11() { return &___CollectionChanging_11; }
	inline void set_CollectionChanging_11(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___CollectionChanging_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionChanging_11), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnPropertyChanged_12() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___ColumnPropertyChanged_12)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_ColumnPropertyChanged_12() const { return ___ColumnPropertyChanged_12; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_ColumnPropertyChanged_12() { return &___ColumnPropertyChanged_12; }
	inline void set_ColumnPropertyChanged_12(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___ColumnPropertyChanged_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnPropertyChanged_12), (void*)value);
	}
};


// System.Data.DataKey
struct DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 
{
public:
	// System.Data.DataColumn[] System.Data.DataKey::_columns
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____columns_0;

public:
	inline static int32_t get_offset_of__columns_0() { return static_cast<int32_t>(offsetof(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06, ____columns_0)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__columns_0() const { return ____columns_0; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__columns_0() { return &____columns_0; }
	inline void set__columns_0(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____columns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columns_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Data.DataKey
struct DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06_marshaled_pinvoke
{
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____columns_0;
};
// Native definition for COM marshalling of System.Data.DataKey
struct DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06_marshaled_com
{
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____columns_0;
};

// System.Data.DataRelationCollection
struct DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::_inTransition
	DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ____inTransition_1;
	// System.Int32 System.Data.DataRelationCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::_onCollectionChangedDelegate
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ____onCollectionChangedDelegate_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::_onCollectionChangingDelegate
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ____onCollectionChangingDelegate_4;
	// System.Int32 System.Data.DataRelationCollection::_objectID
	int32_t ____objectID_6;

public:
	inline static int32_t get_offset_of__inTransition_1() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714, ____inTransition_1)); }
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * get__inTransition_1() const { return ____inTransition_1; }
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 ** get_address_of__inTransition_1() { return &____inTransition_1; }
	inline void set__inTransition_1(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * value)
	{
		____inTransition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inTransition_1), (void*)value);
	}

	inline static int32_t get_offset_of__defaultNameIndex_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714, ____defaultNameIndex_2)); }
	inline int32_t get__defaultNameIndex_2() const { return ____defaultNameIndex_2; }
	inline int32_t* get_address_of__defaultNameIndex_2() { return &____defaultNameIndex_2; }
	inline void set__defaultNameIndex_2(int32_t value)
	{
		____defaultNameIndex_2 = value;
	}

	inline static int32_t get_offset_of__onCollectionChangedDelegate_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714, ____onCollectionChangedDelegate_3)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get__onCollectionChangedDelegate_3() const { return ____onCollectionChangedDelegate_3; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of__onCollectionChangedDelegate_3() { return &____onCollectionChangedDelegate_3; }
	inline void set__onCollectionChangedDelegate_3(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		____onCollectionChangedDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCollectionChangedDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__onCollectionChangingDelegate_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714, ____onCollectionChangingDelegate_4)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get__onCollectionChangingDelegate_4() const { return ____onCollectionChangingDelegate_4; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of__onCollectionChangingDelegate_4() { return &____onCollectionChangingDelegate_4; }
	inline void set__onCollectionChangingDelegate_4(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		____onCollectionChangingDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCollectionChangingDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_6() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714, ____objectID_6)); }
	inline int32_t get__objectID_6() const { return ____objectID_6; }
	inline int32_t* get_address_of__objectID_6() { return &____objectID_6; }
	inline void set__objectID_6(int32_t value)
	{
		____objectID_6 = value;
	}
};

struct DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714_StaticFields
{
public:
	// System.Int32 System.Data.DataRelationCollection::s_objectTypeCount
	int32_t ___s_objectTypeCount_5;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_5() { return static_cast<int32_t>(offsetof(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714_StaticFields, ___s_objectTypeCount_5)); }
	inline int32_t get_s_objectTypeCount_5() const { return ___s_objectTypeCount_5; }
	inline int32_t* get_address_of_s_objectTypeCount_5() { return &___s_objectTypeCount_5; }
	inline void set_s_objectTypeCount_5(int32_t value)
	{
		___s_objectTypeCount_5 = value;
	}
};


// System.Data.DataTableCollection
struct DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_1;
	// System.Collections.ArrayList System.Data.DataTableCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_2;
	// System.Int32 System.Data.DataTableCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_3;
	// System.Data.DataTable[] System.Data.DataTableCollection::_delayedAddRangeTables
	DataTableU5BU5D_t83A87BCE9C5AC8A297BFC1274CB5A693E2BAFD34* ____delayedAddRangeTables_4;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::_onCollectionChangedDelegate
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ____onCollectionChangedDelegate_5;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::_onCollectionChangingDelegate
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ____onCollectionChangingDelegate_6;
	// System.Int32 System.Data.DataTableCollection::_objectID
	int32_t ____objectID_8;

public:
	inline static int32_t get_offset_of__dataSet_1() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____dataSet_1)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_1() const { return ____dataSet_1; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_1() { return &____dataSet_1; }
	inline void set__dataSet_1(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____list_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_2() const { return ____list_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__defaultNameIndex_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____defaultNameIndex_3)); }
	inline int32_t get__defaultNameIndex_3() const { return ____defaultNameIndex_3; }
	inline int32_t* get_address_of__defaultNameIndex_3() { return &____defaultNameIndex_3; }
	inline void set__defaultNameIndex_3(int32_t value)
	{
		____defaultNameIndex_3 = value;
	}

	inline static int32_t get_offset_of__delayedAddRangeTables_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____delayedAddRangeTables_4)); }
	inline DataTableU5BU5D_t83A87BCE9C5AC8A297BFC1274CB5A693E2BAFD34* get__delayedAddRangeTables_4() const { return ____delayedAddRangeTables_4; }
	inline DataTableU5BU5D_t83A87BCE9C5AC8A297BFC1274CB5A693E2BAFD34** get_address_of__delayedAddRangeTables_4() { return &____delayedAddRangeTables_4; }
	inline void set__delayedAddRangeTables_4(DataTableU5BU5D_t83A87BCE9C5AC8A297BFC1274CB5A693E2BAFD34* value)
	{
		____delayedAddRangeTables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedAddRangeTables_4), (void*)value);
	}

	inline static int32_t get_offset_of__onCollectionChangedDelegate_5() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____onCollectionChangedDelegate_5)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get__onCollectionChangedDelegate_5() const { return ____onCollectionChangedDelegate_5; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of__onCollectionChangedDelegate_5() { return &____onCollectionChangedDelegate_5; }
	inline void set__onCollectionChangedDelegate_5(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		____onCollectionChangedDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCollectionChangedDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__onCollectionChangingDelegate_6() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____onCollectionChangingDelegate_6)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get__onCollectionChangingDelegate_6() const { return ____onCollectionChangingDelegate_6; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of__onCollectionChangingDelegate_6() { return &____onCollectionChangingDelegate_6; }
	inline void set__onCollectionChangingDelegate_6(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		____onCollectionChangingDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCollectionChangingDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_8() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451, ____objectID_8)); }
	inline int32_t get__objectID_8() const { return ____objectID_8; }
	inline int32_t* get_address_of__objectID_8() { return &____objectID_8; }
	inline void set__objectID_8(int32_t value)
	{
		____objectID_8 = value;
	}
};

struct DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451_StaticFields
{
public:
	// System.Int32 System.Data.DataTableCollection::s_objectTypeCount
	int32_t ___s_objectTypeCount_7;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_7() { return static_cast<int32_t>(offsetof(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451_StaticFields, ___s_objectTypeCount_7)); }
	inline int32_t get_s_objectTypeCount_7() const { return ___s_objectTypeCount_7; }
	inline int32_t* get_address_of_s_objectTypeCount_7() { return &___s_objectTypeCount_7; }
	inline void set_s_objectTypeCount_7(int32_t value)
	{
		___s_objectTypeCount_7 = value;
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


// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Xml.Serialization.XmlRootAttribute::dataType
	String_t* ___dataType_0;
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_1;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_2;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_3;

public:
	inline static int32_t get_offset_of_dataType_0() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96, ___dataType_0)); }
	inline String_t* get_dataType_0() const { return ___dataType_0; }
	inline String_t** get_address_of_dataType_0() { return &___dataType_0; }
	inline void set_dataType_0(String_t* value)
	{
		___dataType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataType_0), (void*)value);
	}

	inline static int32_t get_offset_of_elementName_1() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96, ___elementName_1)); }
	inline String_t* get_elementName_1() const { return ___elementName_1; }
	inline String_t** get_address_of_elementName_1() { return &___elementName_1; }
	inline void set_elementName_1(String_t* value)
	{
		___elementName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementName_1), (void*)value);
	}

	inline static int32_t get_offset_of_isNullable_2() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96, ___isNullable_2)); }
	inline bool get_isNullable_2() const { return ___isNullable_2; }
	inline bool* get_address_of_isNullable_2() { return &___isNullable_2; }
	inline void set_isNullable_2(bool value)
	{
		___isNullable_2 = value;
	}

	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96, ___ns_3)); }
	inline String_t* get_ns_3() const { return ___ns_3; }
	inline String_t** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(String_t* value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_3), (void*)value);
	}
};


// System.Data.ZeroOpNode
struct ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972  : public ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E
{
public:
	// System.Int32 System.Data.ZeroOpNode::_op
	int32_t ____op_1;

public:
	inline static int32_t get_offset_of__op_1() { return static_cast<int32_t>(offsetof(ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972, ____op_1)); }
	inline int32_t get__op_1() const { return ____op_1; }
	inline int32_t* get_address_of__op_1() { return &____op_1; }
	inline void set__op_1(int32_t value)
	{
		____op_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_t4C3270B8B51AD246B48175392EC9236239F6A46A 
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
		uint8_t __StaticArrayInitTypeSizeU3D152_t4C3270B8B51AD246B48175392EC9236239F6A46A__padding[152];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176
struct __StaticArrayInitTypeSizeU3D176_t3B06F812A123DD37CDFB2419EA1D48F9BAFEED22 
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
		uint8_t __StaticArrayInitTypeSizeU3D176_t3B06F812A123DD37CDFB2419EA1D48F9BAFEED22__padding[176];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tE7DF3532AFFC6D23945F2DDD653CFE89C0EF8C8C 
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
		uint8_t __StaticArrayInitTypeSizeU3D36_tE7DF3532AFFC6D23945F2DDD653CFE89C0EF8C8C__padding[36];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t0B0C3763E3BA4DDD15C47D623602B6839C1819D4 
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
		uint8_t __StaticArrayInitTypeSizeU3D38_t0B0C3763E3BA4DDD15C47D623602B6839C1819D4__padding[38];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t0DD16B372598EB6480F52AE3688C28864CE0EE46 
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
		uint8_t __StaticArrayInitTypeSizeU3D52_t0DD16B372598EB6480F52AE3688C28864CE0EE46__padding[52];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t67F76B1425A45B2A581DDEFB08E377F361E393C5 
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
		uint8_t __StaticArrayInitTypeSizeU3D64_t67F76B1425A45B2A581DDEFB08E377F361E393C5__padding[64];
	};

public:
};


// System.Data.DataError/ColumnError
struct ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568 
{
public:
	// System.Data.DataColumn System.Data.DataError/ColumnError::_column
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____column_0;
	// System.String System.Data.DataError/ColumnError::_error
	String_t* ____error_1;

public:
	inline static int32_t get_offset_of__column_0() { return static_cast<int32_t>(offsetof(ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568, ____column_0)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__column_0() const { return ____column_0; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__column_0() { return &____column_0; }
	inline void set__column_0(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____column_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____column_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568, ____error_1)); }
	inline String_t* get__error_1() const { return ____error_1; }
	inline String_t** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(String_t* value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Data.DataError/ColumnError
struct ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_pinvoke
{
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____column_0;
	char* ____error_1;
};
// Native definition for COM marshalling of System.Data.DataError/ColumnError
struct ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_com
{
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____column_0;
	Il2CppChar* ____error_1;
};

// System.Data.DataTable/DSRowDiffIdUsageSection
struct DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A 
{
public:
	// System.Data.DataSet System.Data.DataTable/DSRowDiffIdUsageSection::_targetDS
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____targetDS_0;

public:
	inline static int32_t get_offset_of__targetDS_0() { return static_cast<int32_t>(offsetof(DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A, ____targetDS_0)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__targetDS_0() const { return ____targetDS_0; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__targetDS_0() { return &____targetDS_0; }
	inline void set__targetDS_0(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____targetDS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetDS_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Data.DataTable/DSRowDiffIdUsageSection
struct DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_pinvoke
{
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____targetDS_0;
};
// Native definition for COM marshalling of System.Data.DataTable/DSRowDiffIdUsageSection
struct DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_com
{
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____targetDS_0;
};

// System.Data.DataTable/RowDiffIdUsageSection
struct RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF 
{
public:
	// System.Data.DataTable System.Data.DataTable/RowDiffIdUsageSection::_targetTable
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____targetTable_0;

public:
	inline static int32_t get_offset_of__targetTable_0() { return static_cast<int32_t>(offsetof(RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF, ____targetTable_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__targetTable_0() const { return ____targetTable_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__targetTable_0() { return &____targetTable_0; }
	inline void set__targetTable_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____targetTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetTable_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Data.DataTable/RowDiffIdUsageSection
struct RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_pinvoke
{
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____targetTable_0;
};
// Native definition for COM marshalling of System.Data.DataTable/RowDiffIdUsageSection
struct RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_com
{
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____targetTable_0;
};

// System.Data.AcceptRejectRule
struct AcceptRejectRule_t85283FE9DC0629502AA5F0B22A342D013DE94FBF 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t85283FE9DC0629502AA5F0B22A342D013DE94FBF, ___value___2)); }
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


// System.Globalization.CompareOptions
struct CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRelation
struct DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_0;
	// System.Data.PropertyCollection System.Data.DataRelation::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_1;
	// System.String System.Data.DataRelation::_relationName
	String_t* ____relationName_2;
	// System.Data.DataKey System.Data.DataRelation::_childKey
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ____childKey_3;
	// System.Data.DataKey System.Data.DataRelation::_parentKey
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ____parentKey_4;
	// System.Data.UniqueConstraint System.Data.DataRelation::_parentKeyConstraint
	UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ____parentKeyConstraint_5;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::_childKeyConstraint
	ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * ____childKeyConstraint_6;
	// System.String[] System.Data.DataRelation::_parentColumnNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____parentColumnNames_7;
	// System.String[] System.Data.DataRelation::_childColumnNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____childColumnNames_8;
	// System.String System.Data.DataRelation::_parentTableName
	String_t* ____parentTableName_9;
	// System.String System.Data.DataRelation::_childTableName
	String_t* ____childTableName_10;
	// System.String System.Data.DataRelation::_parentTableNamespace
	String_t* ____parentTableNamespace_11;
	// System.String System.Data.DataRelation::_childTableNamespace
	String_t* ____childTableNamespace_12;
	// System.Boolean System.Data.DataRelation::_nested
	bool ____nested_13;
	// System.Boolean System.Data.DataRelation::_createConstraints
	bool ____createConstraints_14;
	// System.Boolean System.Data.DataRelation::_checkMultipleNested
	bool ____checkMultipleNested_15;
	// System.Int32 System.Data.DataRelation::_objectID
	int32_t ____objectID_17;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataRelation::PropertyChanging
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanging_18;

public:
	inline static int32_t get_offset_of__dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____dataSet_0)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_0() const { return ____dataSet_0; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_0() { return &____dataSet_0; }
	inline void set__dataSet_0(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_0), (void*)value);
	}

	inline static int32_t get_offset_of__extendedProperties_1() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____extendedProperties_1)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_1() const { return ____extendedProperties_1; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_1() { return &____extendedProperties_1; }
	inline void set__extendedProperties_1(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of__relationName_2() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____relationName_2)); }
	inline String_t* get__relationName_2() const { return ____relationName_2; }
	inline String_t** get_address_of__relationName_2() { return &____relationName_2; }
	inline void set__relationName_2(String_t* value)
	{
		____relationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relationName_2), (void*)value);
	}

	inline static int32_t get_offset_of__childKey_3() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____childKey_3)); }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  get__childKey_3() const { return ____childKey_3; }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * get_address_of__childKey_3() { return &____childKey_3; }
	inline void set__childKey_3(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  value)
	{
		____childKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____childKey_3))->____columns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__parentKey_4() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____parentKey_4)); }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  get__parentKey_4() const { return ____parentKey_4; }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * get_address_of__parentKey_4() { return &____parentKey_4; }
	inline void set__parentKey_4(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  value)
	{
		____parentKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____parentKey_4))->____columns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__parentKeyConstraint_5() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____parentKeyConstraint_5)); }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * get__parentKeyConstraint_5() const { return ____parentKeyConstraint_5; }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 ** get_address_of__parentKeyConstraint_5() { return &____parentKeyConstraint_5; }
	inline void set__parentKeyConstraint_5(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * value)
	{
		____parentKeyConstraint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentKeyConstraint_5), (void*)value);
	}

	inline static int32_t get_offset_of__childKeyConstraint_6() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____childKeyConstraint_6)); }
	inline ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * get__childKeyConstraint_6() const { return ____childKeyConstraint_6; }
	inline ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD ** get_address_of__childKeyConstraint_6() { return &____childKeyConstraint_6; }
	inline void set__childKeyConstraint_6(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * value)
	{
		____childKeyConstraint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childKeyConstraint_6), (void*)value);
	}

	inline static int32_t get_offset_of__parentColumnNames_7() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____parentColumnNames_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__parentColumnNames_7() const { return ____parentColumnNames_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__parentColumnNames_7() { return &____parentColumnNames_7; }
	inline void set__parentColumnNames_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____parentColumnNames_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentColumnNames_7), (void*)value);
	}

	inline static int32_t get_offset_of__childColumnNames_8() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____childColumnNames_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__childColumnNames_8() const { return ____childColumnNames_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__childColumnNames_8() { return &____childColumnNames_8; }
	inline void set__childColumnNames_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____childColumnNames_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childColumnNames_8), (void*)value);
	}

	inline static int32_t get_offset_of__parentTableName_9() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____parentTableName_9)); }
	inline String_t* get__parentTableName_9() const { return ____parentTableName_9; }
	inline String_t** get_address_of__parentTableName_9() { return &____parentTableName_9; }
	inline void set__parentTableName_9(String_t* value)
	{
		____parentTableName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentTableName_9), (void*)value);
	}

	inline static int32_t get_offset_of__childTableName_10() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____childTableName_10)); }
	inline String_t* get__childTableName_10() const { return ____childTableName_10; }
	inline String_t** get_address_of__childTableName_10() { return &____childTableName_10; }
	inline void set__childTableName_10(String_t* value)
	{
		____childTableName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childTableName_10), (void*)value);
	}

	inline static int32_t get_offset_of__parentTableNamespace_11() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____parentTableNamespace_11)); }
	inline String_t* get__parentTableNamespace_11() const { return ____parentTableNamespace_11; }
	inline String_t** get_address_of__parentTableNamespace_11() { return &____parentTableNamespace_11; }
	inline void set__parentTableNamespace_11(String_t* value)
	{
		____parentTableNamespace_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentTableNamespace_11), (void*)value);
	}

	inline static int32_t get_offset_of__childTableNamespace_12() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____childTableNamespace_12)); }
	inline String_t* get__childTableNamespace_12() const { return ____childTableNamespace_12; }
	inline String_t** get_address_of__childTableNamespace_12() { return &____childTableNamespace_12; }
	inline void set__childTableNamespace_12(String_t* value)
	{
		____childTableNamespace_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childTableNamespace_12), (void*)value);
	}

	inline static int32_t get_offset_of__nested_13() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____nested_13)); }
	inline bool get__nested_13() const { return ____nested_13; }
	inline bool* get_address_of__nested_13() { return &____nested_13; }
	inline void set__nested_13(bool value)
	{
		____nested_13 = value;
	}

	inline static int32_t get_offset_of__createConstraints_14() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____createConstraints_14)); }
	inline bool get__createConstraints_14() const { return ____createConstraints_14; }
	inline bool* get_address_of__createConstraints_14() { return &____createConstraints_14; }
	inline void set__createConstraints_14(bool value)
	{
		____createConstraints_14 = value;
	}

	inline static int32_t get_offset_of__checkMultipleNested_15() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____checkMultipleNested_15)); }
	inline bool get__checkMultipleNested_15() const { return ____checkMultipleNested_15; }
	inline bool* get_address_of__checkMultipleNested_15() { return &____checkMultipleNested_15; }
	inline void set__checkMultipleNested_15(bool value)
	{
		____checkMultipleNested_15 = value;
	}

	inline static int32_t get_offset_of__objectID_17() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ____objectID_17)); }
	inline int32_t get__objectID_17() const { return ____objectID_17; }
	inline int32_t* get_address_of__objectID_17() { return &____objectID_17; }
	inline void set__objectID_17(int32_t value)
	{
		____objectID_17 = value;
	}

	inline static int32_t get_offset_of_PropertyChanging_18() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9, ___PropertyChanging_18)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanging_18() const { return ___PropertyChanging_18; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanging_18() { return &___PropertyChanging_18; }
	inline void set_PropertyChanging_18(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanging_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_18), (void*)value);
	}
};

struct DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_StaticFields
{
public:
	// System.Int32 System.Data.DataRelation::s_objectTypeCount
	int32_t ___s_objectTypeCount_16;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_16() { return static_cast<int32_t>(offsetof(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_StaticFields, ___s_objectTypeCount_16)); }
	inline int32_t get_s_objectTypeCount_16() const { return ___s_objectTypeCount_16; }
	inline int32_t* get_address_of_s_objectTypeCount_16() { return &___s_objectTypeCount_16; }
	inline void set_s_objectTypeCount_16(int32_t value)
	{
		___s_objectTypeCount_16 = value;
	}
};


// System.Data.DataRowAction
struct DataRowAction_t57597E0A01CA9E666DFC8BFEE012007ADD0960CD 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowAction_t57597E0A01CA9E666DFC8BFEE012007ADD0960CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRowVersion
struct DataRowVersion_t0EB25EBED75155033D1841DCFA75D45E665B4F9E 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowVersion_t0EB25EBED75155033D1841DCFA75D45E665B4F9E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataSetDateTime
struct DataSetDateTime_t787581C2820BA6C704C9E63C58D8CDE8B3C3719C 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataSetDateTime_t787581C2820BA6C704C9E63C58D8CDE8B3C3719C, ___value___2)); }
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


// System.ComponentModel.ListChangedType
struct ListChangedType_t58520B3D3109CD5C04D27714D495895CD89E1676 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListChangedType_t58520B3D3109CD5C04D27714D495895CD89E1676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.MappingType
struct MappingType_tAA0DE2A64E2B04E270F71EB3FBF2CF52BD272636 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MappingType_tAA0DE2A64E2B04E270F71EB3FBF2CF52BD272636, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.RBTreeError
struct RBTreeError_tD4673BE0774B9F25D1B28996B11369DC0EEFF592 
{
public:
	// System.Int32 System.Data.RBTreeError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RBTreeError_tD4673BE0774B9F25D1B28996B11369DC0EEFF592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Rule
struct Rule_t9CD48A4A7FE505F9D954959BE324C10819A52B75 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rule_t9CD48A4A7FE505F9D954959BE324C10819A52B75, ___value___2)); }
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


// System.Data.SerializationFormat
struct SerializationFormat_t31A4CB3E88553E85268A0DCE05E9D9FC28245730 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFormat_t31A4CB3E88553E85268A0DCE05E9D9FC28245730, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.StorageType
struct StorageType_tE4E29216CBA812D4241BD7D6EBCE84D06B8E8D36 
{
public:
	// System.Int32 System.Data.Common.StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_tE4E29216CBA812D4241BD7D6EBCE84D06B8E8D36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Tokens
struct Tokens_t7F7B46C51F508BB849DE2C84D182B5F7DFFE0B16 
{
public:
	// System.Int32 System.Data.Tokens::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tokens_t7F7B46C51F508BB849DE2C84D182B5F7DFFE0B16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.TreeAccessMethod
struct TreeAccessMethod_t5918E1BAD166C286BF31F24B8A0CCE4D41E47930 
{
public:
	// System.Int32 System.Data.TreeAccessMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TreeAccessMethod_t5918E1BAD166C286BF31F24B8A0CCE4D41E47930, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.UniqueConstraint
struct UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39  : public Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B
{
public:
	// System.Data.DataKey System.Data.UniqueConstraint::_key
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ____key_5;
	// System.Data.Index System.Data.UniqueConstraint::_constraintIndex
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____constraintIndex_6;
	// System.Boolean System.Data.UniqueConstraint::_bPrimaryKey
	bool ____bPrimaryKey_7;
	// System.String System.Data.UniqueConstraint::_constraintName
	String_t* ____constraintName_8;
	// System.String[] System.Data.UniqueConstraint::_columnNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____columnNames_9;

public:
	inline static int32_t get_offset_of__key_5() { return static_cast<int32_t>(offsetof(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39, ____key_5)); }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  get__key_5() const { return ____key_5; }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * get_address_of__key_5() { return &____key_5; }
	inline void set__key_5(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  value)
	{
		____key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_5))->____columns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constraintIndex_6() { return static_cast<int32_t>(offsetof(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39, ____constraintIndex_6)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__constraintIndex_6() const { return ____constraintIndex_6; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__constraintIndex_6() { return &____constraintIndex_6; }
	inline void set__constraintIndex_6(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____constraintIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of__bPrimaryKey_7() { return static_cast<int32_t>(offsetof(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39, ____bPrimaryKey_7)); }
	inline bool get__bPrimaryKey_7() const { return ____bPrimaryKey_7; }
	inline bool* get_address_of__bPrimaryKey_7() { return &____bPrimaryKey_7; }
	inline void set__bPrimaryKey_7(bool value)
	{
		____bPrimaryKey_7 = value;
	}

	inline static int32_t get_offset_of__constraintName_8() { return static_cast<int32_t>(offsetof(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39, ____constraintName_8)); }
	inline String_t* get__constraintName_8() const { return ____constraintName_8; }
	inline String_t** get_address_of__constraintName_8() { return &____constraintName_8; }
	inline void set__constraintName_8(String_t* value)
	{
		____constraintName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintName_8), (void*)value);
	}

	inline static int32_t get_offset_of__columnNames_9() { return static_cast<int32_t>(offsetof(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39, ____columnNames_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__columnNames_9() const { return ____columnNames_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__columnNames_9() { return &____columnNames_9; }
	inline void set__columnNames_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____columnNames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnNames_9), (void*)value);
	}
};


// System.Data.XmlWriteMode
struct XmlWriteMode_t6D82E376E4A0A49F76387E59A10D4AF1F0A2EAD9 
{
public:
	// System.Int32 System.Data.XmlWriteMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlWriteMode_t6D82E376E4A0A49F76387E59A10D4AF1F0A2EAD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.BinaryNode/DataTypePrecedence
struct DataTypePrecedence_t073058661E57535A7B98EDBC58A53AAF503D0950 
{
public:
	// System.Int32 System.Data.BinaryNode/DataTypePrecedence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataTypePrecedence_t073058661E57535A7B98EDBC58A53AAF503D0950, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRelationCollection/DataSetRelationCollection
struct DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3  : public DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_7;
	// System.Collections.ArrayList System.Data.DataRelationCollection/DataSetRelationCollection::_relations
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____relations_8;
	// System.Data.DataRelation[] System.Data.DataRelationCollection/DataSetRelationCollection::_delayLoadingRelations
	DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* ____delayLoadingRelations_9;

public:
	inline static int32_t get_offset_of__dataSet_7() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3, ____dataSet_7)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_7() const { return ____dataSet_7; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_7() { return &____dataSet_7; }
	inline void set__dataSet_7(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_7), (void*)value);
	}

	inline static int32_t get_offset_of__relations_8() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3, ____relations_8)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__relations_8() const { return ____relations_8; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__relations_8() { return &____relations_8; }
	inline void set__relations_8(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____relations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relations_8), (void*)value);
	}

	inline static int32_t get_offset_of__delayLoadingRelations_9() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3, ____delayLoadingRelations_9)); }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* get__delayLoadingRelations_9() const { return ____delayLoadingRelations_9; }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C** get_address_of__delayLoadingRelations_9() { return &____delayLoadingRelations_9; }
	inline void set__delayLoadingRelations_9(DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* value)
	{
		____delayLoadingRelations_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayLoadingRelations_9), (void*)value);
	}
};


// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E  : public DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_7;
	// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::_relations
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____relations_8;
	// System.Boolean System.Data.DataRelationCollection/DataTableRelationCollection::_fParentCollection
	bool ____fParentCollection_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection/DataTableRelationCollection::RelationPropertyChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___RelationPropertyChanged_10;

public:
	inline static int32_t get_offset_of__table_7() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E, ____table_7)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_7() const { return ____table_7; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_7() { return &____table_7; }
	inline void set__table_7(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_7), (void*)value);
	}

	inline static int32_t get_offset_of__relations_8() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E, ____relations_8)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__relations_8() const { return ____relations_8; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__relations_8() { return &____relations_8; }
	inline void set__relations_8(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____relations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relations_8), (void*)value);
	}

	inline static int32_t get_offset_of__fParentCollection_9() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E, ____fParentCollection_9)); }
	inline bool get__fParentCollection_9() const { return ____fParentCollection_9; }
	inline bool* get_address_of__fParentCollection_9() { return &____fParentCollection_9; }
	inline void set__fParentCollection_9(bool value)
	{
		____fParentCollection_9 = value;
	}

	inline static int32_t get_offset_of_RelationPropertyChanged_10() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E, ___RelationPropertyChanged_10)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_RelationPropertyChanged_10() const { return ___RelationPropertyChanged_10; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_RelationPropertyChanged_10() { return &___RelationPropertyChanged_10; }
	inline void set_RelationPropertyChanged_10(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___RelationPropertyChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RelationPropertyChanged_10), (void*)value);
	}
};


// System.Data.Common.ObjectStorage/Families
struct Families_t6E8551AC06DF4382799D70C917548A9597BD1EF2 
{
public:
	// System.Int32 System.Data.Common.ObjectStorage/Families::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Families_t6E8551AC06DF4382799D70C917548A9597BD1EF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.RBTree`1<System.Data.DataRow>
struct RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49  : public RuntimeObject
{
public:
	// System.Data.RBTree`1/TreePage<K>[] System.Data.RBTree`1::_pageTable
	TreePageU5BU5D_t23A902C89B1F3C4DEBE1BAA3EE0C4A335F62FEBE* ____pageTable_0;
	// System.Int32[] System.Data.RBTree`1::_pageTableMap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____pageTableMap_1;
	// System.Int32 System.Data.RBTree`1::_inUsePageCount
	int32_t ____inUsePageCount_2;
	// System.Int32 System.Data.RBTree`1::_nextFreePageLine
	int32_t ____nextFreePageLine_3;
	// System.Int32 System.Data.RBTree`1::root
	int32_t ___root_4;
	// System.Int32 System.Data.RBTree`1::_version
	int32_t ____version_5;
	// System.Int32 System.Data.RBTree`1::_inUseNodeCount
	int32_t ____inUseNodeCount_6;
	// System.Int32 System.Data.RBTree`1::_inUseSatelliteTreeCount
	int32_t ____inUseSatelliteTreeCount_7;
	// System.Data.TreeAccessMethod System.Data.RBTree`1::_accessMethod
	int32_t ____accessMethod_8;

public:
	inline static int32_t get_offset_of__pageTable_0() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____pageTable_0)); }
	inline TreePageU5BU5D_t23A902C89B1F3C4DEBE1BAA3EE0C4A335F62FEBE* get__pageTable_0() const { return ____pageTable_0; }
	inline TreePageU5BU5D_t23A902C89B1F3C4DEBE1BAA3EE0C4A335F62FEBE** get_address_of__pageTable_0() { return &____pageTable_0; }
	inline void set__pageTable_0(TreePageU5BU5D_t23A902C89B1F3C4DEBE1BAA3EE0C4A335F62FEBE* value)
	{
		____pageTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pageTable_0), (void*)value);
	}

	inline static int32_t get_offset_of__pageTableMap_1() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____pageTableMap_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__pageTableMap_1() const { return ____pageTableMap_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__pageTableMap_1() { return &____pageTableMap_1; }
	inline void set__pageTableMap_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____pageTableMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pageTableMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__inUsePageCount_2() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____inUsePageCount_2)); }
	inline int32_t get__inUsePageCount_2() const { return ____inUsePageCount_2; }
	inline int32_t* get_address_of__inUsePageCount_2() { return &____inUsePageCount_2; }
	inline void set__inUsePageCount_2(int32_t value)
	{
		____inUsePageCount_2 = value;
	}

	inline static int32_t get_offset_of__nextFreePageLine_3() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____nextFreePageLine_3)); }
	inline int32_t get__nextFreePageLine_3() const { return ____nextFreePageLine_3; }
	inline int32_t* get_address_of__nextFreePageLine_3() { return &____nextFreePageLine_3; }
	inline void set__nextFreePageLine_3(int32_t value)
	{
		____nextFreePageLine_3 = value;
	}

	inline static int32_t get_offset_of_root_4() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ___root_4)); }
	inline int32_t get_root_4() const { return ___root_4; }
	inline int32_t* get_address_of_root_4() { return &___root_4; }
	inline void set_root_4(int32_t value)
	{
		___root_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__inUseNodeCount_6() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____inUseNodeCount_6)); }
	inline int32_t get__inUseNodeCount_6() const { return ____inUseNodeCount_6; }
	inline int32_t* get_address_of__inUseNodeCount_6() { return &____inUseNodeCount_6; }
	inline void set__inUseNodeCount_6(int32_t value)
	{
		____inUseNodeCount_6 = value;
	}

	inline static int32_t get_offset_of__inUseSatelliteTreeCount_7() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____inUseSatelliteTreeCount_7)); }
	inline int32_t get__inUseSatelliteTreeCount_7() const { return ____inUseSatelliteTreeCount_7; }
	inline int32_t* get_address_of__inUseSatelliteTreeCount_7() { return &____inUseSatelliteTreeCount_7; }
	inline void set__inUseSatelliteTreeCount_7(int32_t value)
	{
		____inUseSatelliteTreeCount_7 = value;
	}

	inline static int32_t get_offset_of__accessMethod_8() { return static_cast<int32_t>(offsetof(RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49, ____accessMethod_8)); }
	inline int32_t get__accessMethod_8() const { return ____accessMethod_8; }
	inline int32_t* get_address_of__accessMethod_8() { return &____accessMethod_8; }
	inline void set__accessMethod_8(int32_t value)
	{
		____accessMethod_8 = value;
	}
};


// System.Data.RBTree`1<System.Int32>
struct RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11  : public RuntimeObject
{
public:
	// System.Data.RBTree`1/TreePage<K>[] System.Data.RBTree`1::_pageTable
	TreePageU5BU5D_t119A89645D06C5D41CA7694ABC97CED591EBB0E4* ____pageTable_0;
	// System.Int32[] System.Data.RBTree`1::_pageTableMap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____pageTableMap_1;
	// System.Int32 System.Data.RBTree`1::_inUsePageCount
	int32_t ____inUsePageCount_2;
	// System.Int32 System.Data.RBTree`1::_nextFreePageLine
	int32_t ____nextFreePageLine_3;
	// System.Int32 System.Data.RBTree`1::root
	int32_t ___root_4;
	// System.Int32 System.Data.RBTree`1::_version
	int32_t ____version_5;
	// System.Int32 System.Data.RBTree`1::_inUseNodeCount
	int32_t ____inUseNodeCount_6;
	// System.Int32 System.Data.RBTree`1::_inUseSatelliteTreeCount
	int32_t ____inUseSatelliteTreeCount_7;
	// System.Data.TreeAccessMethod System.Data.RBTree`1::_accessMethod
	int32_t ____accessMethod_8;

public:
	inline static int32_t get_offset_of__pageTable_0() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____pageTable_0)); }
	inline TreePageU5BU5D_t119A89645D06C5D41CA7694ABC97CED591EBB0E4* get__pageTable_0() const { return ____pageTable_0; }
	inline TreePageU5BU5D_t119A89645D06C5D41CA7694ABC97CED591EBB0E4** get_address_of__pageTable_0() { return &____pageTable_0; }
	inline void set__pageTable_0(TreePageU5BU5D_t119A89645D06C5D41CA7694ABC97CED591EBB0E4* value)
	{
		____pageTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pageTable_0), (void*)value);
	}

	inline static int32_t get_offset_of__pageTableMap_1() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____pageTableMap_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__pageTableMap_1() const { return ____pageTableMap_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__pageTableMap_1() { return &____pageTableMap_1; }
	inline void set__pageTableMap_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____pageTableMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pageTableMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__inUsePageCount_2() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____inUsePageCount_2)); }
	inline int32_t get__inUsePageCount_2() const { return ____inUsePageCount_2; }
	inline int32_t* get_address_of__inUsePageCount_2() { return &____inUsePageCount_2; }
	inline void set__inUsePageCount_2(int32_t value)
	{
		____inUsePageCount_2 = value;
	}

	inline static int32_t get_offset_of__nextFreePageLine_3() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____nextFreePageLine_3)); }
	inline int32_t get__nextFreePageLine_3() const { return ____nextFreePageLine_3; }
	inline int32_t* get_address_of__nextFreePageLine_3() { return &____nextFreePageLine_3; }
	inline void set__nextFreePageLine_3(int32_t value)
	{
		____nextFreePageLine_3 = value;
	}

	inline static int32_t get_offset_of_root_4() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ___root_4)); }
	inline int32_t get_root_4() const { return ___root_4; }
	inline int32_t* get_address_of_root_4() { return &___root_4; }
	inline void set_root_4(int32_t value)
	{
		___root_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__inUseNodeCount_6() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____inUseNodeCount_6)); }
	inline int32_t get__inUseNodeCount_6() const { return ____inUseNodeCount_6; }
	inline int32_t* get_address_of__inUseNodeCount_6() { return &____inUseNodeCount_6; }
	inline void set__inUseNodeCount_6(int32_t value)
	{
		____inUseNodeCount_6 = value;
	}

	inline static int32_t get_offset_of__inUseSatelliteTreeCount_7() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____inUseSatelliteTreeCount_7)); }
	inline int32_t get__inUseSatelliteTreeCount_7() const { return ____inUseSatelliteTreeCount_7; }
	inline int32_t* get_address_of__inUseSatelliteTreeCount_7() { return &____inUseSatelliteTreeCount_7; }
	inline void set__inUseSatelliteTreeCount_7(int32_t value)
	{
		____inUseSatelliteTreeCount_7 = value;
	}

	inline static int32_t get_offset_of__accessMethod_8() { return static_cast<int32_t>(offsetof(RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11, ____accessMethod_8)); }
	inline int32_t get__accessMethod_8() const { return ____accessMethod_8; }
	inline int32_t* get_address_of__accessMethod_8() { return &____accessMethod_8; }
	inline void set__accessMethod_8(int32_t value)
	{
		____accessMethod_8 = value;
	}
};


// System.Data.DataColumn
struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Boolean System.Data.DataColumn::_allowNull
	bool ____allowNull_3;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_4;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_5;
	// System.Type System.Data.DataColumn::_dataType
	Type_t * ____dataType_6;
	// System.Data.Common.StorageType System.Data.DataColumn::_storageType
	int32_t ____storageType_7;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_8;
	// System.Data.DataSetDateTime System.Data.DataColumn::_dateTimeMode
	int32_t ____dateTimeMode_9;
	// System.Data.DataExpression System.Data.DataColumn::_expression
	DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * ____expression_10;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_11;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_12;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_13;
	// System.Data.Index System.Data.DataColumn::_sortIndex
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____sortIndex_14;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_15;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_16;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_17;
	// System.Int32 System.Data.DataColumn::_hashCode
	int32_t ____hashCode_18;
	// System.Int32 System.Data.DataColumn::_errors
	int32_t ____errors_19;
	// System.Boolean System.Data.DataColumn::_isSqlType
	bool ____isSqlType_20;
	// System.Boolean System.Data.DataColumn::_implementsINullable
	bool ____implementsINullable_21;
	// System.Boolean System.Data.DataColumn::_implementsIChangeTracking
	bool ____implementsIChangeTracking_22;
	// System.Boolean System.Data.DataColumn::_implementsIRevertibleChangeTracking
	bool ____implementsIRevertibleChangeTracking_23;
	// System.Boolean System.Data.DataColumn::_implementsIXMLSerializable
	bool ____implementsIXMLSerializable_24;
	// System.Boolean System.Data.DataColumn::_defaultValueIsNull
	bool ____defaultValueIsNull_25;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataColumn::_dependentColumns
	List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * ____dependentColumns_26;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_27;
	// System.Data.Common.DataStorage System.Data.DataColumn::_storage
	DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * ____storage_28;
	// System.Data.AutoIncrementValue System.Data.DataColumn::_autoInc
	AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * ____autoInc_29;
	// System.String System.Data.DataColumn::_columnUri
	String_t* ____columnUri_30;
	// System.String System.Data.DataColumn::_columnPrefix
	String_t* ____columnPrefix_31;
	// System.String System.Data.DataColumn::_encodedColumnName
	String_t* ____encodedColumnName_32;
	// System.Data.SimpleType System.Data.DataColumn::_simpleType
	SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * ____simpleType_33;
	// System.Int32 System.Data.DataColumn::_objectID
	int32_t ____objectID_35;
	// System.String System.Data.DataColumn::<XmlDataType>k__BackingField
	String_t* ___U3CXmlDataTypeU3Ek__BackingField_36;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataColumn::PropertyChanging
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanging_37;

public:
	inline static int32_t get_offset_of__allowNull_3() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____allowNull_3)); }
	inline bool get__allowNull_3() const { return ____allowNull_3; }
	inline bool* get_address_of__allowNull_3() { return &____allowNull_3; }
	inline void set__allowNull_3(bool value)
	{
		____allowNull_3 = value;
	}

	inline static int32_t get_offset_of__caption_4() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____caption_4)); }
	inline String_t* get__caption_4() const { return ____caption_4; }
	inline String_t** get_address_of__caption_4() { return &____caption_4; }
	inline void set__caption_4(String_t* value)
	{
		____caption_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caption_4), (void*)value);
	}

	inline static int32_t get_offset_of__columnName_5() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnName_5)); }
	inline String_t* get__columnName_5() const { return ____columnName_5; }
	inline String_t** get_address_of__columnName_5() { return &____columnName_5; }
	inline void set__columnName_5(String_t* value)
	{
		____columnName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnName_5), (void*)value);
	}

	inline static int32_t get_offset_of__dataType_6() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dataType_6)); }
	inline Type_t * get__dataType_6() const { return ____dataType_6; }
	inline Type_t ** get_address_of__dataType_6() { return &____dataType_6; }
	inline void set__dataType_6(Type_t * value)
	{
		____dataType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataType_6), (void*)value);
	}

	inline static int32_t get_offset_of__storageType_7() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____storageType_7)); }
	inline int32_t get__storageType_7() const { return ____storageType_7; }
	inline int32_t* get_address_of__storageType_7() { return &____storageType_7; }
	inline void set__storageType_7(int32_t value)
	{
		____storageType_7 = value;
	}

	inline static int32_t get_offset_of__defaultValue_8() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____defaultValue_8)); }
	inline RuntimeObject * get__defaultValue_8() const { return ____defaultValue_8; }
	inline RuntimeObject ** get_address_of__defaultValue_8() { return &____defaultValue_8; }
	inline void set__defaultValue_8(RuntimeObject * value)
	{
		____defaultValue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_8), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeMode_9() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dateTimeMode_9)); }
	inline int32_t get__dateTimeMode_9() const { return ____dateTimeMode_9; }
	inline int32_t* get_address_of__dateTimeMode_9() { return &____dateTimeMode_9; }
	inline void set__dateTimeMode_9(int32_t value)
	{
		____dateTimeMode_9 = value;
	}

	inline static int32_t get_offset_of__expression_10() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____expression_10)); }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * get__expression_10() const { return ____expression_10; }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 ** get_address_of__expression_10() { return &____expression_10; }
	inline void set__expression_10(DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * value)
	{
		____expression_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expression_10), (void*)value);
	}

	inline static int32_t get_offset_of__maxLength_11() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____maxLength_11)); }
	inline int32_t get__maxLength_11() const { return ____maxLength_11; }
	inline int32_t* get_address_of__maxLength_11() { return &____maxLength_11; }
	inline void set__maxLength_11(int32_t value)
	{
		____maxLength_11 = value;
	}

	inline static int32_t get_offset_of__ordinal_12() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____ordinal_12)); }
	inline int32_t get__ordinal_12() const { return ____ordinal_12; }
	inline int32_t* get_address_of__ordinal_12() { return &____ordinal_12; }
	inline void set__ordinal_12(int32_t value)
	{
		____ordinal_12 = value;
	}

	inline static int32_t get_offset_of__readOnly_13() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____readOnly_13)); }
	inline bool get__readOnly_13() const { return ____readOnly_13; }
	inline bool* get_address_of__readOnly_13() { return &____readOnly_13; }
	inline void set__readOnly_13(bool value)
	{
		____readOnly_13 = value;
	}

	inline static int32_t get_offset_of__sortIndex_14() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____sortIndex_14)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__sortIndex_14() const { return ____sortIndex_14; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__sortIndex_14() { return &____sortIndex_14; }
	inline void set__sortIndex_14(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____sortIndex_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortIndex_14), (void*)value);
	}

	inline static int32_t get_offset_of__table_15() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____table_15)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_15() const { return ____table_15; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_15() { return &____table_15; }
	inline void set__table_15(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_15), (void*)value);
	}

	inline static int32_t get_offset_of__unique_16() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____unique_16)); }
	inline bool get__unique_16() const { return ____unique_16; }
	inline bool* get_address_of__unique_16() { return &____unique_16; }
	inline void set__unique_16(bool value)
	{
		____unique_16 = value;
	}

	inline static int32_t get_offset_of__columnMapping_17() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnMapping_17)); }
	inline int32_t get__columnMapping_17() const { return ____columnMapping_17; }
	inline int32_t* get_address_of__columnMapping_17() { return &____columnMapping_17; }
	inline void set__columnMapping_17(int32_t value)
	{
		____columnMapping_17 = value;
	}

	inline static int32_t get_offset_of__hashCode_18() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____hashCode_18)); }
	inline int32_t get__hashCode_18() const { return ____hashCode_18; }
	inline int32_t* get_address_of__hashCode_18() { return &____hashCode_18; }
	inline void set__hashCode_18(int32_t value)
	{
		____hashCode_18 = value;
	}

	inline static int32_t get_offset_of__errors_19() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____errors_19)); }
	inline int32_t get__errors_19() const { return ____errors_19; }
	inline int32_t* get_address_of__errors_19() { return &____errors_19; }
	inline void set__errors_19(int32_t value)
	{
		____errors_19 = value;
	}

	inline static int32_t get_offset_of__isSqlType_20() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____isSqlType_20)); }
	inline bool get__isSqlType_20() const { return ____isSqlType_20; }
	inline bool* get_address_of__isSqlType_20() { return &____isSqlType_20; }
	inline void set__isSqlType_20(bool value)
	{
		____isSqlType_20 = value;
	}

	inline static int32_t get_offset_of__implementsINullable_21() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsINullable_21)); }
	inline bool get__implementsINullable_21() const { return ____implementsINullable_21; }
	inline bool* get_address_of__implementsINullable_21() { return &____implementsINullable_21; }
	inline void set__implementsINullable_21(bool value)
	{
		____implementsINullable_21 = value;
	}

	inline static int32_t get_offset_of__implementsIChangeTracking_22() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIChangeTracking_22)); }
	inline bool get__implementsIChangeTracking_22() const { return ____implementsIChangeTracking_22; }
	inline bool* get_address_of__implementsIChangeTracking_22() { return &____implementsIChangeTracking_22; }
	inline void set__implementsIChangeTracking_22(bool value)
	{
		____implementsIChangeTracking_22 = value;
	}

	inline static int32_t get_offset_of__implementsIRevertibleChangeTracking_23() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIRevertibleChangeTracking_23)); }
	inline bool get__implementsIRevertibleChangeTracking_23() const { return ____implementsIRevertibleChangeTracking_23; }
	inline bool* get_address_of__implementsIRevertibleChangeTracking_23() { return &____implementsIRevertibleChangeTracking_23; }
	inline void set__implementsIRevertibleChangeTracking_23(bool value)
	{
		____implementsIRevertibleChangeTracking_23 = value;
	}

	inline static int32_t get_offset_of__implementsIXMLSerializable_24() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIXMLSerializable_24)); }
	inline bool get__implementsIXMLSerializable_24() const { return ____implementsIXMLSerializable_24; }
	inline bool* get_address_of__implementsIXMLSerializable_24() { return &____implementsIXMLSerializable_24; }
	inline void set__implementsIXMLSerializable_24(bool value)
	{
		____implementsIXMLSerializable_24 = value;
	}

	inline static int32_t get_offset_of__defaultValueIsNull_25() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____defaultValueIsNull_25)); }
	inline bool get__defaultValueIsNull_25() const { return ____defaultValueIsNull_25; }
	inline bool* get_address_of__defaultValueIsNull_25() { return &____defaultValueIsNull_25; }
	inline void set__defaultValueIsNull_25(bool value)
	{
		____defaultValueIsNull_25 = value;
	}

	inline static int32_t get_offset_of__dependentColumns_26() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dependentColumns_26)); }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * get__dependentColumns_26() const { return ____dependentColumns_26; }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 ** get_address_of__dependentColumns_26() { return &____dependentColumns_26; }
	inline void set__dependentColumns_26(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * value)
	{
		____dependentColumns_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dependentColumns_26), (void*)value);
	}

	inline static int32_t get_offset_of__extendedProperties_27() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____extendedProperties_27)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_27() const { return ____extendedProperties_27; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_27() { return &____extendedProperties_27; }
	inline void set__extendedProperties_27(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_27), (void*)value);
	}

	inline static int32_t get_offset_of__storage_28() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____storage_28)); }
	inline DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * get__storage_28() const { return ____storage_28; }
	inline DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 ** get_address_of__storage_28() { return &____storage_28; }
	inline void set__storage_28(DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * value)
	{
		____storage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_28), (void*)value);
	}

	inline static int32_t get_offset_of__autoInc_29() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____autoInc_29)); }
	inline AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * get__autoInc_29() const { return ____autoInc_29; }
	inline AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC ** get_address_of__autoInc_29() { return &____autoInc_29; }
	inline void set__autoInc_29(AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * value)
	{
		____autoInc_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____autoInc_29), (void*)value);
	}

	inline static int32_t get_offset_of__columnUri_30() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnUri_30)); }
	inline String_t* get__columnUri_30() const { return ____columnUri_30; }
	inline String_t** get_address_of__columnUri_30() { return &____columnUri_30; }
	inline void set__columnUri_30(String_t* value)
	{
		____columnUri_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnUri_30), (void*)value);
	}

	inline static int32_t get_offset_of__columnPrefix_31() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnPrefix_31)); }
	inline String_t* get__columnPrefix_31() const { return ____columnPrefix_31; }
	inline String_t** get_address_of__columnPrefix_31() { return &____columnPrefix_31; }
	inline void set__columnPrefix_31(String_t* value)
	{
		____columnPrefix_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnPrefix_31), (void*)value);
	}

	inline static int32_t get_offset_of__encodedColumnName_32() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____encodedColumnName_32)); }
	inline String_t* get__encodedColumnName_32() const { return ____encodedColumnName_32; }
	inline String_t** get_address_of__encodedColumnName_32() { return &____encodedColumnName_32; }
	inline void set__encodedColumnName_32(String_t* value)
	{
		____encodedColumnName_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encodedColumnName_32), (void*)value);
	}

	inline static int32_t get_offset_of__simpleType_33() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____simpleType_33)); }
	inline SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * get__simpleType_33() const { return ____simpleType_33; }
	inline SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 ** get_address_of__simpleType_33() { return &____simpleType_33; }
	inline void set__simpleType_33(SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * value)
	{
		____simpleType_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____simpleType_33), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_35() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____objectID_35)); }
	inline int32_t get__objectID_35() const { return ____objectID_35; }
	inline int32_t* get_address_of__objectID_35() { return &____objectID_35; }
	inline void set__objectID_35(int32_t value)
	{
		____objectID_35 = value;
	}

	inline static int32_t get_offset_of_U3CXmlDataTypeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ___U3CXmlDataTypeU3Ek__BackingField_36)); }
	inline String_t* get_U3CXmlDataTypeU3Ek__BackingField_36() const { return ___U3CXmlDataTypeU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CXmlDataTypeU3Ek__BackingField_36() { return &___U3CXmlDataTypeU3Ek__BackingField_36; }
	inline void set_U3CXmlDataTypeU3Ek__BackingField_36(String_t* value)
	{
		___U3CXmlDataTypeU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CXmlDataTypeU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_37() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ___PropertyChanging_37)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanging_37() const { return ___PropertyChanging_37; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanging_37() { return &___PropertyChanging_37; }
	inline void set_PropertyChanging_37(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanging_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_37), (void*)value);
	}
};

struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638_StaticFields
{
public:
	// System.Int32 System.Data.DataColumn::s_objectTypeCount
	int32_t ___s_objectTypeCount_34;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_34() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638_StaticFields, ___s_objectTypeCount_34)); }
	inline int32_t get_s_objectTypeCount_34() const { return ___s_objectTypeCount_34; }
	inline int32_t* get_address_of_s_objectTypeCount_34() { return &___s_objectTypeCount_34; }
	inline void set_s_objectTypeCount_34(int32_t value)
	{
		___s_objectTypeCount_34 = value;
	}
};


// System.Data.DataRow
struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_0;
	// System.Data.DataColumnCollection System.Data.DataRow::_columns
	DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * ____columns_1;
	// System.Int32 System.Data.DataRow::_oldRecord
	int32_t ____oldRecord_2;
	// System.Int32 System.Data.DataRow::_newRecord
	int32_t ____newRecord_3;
	// System.Int32 System.Data.DataRow::_tempRecord
	int32_t ____tempRecord_4;
	// System.Int64 System.Data.DataRow::_rowID
	int64_t ____rowID_5;
	// System.Data.DataRowAction System.Data.DataRow::_action
	int32_t ____action_6;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_7;
	// System.Boolean System.Data.DataRow::_inDeletingEvent
	bool ____inDeletingEvent_8;
	// System.Boolean System.Data.DataRow::_inCascade
	bool ____inCascade_9;
	// System.Data.DataColumn System.Data.DataRow::_lastChangedColumn
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____lastChangedColumn_10;
	// System.Int32 System.Data.DataRow::_countColumnChange
	int32_t ____countColumnChange_11;
	// System.Data.DataError System.Data.DataRow::_error
	DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * ____error_12;
	// System.Int32 System.Data.DataRow::_rbTreeNodeId
	int32_t ____rbTreeNodeId_13;
	// System.Int32 System.Data.DataRow::_objectID
	int32_t ____objectID_15;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____table_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_0() const { return ____table_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_0), (void*)value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____columns_1)); }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * get__columns_1() const { return ____columns_1; }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 ** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columns_1), (void*)value);
	}

	inline static int32_t get_offset_of__oldRecord_2() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____oldRecord_2)); }
	inline int32_t get__oldRecord_2() const { return ____oldRecord_2; }
	inline int32_t* get_address_of__oldRecord_2() { return &____oldRecord_2; }
	inline void set__oldRecord_2(int32_t value)
	{
		____oldRecord_2 = value;
	}

	inline static int32_t get_offset_of__newRecord_3() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____newRecord_3)); }
	inline int32_t get__newRecord_3() const { return ____newRecord_3; }
	inline int32_t* get_address_of__newRecord_3() { return &____newRecord_3; }
	inline void set__newRecord_3(int32_t value)
	{
		____newRecord_3 = value;
	}

	inline static int32_t get_offset_of__tempRecord_4() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____tempRecord_4)); }
	inline int32_t get__tempRecord_4() const { return ____tempRecord_4; }
	inline int32_t* get_address_of__tempRecord_4() { return &____tempRecord_4; }
	inline void set__tempRecord_4(int32_t value)
	{
		____tempRecord_4 = value;
	}

	inline static int32_t get_offset_of__rowID_5() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____rowID_5)); }
	inline int64_t get__rowID_5() const { return ____rowID_5; }
	inline int64_t* get_address_of__rowID_5() { return &____rowID_5; }
	inline void set__rowID_5(int64_t value)
	{
		____rowID_5 = value;
	}

	inline static int32_t get_offset_of__action_6() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____action_6)); }
	inline int32_t get__action_6() const { return ____action_6; }
	inline int32_t* get_address_of__action_6() { return &____action_6; }
	inline void set__action_6(int32_t value)
	{
		____action_6 = value;
	}

	inline static int32_t get_offset_of__inChangingEvent_7() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inChangingEvent_7)); }
	inline bool get__inChangingEvent_7() const { return ____inChangingEvent_7; }
	inline bool* get_address_of__inChangingEvent_7() { return &____inChangingEvent_7; }
	inline void set__inChangingEvent_7(bool value)
	{
		____inChangingEvent_7 = value;
	}

	inline static int32_t get_offset_of__inDeletingEvent_8() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inDeletingEvent_8)); }
	inline bool get__inDeletingEvent_8() const { return ____inDeletingEvent_8; }
	inline bool* get_address_of__inDeletingEvent_8() { return &____inDeletingEvent_8; }
	inline void set__inDeletingEvent_8(bool value)
	{
		____inDeletingEvent_8 = value;
	}

	inline static int32_t get_offset_of__inCascade_9() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inCascade_9)); }
	inline bool get__inCascade_9() const { return ____inCascade_9; }
	inline bool* get_address_of__inCascade_9() { return &____inCascade_9; }
	inline void set__inCascade_9(bool value)
	{
		____inCascade_9 = value;
	}

	inline static int32_t get_offset_of__lastChangedColumn_10() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____lastChangedColumn_10)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__lastChangedColumn_10() const { return ____lastChangedColumn_10; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__lastChangedColumn_10() { return &____lastChangedColumn_10; }
	inline void set__lastChangedColumn_10(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____lastChangedColumn_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastChangedColumn_10), (void*)value);
	}

	inline static int32_t get_offset_of__countColumnChange_11() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____countColumnChange_11)); }
	inline int32_t get__countColumnChange_11() const { return ____countColumnChange_11; }
	inline int32_t* get_address_of__countColumnChange_11() { return &____countColumnChange_11; }
	inline void set__countColumnChange_11(int32_t value)
	{
		____countColumnChange_11 = value;
	}

	inline static int32_t get_offset_of__error_12() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____error_12)); }
	inline DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * get__error_12() const { return ____error_12; }
	inline DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 ** get_address_of__error_12() { return &____error_12; }
	inline void set__error_12(DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * value)
	{
		____error_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_12), (void*)value);
	}

	inline static int32_t get_offset_of__rbTreeNodeId_13() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____rbTreeNodeId_13)); }
	inline int32_t get__rbTreeNodeId_13() const { return ____rbTreeNodeId_13; }
	inline int32_t* get_address_of__rbTreeNodeId_13() { return &____rbTreeNodeId_13; }
	inline void set__rbTreeNodeId_13(int32_t value)
	{
		____rbTreeNodeId_13 = value;
	}

	inline static int32_t get_offset_of__objectID_15() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____objectID_15)); }
	inline int32_t get__objectID_15() const { return ____objectID_15; }
	inline int32_t* get_address_of__objectID_15() { return &____objectID_15; }
	inline void set__objectID_15(int32_t value)
	{
		____objectID_15 = value;
	}
};

struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE_StaticFields
{
public:
	// System.Int32 System.Data.DataRow::s_objectTypeCount
	int32_t ___s_objectTypeCount_14;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_14() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE_StaticFields, ___s_objectTypeCount_14)); }
	inline int32_t get_s_objectTypeCount_14() const { return ___s_objectTypeCount_14; }
	inline int32_t* get_address_of_s_objectTypeCount_14() { return &___s_objectTypeCount_14; }
	inline void set_s_objectTypeCount_14(int32_t value)
	{
		___s_objectTypeCount_14 = value;
	}
};


// System.Data.DataSet
struct DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Data.DataViewManager System.Data.DataSet::_defaultViewManager
	DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * ____defaultViewManager_3;
	// System.Data.DataTableCollection System.Data.DataSet::_tableCollection
	DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * ____tableCollection_4;
	// System.Data.DataRelationCollection System.Data.DataSet::_relationCollection
	DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * ____relationCollection_5;
	// System.Data.PropertyCollection System.Data.DataSet::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_6;
	// System.String System.Data.DataSet::_dataSetName
	String_t* ____dataSetName_7;
	// System.String System.Data.DataSet::_datasetPrefix
	String_t* ____datasetPrefix_8;
	// System.String System.Data.DataSet::_namespaceURI
	String_t* ____namespaceURI_9;
	// System.Boolean System.Data.DataSet::_enforceConstraints
	bool ____enforceConstraints_10;
	// System.Boolean System.Data.DataSet::_caseSensitive
	bool ____caseSensitive_11;
	// System.Globalization.CultureInfo System.Data.DataSet::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_12;
	// System.Boolean System.Data.DataSet::_cultureUserSet
	bool ____cultureUserSet_13;
	// System.Boolean System.Data.DataSet::_fInReadXml
	bool ____fInReadXml_14;
	// System.Boolean System.Data.DataSet::_fInLoadDiffgram
	bool ____fInLoadDiffgram_15;
	// System.Boolean System.Data.DataSet::_fTopLevelTable
	bool ____fTopLevelTable_16;
	// System.Boolean System.Data.DataSet::_fInitInProgress
	bool ____fInitInProgress_17;
	// System.Boolean System.Data.DataSet::_fEnableCascading
	bool ____fEnableCascading_18;
	// System.Boolean System.Data.DataSet::_fIsSchemaLoading
	bool ____fIsSchemaLoading_19;
	// System.String System.Data.DataSet::_mainTableName
	String_t* ____mainTableName_20;
	// System.Data.SerializationFormat System.Data.DataSet::_remotingFormat
	int32_t ____remotingFormat_21;
	// System.Object System.Data.DataSet::_defaultViewManagerLock
	RuntimeObject * ____defaultViewManagerLock_22;
	// System.Int32 System.Data.DataSet::_objectID
	int32_t ____objectID_24;
	// System.Boolean System.Data.DataSet::_useDataSetSchemaOnly
	bool ____useDataSetSchemaOnly_26;
	// System.Boolean System.Data.DataSet::_udtIsWrapped
	bool ____udtIsWrapped_27;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataSet::PropertyChanging
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanging_28;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t10E3E3F0E24DB1FC0DFEC8687C4D690F5CA57A41 * ___MergeFailed_29;
	// System.Data.DataRowCreatedEventHandler System.Data.DataSet::DataRowCreated
	DataRowCreatedEventHandler_tE60E7D5E5556337BEB5818E87E217E12F9987102 * ___DataRowCreated_30;
	// System.Data.DataSetClearEventhandler System.Data.DataSet::ClearFunctionCalled
	DataSetClearEventhandler_tBBB7A6036B60539D6C54C4BADC06DC0E14A7494E * ___ClearFunctionCalled_31;

public:
	inline static int32_t get_offset_of__defaultViewManager_3() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____defaultViewManager_3)); }
	inline DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * get__defaultViewManager_3() const { return ____defaultViewManager_3; }
	inline DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A ** get_address_of__defaultViewManager_3() { return &____defaultViewManager_3; }
	inline void set__defaultViewManager_3(DataViewManager_tA216F22BB197AECDF442CD380A614CA7B4EA639A * value)
	{
		____defaultViewManager_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultViewManager_3), (void*)value);
	}

	inline static int32_t get_offset_of__tableCollection_4() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____tableCollection_4)); }
	inline DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * get__tableCollection_4() const { return ____tableCollection_4; }
	inline DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 ** get_address_of__tableCollection_4() { return &____tableCollection_4; }
	inline void set__tableCollection_4(DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * value)
	{
		____tableCollection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableCollection_4), (void*)value);
	}

	inline static int32_t get_offset_of__relationCollection_5() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____relationCollection_5)); }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * get__relationCollection_5() const { return ____relationCollection_5; }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 ** get_address_of__relationCollection_5() { return &____relationCollection_5; }
	inline void set__relationCollection_5(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * value)
	{
		____relationCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relationCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of__extendedProperties_6() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____extendedProperties_6)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_6() const { return ____extendedProperties_6; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_6() { return &____extendedProperties_6; }
	inline void set__extendedProperties_6(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of__dataSetName_7() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____dataSetName_7)); }
	inline String_t* get__dataSetName_7() const { return ____dataSetName_7; }
	inline String_t** get_address_of__dataSetName_7() { return &____dataSetName_7; }
	inline void set__dataSetName_7(String_t* value)
	{
		____dataSetName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSetName_7), (void*)value);
	}

	inline static int32_t get_offset_of__datasetPrefix_8() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____datasetPrefix_8)); }
	inline String_t* get__datasetPrefix_8() const { return ____datasetPrefix_8; }
	inline String_t** get_address_of__datasetPrefix_8() { return &____datasetPrefix_8; }
	inline void set__datasetPrefix_8(String_t* value)
	{
		____datasetPrefix_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____datasetPrefix_8), (void*)value);
	}

	inline static int32_t get_offset_of__namespaceURI_9() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____namespaceURI_9)); }
	inline String_t* get__namespaceURI_9() const { return ____namespaceURI_9; }
	inline String_t** get_address_of__namespaceURI_9() { return &____namespaceURI_9; }
	inline void set__namespaceURI_9(String_t* value)
	{
		____namespaceURI_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namespaceURI_9), (void*)value);
	}

	inline static int32_t get_offset_of__enforceConstraints_10() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____enforceConstraints_10)); }
	inline bool get__enforceConstraints_10() const { return ____enforceConstraints_10; }
	inline bool* get_address_of__enforceConstraints_10() { return &____enforceConstraints_10; }
	inline void set__enforceConstraints_10(bool value)
	{
		____enforceConstraints_10 = value;
	}

	inline static int32_t get_offset_of__caseSensitive_11() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____caseSensitive_11)); }
	inline bool get__caseSensitive_11() const { return ____caseSensitive_11; }
	inline bool* get_address_of__caseSensitive_11() { return &____caseSensitive_11; }
	inline void set__caseSensitive_11(bool value)
	{
		____caseSensitive_11 = value;
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____culture_12)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_12), (void*)value);
	}

	inline static int32_t get_offset_of__cultureUserSet_13() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____cultureUserSet_13)); }
	inline bool get__cultureUserSet_13() const { return ____cultureUserSet_13; }
	inline bool* get_address_of__cultureUserSet_13() { return &____cultureUserSet_13; }
	inline void set__cultureUserSet_13(bool value)
	{
		____cultureUserSet_13 = value;
	}

	inline static int32_t get_offset_of__fInReadXml_14() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fInReadXml_14)); }
	inline bool get__fInReadXml_14() const { return ____fInReadXml_14; }
	inline bool* get_address_of__fInReadXml_14() { return &____fInReadXml_14; }
	inline void set__fInReadXml_14(bool value)
	{
		____fInReadXml_14 = value;
	}

	inline static int32_t get_offset_of__fInLoadDiffgram_15() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fInLoadDiffgram_15)); }
	inline bool get__fInLoadDiffgram_15() const { return ____fInLoadDiffgram_15; }
	inline bool* get_address_of__fInLoadDiffgram_15() { return &____fInLoadDiffgram_15; }
	inline void set__fInLoadDiffgram_15(bool value)
	{
		____fInLoadDiffgram_15 = value;
	}

	inline static int32_t get_offset_of__fTopLevelTable_16() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fTopLevelTable_16)); }
	inline bool get__fTopLevelTable_16() const { return ____fTopLevelTable_16; }
	inline bool* get_address_of__fTopLevelTable_16() { return &____fTopLevelTable_16; }
	inline void set__fTopLevelTable_16(bool value)
	{
		____fTopLevelTable_16 = value;
	}

	inline static int32_t get_offset_of__fInitInProgress_17() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fInitInProgress_17)); }
	inline bool get__fInitInProgress_17() const { return ____fInitInProgress_17; }
	inline bool* get_address_of__fInitInProgress_17() { return &____fInitInProgress_17; }
	inline void set__fInitInProgress_17(bool value)
	{
		____fInitInProgress_17 = value;
	}

	inline static int32_t get_offset_of__fEnableCascading_18() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fEnableCascading_18)); }
	inline bool get__fEnableCascading_18() const { return ____fEnableCascading_18; }
	inline bool* get_address_of__fEnableCascading_18() { return &____fEnableCascading_18; }
	inline void set__fEnableCascading_18(bool value)
	{
		____fEnableCascading_18 = value;
	}

	inline static int32_t get_offset_of__fIsSchemaLoading_19() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____fIsSchemaLoading_19)); }
	inline bool get__fIsSchemaLoading_19() const { return ____fIsSchemaLoading_19; }
	inline bool* get_address_of__fIsSchemaLoading_19() { return &____fIsSchemaLoading_19; }
	inline void set__fIsSchemaLoading_19(bool value)
	{
		____fIsSchemaLoading_19 = value;
	}

	inline static int32_t get_offset_of__mainTableName_20() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____mainTableName_20)); }
	inline String_t* get__mainTableName_20() const { return ____mainTableName_20; }
	inline String_t** get_address_of__mainTableName_20() { return &____mainTableName_20; }
	inline void set__mainTableName_20(String_t* value)
	{
		____mainTableName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainTableName_20), (void*)value);
	}

	inline static int32_t get_offset_of__remotingFormat_21() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____remotingFormat_21)); }
	inline int32_t get__remotingFormat_21() const { return ____remotingFormat_21; }
	inline int32_t* get_address_of__remotingFormat_21() { return &____remotingFormat_21; }
	inline void set__remotingFormat_21(int32_t value)
	{
		____remotingFormat_21 = value;
	}

	inline static int32_t get_offset_of__defaultViewManagerLock_22() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____defaultViewManagerLock_22)); }
	inline RuntimeObject * get__defaultViewManagerLock_22() const { return ____defaultViewManagerLock_22; }
	inline RuntimeObject ** get_address_of__defaultViewManagerLock_22() { return &____defaultViewManagerLock_22; }
	inline void set__defaultViewManagerLock_22(RuntimeObject * value)
	{
		____defaultViewManagerLock_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultViewManagerLock_22), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_24() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____objectID_24)); }
	inline int32_t get__objectID_24() const { return ____objectID_24; }
	inline int32_t* get_address_of__objectID_24() { return &____objectID_24; }
	inline void set__objectID_24(int32_t value)
	{
		____objectID_24 = value;
	}

	inline static int32_t get_offset_of__useDataSetSchemaOnly_26() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____useDataSetSchemaOnly_26)); }
	inline bool get__useDataSetSchemaOnly_26() const { return ____useDataSetSchemaOnly_26; }
	inline bool* get_address_of__useDataSetSchemaOnly_26() { return &____useDataSetSchemaOnly_26; }
	inline void set__useDataSetSchemaOnly_26(bool value)
	{
		____useDataSetSchemaOnly_26 = value;
	}

	inline static int32_t get_offset_of__udtIsWrapped_27() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ____udtIsWrapped_27)); }
	inline bool get__udtIsWrapped_27() const { return ____udtIsWrapped_27; }
	inline bool* get_address_of__udtIsWrapped_27() { return &____udtIsWrapped_27; }
	inline void set__udtIsWrapped_27(bool value)
	{
		____udtIsWrapped_27 = value;
	}

	inline static int32_t get_offset_of_PropertyChanging_28() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ___PropertyChanging_28)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanging_28() const { return ___PropertyChanging_28; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanging_28() { return &___PropertyChanging_28; }
	inline void set_PropertyChanging_28(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanging_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_28), (void*)value);
	}

	inline static int32_t get_offset_of_MergeFailed_29() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ___MergeFailed_29)); }
	inline MergeFailedEventHandler_t10E3E3F0E24DB1FC0DFEC8687C4D690F5CA57A41 * get_MergeFailed_29() const { return ___MergeFailed_29; }
	inline MergeFailedEventHandler_t10E3E3F0E24DB1FC0DFEC8687C4D690F5CA57A41 ** get_address_of_MergeFailed_29() { return &___MergeFailed_29; }
	inline void set_MergeFailed_29(MergeFailedEventHandler_t10E3E3F0E24DB1FC0DFEC8687C4D690F5CA57A41 * value)
	{
		___MergeFailed_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MergeFailed_29), (void*)value);
	}

	inline static int32_t get_offset_of_DataRowCreated_30() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ___DataRowCreated_30)); }
	inline DataRowCreatedEventHandler_tE60E7D5E5556337BEB5818E87E217E12F9987102 * get_DataRowCreated_30() const { return ___DataRowCreated_30; }
	inline DataRowCreatedEventHandler_tE60E7D5E5556337BEB5818E87E217E12F9987102 ** get_address_of_DataRowCreated_30() { return &___DataRowCreated_30; }
	inline void set_DataRowCreated_30(DataRowCreatedEventHandler_tE60E7D5E5556337BEB5818E87E217E12F9987102 * value)
	{
		___DataRowCreated_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataRowCreated_30), (void*)value);
	}

	inline static int32_t get_offset_of_ClearFunctionCalled_31() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B, ___ClearFunctionCalled_31)); }
	inline DataSetClearEventhandler_tBBB7A6036B60539D6C54C4BADC06DC0E14A7494E * get_ClearFunctionCalled_31() const { return ___ClearFunctionCalled_31; }
	inline DataSetClearEventhandler_tBBB7A6036B60539D6C54C4BADC06DC0E14A7494E ** get_address_of_ClearFunctionCalled_31() { return &___ClearFunctionCalled_31; }
	inline void set_ClearFunctionCalled_31(DataSetClearEventhandler_tBBB7A6036B60539D6C54C4BADC06DC0E14A7494E * value)
	{
		___ClearFunctionCalled_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClearFunctionCalled_31), (void*)value);
	}
};

struct DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B_StaticFields
{
public:
	// System.Int32 System.Data.DataSet::s_objectTypeCount
	int32_t ___s_objectTypeCount_23;
	// System.Xml.Schema.XmlSchemaComplexType System.Data.DataSet::s_schemaTypeForWSDL
	XmlSchemaComplexType_tE6F9E57AB3C89D88DAB166F1F0A3EC2276C2F062 * ___s_schemaTypeForWSDL_25;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_23() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B_StaticFields, ___s_objectTypeCount_23)); }
	inline int32_t get_s_objectTypeCount_23() const { return ___s_objectTypeCount_23; }
	inline int32_t* get_address_of_s_objectTypeCount_23() { return &___s_objectTypeCount_23; }
	inline void set_s_objectTypeCount_23(int32_t value)
	{
		___s_objectTypeCount_23 = value;
	}

	inline static int32_t get_offset_of_s_schemaTypeForWSDL_25() { return static_cast<int32_t>(offsetof(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B_StaticFields, ___s_schemaTypeForWSDL_25)); }
	inline XmlSchemaComplexType_tE6F9E57AB3C89D88DAB166F1F0A3EC2276C2F062 * get_s_schemaTypeForWSDL_25() const { return ___s_schemaTypeForWSDL_25; }
	inline XmlSchemaComplexType_tE6F9E57AB3C89D88DAB166F1F0A3EC2276C2F062 ** get_address_of_s_schemaTypeForWSDL_25() { return &___s_schemaTypeForWSDL_25; }
	inline void set_s_schemaTypeForWSDL_25(XmlSchemaComplexType_tE6F9E57AB3C89D88DAB166F1F0A3EC2276C2F062 * value)
	{
		___s_schemaTypeForWSDL_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_schemaTypeForWSDL_25), (void*)value);
	}
};


// System.Data.DataTable
struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject * ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_44;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_45;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_46;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_47;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_48;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_49;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_50;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_51;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* ____emptyDataRowArray_52;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ____propertyDescriptorCollectionCache_53;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* ____nestedParentRelations_54;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * ____dependentColumns_55;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_56;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowChangedDelegate_57;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowChangingDelegate_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowDeletingDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowDeletedDelegate_60;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * ____onColumnChangedDelegate_61;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * ____onColumnChangingDelegate_62;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * ____onTableClearingDelegate_63;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * ____onTableClearedDelegate_64;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * ____onTableNewRowDelegate_65;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ____onPropertyChangingDelegate_66;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * ____rowBuilder_67;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * ____delayedViews_68;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * ____dataViewListeners_69;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____rowDiffId_70;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * ____indexesLock_71;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_72;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_73;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_75;

public:
	inline static int32_t get_offset_of__dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dataSet_3)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_3() const { return ____dataSet_3; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_3() { return &____dataSet_3; }
	inline void set__dataSet_3(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_3), (void*)value);
	}

	inline static int32_t get_offset_of__defaultView_4() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____defaultView_4)); }
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * get__defaultView_4() const { return ____defaultView_4; }
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF ** get_address_of__defaultView_4() { return &____defaultView_4; }
	inline void set__defaultView_4(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * value)
	{
		____defaultView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultView_4), (void*)value);
	}

	inline static int32_t get_offset_of__nextRowID_5() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____nextRowID_5)); }
	inline int64_t get__nextRowID_5() const { return ____nextRowID_5; }
	inline int64_t* get_address_of__nextRowID_5() { return &____nextRowID_5; }
	inline void set__nextRowID_5(int64_t value)
	{
		____nextRowID_5 = value;
	}

	inline static int32_t get_offset_of__rowCollection_6() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowCollection_6)); }
	inline DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * get__rowCollection_6() const { return ____rowCollection_6; }
	inline DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 ** get_address_of__rowCollection_6() { return &____rowCollection_6; }
	inline void set__rowCollection_6(DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * value)
	{
		____rowCollection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowCollection_6), (void*)value);
	}

	inline static int32_t get_offset_of__columnCollection_7() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____columnCollection_7)); }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * get__columnCollection_7() const { return ____columnCollection_7; }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 ** get_address_of__columnCollection_7() { return &____columnCollection_7; }
	inline void set__columnCollection_7(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * value)
	{
		____columnCollection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnCollection_7), (void*)value);
	}

	inline static int32_t get_offset_of__constraintCollection_8() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____constraintCollection_8)); }
	inline ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * get__constraintCollection_8() const { return ____constraintCollection_8; }
	inline ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 ** get_address_of__constraintCollection_8() { return &____constraintCollection_8; }
	inline void set__constraintCollection_8(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * value)
	{
		____constraintCollection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintCollection_8), (void*)value);
	}

	inline static int32_t get_offset_of__elementColumnCount_9() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____elementColumnCount_9)); }
	inline int32_t get__elementColumnCount_9() const { return ____elementColumnCount_9; }
	inline int32_t* get_address_of__elementColumnCount_9() { return &____elementColumnCount_9; }
	inline void set__elementColumnCount_9(int32_t value)
	{
		____elementColumnCount_9 = value;
	}

	inline static int32_t get_offset_of__parentRelationsCollection_10() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____parentRelationsCollection_10)); }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * get__parentRelationsCollection_10() const { return ____parentRelationsCollection_10; }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 ** get_address_of__parentRelationsCollection_10() { return &____parentRelationsCollection_10; }
	inline void set__parentRelationsCollection_10(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * value)
	{
		____parentRelationsCollection_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentRelationsCollection_10), (void*)value);
	}

	inline static int32_t get_offset_of__childRelationsCollection_11() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____childRelationsCollection_11)); }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * get__childRelationsCollection_11() const { return ____childRelationsCollection_11; }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 ** get_address_of__childRelationsCollection_11() { return &____childRelationsCollection_11; }
	inline void set__childRelationsCollection_11(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * value)
	{
		____childRelationsCollection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childRelationsCollection_11), (void*)value);
	}

	inline static int32_t get_offset_of__recordManager_12() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____recordManager_12)); }
	inline RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * get__recordManager_12() const { return ____recordManager_12; }
	inline RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 ** get_address_of__recordManager_12() { return &____recordManager_12; }
	inline void set__recordManager_12(RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * value)
	{
		____recordManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordManager_12), (void*)value);
	}

	inline static int32_t get_offset_of__indexes_13() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____indexes_13)); }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * get__indexes_13() const { return ____indexes_13; }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D ** get_address_of__indexes_13() { return &____indexes_13; }
	inline void set__indexes_13(List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * value)
	{
		____indexes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexes_13), (void*)value);
	}

	inline static int32_t get_offset_of__shadowIndexes_14() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____shadowIndexes_14)); }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * get__shadowIndexes_14() const { return ____shadowIndexes_14; }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D ** get_address_of__shadowIndexes_14() { return &____shadowIndexes_14; }
	inline void set__shadowIndexes_14(List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * value)
	{
		____shadowIndexes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowIndexes_14), (void*)value);
	}

	inline static int32_t get_offset_of__shadowCount_15() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____shadowCount_15)); }
	inline int32_t get__shadowCount_15() const { return ____shadowCount_15; }
	inline int32_t* get_address_of__shadowCount_15() { return &____shadowCount_15; }
	inline void set__shadowCount_15(int32_t value)
	{
		____shadowCount_15 = value;
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____extendedProperties_16)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_16), (void*)value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableName_17), (void*)value);
	}

	inline static int32_t get_offset_of__tableNamespace_18() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tableNamespace_18)); }
	inline String_t* get__tableNamespace_18() const { return ____tableNamespace_18; }
	inline String_t** get_address_of__tableNamespace_18() { return &____tableNamespace_18; }
	inline void set__tableNamespace_18(String_t* value)
	{
		____tableNamespace_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableNamespace_18), (void*)value);
	}

	inline static int32_t get_offset_of__tablePrefix_19() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tablePrefix_19)); }
	inline String_t* get__tablePrefix_19() const { return ____tablePrefix_19; }
	inline String_t** get_address_of__tablePrefix_19() { return &____tablePrefix_19; }
	inline void set__tablePrefix_19(String_t* value)
	{
		____tablePrefix_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tablePrefix_19), (void*)value);
	}

	inline static int32_t get_offset_of__displayExpression_20() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____displayExpression_20)); }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * get__displayExpression_20() const { return ____displayExpression_20; }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 ** get_address_of__displayExpression_20() { return &____displayExpression_20; }
	inline void set__displayExpression_20(DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * value)
	{
		____displayExpression_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayExpression_20), (void*)value);
	}

	inline static int32_t get_offset_of__fNestedInDataset_21() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____fNestedInDataset_21)); }
	inline bool get__fNestedInDataset_21() const { return ____fNestedInDataset_21; }
	inline bool* get_address_of__fNestedInDataset_21() { return &____fNestedInDataset_21; }
	inline void set__fNestedInDataset_21(bool value)
	{
		____fNestedInDataset_21 = value;
	}

	inline static int32_t get_offset_of__culture_22() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____culture_22)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_22() const { return ____culture_22; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_22() { return &____culture_22; }
	inline void set__culture_22(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_22), (void*)value);
	}

	inline static int32_t get_offset_of__cultureUserSet_23() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____cultureUserSet_23)); }
	inline bool get__cultureUserSet_23() const { return ____cultureUserSet_23; }
	inline bool* get_address_of__cultureUserSet_23() { return &____cultureUserSet_23; }
	inline void set__cultureUserSet_23(bool value)
	{
		____cultureUserSet_23 = value;
	}

	inline static int32_t get_offset_of__compareInfo_24() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____compareInfo_24)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get__compareInfo_24() const { return ____compareInfo_24; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of__compareInfo_24() { return &____compareInfo_24; }
	inline void set__compareInfo_24(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		____compareInfo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____compareInfo_24), (void*)value);
	}

	inline static int32_t get_offset_of__compareFlags_25() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____compareFlags_25)); }
	inline int32_t get__compareFlags_25() const { return ____compareFlags_25; }
	inline int32_t* get_address_of__compareFlags_25() { return &____compareFlags_25; }
	inline void set__compareFlags_25(int32_t value)
	{
		____compareFlags_25 = value;
	}

	inline static int32_t get_offset_of__formatProvider_26() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____formatProvider_26)); }
	inline RuntimeObject* get__formatProvider_26() const { return ____formatProvider_26; }
	inline RuntimeObject** get_address_of__formatProvider_26() { return &____formatProvider_26; }
	inline void set__formatProvider_26(RuntimeObject* value)
	{
		____formatProvider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatProvider_26), (void*)value);
	}

	inline static int32_t get_offset_of__hashCodeProvider_27() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____hashCodeProvider_27)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__hashCodeProvider_27() const { return ____hashCodeProvider_27; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__hashCodeProvider_27() { return &____hashCodeProvider_27; }
	inline void set__hashCodeProvider_27(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____hashCodeProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashCodeProvider_27), (void*)value);
	}

	inline static int32_t get_offset_of__caseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____caseSensitive_28)); }
	inline bool get__caseSensitive_28() const { return ____caseSensitive_28; }
	inline bool* get_address_of__caseSensitive_28() { return &____caseSensitive_28; }
	inline void set__caseSensitive_28(bool value)
	{
		____caseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__caseSensitiveUserSet_29() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____caseSensitiveUserSet_29)); }
	inline bool get__caseSensitiveUserSet_29() const { return ____caseSensitiveUserSet_29; }
	inline bool* get_address_of__caseSensitiveUserSet_29() { return &____caseSensitiveUserSet_29; }
	inline void set__caseSensitiveUserSet_29(bool value)
	{
		____caseSensitiveUserSet_29 = value;
	}

	inline static int32_t get_offset_of__encodedTableName_30() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____encodedTableName_30)); }
	inline String_t* get__encodedTableName_30() const { return ____encodedTableName_30; }
	inline String_t** get_address_of__encodedTableName_30() { return &____encodedTableName_30; }
	inline void set__encodedTableName_30(String_t* value)
	{
		____encodedTableName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encodedTableName_30), (void*)value);
	}

	inline static int32_t get_offset_of__xmlText_31() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____xmlText_31)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__xmlText_31() const { return ____xmlText_31; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__xmlText_31() { return &____xmlText_31; }
	inline void set__xmlText_31(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____xmlText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xmlText_31), (void*)value);
	}

	inline static int32_t get_offset_of__colUnique_32() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____colUnique_32)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__colUnique_32() const { return ____colUnique_32; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__colUnique_32() { return &____colUnique_32; }
	inline void set__colUnique_32(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____colUnique_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colUnique_32), (void*)value);
	}

	inline static int32_t get_offset_of__minOccurs_33() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____minOccurs_33)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get__minOccurs_33() const { return ____minOccurs_33; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of__minOccurs_33() { return &____minOccurs_33; }
	inline void set__minOccurs_33(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		____minOccurs_33 = value;
	}

	inline static int32_t get_offset_of__maxOccurs_34() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____maxOccurs_34)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get__maxOccurs_34() const { return ____maxOccurs_34; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of__maxOccurs_34() { return &____maxOccurs_34; }
	inline void set__maxOccurs_34(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		____maxOccurs_34 = value;
	}

	inline static int32_t get_offset_of__repeatableElement_35() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____repeatableElement_35)); }
	inline bool get__repeatableElement_35() const { return ____repeatableElement_35; }
	inline bool* get_address_of__repeatableElement_35() { return &____repeatableElement_35; }
	inline void set__repeatableElement_35(bool value)
	{
		____repeatableElement_35 = value;
	}

	inline static int32_t get_offset_of__typeName_36() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____typeName_36)); }
	inline RuntimeObject * get__typeName_36() const { return ____typeName_36; }
	inline RuntimeObject ** get_address_of__typeName_36() { return &____typeName_36; }
	inline void set__typeName_36(RuntimeObject * value)
	{
		____typeName_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeName_36), (void*)value);
	}

	inline static int32_t get_offset_of__primaryKey_37() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____primaryKey_37)); }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * get__primaryKey_37() const { return ____primaryKey_37; }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 ** get_address_of__primaryKey_37() { return &____primaryKey_37; }
	inline void set__primaryKey_37(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * value)
	{
		____primaryKey_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryKey_37), (void*)value);
	}

	inline static int32_t get_offset_of__primaryIndex_38() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____primaryIndex_38)); }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* get__primaryIndex_38() const { return ____primaryIndex_38; }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A** get_address_of__primaryIndex_38() { return &____primaryIndex_38; }
	inline void set__primaryIndex_38(IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* value)
	{
		____primaryIndex_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryIndex_38), (void*)value);
	}

	inline static int32_t get_offset_of__delayedSetPrimaryKey_39() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____delayedSetPrimaryKey_39)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__delayedSetPrimaryKey_39() const { return ____delayedSetPrimaryKey_39; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__delayedSetPrimaryKey_39() { return &____delayedSetPrimaryKey_39; }
	inline void set__delayedSetPrimaryKey_39(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____delayedSetPrimaryKey_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedSetPrimaryKey_39), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndex_40() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndex_40)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndex_40() const { return ____loadIndex_40; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndex_40() { return &____loadIndex_40; }
	inline void set__loadIndex_40(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndex_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndex_40), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithOriginalAdded_41() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndexwithOriginalAdded_41)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndexwithOriginalAdded_41() const { return ____loadIndexwithOriginalAdded_41; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndexwithOriginalAdded_41() { return &____loadIndexwithOriginalAdded_41; }
	inline void set__loadIndexwithOriginalAdded_41(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndexwithOriginalAdded_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithOriginalAdded_41), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithCurrentDeleted_42() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndexwithCurrentDeleted_42)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndexwithCurrentDeleted_42() const { return ____loadIndexwithCurrentDeleted_42; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndexwithCurrentDeleted_42() { return &____loadIndexwithCurrentDeleted_42; }
	inline void set__loadIndexwithCurrentDeleted_42(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndexwithCurrentDeleted_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithCurrentDeleted_42), (void*)value);
	}

	inline static int32_t get_offset_of__suspendIndexEvents_43() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____suspendIndexEvents_43)); }
	inline int32_t get__suspendIndexEvents_43() const { return ____suspendIndexEvents_43; }
	inline int32_t* get_address_of__suspendIndexEvents_43() { return &____suspendIndexEvents_43; }
	inline void set__suspendIndexEvents_43(int32_t value)
	{
		____suspendIndexEvents_43 = value;
	}

	inline static int32_t get_offset_of__inDataLoad_44() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____inDataLoad_44)); }
	inline bool get__inDataLoad_44() const { return ____inDataLoad_44; }
	inline bool* get_address_of__inDataLoad_44() { return &____inDataLoad_44; }
	inline void set__inDataLoad_44(bool value)
	{
		____inDataLoad_44 = value;
	}

	inline static int32_t get_offset_of__schemaLoading_45() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____schemaLoading_45)); }
	inline bool get__schemaLoading_45() const { return ____schemaLoading_45; }
	inline bool* get_address_of__schemaLoading_45() { return &____schemaLoading_45; }
	inline void set__schemaLoading_45(bool value)
	{
		____schemaLoading_45 = value;
	}

	inline static int32_t get_offset_of__enforceConstraints_46() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____enforceConstraints_46)); }
	inline bool get__enforceConstraints_46() const { return ____enforceConstraints_46; }
	inline bool* get_address_of__enforceConstraints_46() { return &____enforceConstraints_46; }
	inline void set__enforceConstraints_46(bool value)
	{
		____enforceConstraints_46 = value;
	}

	inline static int32_t get_offset_of__suspendEnforceConstraints_47() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____suspendEnforceConstraints_47)); }
	inline bool get__suspendEnforceConstraints_47() const { return ____suspendEnforceConstraints_47; }
	inline bool* get_address_of__suspendEnforceConstraints_47() { return &____suspendEnforceConstraints_47; }
	inline void set__suspendEnforceConstraints_47(bool value)
	{
		____suspendEnforceConstraints_47 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_48() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ___fInitInProgress_48)); }
	inline bool get_fInitInProgress_48() const { return ___fInitInProgress_48; }
	inline bool* get_address_of_fInitInProgress_48() { return &___fInitInProgress_48; }
	inline void set_fInitInProgress_48(bool value)
	{
		___fInitInProgress_48 = value;
	}

	inline static int32_t get_offset_of__inLoad_49() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____inLoad_49)); }
	inline bool get__inLoad_49() const { return ____inLoad_49; }
	inline bool* get_address_of__inLoad_49() { return &____inLoad_49; }
	inline void set__inLoad_49(bool value)
	{
		____inLoad_49 = value;
	}

	inline static int32_t get_offset_of__fInLoadDiffgram_50() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____fInLoadDiffgram_50)); }
	inline bool get__fInLoadDiffgram_50() const { return ____fInLoadDiffgram_50; }
	inline bool* get_address_of__fInLoadDiffgram_50() { return &____fInLoadDiffgram_50; }
	inline void set__fInLoadDiffgram_50(bool value)
	{
		____fInLoadDiffgram_50 = value;
	}

	inline static int32_t get_offset_of__isTypedDataTable_51() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____isTypedDataTable_51)); }
	inline uint8_t get__isTypedDataTable_51() const { return ____isTypedDataTable_51; }
	inline uint8_t* get_address_of__isTypedDataTable_51() { return &____isTypedDataTable_51; }
	inline void set__isTypedDataTable_51(uint8_t value)
	{
		____isTypedDataTable_51 = value;
	}

	inline static int32_t get_offset_of__emptyDataRowArray_52() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____emptyDataRowArray_52)); }
	inline DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* get__emptyDataRowArray_52() const { return ____emptyDataRowArray_52; }
	inline DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD** get_address_of__emptyDataRowArray_52() { return &____emptyDataRowArray_52; }
	inline void set__emptyDataRowArray_52(DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* value)
	{
		____emptyDataRowArray_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDataRowArray_52), (void*)value);
	}

	inline static int32_t get_offset_of__propertyDescriptorCollectionCache_53() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____propertyDescriptorCollectionCache_53)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get__propertyDescriptorCollectionCache_53() const { return ____propertyDescriptorCollectionCache_53; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of__propertyDescriptorCollectionCache_53() { return &____propertyDescriptorCollectionCache_53; }
	inline void set__propertyDescriptorCollectionCache_53(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		____propertyDescriptorCollectionCache_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyDescriptorCollectionCache_53), (void*)value);
	}

	inline static int32_t get_offset_of__nestedParentRelations_54() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____nestedParentRelations_54)); }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* get__nestedParentRelations_54() const { return ____nestedParentRelations_54; }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C** get_address_of__nestedParentRelations_54() { return &____nestedParentRelations_54; }
	inline void set__nestedParentRelations_54(DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* value)
	{
		____nestedParentRelations_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nestedParentRelations_54), (void*)value);
	}

	inline static int32_t get_offset_of__dependentColumns_55() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dependentColumns_55)); }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * get__dependentColumns_55() const { return ____dependentColumns_55; }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 ** get_address_of__dependentColumns_55() { return &____dependentColumns_55; }
	inline void set__dependentColumns_55(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * value)
	{
		____dependentColumns_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dependentColumns_55), (void*)value);
	}

	inline static int32_t get_offset_of__mergingData_56() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____mergingData_56)); }
	inline bool get__mergingData_56() const { return ____mergingData_56; }
	inline bool* get_address_of__mergingData_56() { return &____mergingData_56; }
	inline void set__mergingData_56(bool value)
	{
		____mergingData_56 = value;
	}

	inline static int32_t get_offset_of__onRowChangedDelegate_57() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowChangedDelegate_57)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowChangedDelegate_57() const { return ____onRowChangedDelegate_57; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowChangedDelegate_57() { return &____onRowChangedDelegate_57; }
	inline void set__onRowChangedDelegate_57(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowChangedDelegate_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangedDelegate_57), (void*)value);
	}

	inline static int32_t get_offset_of__onRowChangingDelegate_58() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowChangingDelegate_58)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowChangingDelegate_58() const { return ____onRowChangingDelegate_58; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowChangingDelegate_58() { return &____onRowChangingDelegate_58; }
	inline void set__onRowChangingDelegate_58(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowChangingDelegate_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangingDelegate_58), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletingDelegate_59() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowDeletingDelegate_59)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowDeletingDelegate_59() const { return ____onRowDeletingDelegate_59; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowDeletingDelegate_59() { return &____onRowDeletingDelegate_59; }
	inline void set__onRowDeletingDelegate_59(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowDeletingDelegate_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletingDelegate_59), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletedDelegate_60() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowDeletedDelegate_60)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowDeletedDelegate_60() const { return ____onRowDeletedDelegate_60; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowDeletedDelegate_60() { return &____onRowDeletedDelegate_60; }
	inline void set__onRowDeletedDelegate_60(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowDeletedDelegate_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletedDelegate_60), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangedDelegate_61() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onColumnChangedDelegate_61)); }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * get__onColumnChangedDelegate_61() const { return ____onColumnChangedDelegate_61; }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 ** get_address_of__onColumnChangedDelegate_61() { return &____onColumnChangedDelegate_61; }
	inline void set__onColumnChangedDelegate_61(DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * value)
	{
		____onColumnChangedDelegate_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangedDelegate_61), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangingDelegate_62() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onColumnChangingDelegate_62)); }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * get__onColumnChangingDelegate_62() const { return ____onColumnChangingDelegate_62; }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 ** get_address_of__onColumnChangingDelegate_62() { return &____onColumnChangingDelegate_62; }
	inline void set__onColumnChangingDelegate_62(DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * value)
	{
		____onColumnChangingDelegate_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangingDelegate_62), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearingDelegate_63() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableClearingDelegate_63)); }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * get__onTableClearingDelegate_63() const { return ____onTableClearingDelegate_63; }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 ** get_address_of__onTableClearingDelegate_63() { return &____onTableClearingDelegate_63; }
	inline void set__onTableClearingDelegate_63(DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * value)
	{
		____onTableClearingDelegate_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearingDelegate_63), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearedDelegate_64() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableClearedDelegate_64)); }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * get__onTableClearedDelegate_64() const { return ____onTableClearedDelegate_64; }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 ** get_address_of__onTableClearedDelegate_64() { return &____onTableClearedDelegate_64; }
	inline void set__onTableClearedDelegate_64(DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * value)
	{
		____onTableClearedDelegate_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearedDelegate_64), (void*)value);
	}

	inline static int32_t get_offset_of__onTableNewRowDelegate_65() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableNewRowDelegate_65)); }
	inline DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * get__onTableNewRowDelegate_65() const { return ____onTableNewRowDelegate_65; }
	inline DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B ** get_address_of__onTableNewRowDelegate_65() { return &____onTableNewRowDelegate_65; }
	inline void set__onTableNewRowDelegate_65(DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * value)
	{
		____onTableNewRowDelegate_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableNewRowDelegate_65), (void*)value);
	}

	inline static int32_t get_offset_of__onPropertyChangingDelegate_66() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onPropertyChangingDelegate_66)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get__onPropertyChangingDelegate_66() const { return ____onPropertyChangingDelegate_66; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of__onPropertyChangingDelegate_66() { return &____onPropertyChangingDelegate_66; }
	inline void set__onPropertyChangingDelegate_66(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		____onPropertyChangingDelegate_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPropertyChangingDelegate_66), (void*)value);
	}

	inline static int32_t get_offset_of__rowBuilder_67() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowBuilder_67)); }
	inline DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * get__rowBuilder_67() const { return ____rowBuilder_67; }
	inline DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 ** get_address_of__rowBuilder_67() { return &____rowBuilder_67; }
	inline void set__rowBuilder_67(DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * value)
	{
		____rowBuilder_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowBuilder_67), (void*)value);
	}

	inline static int32_t get_offset_of__delayedViews_68() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____delayedViews_68)); }
	inline List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * get__delayedViews_68() const { return ____delayedViews_68; }
	inline List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 ** get_address_of__delayedViews_68() { return &____delayedViews_68; }
	inline void set__delayedViews_68(List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * value)
	{
		____delayedViews_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedViews_68), (void*)value);
	}

	inline static int32_t get_offset_of__dataViewListeners_69() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dataViewListeners_69)); }
	inline List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * get__dataViewListeners_69() const { return ____dataViewListeners_69; }
	inline List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 ** get_address_of__dataViewListeners_69() { return &____dataViewListeners_69; }
	inline void set__dataViewListeners_69(List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * value)
	{
		____dataViewListeners_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataViewListeners_69), (void*)value);
	}

	inline static int32_t get_offset_of__rowDiffId_70() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowDiffId_70)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__rowDiffId_70() const { return ____rowDiffId_70; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__rowDiffId_70() { return &____rowDiffId_70; }
	inline void set__rowDiffId_70(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____rowDiffId_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowDiffId_70), (void*)value);
	}

	inline static int32_t get_offset_of__indexesLock_71() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____indexesLock_71)); }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * get__indexesLock_71() const { return ____indexesLock_71; }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F ** get_address_of__indexesLock_71() { return &____indexesLock_71; }
	inline void set__indexesLock_71(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * value)
	{
		____indexesLock_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexesLock_71), (void*)value);
	}

	inline static int32_t get_offset_of__ukColumnPositionForInference_72() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____ukColumnPositionForInference_72)); }
	inline int32_t get__ukColumnPositionForInference_72() const { return ____ukColumnPositionForInference_72; }
	inline int32_t* get_address_of__ukColumnPositionForInference_72() { return &____ukColumnPositionForInference_72; }
	inline void set__ukColumnPositionForInference_72(int32_t value)
	{
		____ukColumnPositionForInference_72 = value;
	}

	inline static int32_t get_offset_of__remotingFormat_73() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____remotingFormat_73)); }
	inline int32_t get__remotingFormat_73() const { return ____remotingFormat_73; }
	inline int32_t* get_address_of__remotingFormat_73() { return &____remotingFormat_73; }
	inline void set__remotingFormat_73(int32_t value)
	{
		____remotingFormat_73 = value;
	}

	inline static int32_t get_offset_of__objectID_75() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____objectID_75)); }
	inline int32_t get__objectID_75() const { return ____objectID_75; }
	inline int32_t* get_address_of__objectID_75() { return &____objectID_75; }
	inline void set__objectID_75(int32_t value)
	{
		____objectID_75 = value;
	}
};

struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_StaticFields
{
public:
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_74;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_74() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_StaticFields, ___s_objectTypeCount_74)); }
	inline int32_t get_s_objectTypeCount_74() const { return ___s_objectTypeCount_74; }
	inline int32_t* get_address_of_s_objectTypeCount_74() { return &___s_objectTypeCount_74; }
	inline void set_s_objectTypeCount_74(int32_t value)
	{
		___s_objectTypeCount_74 = value;
	}
};


// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD  : public Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B
{
public:
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_5;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_6;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_7;
	// System.Data.DataKey System.Data.ForeignKeyConstraint::_childKey
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ____childKey_8;
	// System.Data.DataKey System.Data.ForeignKeyConstraint::_parentKey
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ____parentKey_9;
	// System.String System.Data.ForeignKeyConstraint::_constraintName
	String_t* ____constraintName_10;
	// System.String[] System.Data.ForeignKeyConstraint::_parentColumnNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____parentColumnNames_11;
	// System.String[] System.Data.ForeignKeyConstraint::_childColumnNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____childColumnNames_12;
	// System.String System.Data.ForeignKeyConstraint::_parentTableName
	String_t* ____parentTableName_13;

public:
	inline static int32_t get_offset_of__deleteRule_5() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____deleteRule_5)); }
	inline int32_t get__deleteRule_5() const { return ____deleteRule_5; }
	inline int32_t* get_address_of__deleteRule_5() { return &____deleteRule_5; }
	inline void set__deleteRule_5(int32_t value)
	{
		____deleteRule_5 = value;
	}

	inline static int32_t get_offset_of__updateRule_6() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____updateRule_6)); }
	inline int32_t get__updateRule_6() const { return ____updateRule_6; }
	inline int32_t* get_address_of__updateRule_6() { return &____updateRule_6; }
	inline void set__updateRule_6(int32_t value)
	{
		____updateRule_6 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_7() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____acceptRejectRule_7)); }
	inline int32_t get__acceptRejectRule_7() const { return ____acceptRejectRule_7; }
	inline int32_t* get_address_of__acceptRejectRule_7() { return &____acceptRejectRule_7; }
	inline void set__acceptRejectRule_7(int32_t value)
	{
		____acceptRejectRule_7 = value;
	}

	inline static int32_t get_offset_of__childKey_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____childKey_8)); }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  get__childKey_8() const { return ____childKey_8; }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * get_address_of__childKey_8() { return &____childKey_8; }
	inline void set__childKey_8(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  value)
	{
		____childKey_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____childKey_8))->____columns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__parentKey_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____parentKey_9)); }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  get__parentKey_9() const { return ____parentKey_9; }
	inline DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * get_address_of__parentKey_9() { return &____parentKey_9; }
	inline void set__parentKey_9(DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  value)
	{
		____parentKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____parentKey_9))->____columns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constraintName_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____constraintName_10)); }
	inline String_t* get__constraintName_10() const { return ____constraintName_10; }
	inline String_t** get_address_of__constraintName_10() { return &____constraintName_10; }
	inline void set__constraintName_10(String_t* value)
	{
		____constraintName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintName_10), (void*)value);
	}

	inline static int32_t get_offset_of__parentColumnNames_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____parentColumnNames_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__parentColumnNames_11() const { return ____parentColumnNames_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__parentColumnNames_11() { return &____parentColumnNames_11; }
	inline void set__parentColumnNames_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____parentColumnNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentColumnNames_11), (void*)value);
	}

	inline static int32_t get_offset_of__childColumnNames_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____childColumnNames_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__childColumnNames_12() const { return ____childColumnNames_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__childColumnNames_12() { return &____childColumnNames_12; }
	inline void set__childColumnNames_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____childColumnNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childColumnNames_12), (void*)value);
	}

	inline static int32_t get_offset_of__parentTableName_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD, ____parentTableName_13)); }
	inline String_t* get__parentTableName_13() const { return ____parentTableName_13; }
	inline String_t** get_address_of__parentTableName_13() { return &____parentTableName_13; }
	inline void set__parentTableName_13(String_t* value)
	{
		____parentTableName_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentTableName_13), (void*)value);
	}
};


// System.Data.Index
struct Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Index::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_0;
	// System.Data.IndexField[] System.Data.Index::_indexFields
	IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* ____indexFields_1;
	// System.Comparison`1<System.Data.DataRow> System.Data.Index::_comparison
	Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * ____comparison_2;
	// System.Data.DataViewRowState System.Data.Index::_recordStates
	int32_t ____recordStates_3;
	// System.WeakReference System.Data.Index::_rowFilter
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____rowFilter_4;
	// System.Data.Index/IndexTree System.Data.Index::_records
	IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * ____records_5;
	// System.Int32 System.Data.Index::_recordCount
	int32_t ____recordCount_6;
	// System.Int32 System.Data.Index::_refCount
	int32_t ____refCount_7;
	// System.Data.Listeners`1<System.Data.DataViewListener> System.Data.Index::_listeners
	Listeners_1_t7C998D26DFD40B26063C9203609F507B8C2FF5E9 * ____listeners_8;
	// System.Boolean System.Data.Index::_suspendEvents
	bool ____suspendEvents_9;
	// System.Boolean System.Data.Index::_isSharable
	bool ____isSharable_10;
	// System.Boolean System.Data.Index::_hasRemoteAggregate
	bool ____hasRemoteAggregate_11;
	// System.Int32 System.Data.Index::_objectID
	int32_t ____objectID_13;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____table_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_0() const { return ____table_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_0), (void*)value);
	}

	inline static int32_t get_offset_of__indexFields_1() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____indexFields_1)); }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* get__indexFields_1() const { return ____indexFields_1; }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A** get_address_of__indexFields_1() { return &____indexFields_1; }
	inline void set__indexFields_1(IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* value)
	{
		____indexFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexFields_1), (void*)value);
	}

	inline static int32_t get_offset_of__comparison_2() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____comparison_2)); }
	inline Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * get__comparison_2() const { return ____comparison_2; }
	inline Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F ** get_address_of__comparison_2() { return &____comparison_2; }
	inline void set__comparison_2(Comparison_1_t07198BED61FE8C00A502FC75C933BD6121298D0F * value)
	{
		____comparison_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparison_2), (void*)value);
	}

	inline static int32_t get_offset_of__recordStates_3() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____recordStates_3)); }
	inline int32_t get__recordStates_3() const { return ____recordStates_3; }
	inline int32_t* get_address_of__recordStates_3() { return &____recordStates_3; }
	inline void set__recordStates_3(int32_t value)
	{
		____recordStates_3 = value;
	}

	inline static int32_t get_offset_of__rowFilter_4() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____rowFilter_4)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__rowFilter_4() const { return ____rowFilter_4; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__rowFilter_4() { return &____rowFilter_4; }
	inline void set__rowFilter_4(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____rowFilter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowFilter_4), (void*)value);
	}

	inline static int32_t get_offset_of__records_5() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____records_5)); }
	inline IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * get__records_5() const { return ____records_5; }
	inline IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D ** get_address_of__records_5() { return &____records_5; }
	inline void set__records_5(IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * value)
	{
		____records_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____records_5), (void*)value);
	}

	inline static int32_t get_offset_of__recordCount_6() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____recordCount_6)); }
	inline int32_t get__recordCount_6() const { return ____recordCount_6; }
	inline int32_t* get_address_of__recordCount_6() { return &____recordCount_6; }
	inline void set__recordCount_6(int32_t value)
	{
		____recordCount_6 = value;
	}

	inline static int32_t get_offset_of__refCount_7() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____refCount_7)); }
	inline int32_t get__refCount_7() const { return ____refCount_7; }
	inline int32_t* get_address_of__refCount_7() { return &____refCount_7; }
	inline void set__refCount_7(int32_t value)
	{
		____refCount_7 = value;
	}

	inline static int32_t get_offset_of__listeners_8() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____listeners_8)); }
	inline Listeners_1_t7C998D26DFD40B26063C9203609F507B8C2FF5E9 * get__listeners_8() const { return ____listeners_8; }
	inline Listeners_1_t7C998D26DFD40B26063C9203609F507B8C2FF5E9 ** get_address_of__listeners_8() { return &____listeners_8; }
	inline void set__listeners_8(Listeners_1_t7C998D26DFD40B26063C9203609F507B8C2FF5E9 * value)
	{
		____listeners_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_8), (void*)value);
	}

	inline static int32_t get_offset_of__suspendEvents_9() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____suspendEvents_9)); }
	inline bool get__suspendEvents_9() const { return ____suspendEvents_9; }
	inline bool* get_address_of__suspendEvents_9() { return &____suspendEvents_9; }
	inline void set__suspendEvents_9(bool value)
	{
		____suspendEvents_9 = value;
	}

	inline static int32_t get_offset_of__isSharable_10() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____isSharable_10)); }
	inline bool get__isSharable_10() const { return ____isSharable_10; }
	inline bool* get_address_of__isSharable_10() { return &____isSharable_10; }
	inline void set__isSharable_10(bool value)
	{
		____isSharable_10 = value;
	}

	inline static int32_t get_offset_of__hasRemoteAggregate_11() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____hasRemoteAggregate_11)); }
	inline bool get__hasRemoteAggregate_11() const { return ____hasRemoteAggregate_11; }
	inline bool* get_address_of__hasRemoteAggregate_11() { return &____hasRemoteAggregate_11; }
	inline void set__hasRemoteAggregate_11(bool value)
	{
		____hasRemoteAggregate_11 = value;
	}

	inline static int32_t get_offset_of__objectID_13() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663, ____objectID_13)); }
	inline int32_t get__objectID_13() const { return ____objectID_13; }
	inline int32_t* get_address_of__objectID_13() { return &____objectID_13; }
	inline void set__objectID_13(int32_t value)
	{
		____objectID_13 = value;
	}
};

struct Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663_StaticFields
{
public:
	// System.Int32 System.Data.Index::s_objectTypeCount
	int32_t ___s_objectTypeCount_12;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_12() { return static_cast<int32_t>(offsetof(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663_StaticFields, ___s_objectTypeCount_12)); }
	inline int32_t get_s_objectTypeCount_12() const { return ___s_objectTypeCount_12; }
	inline int32_t* get_address_of_s_objectTypeCount_12() { return &___s_objectTypeCount_12; }
	inline void set_s_objectTypeCount_12(int32_t value)
	{
		___s_objectTypeCount_12 = value;
	}
};


// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::listChangedType
	int32_t ___listChangedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * ___propDesc_4;

public:
	inline static int32_t get_offset_of_listChangedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632, ___listChangedType_1)); }
	inline int32_t get_listChangedType_1() const { return ___listChangedType_1; }
	inline int32_t* get_address_of_listChangedType_1() { return &___listChangedType_1; }
	inline void set_listChangedType_1(int32_t value)
	{
		___listChangedType_1 = value;
	}

	inline static int32_t get_offset_of_newIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632, ___newIndex_2)); }
	inline int32_t get_newIndex_2() const { return ___newIndex_2; }
	inline int32_t* get_address_of_newIndex_2() { return &___newIndex_2; }
	inline void set_newIndex_2(int32_t value)
	{
		___newIndex_2 = value;
	}

	inline static int32_t get_offset_of_oldIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632, ___oldIndex_3)); }
	inline int32_t get_oldIndex_3() const { return ___oldIndex_3; }
	inline int32_t* get_address_of_oldIndex_3() { return &___oldIndex_3; }
	inline void set_oldIndex_3(int32_t value)
	{
		___oldIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632, ___propDesc_4)); }
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propDesc_4), (void*)value);
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


// System.Data.ExpressionParser/ReservedWords
struct ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62 
{
public:
	// System.String System.Data.ExpressionParser/ReservedWords::_word
	String_t* ____word_0;
	// System.Data.Tokens System.Data.ExpressionParser/ReservedWords::_token
	int32_t ____token_1;
	// System.Int32 System.Data.ExpressionParser/ReservedWords::_op
	int32_t ____op_2;

public:
	inline static int32_t get_offset_of__word_0() { return static_cast<int32_t>(offsetof(ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62, ____word_0)); }
	inline String_t* get__word_0() const { return ____word_0; }
	inline String_t** get_address_of__word_0() { return &____word_0; }
	inline void set__word_0(String_t* value)
	{
		____word_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____word_0), (void*)value);
	}

	inline static int32_t get_offset_of__token_1() { return static_cast<int32_t>(offsetof(ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62, ____token_1)); }
	inline int32_t get__token_1() const { return ____token_1; }
	inline int32_t* get_address_of__token_1() { return &____token_1; }
	inline void set__token_1(int32_t value)
	{
		____token_1 = value;
	}

	inline static int32_t get_offset_of__op_2() { return static_cast<int32_t>(offsetof(ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62, ____op_2)); }
	inline int32_t get__op_2() const { return ____op_2; }
	inline int32_t* get_address_of__op_2() { return &____op_2; }
	inline void set__op_2(int32_t value)
	{
		____op_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.ExpressionParser/ReservedWords
struct ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_pinvoke
{
	char* ____word_0;
	int32_t ____token_1;
	int32_t ____op_2;
};
// Native definition for COM marshalling of System.Data.ExpressionParser/ReservedWords
struct ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_com
{
	Il2CppChar* ____word_0;
	int32_t ____token_1;
	int32_t ____op_2;
};

// System.Data.Index/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t0A216700852A2F8E0454E0E7A63AF4AB7200DFAB  : public RuntimeObject
{
public:
	// System.ComponentModel.ListChangedType System.Data.Index/<>c__DisplayClass86_0::changedType
	int32_t ___changedType_0;

public:
	inline static int32_t get_offset_of_changedType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t0A216700852A2F8E0454E0E7A63AF4AB7200DFAB, ___changedType_0)); }
	inline int32_t get_changedType_0() const { return ___changedType_0; }
	inline int32_t* get_address_of_changedType_0() { return &___changedType_0; }
	inline void set_changedType_0(int32_t value)
	{
		___changedType_0 = value;
	}
};


// System.Data.XmlToDatasetMap/XmlNodeIdHashtable
struct XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:
	// System.Data.XmlToDatasetMap/XmlNodeIdentety System.Data.XmlToDatasetMap/XmlNodeIdHashtable::_id
	XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * ____id_21;

public:
	inline static int32_t get_offset_of__id_21() { return static_cast<int32_t>(offsetof(XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E, ____id_21)); }
	inline XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * get__id_21() const { return ____id_21; }
	inline XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 ** get_address_of__id_21() { return &____id_21; }
	inline void set__id_21(XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * value)
	{
		____id_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____id_21), (void*)value);
	}
};


// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77  : public MulticastDelegate_t
{
public:

public:
};


// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63  : public RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49
{
public:

public:
};


// System.Data.Index/IndexTree
struct IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D  : public RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11
{
public:
	// System.Data.Index System.Data.Index/IndexTree::_index
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____index_9;

public:
	inline static int32_t get_offset_of__index_9() { return static_cast<int32_t>(offsetof(IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D, ____index_9)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__index_9() const { return ____index_9; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__index_9() { return &____index_9; }
	inline void set__index_9(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____index_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____index_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Data.DataRelation[]
struct DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * m_Items[1];

public:
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * m_Items[1];

public:
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Data.RBTree`1<System.Object>::.ctor(System.Data.TreeAccessMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_mEF554A61D805B516456AFA15A75BFDE7C9BBAE91_gshared (RBTree_1_tDF6F84A8D1EE6E176828EB4C2FCB56C871C78AD2 * __this, int32_t ___accessMethod0, const RuntimeMethod* method);
// System.Void System.Data.RBTree`1<System.Int32>::.ctor(System.Data.TreeAccessMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32_gshared (RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11 * __this, int32_t ___accessMethod0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Data.ExpressionNode::.ctor(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionNode__ctor_m562380932E2F97F1BB5B3F2C13D4FEEDA7029F97 (ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection__ctor_m0064756431658F3229B6D9951D946247F7C8294A (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationDataSetNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationDataSetNull_m214CAC3812CB7EF709A8D4DA8C4F6AFC69F50A76 (const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_Clear_m9DD81C7E75101711513EFEE1787C70AC0B886AB5 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationOutOfRange(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationOutOfRange_mFEAFF706E00A243A6476921DC0841EEE54C6503B (RuntimeObject * ___index0, const RuntimeMethod* method);
// System.Int32 System.Data.DataRelationCollection::InternalIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRelationCollection_InternalIndexOf_mFD60BB18EC6DD8AEA2B75CE7BA9669D88937F51E (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::CaseInsensitiveNameConflict(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_CaseInsensitiveNameConflict_m84FE47D0CE6994026D8D02D84EE4A2D61D48EC38 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::AddCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_AddCore_m04124225B09E1CBC9A66196079E4C7D77CEBB3E8 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Data.DataSet System.Data.DataTable::get_DataSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::ForeignRelation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_ForeignRelation_mE044A34FCC171ADC1EE91A70FC1A13DF55B82802 (const RuntimeMethod* method);
// System.Void System.Data.DataRelation::CheckState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelation_CheckState_m9411727BFC3698B6BC640474F81839F30456334E (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelation::CheckNestedRelations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelation_CheckNestedRelations_m34850D2B1B87AA62E5681EF1912D3B69A714957C (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Data.DataRelationCollection::AssignName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataRelationCollection_AssignName_m501E3D873928D27EAFEFDE8831198612E60D0BE4 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::RegisterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_RegisterName_mD6A114394B1C407C5669415EC2F977E6BD54E2AE (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Data.DataKey System.Data.DataRelation::get_ChildKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  DataRelation_get_ChildKey_mFC7FBCC367BCC1A0E16A5FD7CE2D87F7A3C33FA7 (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Boolean System.Data.DataKey::ColumnsEqual(System.Data.DataKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataKey_ColumnsEqual_mA609AD58D467F60B7F797F167E6BF71B42CF0AF2 (DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * __this, DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  ___key0, const RuntimeMethod* method);
// System.Data.DataKey System.Data.DataRelation::get_ParentKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  DataRelation_get_ParentKey_m8BCCB9EDC37529617F065CD00034A032E4D8332E (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationAlreadyExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationAlreadyExists_m65473285BA5DD0085D8A3332C9A78616CF5C9E12 (const RuntimeMethod* method);
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * DataTable_get_ChildRelations_mA386665CBE9975EB74C28B211062B95BED63A8A5 (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::Add(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_Add_mE0427AE8FE9BEDCE37E502016C376AD5AE6AE705 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * DataTable_get_ParentRelations_m89183A6461A73E959687ACC469962675B4EA5ADF (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelation::SetDataSet(System.Data.DataSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelation_SetDataSet_m6DDDC3E921CB75FA9C398AAB118DF5D30D15D060 (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ___dataSet0, const RuntimeMethod* method);
// System.Data.Index System.Data.DataKey::GetSortIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * DataKey_GetSortIndex_m9F8D5435AFD57BC7D6ADCBCFE63030D6ACC73717 (DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 * __this, const RuntimeMethod* method);
// System.Void System.Data.Index::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index_AddRef_m28342C7ABFAC84E3BB91746BCC3B820F2F7CF708 (Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataTable::CacheNestedParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_CacheNestedParent_mD0DC4516392D210EE9B09DA759AAF322B541429E (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * DataTable_get_Constraints_m5A2544AA333C8296B27056F249C2328E81A0A975_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumnsReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* DataRelation_get_ParentColumnsReference_m9DF80D987F3D9E7B8417E1628A1653A2E4A0E465 (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumnsReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* DataRelation_get_ChildColumnsReference_mB6DEBD0DACD49D895428210E33EAA19E27A907FE (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, const RuntimeMethod* method);
// System.Data.ForeignKeyConstraint System.Data.ConstraintCollection::FindForeignKeyConstraint(System.Data.DataColumn[],System.Data.DataColumn[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * ConstraintCollection_FindForeignKeyConstraint_mD35FCECB80950CE1680196710711FB5C9A0B5B4E (ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * __this, DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ___parentColumns0, DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ___childColumns1, const RuntimeMethod* method);
// System.Void System.Data.ForeignKeyConstraint::.ctor(System.Data.DataColumn[],System.Data.DataColumn[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForeignKeyConstraint__ctor_m87EE28827B120AC10241458E9F91F55F53B4083B (ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * __this, DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ___parentColumns0, DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ___childColumns1, const RuntimeMethod* method);
// System.Void System.Data.ConstraintCollection::Add(System.Data.Constraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintCollection_Add_m18C4C121B30F207DB169BF5371505A2895D54E5D (ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * __this, Constraint_t9340D631C91CD0399D286378A00A40D2FA46EC4B * ___constraint0, const RuntimeMethod* method);
// System.Boolean System.Data.Common.ADP::IsCatchableExceptionType(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ADP_IsCatchableExceptionType_m273E4E4A0FBAACB7DC2A8EDF0974C9A9E312F36F (Exception_t * ___e0, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::TraceExceptionWithoutRethrow(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_TraceExceptionWithoutRethrow_m6367C97E51FECAC289B29A931D41BB2EAD0FF5DE (Exception_t * ___e0, const RuntimeMethod* method);
// System.Data.UniqueConstraint System.Data.ConstraintCollection::FindKeyConstraint(System.Data.DataColumn[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ConstraintCollection_FindKeyConstraint_m9907C5E227EAE005D018E01E790FB6D05DCA6A60 (ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * __this, DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ___columns0, const RuntimeMethod* method);
// System.Void System.Data.DataRelation::SetParentKeyConstraint(System.Data.UniqueConstraint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataRelation_SetParentKeyConstraint_m01B06666313B33781C64456936F5677060DCEB74_inline (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ___value0, const RuntimeMethod* method);
// System.Void System.Data.DataRelation::SetChildKeyConstraint(System.Data.ForeignKeyConstraint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataRelation_SetChildKeyConstraint_mC5248944C17EFEBB2E386BAD87EDDDD29A010BD0_inline (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * ___value0, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::RemoveCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_RemoveCore_mE09AD0C5FC6DADF9AE9FFDEE0339660D100F2AE2 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Void System.Data.DataSet::OnRemoveRelationHack(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_OnRemoveRelationHack_m634159374C17AC0A31CC96F750A62A5B7175FFC5 (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Int32 System.Data.Index::RemoveRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_RemoveRef_m3D9985D587F8FD6A4E209DD9D512A65EC2AC9218 (Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::Remove(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_Remove_m52CAC79D42F8ADFB457296DACBBBD72EA16CFA36 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection::UnregisterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRelationCollection_UnregisterName_m5273EE3A598D199B17D85597010A3DD999B8A6F2 (DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationDoesNotExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationDoesNotExist_mBF363A0B708110C510DA507077C43B6083EB5701 (const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationTableNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationTableNull_m9855D653A8D278FB8F1C9E9422302A120796F62C (const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::RelationTableWasRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_RelationTableWasRemoved_m8027F00A53A15C35DAD79ECE2414B98FFD6BC635 (const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::EnsureDataSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_EnsureDataSet_mCEA71BCCC50AF74B2D08774F6B93A0928C81F042 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Data.DataTable::UpdatePropertyDescriptorCollectionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_UpdatePropertyDescriptorCollectionCache_m71D3EDD0305A00EBCE53C52C39CF8856FD969F93 (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::ChildTableMismatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_ChildTableMismatch_m8E0CF72D5E912D665E1E6882BDDF97841A005240 (const RuntimeMethod* method);
// System.Exception System.Data.ExceptionBuilder::ParentTableMismatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_ParentTableMismatch_mD7F347D4B4DA5F4937244264634E1947275ACAD9 (const RuntimeMethod* method);
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * DataSet_get_Relations_m648141B55045B57180317A120843883175B4A449_inline (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCache(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_AddCache_mDBEB241D76562A278B30746B2D3EC8F435E39C61 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::RemoveCache(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_RemoveCache_m434228DCEBDE2D480891504B10229B31F3B4D5AB (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method);
// System.Void System.Data.RBTree`1<System.Data.DataRow>::.ctor(System.Data.TreeAccessMethod)
inline void RBTree_1__ctor_m72A0B117F9F8DDF8D7C0241D5485E5E004823AA1 (RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49 * __this, int32_t ___accessMethod0, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t39CBB459CE258F46F3F45D853DFEF568238BEA49 *, int32_t, const RuntimeMethod*))RBTree_1__ctor_mEF554A61D805B516456AFA15A75BFDE7C9BBAE91_gshared)(__this, ___accessMethod0, method);
}
// System.Exception System.Data.ExceptionBuilder::InternalRBTreeError(System.Data.RBTreeError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionBuilder_InternalRBTreeError_m8305960D40FCF87EABEBB85BC70288E33F41B7D3 (int32_t ___internalError0, const RuntimeMethod* method);
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * DataSet_get_Tables_m02936105F6E973CE901C846EFE6C8BB3B4AD7BAE_inline (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * __this, const RuntimeMethod* method);
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * DataTableCollection_get_Item_m66EE1B4BCB0DFDD6261F3EA014B9A162C2F21B4E (DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Data.DataTable/DSRowDiffIdUsageSection::Prepare(System.Data.DataSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSRowDiffIdUsageSection_Prepare_mC4CEB7FFD8772F49FBF9D37119874875CF204D71 (DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A * __this, DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ___ds0, const RuntimeMethod* method);
// System.Void System.Data.DataTable/RowDiffIdUsageSection::Prepare(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RowDiffIdUsageSection_Prepare_mCE756A36AEDEDA2B4055CB5FD21AC2C44B513C5D (RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Data.DataView/DataRowReferenceComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowReferenceComparer__ctor_m244D967AE38FF6820B4A3C1951139A8498C0C65A (DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * __this, const RuntimeMethod* method);
// System.Void System.Data.ExpressionParser/ReservedWords::.ctor(System.String,System.Data.Tokens,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReservedWords__ctor_mD97E4D783563B6C4AE1B7E42E32D5C63D6ACC4FE (ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62 * __this, String_t* ___word0, int32_t ___token1, int32_t ___op2, const RuntimeMethod* method);
// System.Void System.Data.Index/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3EC84A773D1AA13D57751444E839948DA25E0A88 (U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataViewListener::IndexListChanged(System.ComponentModel.ListChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataViewListener_IndexListChanged_m25D3882883976D7E1AD8A97D185AA91272B44EDB (DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * __this, ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * ___e0, const RuntimeMethod* method);
// System.Void System.Data.DataViewListener::MaintainDataView(System.ComponentModel.ListChangedType,System.Data.DataRow,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataViewListener_MaintainDataView_mE437821F6BF58541964A90BA68E5725E7E01EC3F (DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * __this, int32_t ___changedType0, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___row1, bool ___trackAddRemove2, const RuntimeMethod* method);
// System.Void System.Data.RBTree`1<System.Int32>::.ctor(System.Data.TreeAccessMethod)
inline void RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32 (RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11 * __this, int32_t ___accessMethod0, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t58FDFB0AB43F3FE218D32B00B681D0A9AB213C11 *, int32_t, const RuntimeMethod*))RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32_gshared)(__this, ___accessMethod0, method);
}
// System.Int32 System.Data.Index::CompareRecords(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_CompareRecords_mDA459BE7B151471680FA26C2C49CF06871A737C7 (Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * __this, int32_t ___record10, int32_t ___record21, const RuntimeMethod* method);
// System.Int32 System.Data.Index::CompareDuplicateRecords(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_CompareDuplicateRecords_m17436134DD6B65B36B1C1D8043EB05B775C2A399 (Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * __this, int32_t ___record10, int32_t ___record21, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>::get_Key()
inline Type_t * KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_inline (KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>::get_Value()
inline XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline (KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 * __this, const RuntimeMethod* method)
{
	return ((  XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * (*) (KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.Xml.Serialization.XmlRootAttribute::get_ElementName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlRootAttribute_get_ElementName_mC660E6FE49AF0626C781832D904D1B1A9612038E (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Xml.Serialization.XmlRootAttribute::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlRootAttribute_get_Namespace_m0A911502725F9726BDDEE6EE3F38D02DA70097BD_inline (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method);
// System.String System.Xml.Serialization.XmlRootAttribute::get_DataType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlRootAttribute_get_DataType_mC325DC6FB4808F724638A72EB58AAA77B68C87D9 (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Serialization.XmlRootAttribute::get_IsNullable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlRootAttribute_get_IsNullable_m891FFFF4D901032D8F70819DC2A31322765AC54F_inline (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.ObjectStorage/TempAssemblyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempAssemblyComparer__ctor_mCD62B6982AD8B2B0C8C2F672FCC56470E4D72A40 (TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Void System.Data.XmlToDatasetMap/XmlNodeIdHashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeIdHashtable__ctor_m47350A139E925899A7F80DF4AAFE3E9059CF0235 (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Data.XmlToDatasetMap/XmlNodeIdentety::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeIdentety__ctor_mF95AB35C3B3509393CC0DF933B4961AB15C73491 (XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF6B704809ABE222280933EA170B6664286C91FDC (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.String System.Data.DataTable::get_EncodedTableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataTable_get_EncodedTableName_mBEE66CC7D4DC997C202A1A0656C0CD947AC05B3D (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.String System.Data.DataTable::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataTable_get_Namespace_m5076F188203F858D59D90398801E91DF9E9F1274 (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
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
// System.Void System.Data.ZeroOpNode::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZeroOpNode__ctor_m80FBAF2FE4900529F18A261639E46C65ABEC77EB (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, int32_t ___op0, const RuntimeMethod* method)
{
	{
		ExpressionNode__ctor_m562380932E2F97F1BB5B3F2C13D4FEEDA7029F97(__this, (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)NULL, /*hidden argument*/NULL);
		int32_t L_0 = ___op0;
		__this->set__op_1(L_0);
		return;
	}
}
// System.Void System.Data.ZeroOpNode::Bind(System.Data.DataTable,System.Collections.Generic.List`1<System.Data.DataColumn>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZeroOpNode_Bind_mD2B07EFC70C9FC3978F4F6238543D182E3BA133B (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * ___list1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object System.Data.ZeroOpNode::Eval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZeroOpNode_Eval_mB8E298FFAB44CC2ABE302FACF9DC45C3BFC5E5C6 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__op_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_002c;
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
		goto IL_0032;
	}

IL_001e:
	{
		bool L_2 = ((bool)1);
		RuntimeObject * L_3 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}

IL_0025:
	{
		bool L_4 = ((bool)0);
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var);
		DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 * L_6 = ((DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var))->get_Value_0();
		return L_6;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var);
		DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28 * L_7 = ((DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t0CFB3A03916C4AE0938C140E6A5487CEC8169C28_il2cpp_TypeInfo_var))->get_Value_0();
		return L_7;
	}
}
// System.Object System.Data.ZeroOpNode::Eval(System.Data.DataRow,System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZeroOpNode_Eval_m04A50B67CF0ECB29EA38F21EB05C9831316E4BF5 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___row0, int32_t ___version1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.Data.ExpressionNode::Eval() */, __this);
		return L_0;
	}
}
// System.Object System.Data.ZeroOpNode::Eval(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZeroOpNode_Eval_mDD2FC94211E81AE22E9D7220DC570901CC99B157 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___recordNos0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.Data.ExpressionNode::Eval() */, __this);
		return L_0;
	}
}
// System.Boolean System.Data.ZeroOpNode::IsConstant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZeroOpNode_IsConstant_m146BAAC555564EAEFAEE32A6E720DFD30EB2571D (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Data.ZeroOpNode::IsTableConstant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZeroOpNode_IsTableConstant_m518CF1A6F4FEAF61D0E6E70DB441516579E83CA7 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Data.ZeroOpNode::HasLocalAggregate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZeroOpNode_HasLocalAggregate_m54F8D967140A713DD5D70BA9A714EDEA811FCFC1 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Data.ZeroOpNode::HasRemoteAggregate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZeroOpNode_HasRemoteAggregate_m4AFBBDCF32C4AA3F6DAF867CA5A07A1BF4A40176 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Data.ExpressionNode System.Data.ZeroOpNode::Optimize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionNode_t1D76051DE31ECF4B03B005FFD892EDB7CCB6D20E * ZeroOpNode_Optimize_m29FCD5A83597A2AFF101C204466EBE043E5D4643 (ZeroOpNode_tCDCB5B8A3877208A042493BBFA55DF9D678D0972 * __this, const RuntimeMethod* method)
{
	{
		return __this;
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
// Conversion methods for marshalling of: System.Data.DataError/ColumnError
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_pinvoke(const ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568& unmarshaled, ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_pinvoke& marshaled)
{
	Exception_t* ____column_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_column' of type 'ColumnError': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____column_0Exception, NULL);
}
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_pinvoke_back(const ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_pinvoke& marshaled, ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568& unmarshaled)
{
	Exception_t* ____column_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_column' of type 'ColumnError': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____column_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataError/ColumnError
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_pinvoke_cleanup(ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Data.DataError/ColumnError
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_com(const ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568& unmarshaled, ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_com& marshaled)
{
	Exception_t* ____column_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_column' of type 'ColumnError': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____column_0Exception, NULL);
}
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_com_back(const ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_com& marshaled, ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568& unmarshaled)
{
	Exception_t* ____column_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_column' of type 'ColumnError': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____column_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataError/ColumnError
IL2CPP_EXTERN_C void ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshal_com_cleanup(ColumnError_tF4FBD0333E1398D81D6DE8149BCAC5CE6214B568_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::.ctor(System.Data.DataSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSetRelationCollection__ctor_mF79F3B7AC2F58429F6784BABEC0D3F185582613B (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ___dataSet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataRelationCollection__ctor_m0064756431658F3229B6D9951D946247F7C8294A(__this, /*hidden argument*/NULL);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_0 = ___dataSet0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t * L_1;
		L_1 = ExceptionBuilder_RelationDataSetNull_m214CAC3812CB7EF709A8D4DA8C4F6AFC69F50A76(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection__ctor_mF79F3B7AC2F58429F6784BABEC0D3F185582613B_RuntimeMethod_var)));
	}

IL_000f:
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_2 = ___dataSet0;
		__this->set__dataSet_7(L_2);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_3, /*hidden argument*/NULL);
		__this->set__relations_8(L_3);
		return;
	}
}
// System.Collections.ArrayList System.Data.DataRelationCollection/DataSetRelationCollection::get_List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * DataSetRelationCollection_get_List_mABDE84E035C1F8609AD6E7E149BE2E740E37FCDA (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get__relations_8();
		return L_0;
	}
}
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSetRelationCollection_Clear_mB0CD2AB9E69A0C61DA7AE0DE5842C3CC82B5E31F (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, const RuntimeMethod* method)
{
	{
		DataRelationCollection_Clear_m9DD81C7E75101711513EFEE1787C70AC0B886AB5(__this, /*hidden argument*/NULL);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_0 = __this->get__dataSet_7();
		NullCheck(L_0);
		bool L_1 = L_0->get__fInitInProgress_17();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* L_2 = __this->get__delayLoadingRelations_9();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		__this->set__delayLoadingRelations_9((DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C*)NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::GetDataSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * DataSetRelationCollection_GetDataSet_m42DA1D50396CA6D8BD8F40F00EC5EFAB5C625917 (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, const RuntimeMethod* method)
{
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_0 = __this->get__dataSet_7();
		return L_0;
	}
}
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * DataSetRelationCollection_get_Item_m801C9F079AAF448785ACBAB01B3B6985D5ADBA25 (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___index0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = __this->get__relations_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = __this->get__relations_8();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		return ((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_6, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var));
	}

IL_0024:
	{
		int32_t L_7 = ___index0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		Exception_t * L_10;
		L_10 = ExceptionBuilder_RelationOutOfRange_mFEAFF706E00A243A6476921DC0841EEE54C6503B(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_get_Item_m801C9F079AAF448785ACBAB01B3B6985D5ADBA25_RuntimeMethod_var)));
	}
}
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * DataSetRelationCollection_get_Item_m6AB7BD6754C38767481914AAF967E7725E12F764 (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = DataRelationCollection_InternalIndexOf_mFD60BB18EC6DD8AEA2B75CE7BA9669D88937F51E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ___name0;
		Exception_t * L_4;
		L_4 = ExceptionBuilder_CaseInsensitiveNameConflict_m84FE47D0CE6994026D8D02D84EE4A2D61D48EC38(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_get_Item_m6AB7BD6754C38767481914AAF967E7725E12F764_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6;
		L_6 = VirtFuncInvoker0< ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * >::Invoke(12 /* System.Collections.ArrayList System.Data.InternalDataCollectionBase::get_List() */, __this);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_8;
		L_8 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		return ((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_8, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		return (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)NULL;
	}
}
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::AddCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSetRelationCollection_AddCore_m102379FA1D8E8B2BA85021375B54C567F89B3BF9 (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * V_1 = NULL;
	UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * V_2 = NULL;
	int32_t V_3 = 0;
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B22_0 = NULL;
	Exception_t * G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_0 = ___relation0;
		DataRelationCollection_AddCore_m04124225B09E1CBC9A66196079E4C7D77CEBB3E8(__this, L_0, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_1 = ___relation0;
		NullCheck(L_1);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_2;
		L_2 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_1);
		NullCheck(L_2);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_3;
		L_3 = DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline(L_2, /*hidden argument*/NULL);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_4 = __this->get__dataSet_7();
		if ((!(((RuntimeObject*)(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B *)L_3) == ((RuntimeObject*)(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B *)L_4))))
		{
			goto IL_002d;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_5 = ___relation0;
		NullCheck(L_5);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_6;
		L_6 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_5);
		NullCheck(L_6);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_7;
		L_7 = DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline(L_6, /*hidden argument*/NULL);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_8 = __this->get__dataSet_7();
		if ((((RuntimeObject*)(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B *)L_7) == ((RuntimeObject*)(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B *)L_8)))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		Exception_t * L_9;
		L_9 = ExceptionBuilder_ForeignRelation_mE044A34FCC171ADC1EE91A70FC1A13DF55B82802(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_AddCore_m102379FA1D8E8B2BA85021375B54C567F89B3BF9_RuntimeMethod_var)));
	}

IL_0033:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_10 = ___relation0;
		NullCheck(L_10);
		DataRelation_CheckState_m9411727BFC3698B6BC640474F81839F30456334E(L_10, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_11 = ___relation0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_11);
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_13 = ___relation0;
		NullCheck(L_13);
		DataRelation_CheckNestedRelations_m34850D2B1B87AA62E5681EF1912D3B69A714957C(L_13, /*hidden argument*/NULL);
	}

IL_0047:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_14 = ___relation0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get__relationName_2();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0062;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_17 = ___relation0;
		String_t* L_18;
		L_18 = DataRelationCollection_AssignName_m501E3D873928D27EAFEFDE8831198612E60D0BE4(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set__relationName_2(L_18);
		goto IL_006e;
	}

IL_0062:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_19 = ___relation0;
		NullCheck(L_19);
		String_t* L_20 = L_19->get__relationName_2();
		DataRelationCollection_RegisterName_mD6A114394B1C407C5669415EC2F977E6BD54E2AE(__this, L_20, /*hidden argument*/NULL);
	}

IL_006e:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_21 = ___relation0;
		NullCheck(L_21);
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_22;
		L_22 = DataRelation_get_ChildKey_mFC7FBCC367BCC1A0E16A5FD7CE2D87F7A3C33FA7(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		V_3 = 0;
		goto IL_00c9;
	}

IL_0079:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_23 = __this->get__relations_8();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		RuntimeObject * L_25;
		L_25 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_23, L_24);
		NullCheck(((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_25, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var)));
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_26;
		L_26 = DataRelation_get_ChildKey_mFC7FBCC367BCC1A0E16A5FD7CE2D87F7A3C33FA7(((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_25, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_27;
		L_27 = DataKey_ColumnsEqual_mA609AD58D467F60B7F797F167E6BF71B42CF0AF2((DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 *)(&V_0), L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_28 = ___relation0;
		NullCheck(L_28);
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_29;
		L_29 = DataRelation_get_ParentKey_m8BCCB9EDC37529617F065CD00034A032E4D8332E(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_30 = __this->get__relations_8();
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject * L_32;
		L_32 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_30, L_31);
		NullCheck(((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_32, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var)));
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_33;
		L_33 = DataRelation_get_ParentKey_m8BCCB9EDC37529617F065CD00034A032E4D8332E(((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_32, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_34;
		L_34 = DataKey_ColumnsEqual_mA609AD58D467F60B7F797F167E6BF71B42CF0AF2((DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 *)(&V_4), L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00c5;
		}
	}
	{
		Exception_t * L_35;
		L_35 = ExceptionBuilder_RelationAlreadyExists_m65473285BA5DD0085D8A3332C9A78616CF5C9E12(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_AddCore_m102379FA1D8E8B2BA85021375B54C567F89B3BF9_RuntimeMethod_var)));
	}

IL_00c5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_37 = V_3;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_38 = __this->get__relations_8();
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_38);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0079;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_40 = __this->get__relations_8();
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_41 = ___relation0;
		NullCheck(L_40);
		int32_t L_42;
		L_42 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_40, L_41);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_43 = ___relation0;
		NullCheck(L_43);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_44;
		L_44 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_43);
		NullCheck(L_44);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_45;
		L_45 = DataTable_get_ChildRelations_mA386665CBE9975EB74C28B211062B95BED63A8A5(L_44, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_46 = ___relation0;
		NullCheck(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_45, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)));
		DataRelationCollection_Add_mE0427AE8FE9BEDCE37E502016C376AD5AE6AE705(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_45, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)), L_46, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_47 = ___relation0;
		NullCheck(L_47);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_48;
		L_48 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_47);
		NullCheck(L_48);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_49;
		L_49 = DataTable_get_ParentRelations_m89183A6461A73E959687ACC469962675B4EA5ADF(L_48, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_50 = ___relation0;
		NullCheck(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_49, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)));
		DataRelationCollection_Add_mE0427AE8FE9BEDCE37E502016C376AD5AE6AE705(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_49, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)), L_50, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_51 = ___relation0;
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_52 = __this->get__dataSet_7();
		NullCheck(L_51);
		DataRelation_SetDataSet_m6DDDC3E921CB75FA9C398AAB118DF5D30D15D060(L_51, L_52, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_53 = ___relation0;
		NullCheck(L_53);
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_54;
		L_54 = DataRelation_get_ChildKey_mFC7FBCC367BCC1A0E16A5FD7CE2D87F7A3C33FA7(L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * L_55;
		L_55 = DataKey_GetSortIndex_m9F8D5435AFD57BC7D6ADCBCFE63030D6ACC73717((DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_55);
		Index_AddRef_m28342C7ABFAC84E3BB91746BCC3B820F2F7CF708(L_55, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_56 = ___relation0;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_56);
		if (!L_57)
		{
			goto IL_0143;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_58 = ___relation0;
		NullCheck(L_58);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_59;
		L_59 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_58);
		NullCheck(L_59);
		DataTable_CacheNestedParent_mD0DC4516392D210EE9B09DA759AAF322B541429E(L_59, /*hidden argument*/NULL);
	}

IL_0143:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_60 = ___relation0;
		NullCheck(L_60);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_61;
		L_61 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_60);
		NullCheck(L_61);
		ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * L_62;
		L_62 = DataTable_get_Constraints_m5A2544AA333C8296B27056F249C2328E81A0A975_inline(L_61, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_63 = ___relation0;
		NullCheck(L_63);
		DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* L_64;
		L_64 = DataRelation_get_ParentColumnsReference_m9DF80D987F3D9E7B8417E1628A1653A2E4A0E465(L_63, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_65 = ___relation0;
		NullCheck(L_65);
		DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* L_66;
		L_66 = DataRelation_get_ChildColumnsReference_mB6DEBD0DACD49D895428210E33EAA19E27A907FE(L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_67;
		L_67 = ConstraintCollection_FindForeignKeyConstraint_mD35FCECB80950CE1680196710711FB5C9A0B5B4E(L_62, L_64, L_66, /*hidden argument*/NULL);
		V_1 = L_67;
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_68 = ___relation0;
		NullCheck(L_68);
		bool L_69 = L_68->get__createConstraints_14();
		if (!L_69)
		{
			goto IL_01c1;
		}
	}
	{
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_70 = V_1;
		if (L_70)
		{
			goto IL_01c1;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_71 = ___relation0;
		NullCheck(L_71);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_72;
		L_72 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_71);
		NullCheck(L_72);
		ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * L_73;
		L_73 = DataTable_get_Constraints_m5A2544AA333C8296B27056F249C2328E81A0A975_inline(L_72, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_74 = ___relation0;
		NullCheck(L_74);
		DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* L_75;
		L_75 = DataRelation_get_ParentColumnsReference_m9DF80D987F3D9E7B8417E1628A1653A2E4A0E465(L_74, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_76 = ___relation0;
		NullCheck(L_76);
		DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* L_77;
		L_77 = DataRelation_get_ChildColumnsReference_mB6DEBD0DACD49D895428210E33EAA19E27A907FE(L_76, /*hidden argument*/NULL);
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_78 = (ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD *)il2cpp_codegen_object_new(ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD_il2cpp_TypeInfo_var);
		ForeignKeyConstraint__ctor_m87EE28827B120AC10241458E9F91F55F53B4083B(L_78, L_75, L_77, /*hidden argument*/NULL);
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_79 = L_78;
		V_1 = L_79;
		NullCheck(L_73);
		ConstraintCollection_Add_m18C4C121B30F207DB169BF5371505A2895D54E5D(L_73, L_79, /*hidden argument*/NULL);
	}

IL_018e:
	try
	{ // begin try (depth: 1)
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_80 = V_1;
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_81 = ___relation0;
		NullCheck(L_81);
		String_t* L_82;
		L_82 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Data.DataRelation::get_RelationName() */, L_81);
		NullCheck(L_80);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void System.Data.Constraint::set_ConstraintName(System.String) */, L_80, L_82);
		goto IL_01c1;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{ // begin filter(depth: 1)
		bool __filter_local = false;
		try
		{ // begin implicit try block
			{
				Exception_t * L_83 = ((Exception_t *)IsInstClass((RuntimeObject*)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var))));
				G_B21_0 = L_83;
				if (L_83)
				{
					G_B22_0 = L_83;
					goto IL_01a8;
				}
			}
			{
				G_B23_0 = 0;
				goto IL_01b4;
			}

IL_01a8:
			{
				V_5 = G_B22_0;
				Exception_t * L_84 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var)));
				bool L_85;
				L_85 = ADP_IsCatchableExceptionType_m273E4E4A0FBAACB7DC2A8EDF0974C9A9E312F36F(L_84, /*hidden argument*/NULL);
				G_B23_0 = ((!(((uint32_t)L_85) <= ((uint32_t)0)))? 1 : 0);
			}

IL_01b4:
			{
				__filter_local = (G_B23_0) ? true : false;
			}
		} // end implicit try block
		catch(Il2CppExceptionWrapper&)
		{ // begin implicit catch block
			__filter_local = false;
		} // end implicit catch block
		if (__filter_local)
		{
			goto FILTER_01b6;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_AddCore_m102379FA1D8E8B2BA85021375B54C567F89B3BF9_RuntimeMethod_var)));
		}
	} // end filter (depth: 1)

FILTER_01b6:
	{ // begin catch(filter)
		Exception_t * L_86 = V_5;
		Exception_t * L_87;
		L_87 = ExceptionBuilder_TraceExceptionWithoutRethrow_m6367C97E51FECAC289B29A931D41BB2EAD0FF5DE(L_86, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c1;
	} // end catch (depth: 1)

IL_01c1:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_88 = ___relation0;
		NullCheck(L_88);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_89;
		L_89 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_88);
		NullCheck(L_89);
		ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * L_90;
		L_90 = DataTable_get_Constraints_m5A2544AA333C8296B27056F249C2328E81A0A975_inline(L_89, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_91 = ___relation0;
		NullCheck(L_91);
		DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* L_92;
		L_92 = DataRelation_get_ParentColumnsReference_m9DF80D987F3D9E7B8417E1628A1653A2E4A0E465(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * L_93;
		L_93 = ConstraintCollection_FindKeyConstraint_m9907C5E227EAE005D018E01E790FB6D05DCA6A60(L_90, L_92, /*hidden argument*/NULL);
		V_2 = L_93;
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_94 = ___relation0;
		UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * L_95 = V_2;
		NullCheck(L_94);
		DataRelation_SetParentKeyConstraint_m01B06666313B33781C64456936F5677060DCEB74_inline(L_94, L_95, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_96 = ___relation0;
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_97 = V_1;
		NullCheck(L_96);
		DataRelation_SetChildKeyConstraint_mC5248944C17EFEBB2E386BAD87EDDDD29A010BD0_inline(L_96, L_97, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::RemoveCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSetRelationCollection_RemoveCore_m43C1215777512217C0DE3B5B00FB2012964AD910 (DataSetRelationCollection_t679438AEFA6DF47F762A03302CD334C8DA9560D3 * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_0 = ___relation0;
		DataRelationCollection_RemoveCore_mE09AD0C5FC6DADF9AE9FFDEE0339660D100F2AE2(__this, L_0, /*hidden argument*/NULL);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_1 = __this->get__dataSet_7();
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_2 = ___relation0;
		NullCheck(L_1);
		DataSet_OnRemoveRelationHack_m634159374C17AC0A31CC96F750A62A5B7175FFC5(L_1, L_2, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_3 = ___relation0;
		NullCheck(L_3);
		DataRelation_SetDataSet_m6DDDC3E921CB75FA9C398AAB118DF5D30D15D060(L_3, (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B *)NULL, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_4 = ___relation0;
		NullCheck(L_4);
		DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06  L_5;
		L_5 = DataRelation_get_ChildKey_mFC7FBCC367BCC1A0E16A5FD7CE2D87F7A3C33FA7(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * L_6;
		L_6 = DataKey_GetSortIndex_m9F8D5435AFD57BC7D6ADCBCFE63030D6ACC73717((DataKey_t729DC4084D9FB3EDBD64E760202E14C4B79CEF06 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Index_RemoveRef_m3D9985D587F8FD6A4E209DD9D512A65EC2AC9218(L_6, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_8 = ___relation0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_8);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_10 = ___relation0;
		NullCheck(L_10);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_11;
		L_11 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_10);
		NullCheck(L_11);
		DataTable_CacheNestedParent_mD0DC4516392D210EE9B09DA759AAF322B541429E(L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		V_1 = 0;
		goto IL_00be;
	}

IL_0045:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_12 = ___relation0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_13 = __this->get__relations_8();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		RuntimeObject * L_15;
		L_15 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
		if ((!(((RuntimeObject*)(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)L_12) == ((RuntimeObject*)(RuntimeObject *)L_15))))
		{
			goto IL_00ba;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_16 = __this->get__relations_8();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_16, L_17);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_18 = ___relation0;
		NullCheck(L_18);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_19;
		L_19 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_18);
		NullCheck(L_19);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_20;
		L_20 = DataTable_get_ChildRelations_mA386665CBE9975EB74C28B211062B95BED63A8A5(L_19, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_21 = ___relation0;
		NullCheck(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_20, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)));
		DataRelationCollection_Remove_m52CAC79D42F8ADFB457296DACBBBD72EA16CFA36(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_20, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_22 = ___relation0;
		NullCheck(L_22);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_23;
		L_23 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_22);
		NullCheck(L_23);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_24;
		L_24 = DataTable_get_ParentRelations_m89183A6461A73E959687ACC469962675B4EA5ADF(L_23, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_25 = ___relation0;
		NullCheck(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_24, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)));
		DataRelationCollection_Remove_m52CAC79D42F8ADFB457296DACBBBD72EA16CFA36(((DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E *)CastclassSealed((RuntimeObject*)L_24, DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E_il2cpp_TypeInfo_var)), L_25, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_26 = ___relation0;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_26);
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_28 = ___relation0;
		NullCheck(L_28);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_29;
		L_29 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_28);
		NullCheck(L_29);
		DataTable_CacheNestedParent_mD0DC4516392D210EE9B09DA759AAF322B541429E(L_29, /*hidden argument*/NULL);
	}

IL_009f:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_30 = ___relation0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Data.DataRelation::get_RelationName() */, L_30);
		DataRelationCollection_UnregisterName_m5273EE3A598D199B17D85597010A3DD999B8A6F2(__this, L_31, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_32 = ___relation0;
		NullCheck(L_32);
		DataRelation_SetParentKeyConstraint_m01B06666313B33781C64456936F5677060DCEB74_inline(L_32, (UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 *)NULL, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_33 = ___relation0;
		NullCheck(L_33);
		DataRelation_SetChildKeyConstraint_mC5248944C17EFEBB2E386BAD87EDDDD29A010BD0_inline(L_33, (ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_00ba:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00be:
	{
		int32_t L_35 = V_1;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_36 = __this->get__relations_8();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_36);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0045;
		}
	}
	{
		Exception_t * L_38;
		L_38 = ExceptionBuilder_RelationDoesNotExist_mBF363A0B708110C510DA507077C43B6083EB5701(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataSetRelationCollection_RemoveCore_m43C1215777512217C0DE3B5B00FB2012964AD910_RuntimeMethod_var)));
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
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::.ctor(System.Data.DataTable,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection__ctor_m7A2DFA537CE65FAC4415F3AFE408D710E0215C55 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, bool ___fParentCollection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataRelationCollection__ctor_m0064756431658F3229B6D9951D946247F7C8294A(__this, /*hidden argument*/NULL);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = ___table0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t * L_1;
		L_1 = ExceptionBuilder_RelationTableNull_m9855D653A8D278FB8F1C9E9422302A120796F62C(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection__ctor_m7A2DFA537CE65FAC4415F3AFE408D710E0215C55_RuntimeMethod_var)));
	}

IL_000f:
	{
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_2 = ___table0;
		__this->set__table_7(L_2);
		bool L_3 = ___fParentCollection1;
		__this->set__fParentCollection_9(L_3);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_4, /*hidden argument*/NULL);
		__this->set__relations_8(L_4);
		return;
	}
}
// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::get_List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * DataTableRelationCollection_get_List_m13280C53F376828B695F8954C9A0CC31D656ACA1 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get__relations_8();
		return L_0;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::EnsureDataSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_EnsureDataSet_mCEA71BCCC50AF74B2D08774F6B93A0928C81F042 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, const RuntimeMethod* method)
{
	{
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = __this->get__table_7();
		NullCheck(L_0);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_1;
		L_1 = DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t * L_2;
		L_2 = ExceptionBuilder_RelationTableWasRemoved_m8027F00A53A15C35DAD79ECE2414B98FFD6BC635(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_EnsureDataSet_mCEA71BCCC50AF74B2D08774F6B93A0928C81F042_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Data.DataSet System.Data.DataRelationCollection/DataTableRelationCollection::GetDataSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * DataTableRelationCollection_GetDataSet_m1D7FF0088A252FFF32AC1A35390027EEB0CF3101 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, const RuntimeMethod* method)
{
	{
		DataTableRelationCollection_EnsureDataSet_mCEA71BCCC50AF74B2D08774F6B93A0928C81F042(__this, /*hidden argument*/NULL);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = __this->get__table_7();
		NullCheck(L_0);
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_1;
		L_1 = DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * DataTableRelationCollection_get_Item_m2B17AF5FBD6241147800D8B84285C8595BF8C3DE (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___index0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = __this->get__relations_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = __this->get__relations_8();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		return ((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_6, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var));
	}

IL_0024:
	{
		int32_t L_7 = ___index0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		Exception_t * L_10;
		L_10 = ExceptionBuilder_RelationOutOfRange_mFEAFF706E00A243A6476921DC0841EEE54C6503B(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_get_Item_m2B17AF5FBD6241147800D8B84285C8595BF8C3DE_RuntimeMethod_var)));
	}
}
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * DataTableRelationCollection_get_Item_m7AB8565259BA33E29870CE8CB735BDB4187FBFE2 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = DataRelationCollection_InternalIndexOf_mFD60BB18EC6DD8AEA2B75CE7BA9669D88937F51E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ___name0;
		Exception_t * L_4;
		L_4 = ExceptionBuilder_CaseInsensitiveNameConflict_m84FE47D0CE6994026D8D02D84EE4A2D61D48EC38(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_get_Item_m7AB8565259BA33E29870CE8CB735BDB4187FBFE2_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6;
		L_6 = VirtFuncInvoker0< ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * >::Invoke(12 /* System.Collections.ArrayList System.Data.InternalDataCollectionBase::get_List() */, __this);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_8;
		L_8 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		return ((DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)CastclassClass((RuntimeObject*)L_8, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		return (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)NULL;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::add_RelationPropertyChanged(System.ComponentModel.CollectionChangeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_add_RelationPropertyChanged_m93F695D680704717A2A967E6186F08D9B6FD71C8 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_0 = NULL;
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_1 = NULL;
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_2 = NULL;
	{
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_0 = __this->get_RelationPropertyChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_1 = V_0;
		V_1 = L_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_2 = V_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)CastclassSealed((RuntimeObject*)L_4, CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77_il2cpp_TypeInfo_var));
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** L_5 = __this->get_address_of_RelationPropertyChanged_10();
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_6 = V_2;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_7 = V_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *>((CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 **)L_5, L_6, L_7);
		V_0 = L_8;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_9 = V_0;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)L_9) == ((RuntimeObject*)(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::remove_RelationPropertyChanged(System.ComponentModel.CollectionChangeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_remove_RelationPropertyChanged_mB4874B6DD605FD40C91EB63173ABA5743FD8D826 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_0 = NULL;
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_1 = NULL;
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * V_2 = NULL;
	{
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_0 = __this->get_RelationPropertyChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_1 = V_0;
		V_1 = L_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_2 = V_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)CastclassSealed((RuntimeObject*)L_4, CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77_il2cpp_TypeInfo_var));
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** L_5 = __this->get_address_of_RelationPropertyChanged_10();
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_6 = V_2;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_7 = V_1;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *>((CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 **)L_5, L_6, L_7);
		V_0 = L_8;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_9 = V_0;
		CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)L_9) == ((RuntimeObject*)(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCache(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_AddCache_mDBEB241D76562A278B30746B2D3EC8F435E39C61 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get__relations_8();
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_1 = ___relation0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		bool L_3 = __this->get__fParentCollection_9();
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4 = __this->get__table_7();
		NullCheck(L_4);
		DataTable_UpdatePropertyDescriptorCollectionCache_m71D3EDD0305A00EBCE53C52C39CF8856FD969F93(L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_AddCore_m3257E9A45D276D8201849D6FE2D478660ED4C876 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__fParentCollection_9();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_1 = ___relation0;
		NullCheck(L_1);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_2;
		L_2 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_1);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_3 = __this->get__table_7();
		if ((((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_2) == ((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Exception_t * L_4;
		L_4 = ExceptionBuilder_ChildTableMismatch_m8E0CF72D5E912D665E1E6882BDDF97841A005240(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_AddCore_m3257E9A45D276D8201849D6FE2D478660ED4C876_RuntimeMethod_var)));
	}

IL_001c:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_5 = ___relation0;
		NullCheck(L_5);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_6;
		L_6 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_5);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_7 = __this->get__table_7();
		if ((((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_6) == ((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		Exception_t * L_8;
		L_8 = ExceptionBuilder_ParentTableMismatch_mD7F347D4B4DA5F4937244264634E1947275ACAD9(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_AddCore_m3257E9A45D276D8201849D6FE2D478660ED4C876_RuntimeMethod_var)));
	}

IL_0030:
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_9;
		L_9 = VirtFuncInvoker0< DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * >::Invoke(18 /* System.Data.DataSet System.Data.DataRelationCollection::GetDataSet() */, __this);
		NullCheck(L_9);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_10;
		L_10 = DataSet_get_Relations_m648141B55045B57180317A120843883175B4A449_inline(L_9, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_11 = ___relation0;
		NullCheck(L_10);
		DataRelationCollection_Add_mE0427AE8FE9BEDCE37E502016C376AD5AE6AE705(L_10, L_11, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_12 = ___relation0;
		DataTableRelationCollection_AddCache_mDBEB241D76562A278B30746B2D3EC8F435E39C61(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::RemoveCache(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_RemoveCache_m434228DCEBDE2D480891504B10229B31F3B4D5AB (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_0 = ___relation0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = __this->get__relations_8();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		if ((!(((RuntimeObject*)(DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = __this->get__relations_8();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_4, L_5);
		bool L_6 = __this->get__fParentCollection_9();
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_7 = __this->get__table_7();
		NullCheck(L_7);
		DataTable_UpdatePropertyDescriptorCollectionCache_m71D3EDD0305A00EBCE53C52C39CF8856FD969F93(L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = __this->get__relations_8();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		Exception_t * L_12;
		L_12 = ExceptionBuilder_RelationDoesNotExist_mBF363A0B708110C510DA507077C43B6083EB5701(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_RemoveCache_m434228DCEBDE2D480891504B10229B31F3B4D5AB_RuntimeMethod_var)));
	}
}
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::RemoveCore(System.Data.DataRelation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTableRelationCollection_RemoveCore_m0A6F4AFBF5E60ADB157873890F661C6031581CB2 (DataTableRelationCollection_t2238023681888274464D5FD23BDD7398557FE40E * __this, DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * ___relation0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__fParentCollection_9();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_1 = ___relation0;
		NullCheck(L_1);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_2;
		L_2 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(5 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_1);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_3 = __this->get__table_7();
		if ((((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_2) == ((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Exception_t * L_4;
		L_4 = ExceptionBuilder_ChildTableMismatch_m8E0CF72D5E912D665E1E6882BDDF97841A005240(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_RemoveCore_m0A6F4AFBF5E60ADB157873890F661C6031581CB2_RuntimeMethod_var)));
	}

IL_001c:
	{
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_5 = ___relation0;
		NullCheck(L_5);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_6;
		L_6 = VirtFuncInvoker0< DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * >::Invoke(8 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_5);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_7 = __this->get__table_7();
		if ((((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_6) == ((RuntimeObject*)(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		Exception_t * L_8;
		L_8 = ExceptionBuilder_ParentTableMismatch_mD7F347D4B4DA5F4937244264634E1947275ACAD9(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataTableRelationCollection_RemoveCore_m0A6F4AFBF5E60ADB157873890F661C6031581CB2_RuntimeMethod_var)));
	}

IL_0030:
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_9;
		L_9 = VirtFuncInvoker0< DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * >::Invoke(18 /* System.Data.DataSet System.Data.DataRelationCollection::GetDataSet() */, __this);
		NullCheck(L_9);
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_10;
		L_10 = DataSet_get_Relations_m648141B55045B57180317A120843883175B4A449_inline(L_9, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_11 = ___relation0;
		NullCheck(L_10);
		DataRelationCollection_Remove_m52CAC79D42F8ADFB457296DACBBBD72EA16CFA36(L_10, L_11, /*hidden argument*/NULL);
		DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * L_12 = ___relation0;
		DataTableRelationCollection_RemoveCache_m434228DCEBDE2D480891504B10229B31F3B4D5AB(__this, L_12, /*hidden argument*/NULL);
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
// System.Void System.Data.DataRowCollection/DataRowTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowTree__ctor_m15BF0F9FFAC656817ECBC89877733D47E3F16582 (DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RBTree_1__ctor_m72A0B117F9F8DDF8D7C0241D5485E5E004823AA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RBTree_1__ctor_m72A0B117F9F8DDF8D7C0241D5485E5E004823AA1(__this, 2, /*hidden argument*/RBTree_1__ctor_m72A0B117F9F8DDF8D7C0241D5485E5E004823AA1_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Data.DataRowCollection/DataRowTree::CompareNode(System.Data.DataRow,System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRowTree_CompareNode_mBCF6F51999568BCD87DB069D322B3BEF94C81820 (DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___record10, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___record21, const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ExceptionBuilder_InternalRBTreeError_m8305960D40FCF87EABEBB85BC70288E33F41B7D3(((int32_t)19), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataRowTree_CompareNode_mBCF6F51999568BCD87DB069D322B3BEF94C81820_RuntimeMethod_var)));
	}
}
// System.Int32 System.Data.DataRowCollection/DataRowTree::CompareSateliteTreeNode(System.Data.DataRow,System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRowTree_CompareSateliteTreeNode_mB74E951EDADFA611BFF2F10338BB5B41470139CD (DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___record10, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___record21, const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ExceptionBuilder_InternalRBTreeError_m8305960D40FCF87EABEBB85BC70288E33F41B7D3(((int32_t)20), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataRowTree_CompareSateliteTreeNode_mB74E951EDADFA611BFF2F10338BB5B41470139CD_RuntimeMethod_var)));
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
// Conversion methods for marshalling of: System.Data.DataTable/DSRowDiffIdUsageSection
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_pinvoke(const DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A& unmarshaled, DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_pinvoke& marshaled)
{
	Exception_t* ____targetDS_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetDS' of type 'DSRowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetDS_0Exception, NULL);
}
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_pinvoke_back(const DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_pinvoke& marshaled, DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A& unmarshaled)
{
	Exception_t* ____targetDS_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetDS' of type 'DSRowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetDS_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataTable/DSRowDiffIdUsageSection
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_pinvoke_cleanup(DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Data.DataTable/DSRowDiffIdUsageSection
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_com(const DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A& unmarshaled, DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_com& marshaled)
{
	Exception_t* ____targetDS_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetDS' of type 'DSRowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetDS_0Exception, NULL);
}
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_com_back(const DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_com& marshaled, DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A& unmarshaled)
{
	Exception_t* ____targetDS_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetDS' of type 'DSRowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetDS_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataTable/DSRowDiffIdUsageSection
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshal_com_cleanup(DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A_marshaled_com& marshaled)
{
}
// System.Void System.Data.DataTable/DSRowDiffIdUsageSection::Prepare(System.Data.DataSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSRowDiffIdUsageSection_Prepare_mC4CEB7FFD8772F49FBF9D37119874875CF204D71 (DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A * __this, DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ___ds0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_0 = ___ds0;
		__this->set__targetDS_0(L_0);
		V_0 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_1 = ___ds0;
		NullCheck(L_1);
		DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * L_2;
		L_2 = DataSet_get_Tables_m02936105F6E973CE901C846EFE6C8BB3B4AD7BAE_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4;
		L_4 = DataTableCollection_get_Item_m66EE1B4BCB0DFDD6261F3EA014B9A162C2F21B4E(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set__rowDiffId_70((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_7 = ___ds0;
		NullCheck(L_7);
		DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * L_8;
		L_8 = DataSet_get_Tables_m02936105F6E973CE901C846EFE6C8BB3B4AD7BAE_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_8);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void DSRowDiffIdUsageSection_Prepare_mC4CEB7FFD8772F49FBF9D37119874875CF204D71_AdjustorThunk (RuntimeObject * __this, DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ___ds0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A * _thisAdjusted = reinterpret_cast<DSRowDiffIdUsageSection_t99358A8098D585C28B426D1279FD9002BB93681A *>(__this + _offset);
	DSRowDiffIdUsageSection_Prepare_mC4CEB7FFD8772F49FBF9D37119874875CF204D71(_thisAdjusted, ___ds0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Data.DataTable/RowDiffIdUsageSection
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_pinvoke(const RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF& unmarshaled, RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_pinvoke& marshaled)
{
	Exception_t* ____targetTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetTable' of type 'RowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetTable_0Exception, NULL);
}
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_pinvoke_back(const RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_pinvoke& marshaled, RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF& unmarshaled)
{
	Exception_t* ____targetTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetTable' of type 'RowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetTable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataTable/RowDiffIdUsageSection
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_pinvoke_cleanup(RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Data.DataTable/RowDiffIdUsageSection
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_com(const RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF& unmarshaled, RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_com& marshaled)
{
	Exception_t* ____targetTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetTable' of type 'RowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetTable_0Exception, NULL);
}
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_com_back(const RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_com& marshaled, RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF& unmarshaled)
{
	Exception_t* ____targetTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_targetTable' of type 'RowDiffIdUsageSection': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____targetTable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.DataTable/RowDiffIdUsageSection
IL2CPP_EXTERN_C void RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshal_com_cleanup(RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF_marshaled_com& marshaled)
{
}
// System.Void System.Data.DataTable/RowDiffIdUsageSection::Prepare(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RowDiffIdUsageSection_Prepare_mCE756A36AEDEDA2B4055CB5FD21AC2C44B513C5D (RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, const RuntimeMethod* method)
{
	{
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = ___table0;
		__this->set__targetTable_0(L_0);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1 = ___table0;
		NullCheck(L_1);
		L_1->set__rowDiffId_70((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void RowDiffIdUsageSection_Prepare_mCE756A36AEDEDA2B4055CB5FD21AC2C44B513C5D_AdjustorThunk (RuntimeObject * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF * _thisAdjusted = reinterpret_cast<RowDiffIdUsageSection_tBF12365C1D82C7FF63229B801700EF3DA76181CF *>(__this + _offset);
	RowDiffIdUsageSection_Prepare_mCE756A36AEDEDA2B4055CB5FD21AC2C44B513C5D(_thisAdjusted, ___table0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.DataView/DataRowReferenceComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowReferenceComparer__ctor_m244D967AE38FF6820B4A3C1951139A8498C0C65A (DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Data.DataView/DataRowReferenceComparer::Equals(System.Data.DataRow,System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataRowReferenceComparer_Equals_mCE23B41B96B4C7FBB75883A0A10B108661C9CCFC (DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___x0, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___y1, const RuntimeMethod* method)
{
	{
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_0 = ___x0;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE *)L_0) == ((RuntimeObject*)(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE *)L_1))? 1 : 0);
	}
}
// System.Int32 System.Data.DataView/DataRowReferenceComparer::GetHashCode(System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRowReferenceComparer_GetHashCode_m8E3FA8A7CCA470A517C3664640D2AFF331C30B4E (DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___obj0, const RuntimeMethod* method)
{
	{
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get__objectID_15();
		return L_1;
	}
}
// System.Void System.Data.DataView/DataRowReferenceComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowReferenceComparer__cctor_m7DAFD22BC33271E1CAC53E4E87D0AA0253D198E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 * L_0 = (DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051 *)il2cpp_codegen_object_new(DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_il2cpp_TypeInfo_var);
		DataRowReferenceComparer__ctor_m244D967AE38FF6820B4A3C1951139A8498C0C65A(L_0, /*hidden argument*/NULL);
		((DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_StaticFields*)il2cpp_codegen_static_fields_for(DataRowReferenceComparer_t0195804084076F67C8A3951399CA33E24E406051_il2cpp_TypeInfo_var))->set_s_default_0(L_0);
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
// Conversion methods for marshalling of: System.Data.ExpressionParser/ReservedWords
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_pinvoke(const ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62& unmarshaled, ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_pinvoke& marshaled)
{
	marshaled.____word_0 = il2cpp_codegen_marshal_string(unmarshaled.get__word_0());
	marshaled.____token_1 = unmarshaled.get__token_1();
	marshaled.____op_2 = unmarshaled.get__op_2();
}
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_pinvoke_back(const ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_pinvoke& marshaled, ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62& unmarshaled)
{
	unmarshaled.set__word_0(il2cpp_codegen_marshal_string_result(marshaled.____word_0));
	int32_t unmarshaled__token_temp_1 = 0;
	unmarshaled__token_temp_1 = marshaled.____token_1;
	unmarshaled.set__token_1(unmarshaled__token_temp_1);
	int32_t unmarshaled__op_temp_2 = 0;
	unmarshaled__op_temp_2 = marshaled.____op_2;
	unmarshaled.set__op_2(unmarshaled__op_temp_2);
}
// Conversion method for clean up from marshalling of: System.Data.ExpressionParser/ReservedWords
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_pinvoke_cleanup(ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____word_0);
	marshaled.____word_0 = NULL;
}
// Conversion methods for marshalling of: System.Data.ExpressionParser/ReservedWords
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_com(const ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62& unmarshaled, ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_com& marshaled)
{
	marshaled.____word_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get__word_0());
	marshaled.____token_1 = unmarshaled.get__token_1();
	marshaled.____op_2 = unmarshaled.get__op_2();
}
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_com_back(const ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_com& marshaled, ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62& unmarshaled)
{
	unmarshaled.set__word_0(il2cpp_codegen_marshal_bstring_result(marshaled.____word_0));
	int32_t unmarshaled__token_temp_1 = 0;
	unmarshaled__token_temp_1 = marshaled.____token_1;
	unmarshaled.set__token_1(unmarshaled__token_temp_1);
	int32_t unmarshaled__op_temp_2 = 0;
	unmarshaled__op_temp_2 = marshaled.____op_2;
	unmarshaled.set__op_2(unmarshaled__op_temp_2);
}
// Conversion method for clean up from marshalling of: System.Data.ExpressionParser/ReservedWords
IL2CPP_EXTERN_C void ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshal_com_cleanup(ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____word_0);
	marshaled.____word_0 = NULL;
}
// System.Void System.Data.ExpressionParser/ReservedWords::.ctor(System.String,System.Data.Tokens,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReservedWords__ctor_mD97E4D783563B6C4AE1B7E42E32D5C63D6ACC4FE (ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62 * __this, String_t* ___word0, int32_t ___token1, int32_t ___op2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___word0;
		__this->set__word_0(L_0);
		int32_t L_1 = ___token1;
		__this->set__token_1(L_1);
		int32_t L_2 = ___op2;
		__this->set__op_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void ReservedWords__ctor_mD97E4D783563B6C4AE1B7E42E32D5C63D6ACC4FE_AdjustorThunk (RuntimeObject * __this, String_t* ___word0, int32_t ___token1, int32_t ___op2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62 * _thisAdjusted = reinterpret_cast<ReservedWords_t47DD3733DE702FA92AB9D25895E938A9B3645C62 *>(__this + _offset);
	ReservedWords__ctor_mD97E4D783563B6C4AE1B7E42E32D5C63D6ACC4FE(_thisAdjusted, ___word0, ___token1, ___op2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Index/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m068BADB0576569D0AF54AD544B2096D186016671 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * L_0 = (U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 *)il2cpp_codegen_object_new(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3EC84A773D1AA13D57751444E839948DA25E0A88(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Data.Index/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3EC84A773D1AA13D57751444E839948DA25E0A88 (U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Data.Index/<>c::<.ctor>b__22_0(System.Data.DataViewListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__22_0_m3F6AE56CEADCF56E33E28DC93C99B2809A82678D (U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * __this, DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * ___listener0, const RuntimeMethod* method)
{
	{
		DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * L_0 = ___listener0;
		return (bool)((!(((RuntimeObject*)(DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.Data.Index/<>c::<OnListChanged>b__85_0(System.Data.DataViewListener,System.ComponentModel.ListChangedEventArgs,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnListChangedU3Eb__85_0_mFB87905C4274E4150A81CF357F962188316B2256 (U3CU3Ec_tCBCA7AF29D9B6DC586F536200ECC6EBF81232033 * __this, DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * ___listener0, ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * ___args1, bool ___arg22, bool ___arg33, const RuntimeMethod* method)
{
	{
		DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * L_0 = ___listener0;
		ListChangedEventArgs_t7E1DD2BB933BE30107C8B95958746E6AF24F6632 * L_1 = ___args1;
		NullCheck(L_0);
		DataViewListener_IndexListChanged_m25D3882883976D7E1AD8A97D185AA91272B44EDB(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Data.Index/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_m6EA2AEA3D657FCC3C79E19D338924588C4CDB119 (U3CU3Ec__DisplayClass86_0_t0A216700852A2F8E0454E0E7A63AF4AB7200DFAB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.Index/<>c__DisplayClass86_0::<MaintainDataView>b__0(System.Data.DataViewListener,System.ComponentModel.ListChangedType,System.Data.DataRow,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0_U3CMaintainDataViewU3Eb__0_m7835AEEE4486F54141179D4E14B4AC917AAE8227 (U3CU3Ec__DisplayClass86_0_t0A216700852A2F8E0454E0E7A63AF4AB7200DFAB * __this, DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * ___listener0, int32_t ___type1, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___row2, bool ___track3, const RuntimeMethod* method)
{
	{
		DataViewListener_tE5288E3EE7EDA7C08067B6B2D194D2D7DFBE1C4E * L_0 = ___listener0;
		int32_t L_1 = __this->get_changedType_0();
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_2 = ___row2;
		bool L_3 = ___track3;
		NullCheck(L_0);
		DataViewListener_MaintainDataView_mE437821F6BF58541964A90BA68E5725E7E01EC3F(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void System.Data.Index/IndexTree::.ctor(System.Data.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexTree__ctor_mA2DC36F2D1917439EF182EAA01256F9BA56D00F6 (IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * __this, Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32(__this, 1, /*hidden argument*/RBTree_1__ctor_m4BCBFD13A94209377525F282ADFB174018DEBF32_RuntimeMethod_var);
		Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * L_0 = ___index0;
		__this->set__index_9(L_0);
		return;
	}
}
// System.Int32 System.Data.Index/IndexTree::CompareNode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexTree_CompareNode_mDFC0C472D3A8AAB1A56AC36CB806ABB7593B4C3D (IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * __this, int32_t ___record10, int32_t ___record21, const RuntimeMethod* method)
{
	{
		Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * L_0 = __this->get__index_9();
		int32_t L_1 = ___record10;
		int32_t L_2 = ___record21;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Index_CompareRecords_mDA459BE7B151471680FA26C2C49CF06871A737C7(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Data.Index/IndexTree::CompareSateliteTreeNode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexTree_CompareSateliteTreeNode_m2F4780DCCBE60394BE7784D8D473DDF4D73892AA (IndexTree_t0E9881360105536EEEDB380C194A80B9BE1A9F7D * __this, int32_t ___record10, int32_t ___record21, const RuntimeMethod* method)
{
	{
		Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * L_0 = __this->get__index_9();
		int32_t L_1 = ___record10;
		int32_t L_2 = ___record21;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Index_CompareDuplicateRecords_m17436134DD6B65B36B1C1D8043EB05B775C2A399(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void System.Data.Common.ObjectStorage/TempAssemblyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempAssemblyComparer__ctor_mCD62B6982AD8B2B0C8C2F672FCC56470E4D72A40 (TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Data.Common.ObjectStorage/TempAssemblyComparer::Equals(System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TempAssemblyComparer_Equals_mFAA818BD0E724AADF3F7E1981F534F8D669D6E4C (TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 * __this, KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3  ___x0, KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0;
		L_0 = KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var);
		Type_t * L_1;
		L_1 = KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00be;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_3;
		L_3 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_4;
		L_4 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_00bc;
		}
	}

IL_002d:
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_5;
		L_5 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00ba;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_6;
		L_6 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_00ba;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_7;
		L_7 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = XmlRootAttribute_get_ElementName_mC660E6FE49AF0626C781832D904D1B1A9612038E(L_7, /*hidden argument*/NULL);
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_9;
		L_9 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = XmlRootAttribute_get_ElementName_mC660E6FE49AF0626C781832D904D1B1A9612038E(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ba;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_12;
		L_12 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = XmlRootAttribute_get_Namespace_m0A911502725F9726BDDEE6EE3F38D02DA70097BD_inline(L_12, /*hidden argument*/NULL);
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_14;
		L_14 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = XmlRootAttribute_get_Namespace_m0A911502725F9726BDDEE6EE3F38D02DA70097BD_inline(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ba;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_17;
		L_17 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = XmlRootAttribute_get_DataType_mC325DC6FB4808F724638A72EB58AAA77B68C87D9(L_17, /*hidden argument*/NULL);
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_19;
		L_19 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = XmlRootAttribute_get_DataType_mC325DC6FB4808F724638A72EB58AAA77B68C87D9(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_22;
		L_22 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23;
		L_23 = XmlRootAttribute_get_IsNullable_m891FFFF4D901032D8F70819DC2A31322765AC54F_inline(L_22, /*hidden argument*/NULL);
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_24;
		L_24 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_24);
		bool L_25;
		L_25 = XmlRootAttribute_get_IsNullable_m891FFFF4D901032D8F70819DC2A31322765AC54F_inline(L_24, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_23) == ((int32_t)L_25))? 1 : 0);
	}

IL_00ba:
	{
		return (bool)0;
	}

IL_00bc:
	{
		return (bool)1;
	}

IL_00be:
	{
		return (bool)0;
	}
}
// System.Int32 System.Data.Common.ObjectStorage/TempAssemblyComparer::GetHashCode(System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TempAssemblyComparer_GetHashCode_m5DCECABCB947327A9338BD64C00E575038EFA0B4 (TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 * __this, KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3  ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0;
		L_0 = KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___obj0), /*hidden argument*/KeyValuePair_2_get_Key_mFD07BE2737B9698900D27E550ECD011F1871C5D8_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * L_2;
		L_2 = KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_inline((KeyValuePair_2_t0916DDAEFA8651A71180EF38FA82641646ED3EE3 *)(&___obj0), /*hidden argument*/KeyValuePair_2_get_Value_mE60ED80E1E9D223851A77215B9E67D6F2CCDECFB_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlRootAttribute_get_ElementName_mC660E6FE49AF0626C781832D904D1B1A9612038E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_4));
	}
}
// System.Void System.Data.Common.ObjectStorage/TempAssemblyComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempAssemblyComparer__cctor_mDDAF1C443450C15EB600712DCCD345B0AA3DCC56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 * L_0 = (TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129 *)il2cpp_codegen_object_new(TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_il2cpp_TypeInfo_var);
		TempAssemblyComparer__ctor_mCD62B6982AD8B2B0C8C2F672FCC56470E4D72A40(L_0, /*hidden argument*/NULL);
		((TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_StaticFields*)il2cpp_codegen_static_fields_for(TempAssemblyComparer_t36834D90273018B44F2D0FB61E6CAC99A7D9E129_il2cpp_TypeInfo_var))->set_s_default_0(L_0);
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
// System.Void System.Data.XDRSchema/NameType::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameType__ctor_m6BFB3898EDEA7905C3949A4AABB3E356135FBD4F (NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B * __this, String_t* ___n0, Type_t * ___t1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___n0;
		__this->set_name_0(L_0);
		Type_t * L_1 = ___t1;
		__this->set_type_1(L_1);
		return;
	}
}
// System.Int32 System.Data.XDRSchema/NameType::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameType_CompareTo_mD2780E6D358BFADD79D649228963D52377109B95 (NameType_t39DE8B1C4C82F09683DE372688E11B4F2CE51C5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_name_0();
		RuntimeObject * L_1 = ___obj0;
		int32_t L_2;
		L_2 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), 4, /*hidden argument*/NULL);
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
// System.Void System.Data.XSDSchema/NameType::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameType__ctor_mCEE8377134FB3F3D4D1D772193A000B088F1A536 (NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE * __this, String_t* ___n0, Type_t * ___t1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___n0;
		__this->set_name_0(L_0);
		Type_t * L_1 = ___t1;
		__this->set_type_1(L_1);
		return;
	}
}
// System.Int32 System.Data.XSDSchema/NameType::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameType_CompareTo_m187B95C12CD2447BBE91951B2B58F9DB6B0A45C9 (NameType_tC83605CA0673A9059F660474AC42EDEB60EAF7AE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_name_0();
		RuntimeObject * L_1 = ___obj0;
		int32_t L_2;
		L_2 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), 4, /*hidden argument*/NULL);
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
// System.Void System.Data.XmlToDatasetMap/TableSchemaInfo::.ctor(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableSchemaInfo__ctor_m6E8537548AFCDD1C373B24F120DDDCD3407F1916 (TableSchemaInfo_t30BCB6D26A3BB9834CB6F80FAE03083BC0D5F830 * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___tableSchema0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = ___tableSchema0;
		__this->set_TableSchema_0(L_0);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1 = ___tableSchema0;
		NullCheck(L_1);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_2;
		L_2 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_2);
		XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * L_4 = (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E *)il2cpp_codegen_object_new(XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_il2cpp_TypeInfo_var);
		XmlNodeIdHashtable__ctor_m47350A139E925899A7F80DF4AAFE3E9059CF0235(L_4, L_3, /*hidden argument*/NULL);
		__this->set_ColumnsSchemaMap_1(L_4);
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
// System.Void System.Data.XmlToDatasetMap/XmlNodeIdHashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeIdHashtable__ctor_m47350A139E925899A7F80DF4AAFE3E9059CF0235 (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_2 = (XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 *)il2cpp_codegen_object_new(XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454_il2cpp_TypeInfo_var);
		XmlNodeIdentety__ctor_mF95AB35C3B3509393CC0DF933B4961AB15C73491(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set__id_21(L_2);
		int32_t L_3 = ___capacity0;
		Hashtable__ctor_mF6B704809ABE222280933EA170B6664286C91FDC(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Data.XmlToDatasetMap/XmlNodeIdHashtable::get_Item(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeIdHashtable_get_Item_m8435C3757F0BA58297130AC5E54EBFABCA851831 (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method)
{
	{
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_0 = __this->get__id_21();
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = ___node0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlNode::get_LocalName() */, L_1);
		NullCheck(L_0);
		L_0->set_LocalName_0(L_2);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_3 = __this->get__id_21();
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_4 = ___node0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_4);
		NullCheck(L_3);
		L_3->set_NamespaceURI_1(L_5);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_6 = __this->get__id_21();
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, __this, L_6);
		return L_7;
	}
}
// System.Object System.Data.XmlToDatasetMap/XmlNodeIdHashtable::get_Item(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeIdHashtable_get_Item_m88EF0CE7374EF66EEF9DA164A04E049C6B43E865 (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___dataReader0, const RuntimeMethod* method)
{
	{
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_0 = __this->get__id_21();
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_1 = ___dataReader0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_1);
		NullCheck(L_0);
		L_0->set_LocalName_0(L_2);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_3 = __this->get__id_21();
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_4 = ___dataReader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_4);
		NullCheck(L_3);
		L_3->set_NamespaceURI_1(L_5);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_6 = __this->get__id_21();
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, __this, L_6);
		return L_7;
	}
}
// System.Object System.Data.XmlToDatasetMap/XmlNodeIdHashtable::get_Item(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeIdHashtable_get_Item_m89FE8C9D8E98B9FF3A814D1DB62F8FE954001F4E (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___table0, const RuntimeMethod* method)
{
	{
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_0 = __this->get__id_21();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1 = ___table0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DataTable_get_EncodedTableName_mBEE66CC7D4DC997C202A1A0656C0CD947AC05B3D(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_LocalName_0(L_2);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_3 = __this->get__id_21();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4 = ___table0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DataTable_get_Namespace_m5076F188203F858D59D90398801E91DF9E9F1274(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_NamespaceURI_1(L_5);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_6 = __this->get__id_21();
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, __this, L_6);
		return L_7;
	}
}
// System.Object System.Data.XmlToDatasetMap/XmlNodeIdHashtable::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeIdHashtable_get_Item_m4389A66494258CEFE6F2D4B7A9334F1A63EDB835 (XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_0 = __this->get__id_21();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		L_0->set_LocalName_0(L_1);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_2 = __this->get__id_21();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		L_2->set_NamespaceURI_1(L_3);
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_4 = __this->get__id_21();
		RuntimeObject * L_5;
		L_5 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, __this, L_4);
		return L_5;
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
// System.Void System.Data.XmlToDatasetMap/XmlNodeIdentety::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeIdentety__ctor_mF95AB35C3B3509393CC0DF933B4961AB15C73491 (XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___localName0;
		__this->set_LocalName_0(L_0);
		String_t* L_1 = ___namespaceURI1;
		__this->set_NamespaceURI_1(L_1);
		return;
	}
}
// System.Int32 System.Data.XmlToDatasetMap/XmlNodeIdentety::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeIdentety_GetHashCode_mE117B700DC03A4109832691B8FFD221A464BC2AA (XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_LocalName_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Data.XmlToDatasetMap/XmlNodeIdentety::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeIdentety_Equals_m3146CB0D203AA00EBC930295E476831CF827BFA4 (XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 *)CastclassSealed((RuntimeObject*)L_0, XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454_il2cpp_TypeInfo_var));
		String_t* L_1 = __this->get_LocalName_0();
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_LocalName_0();
		bool L_4;
		L_4 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_1, L_3, 5, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = __this->get_NamespaceURI_1();
		XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_NamespaceURI_1();
		bool L_8;
		L_8 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_5, L_7, 5, /*hidden argument*/NULL);
		return L_8;
	}

IL_002e:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * DataTable_get_DataSet_m2C802912DB49BDC3016F489FB8D28CA79D557CFD_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method)
{
	{
		DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * L_0 = __this->get__dataSet_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * DataTable_get_Constraints_m5A2544AA333C8296B27056F249C2328E81A0A975_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method)
{
	{
		ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * L_0 = __this->get__constraintCollection_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataRelation_SetParentKeyConstraint_m01B06666313B33781C64456936F5677060DCEB74_inline (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ___value0, const RuntimeMethod* method)
{
	{
		UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * L_0 = ___value0;
		__this->set__parentKeyConstraint_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataRelation_SetChildKeyConstraint_mC5248944C17EFEBB2E386BAD87EDDDD29A010BD0_inline (DataRelation_t0AA86AB6D62D5F0F71E6905C8E9D8C52054D0FC9 * __this, ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * ___value0, const RuntimeMethod* method)
{
	{
		ForeignKeyConstraint_t66E716D92081A532EEC92D35BE0576B1C21C76CD * L_0 = ___value0;
		__this->set__childKeyConstraint_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * DataSet_get_Relations_m648141B55045B57180317A120843883175B4A449_inline (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * __this, const RuntimeMethod* method)
{
	{
		DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * L_0 = __this->get__relationCollection_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * DataSet_get_Tables_m02936105F6E973CE901C846EFE6C8BB3B4AD7BAE_inline (DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * __this, const RuntimeMethod* method)
{
	{
		DataTableCollection_t7DE29B9A65CD54CBD488A1D9753305753AC3B451 * L_0 = __this->get__tableCollection_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlRootAttribute_get_Namespace_m0A911502725F9726BDDEE6EE3F38D02DA70097BD_inline (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ns_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlRootAttribute_get_IsNullable_m891FFFF4D901032D8F70819DC2A31322765AC54F_inline (XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isNullable_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method)
{
	{
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_0 = __this->get__columnCollection_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
