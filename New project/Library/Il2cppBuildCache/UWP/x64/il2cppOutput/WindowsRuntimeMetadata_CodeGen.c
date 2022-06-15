#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Windows.Foundation.AsyncOperationCompletedHandler`1::.ctor(System.Object,System.IntPtr)
// 0x00000002 System.Void Windows.Foundation.AsyncOperationCompletedHandler`1::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
// 0x00000003 System.Void Windows.Foundation.AsyncOperationProgressHandler`2::.ctor(System.Object,System.IntPtr)
// 0x00000004 System.Void Windows.Foundation.AsyncOperationProgressHandler`2::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
// 0x00000005 System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2::.ctor(System.Object,System.IntPtr)
// 0x00000006 System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
// 0x00000007 Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1::First()
// 0x00000008 T Windows.Foundation.Collections.IIterator`1::get_Current()
// 0x00000009 System.Boolean Windows.Foundation.Collections.IIterator`1::get_HasCurrent()
// 0x0000000A System.Boolean Windows.Foundation.Collections.IIterator`1::MoveNext()
// 0x0000000B System.UInt32 Windows.Foundation.Collections.IIterator`1::GetMany(T[])
// 0x0000000C K Windows.Foundation.Collections.IKeyValuePair`2::get_Key()
// 0x0000000D V Windows.Foundation.Collections.IKeyValuePair`2::get_Value()
// 0x0000000E V Windows.Foundation.Collections.IMapView`2::Lookup(K)
// 0x0000000F System.UInt32 Windows.Foundation.Collections.IMapView`2::get_Size()
// 0x00000010 System.Boolean Windows.Foundation.Collections.IMapView`2::HasKey(K)
// 0x00000011 System.Void Windows.Foundation.Collections.IMapView`2::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
// 0x00000012 V Windows.Foundation.Collections.IMap`2::Lookup(K)
// 0x00000013 System.UInt32 Windows.Foundation.Collections.IMap`2::get_Size()
// 0x00000014 System.Boolean Windows.Foundation.Collections.IMap`2::HasKey(K)
// 0x00000015 System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2::GetView()
// 0x00000016 System.Boolean Windows.Foundation.Collections.IMap`2::Insert(K,V)
// 0x00000017 System.Void Windows.Foundation.Collections.IMap`2::Remove(K)
// 0x00000018 System.Void Windows.Foundation.Collections.IMap`2::Clear()
// 0x00000019 T Windows.Foundation.Collections.IVectorView`1::GetAt(System.UInt32)
// 0x0000001A System.UInt32 Windows.Foundation.Collections.IVectorView`1::get_Size()
// 0x0000001B System.Boolean Windows.Foundation.Collections.IVectorView`1::IndexOf(T,System.UInt32&)
// 0x0000001C System.UInt32 Windows.Foundation.Collections.IVectorView`1::GetMany(System.UInt32,T[])
// 0x0000001D T Windows.Foundation.Collections.IVector`1::GetAt(System.UInt32)
// 0x0000001E System.UInt32 Windows.Foundation.Collections.IVector`1::get_Size()
// 0x0000001F System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1::GetView()
// 0x00000020 System.Boolean Windows.Foundation.Collections.IVector`1::IndexOf(T,System.UInt32&)
// 0x00000021 System.Void Windows.Foundation.Collections.IVector`1::SetAt(System.UInt32,T)
// 0x00000022 System.Void Windows.Foundation.Collections.IVector`1::InsertAt(System.UInt32,T)
// 0x00000023 System.Void Windows.Foundation.Collections.IVector`1::RemoveAt(System.UInt32)
// 0x00000024 System.Void Windows.Foundation.Collections.IVector`1::Append(T)
// 0x00000025 System.Void Windows.Foundation.Collections.IVector`1::RemoveAtEnd()
// 0x00000026 System.Void Windows.Foundation.Collections.IVector`1::Clear()
// 0x00000027 System.UInt32 Windows.Foundation.Collections.IVector`1::GetMany(System.UInt32,T[])
// 0x00000028 System.Void Windows.Foundation.Collections.IVector`1::ReplaceAll(T[])
// 0x00000029 System.Void Windows.Foundation.EventHandler`1::.ctor(System.Object,System.IntPtr)
// 0x0000002A System.Void Windows.Foundation.EventHandler`1::Invoke(System.Object,T)
// 0x0000002B System.UInt32 Windows.Foundation.IAsyncInfo::get_Id()
extern void IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74 (void);
// 0x0000002C Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status()
extern void IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583 (void);
// 0x0000002D System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode()
extern void IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806 (void);
// 0x0000002E System.Void Windows.Foundation.IAsyncInfo::Cancel()
extern void IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE (void);
// 0x0000002F System.Void Windows.Foundation.IAsyncInfo::Close()
extern void IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635 (void);
// 0x00000030 System.Void Windows.Foundation.IAsyncOperationWithProgress`2::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
// 0x00000031 Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2::get_Progress()
// 0x00000032 System.Void Windows.Foundation.IAsyncOperationWithProgress`2::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
// 0x00000033 Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2::get_Completed()
// 0x00000034 TResult Windows.Foundation.IAsyncOperationWithProgress`2::GetResults()
// 0x00000035 System.Void Windows.Foundation.IAsyncOperation`1::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
// 0x00000036 Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1::get_Completed()
// 0x00000037 TResult Windows.Foundation.IAsyncOperation`1::GetResults()
// 0x00000038 System.Void Windows.Foundation.IClosable::Close()
extern void IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999 (void);
// 0x00000039 Windows.Foundation.PropertyType Windows.Foundation.IPropertyValue::get_Type()
extern void IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272 (void);
// 0x0000003A System.Boolean Windows.Foundation.IPropertyValue::get_IsNumericScalar()
extern void IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60 (void);
// 0x0000003B System.Byte Windows.Foundation.IPropertyValue::GetUInt8()
extern void IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05 (void);
// 0x0000003C System.Int16 Windows.Foundation.IPropertyValue::GetInt16()
extern void IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE (void);
// 0x0000003D System.UInt16 Windows.Foundation.IPropertyValue::GetUInt16()
extern void IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5 (void);
// 0x0000003E System.Int32 Windows.Foundation.IPropertyValue::GetInt32()
extern void IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA (void);
// 0x0000003F System.UInt32 Windows.Foundation.IPropertyValue::GetUInt32()
extern void IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205 (void);
// 0x00000040 System.Int64 Windows.Foundation.IPropertyValue::GetInt64()
extern void IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E (void);
// 0x00000041 System.UInt64 Windows.Foundation.IPropertyValue::GetUInt64()
extern void IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA (void);
// 0x00000042 System.Single Windows.Foundation.IPropertyValue::GetSingle()
extern void IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F (void);
// 0x00000043 System.Double Windows.Foundation.IPropertyValue::GetDouble()
extern void IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F (void);
// 0x00000044 System.Char Windows.Foundation.IPropertyValue::GetChar16()
extern void IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8 (void);
// 0x00000045 System.Boolean Windows.Foundation.IPropertyValue::GetBoolean()
extern void IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587 (void);
// 0x00000046 System.String Windows.Foundation.IPropertyValue::GetString()
extern void IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C (void);
// 0x00000047 System.Guid Windows.Foundation.IPropertyValue::GetGuid()
extern void IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11 (void);
// 0x00000048 System.DateTimeOffset Windows.Foundation.IPropertyValue::GetDateTime()
extern void IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C (void);
// 0x00000049 System.TimeSpan Windows.Foundation.IPropertyValue::GetTimeSpan()
extern void IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239 (void);
// 0x0000004A Windows.Foundation.Point Windows.Foundation.IPropertyValue::GetPoint()
extern void IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B (void);
// 0x0000004B Windows.Foundation.Size Windows.Foundation.IPropertyValue::GetSize()
extern void IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC (void);
// 0x0000004C Windows.Foundation.Rect Windows.Foundation.IPropertyValue::GetRect()
extern void IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06 (void);
// 0x0000004D System.Void Windows.Foundation.IPropertyValue::GetUInt8Array(System.Byte[]&)
extern void IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1 (void);
// 0x0000004E System.Void Windows.Foundation.IPropertyValue::GetInt16Array(System.Int16[]&)
extern void IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849 (void);
// 0x0000004F System.Void Windows.Foundation.IPropertyValue::GetUInt16Array(System.UInt16[]&)
extern void IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1 (void);
// 0x00000050 System.Void Windows.Foundation.IPropertyValue::GetInt32Array(System.Int32[]&)
extern void IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A (void);
// 0x00000051 System.Void Windows.Foundation.IPropertyValue::GetUInt32Array(System.UInt32[]&)
extern void IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8 (void);
// 0x00000052 System.Void Windows.Foundation.IPropertyValue::GetInt64Array(System.Int64[]&)
extern void IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564 (void);
// 0x00000053 System.Void Windows.Foundation.IPropertyValue::GetUInt64Array(System.UInt64[]&)
extern void IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E (void);
// 0x00000054 System.Void Windows.Foundation.IPropertyValue::GetSingleArray(System.Single[]&)
extern void IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57 (void);
// 0x00000055 System.Void Windows.Foundation.IPropertyValue::GetDoubleArray(System.Double[]&)
extern void IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5 (void);
// 0x00000056 System.Void Windows.Foundation.IPropertyValue::GetChar16Array(System.Char[]&)
extern void IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1 (void);
// 0x00000057 System.Void Windows.Foundation.IPropertyValue::GetBooleanArray(System.Boolean[]&)
extern void IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C (void);
// 0x00000058 System.Void Windows.Foundation.IPropertyValue::GetStringArray(System.String[]&)
extern void IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F (void);
// 0x00000059 System.Void Windows.Foundation.IPropertyValue::GetInspectableArray(System.Object[]&)
extern void IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79 (void);
// 0x0000005A System.Void Windows.Foundation.IPropertyValue::GetGuidArray(System.Guid[]&)
extern void IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07 (void);
// 0x0000005B System.Void Windows.Foundation.IPropertyValue::GetDateTimeArray(System.DateTimeOffset[]&)
extern void IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7 (void);
// 0x0000005C System.Void Windows.Foundation.IPropertyValue::GetTimeSpanArray(System.TimeSpan[]&)
extern void IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167 (void);
// 0x0000005D System.Void Windows.Foundation.IPropertyValue::GetPointArray(Windows.Foundation.Point[]&)
extern void IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0 (void);
// 0x0000005E System.Void Windows.Foundation.IPropertyValue::GetSizeArray(Windows.Foundation.Size[]&)
extern void IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC (void);
// 0x0000005F System.Void Windows.Foundation.IPropertyValue::GetRectArray(Windows.Foundation.Rect[]&)
extern void IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87 (void);
// 0x00000060 T[] Windows.Foundation.IReferenceArray`1::get_Value()
// 0x00000061 T Windows.Foundation.IReference`1::get_Value()
// 0x00000062 System.String Windows.Foundation.IStringable::ToString()
extern void IStringable_ToString_mAACC01E89FA76E5F4B95116FDC1CF4DBE2ECC692 (void);
// 0x00000063 System.Void Windows.Foundation.Metadata.ActivatableAttribute::.ctor(System.Type,System.UInt32,System.String)
extern void ActivatableAttribute__ctor_mD46F484204EAC5CFA97A677EEA9E3057B7EB0A1D (void);
// 0x00000064 System.Void Windows.Foundation.Metadata.AllowMultipleAttribute::.ctor()
extern void AllowMultipleAttribute__ctor_m38B472E44C36B692E88FB0E3371F49F89190B767 (void);
// 0x00000065 System.Void Windows.Foundation.Metadata.ApiContractAttribute::.ctor()
extern void ApiContractAttribute__ctor_mA1DC183FCECA2802E9B2A8784EEB2CDDCDB499AE (void);
// 0x00000066 System.Void Windows.Foundation.Metadata.AttributeNameAttribute::.ctor(System.String)
extern void AttributeNameAttribute__ctor_m7A11A1D60B4EB01C76419064CE4D848B01940844 (void);
// 0x00000067 System.Void Windows.Foundation.Metadata.AttributeUsageAttribute::.ctor(System.AttributeTargets)
extern void AttributeUsageAttribute__ctor_m5750318D560E5564D46D234B358B09886EA21FA7 (void);
// 0x00000068 System.Void Windows.Foundation.Metadata.ComposableAttribute::.ctor(System.Type,Windows.Foundation.Metadata.CompositionType,System.UInt32,System.String)
extern void ComposableAttribute__ctor_mE7F61467F5217DE8F9B3B7D7B8F7FFD15F24041A (void);
// 0x00000069 System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.UInt32)
extern void ContractVersionAttribute__ctor_m7105FB71D69F6B212C5EF0FC82B2FF1AD6278822 (void);
// 0x0000006A System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.Type,System.UInt32)
extern void ContractVersionAttribute__ctor_mA259C171AB6F3483FBEBBA7095A5764E1C34F6D2 (void);
// 0x0000006B System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.String,System.UInt32)
extern void ContractVersionAttribute__ctor_mA7901265471AF7521D3B4F1CDC61EFD4D8F67ADE (void);
// 0x0000006C System.Void Windows.Foundation.Metadata.DefaultAttribute::.ctor()
extern void DefaultAttribute__ctor_m4354570F424E2E8EFA55798F175E9ED96F73B73F (void);
// 0x0000006D System.Void Windows.Foundation.Metadata.DeprecatedAttribute::.ctor(System.String,Windows.Foundation.Metadata.DeprecationType,System.UInt32,System.String)
extern void DeprecatedAttribute__ctor_m1C7F0A1DF75F920AD00D43E9576A8827392B4F2D (void);
// 0x0000006E System.Void Windows.Foundation.Metadata.DualApiPartitionAttribute::.ctor()
extern void DualApiPartitionAttribute__ctor_m9CDBECBCF7007920F8904A4454A42116AFA721C1 (void);
// 0x0000006F System.Void Windows.Foundation.Metadata.ExclusiveToAttribute::.ctor(System.Type)
extern void ExclusiveToAttribute__ctor_m4B131B7E52F8AEB7771DA727EE9AA091DFE26F61 (void);
// 0x00000070 System.Void Windows.Foundation.Metadata.GuidAttribute::.ctor(System.UInt32,System.UInt16,System.UInt16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern void GuidAttribute__ctor_mF2EF6CA62F02E1EA45916B732D379377C761A3A7 (void);
// 0x00000071 System.Void Windows.Foundation.Metadata.LengthIsAttribute::.ctor(System.Int32)
extern void LengthIsAttribute__ctor_mAF7D4E8E12B5FE659DE4B33FD4894E8029ADC46E (void);
// 0x00000072 System.Void Windows.Foundation.Metadata.MarshalingBehaviorAttribute::.ctor(Windows.Foundation.Metadata.MarshalingType)
extern void MarshalingBehaviorAttribute__ctor_m86B470D1DE8EC24E115185A6E2B7BF37F581C9E0 (void);
// 0x00000073 System.Void Windows.Foundation.Metadata.RemoteAsyncAttribute::.ctor()
extern void RemoteAsyncAttribute__ctor_mB05317840D939AD7000695453A4C88022B0FB9BE (void);
// 0x00000074 System.Void Windows.Foundation.Metadata.StaticAttribute::.ctor(System.Type,System.UInt32,System.String)
extern void StaticAttribute__ctor_mF97BB39BD47CAEF0DBBA6BC0C73E5A8EB2D413DD (void);
// 0x00000075 System.Void Windows.Foundation.Metadata.ThreadingAttribute::.ctor(Windows.Foundation.Metadata.ThreadingModel)
extern void ThreadingAttribute__ctor_m0B875434197471A46358686EE66D4D1A7BAF8C48 (void);
// 0x00000076 System.Void Windows.Foundation.Metadata.WebHostHiddenAttribute::.ctor()
extern void WebHostHiddenAttribute__ctor_m682515FD2F960F1DD70B4A60AE35D02187FFE00A (void);
// 0x00000077 System.String Windows.Foundation.IUriEscapeStatics::UnescapeComponent(System.String)
// 0x00000078 System.String Windows.Foundation.IUriEscapeStatics::EscapeComponent(System.String)
// 0x00000079 System.String Windows.Foundation.IUriRuntimeClass::get_AbsoluteUri()
// 0x0000007A System.String Windows.Foundation.IUriRuntimeClass::get_DisplayUri()
// 0x0000007B System.String Windows.Foundation.IUriRuntimeClass::get_Domain()
// 0x0000007C System.String Windows.Foundation.IUriRuntimeClass::get_Extension()
// 0x0000007D System.String Windows.Foundation.IUriRuntimeClass::get_Fragment()
// 0x0000007E System.String Windows.Foundation.IUriRuntimeClass::get_Host()
// 0x0000007F System.String Windows.Foundation.IUriRuntimeClass::get_Password()
// 0x00000080 System.String Windows.Foundation.IUriRuntimeClass::get_Path()
// 0x00000081 System.String Windows.Foundation.IUriRuntimeClass::get_Query()
// 0x00000082 Windows.Foundation.WwwFormUrlDecoder Windows.Foundation.IUriRuntimeClass::get_QueryParsed()
// 0x00000083 System.String Windows.Foundation.IUriRuntimeClass::get_RawUri()
extern void IUriRuntimeClass_get_RawUri_mA70F86F9BE3F3D07D4BBB8D5079D13A60D194891 (void);
// 0x00000084 System.String Windows.Foundation.IUriRuntimeClass::get_SchemeName()
// 0x00000085 System.String Windows.Foundation.IUriRuntimeClass::get_UserName()
// 0x00000086 System.Int32 Windows.Foundation.IUriRuntimeClass::get_Port()
// 0x00000087 System.Boolean Windows.Foundation.IUriRuntimeClass::get_Suspicious()
// 0x00000088 System.Boolean Windows.Foundation.IUriRuntimeClass::Equals(System.Uri)
// 0x00000089 System.Uri Windows.Foundation.IUriRuntimeClass::CombineUri(System.String)
// 0x0000008A System.Uri Windows.Foundation.IUriRuntimeClassFactory::CreateUri(System.String)
// 0x0000008B System.Uri Windows.Foundation.IUriRuntimeClassFactory::CreateWithRelativeUri(System.String,System.String)
// 0x0000008C System.String Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri::get_AbsoluteCanonicalUri()
// 0x0000008D System.String Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri::get_DisplayIri()
// 0x0000008E System.Void Windows.Foundation.IWwwFormUrlDecoderEntry::$__Stripped0_get_Name()
// 0x0000008F System.Void Windows.Foundation.IWwwFormUrlDecoderEntry::$__Stripped1_get_Value()
// 0x00000090 System.Void Windows.Foundation.IWwwFormUrlDecoderRuntimeClass::$__Stripped0_GetFirstValueByName()
// 0x00000091 System.Void Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory::$__Stripped0_CreateWwwFormUrlDecoder()
// 0x00000092 System.Void Windows.Foundation.Uri::.ctor(System.String)
extern void Uri__ctor_m0D439C7728FEE1D4F2B88E215C2D59A58C5FBE65 (void);
// 0x00000093 System.Void Windows.Foundation.Uri::.ctor(System.String,System.String)
extern void Uri__ctor_m41548CFDC457565BE64EC6CF236A0D08D1ED2500 (void);
// 0x00000094 System.String Windows.Foundation.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_mBD430BA219541014CC78A817674F7E63FFD6439E (void);
// 0x00000095 System.String Windows.Foundation.Uri::get_DisplayUri()
extern void Uri_get_DisplayUri_mC840108DF8A1051D01E3CF7D3D3D311EFF19B654 (void);
// 0x00000096 System.String Windows.Foundation.Uri::get_Domain()
extern void Uri_get_Domain_m35368704392605936428C37AFE157E9CE5413937 (void);
// 0x00000097 System.String Windows.Foundation.Uri::get_Extension()
extern void Uri_get_Extension_m8142ECBA0B93DC4AEC1810E7F40B3594D3E640E6 (void);
// 0x00000098 System.String Windows.Foundation.Uri::get_Fragment()
extern void Uri_get_Fragment_mF20EFE395740FD3CC9D5F7ACCAE6BDFB69797E7D (void);
// 0x00000099 System.String Windows.Foundation.Uri::get_Host()
extern void Uri_get_Host_m07327214CF731421F1B74B2BFF29EFE140F595A5 (void);
// 0x0000009A System.String Windows.Foundation.Uri::get_Password()
extern void Uri_get_Password_mFB9F08FC30386D1C5D9AF21E18F76E8BD1ED6933 (void);
// 0x0000009B System.String Windows.Foundation.Uri::get_Path()
extern void Uri_get_Path_m4EBFEC3B98C08E5B0BFB759C3517980CBD42CF7B (void);
// 0x0000009C System.String Windows.Foundation.Uri::get_Query()
extern void Uri_get_Query_mA89D787B4617536BCC50D367D1ECD586989722F1 (void);
// 0x0000009D Windows.Foundation.WwwFormUrlDecoder Windows.Foundation.Uri::get_QueryParsed()
extern void Uri_get_QueryParsed_mAF4520F289FD311BDA5E2002FCDE57445E89840D (void);
// 0x0000009E System.String Windows.Foundation.Uri::get_RawUri()
extern void Uri_get_RawUri_m0F1B0FA3F111F707620C43083ECEB89851D1B5A5 (void);
// 0x0000009F System.String Windows.Foundation.Uri::get_SchemeName()
extern void Uri_get_SchemeName_m97AC67427E5EA0CBB76899709108D110088723DC (void);
// 0x000000A0 System.String Windows.Foundation.Uri::get_UserName()
extern void Uri_get_UserName_m826B8707FD4FBEF72C3B1CA82A504C213EB89C6E (void);
// 0x000000A1 System.Int32 Windows.Foundation.Uri::get_Port()
extern void Uri_get_Port_mFBAAAB48EE34DF72F1BF2EE645B71CC58254FC9F (void);
// 0x000000A2 System.Boolean Windows.Foundation.Uri::get_Suspicious()
extern void Uri_get_Suspicious_mD493F8FE1FC1AAC6E12339862503C11BCC2E8FD2 (void);
// 0x000000A3 System.Boolean Windows.Foundation.Uri::Equals(System.Uri)
extern void Uri_Equals_m559A85A0315D7546E7094024EEDBCAC9F619D2FF (void);
// 0x000000A4 System.Uri Windows.Foundation.Uri::CombineUri(System.String)
extern void Uri_CombineUri_mBD3BF069E31739C01F855B60ECA8B183930ED355 (void);
// 0x000000A5 System.String Windows.Foundation.Uri::get_AbsoluteCanonicalUri()
extern void Uri_get_AbsoluteCanonicalUri_m3415A1854346950B0AC7B6D19D31B0394C0CF007 (void);
// 0x000000A6 System.String Windows.Foundation.Uri::get_DisplayIri()
extern void Uri_get_DisplayIri_mFB2216CA1CC976FC636B460D4C7D66C6836CF1B8 (void);
// 0x000000A7 System.String Windows.Foundation.Uri::ToString()
extern void Uri_ToString_m38F6D46B11B7C342DE117A4968556878798E1715 (void);
// 0x000000A8 System.String Windows.Foundation.Uri::UnescapeComponent(System.String)
extern void Uri_UnescapeComponent_m9AB29B6D922AC549CEE1D3A9BABC8AF9761624F7 (void);
// 0x000000A9 System.String Windows.Foundation.Uri::EscapeComponent(System.String)
extern void Uri_EscapeComponent_m6C43EC4D66038917B17FA8042996E6EC121306D0 (void);
// 0x000000AA System.Void Windows.Foundation.Uri::Finalize()
extern void Uri_Finalize_mD72FB8446BDF1951EA6D00D6941227EC7EA55EFC (void);
// 0x000000AB Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry> Windows.Foundation.WwwFormUrlDecoder::First()
extern void WwwFormUrlDecoder_First_m402CD9BC9D8F20A9B49743322372E692B4F8D9A7 (void);
// 0x000000AC Windows.Foundation.IWwwFormUrlDecoderEntry Windows.Foundation.WwwFormUrlDecoder::GetAt(System.UInt32)
extern void WwwFormUrlDecoder_GetAt_m6EC28555D3ECAC154EA9FA6485D3572B3FC76273 (void);
// 0x000000AD System.UInt32 Windows.Foundation.WwwFormUrlDecoder::get_Size()
extern void WwwFormUrlDecoder_get_Size_m9EE99853ED73DCC48EE325AC2C2DA858685198EF (void);
// 0x000000AE System.Boolean Windows.Foundation.WwwFormUrlDecoder::IndexOf(Windows.Foundation.IWwwFormUrlDecoderEntry,System.UInt32&)
extern void WwwFormUrlDecoder_IndexOf_m7D62504C835C82E535B5DFCFB5F2128806A8530B (void);
// 0x000000AF System.UInt32 Windows.Foundation.WwwFormUrlDecoder::GetMany(System.UInt32,Windows.Foundation.IWwwFormUrlDecoderEntry[])
extern void WwwFormUrlDecoder_GetMany_m12617350BC8A57EB640495FF4DCED20CD4D3C485 (void);
// 0x000000B0 Windows.Foundation.IWwwFormUrlDecoderEntry Windows.Foundation.WwwFormUrlDecoder::get_Item(System.Int32)
extern void WwwFormUrlDecoder_get_Item_m072111AF890B87246DD97B8ADF71ABCD8D789E33 (void);
// 0x000000B1 System.Int32 Windows.Foundation.WwwFormUrlDecoder::get_Count()
extern void WwwFormUrlDecoder_get_Count_m74493F6CB4386919E81FDEBB70FC0290B2FC0D6E (void);
// 0x000000B2 System.Collections.Generic.IEnumerator`1<Windows.Foundation.IWwwFormUrlDecoderEntry> Windows.Foundation.WwwFormUrlDecoder::GetEnumerator()
extern void WwwFormUrlDecoder_GetEnumerator_mDFB83E5A9C72B432B3A99A74D2F7EA88CFED181F (void);
// 0x000000B3 System.Collections.IEnumerator Windows.Foundation.WwwFormUrlDecoder::GetEnumerator()
extern void WwwFormUrlDecoder_GetEnumerator_mEF61B02DF829B59C8C0A800A60B9B6A205EE656D (void);
// 0x000000B4 System.Void Windows.Foundation.WwwFormUrlDecoder::Finalize()
extern void WwwFormUrlDecoder_Finalize_mD114EB5595C6225FBC7C65433DB5A1202685E864 (void);
// 0x000000B5 System.Void Windows.Perception.Spatial.ISpatialAnchor::$__Stripped0_get_CoordinateSystem()
// 0x000000B6 System.Void Windows.Perception.Spatial.ISpatialAnchor::$__Stripped1_get_RawCoordinateSystem()
// 0x000000B7 System.Void Windows.Perception.Spatial.ISpatialAnchor::$__Stripped2_add_RawCoordinateSystemAdjusted()
// 0x000000B8 System.Void Windows.Perception.Spatial.ISpatialAnchor::$__Stripped3_remove_RawCoordinateSystemAdjusted()
// 0x000000B9 System.Void Windows.Perception.Spatial.ISpatialAnchor2::$__Stripped0_get_RemovedByUser()
// 0x000000BA System.Void Windows.Perception.Spatial.ISpatialAnchorStatics::$__Stripped0_TryCreateRelativeTo()
// 0x000000BB System.Void Windows.Perception.Spatial.ISpatialAnchorStatics::$__Stripped1_TryCreateRelativeTo()
// 0x000000BC System.Void Windows.Perception.Spatial.ISpatialAnchorStatics::$__Stripped2_TryCreateRelativeTo()
// 0x000000BD Windows.Foundation.IAsyncOperation`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>> Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics::TryImportAnchorsAsync(Windows.Storage.Streams.IInputStream)
// 0x000000BE Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics::TryExportAnchorsAsync(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>,Windows.Storage.Streams.IOutputStream)
// 0x000000BF Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics::RequestAccessAsync()
// 0x000000C0 System.Void Windows.Perception.Spatial.SpatialAnchor::Finalize()
extern void SpatialAnchor_Finalize_mD2DFFD5DDCF1D067D44429FDEE927A599EC4EB6A (void);
// 0x000000C1 Windows.Foundation.IAsyncOperation`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>> Windows.Perception.Spatial.SpatialAnchorTransferManager::TryImportAnchorsAsync(Windows.Storage.Streams.IInputStream)
extern void SpatialAnchorTransferManager_TryImportAnchorsAsync_m45940D48CB4D949EBDCF5F0C67F77461213F5C17 (void);
// 0x000000C2 Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Perception.Spatial.SpatialAnchorTransferManager::TryExportAnchorsAsync(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>,Windows.Storage.Streams.IOutputStream)
extern void SpatialAnchorTransferManager_TryExportAnchorsAsync_mAB9D4A82DD12A660A3B3857A65814F73C5812E9C (void);
// 0x000000C3 Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Windows.Perception.Spatial.SpatialAnchorTransferManager::RequestAccessAsync()
extern void SpatialAnchorTransferManager_RequestAccessAsync_m0F960AF714BD7BA3BD6CB2B3A7478FB936E52C26 (void);
// 0x000000C4 System.Void Windows.Perception.Spatial.SpatialAnchorTransferManager::Finalize()
extern void SpatialAnchorTransferManager_Finalize_m8BC617ED094631C3C0CA01E3312C6317C19D8491 (void);
// 0x000000C5 System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity()
extern void IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470 (void);
// 0x000000C6 System.UInt32 Windows.Storage.Streams.IBuffer::get_Length()
extern void IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19 (void);
// 0x000000C7 System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32)
extern void IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01 (void);
// 0x000000C8 Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern void IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B (void);
// 0x000000C9 Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer)
extern void IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F (void);
// 0x000000CA Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync()
extern void IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C (void);
// 0x000000CB System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size()
extern void IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6 (void);
// 0x000000CC System.Void Windows.Storage.Streams.IRandomAccessStream::put_Size(System.UInt64)
extern void IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7 (void);
// 0x000000CD Windows.Storage.Streams.IInputStream Windows.Storage.Streams.IRandomAccessStream::GetInputStreamAt(System.UInt64)
extern void IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB (void);
// 0x000000CE Windows.Storage.Streams.IOutputStream Windows.Storage.Streams.IRandomAccessStream::GetOutputStreamAt(System.UInt64)
extern void IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023 (void);
// 0x000000CF System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position()
extern void IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3 (void);
// 0x000000D0 System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64)
extern void IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A (void);
// 0x000000D1 Windows.Storage.Streams.IRandomAccessStream Windows.Storage.Streams.IRandomAccessStream::CloneStream()
extern void IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A (void);
// 0x000000D2 System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead()
extern void IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071 (void);
// 0x000000D3 System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite()
extern void IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146 (void);
// 0x000000D4 System.UInt64 Windows.System.IMemoryManagerStatics::get_AppMemoryUsage()
// 0x000000D5 System.UInt64 Windows.System.IMemoryManagerStatics::get_AppMemoryUsageLimit()
// 0x000000D6 System.Void Windows.System.IMemoryManagerStatics::$__Stripped0_get_AppMemoryUsageLevel()
// 0x000000D7 System.Void Windows.System.IMemoryManagerStatics::$__Stripped1_add_AppMemoryUsageIncreased()
// 0x000000D8 System.Void Windows.System.IMemoryManagerStatics::$__Stripped2_remove_AppMemoryUsageIncreased()
// 0x000000D9 System.Void Windows.System.IMemoryManagerStatics::$__Stripped3_add_AppMemoryUsageDecreased()
// 0x000000DA System.Void Windows.System.IMemoryManagerStatics::$__Stripped4_remove_AppMemoryUsageDecreased()
// 0x000000DB System.Void Windows.System.IMemoryManagerStatics::$__Stripped5_add_AppMemoryUsageLimitChanging()
// 0x000000DC System.Void Windows.System.IMemoryManagerStatics::$__Stripped6_remove_AppMemoryUsageLimitChanging()
// 0x000000DD System.Void Windows.System.IMemoryManagerStatics2::$__Stripped0_GetAppMemoryReport()
// 0x000000DE System.Void Windows.System.IMemoryManagerStatics2::$__Stripped1_GetProcessMemoryReport()
// 0x000000DF System.Void Windows.System.IMemoryManagerStatics3::$__Stripped0_TrySetAppMemoryUsageLimit()
// 0x000000E0 System.Void Windows.System.IMemoryManagerStatics4::$__Stripped0_get_ExpectedAppMemoryUsageLimit()
// 0x000000E1 System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
extern void MemoryManager_get_AppMemoryUsage_mC56F027A2D650BCC43228CD8AEDCEBB517F0B677 (void);
// 0x000000E2 System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
extern void MemoryManager_get_AppMemoryUsageLimit_m4037BAE37C41E7F7FE868436D715C41E4CD9E636 (void);
// 0x000000E3 System.Void Windows.System.MemoryManager::Finalize()
extern void MemoryManager_Finalize_m32730D6E439088B61A9D7DE5C6C5B45FA6529549 (void);
// 0x000000E4 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken Windows.UI.Xaml.Data.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern void INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D (void);
// 0x000000E5 System.Void Windows.UI.Xaml.Data.INotifyPropertyChanged::remove_PropertyChanged(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
extern void INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC (void);
// 0x000000E6 System.String Windows.UI.Xaml.Data.IPropertyChangedEventArgs::get_PropertyName()
// 0x000000E7 System.ComponentModel.PropertyChangedEventArgs Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory::CreateInstance(System.String,System.Object,System.Object&)
// 0x000000E8 System.Void Windows.UI.Xaml.Data.PropertyChangedEventArgs::.ctor(System.String)
extern void PropertyChangedEventArgs__ctor_m691682B0498D9E3820F2BD095C4211F8A095B7EC (void);
// 0x000000E9 System.String Windows.UI.Xaml.Data.PropertyChangedEventArgs::get_PropertyName()
extern void PropertyChangedEventArgs_get_PropertyName_m2378DEC6F3A1F541F7D141E3D0AB50FE994A4172 (void);
// 0x000000EA System.Void Windows.UI.Xaml.Data.PropertyChangedEventArgs::Finalize()
extern void PropertyChangedEventArgs_Finalize_m88CE1D7FC561CCB5E7C83C56C341E1DEE0375073 (void);
// 0x000000EB System.Void Windows.UI.Xaml.Data.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void PropertyChangedEventHandler__ctor_m8F87EA6305A644C8B0F6F6614E3E43AF83E6EEA5 (void);
// 0x000000EC System.Void Windows.UI.Xaml.Data.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern void PropertyChangedEventHandler_Invoke_m29A9173001968B28431AA21F2C7CF79FDA81A9FC (void);
// 0x000000ED Windows.UI.Xaml.Interop.IBindableIterator Windows.UI.Xaml.Interop.IBindableIterable::First()
extern void IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7 (void);
// 0x000000EE System.Object Windows.UI.Xaml.Interop.IBindableIterator::get_Current()
extern void IBindableIterator_get_Current_m53A4B6F2DECC874908CA9335785007A39D6FC93E (void);
// 0x000000EF System.Boolean Windows.UI.Xaml.Interop.IBindableIterator::get_HasCurrent()
extern void IBindableIterator_get_HasCurrent_m4FD33F7F3A504A8F4A4C7DE3965342B19EA3A974 (void);
// 0x000000F0 System.Boolean Windows.UI.Xaml.Interop.IBindableIterator::MoveNext()
extern void IBindableIterator_MoveNext_mA70DABC057BE3ED9199D4E0E6FEBDF6ED3570A75 (void);
// 0x000000F1 System.Object Windows.UI.Xaml.Interop.IBindableVector::GetAt(System.UInt32)
extern void IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED (void);
// 0x000000F2 System.UInt32 Windows.UI.Xaml.Interop.IBindableVector::get_Size()
extern void IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9 (void);
// 0x000000F3 Windows.UI.Xaml.Interop.IBindableVectorView Windows.UI.Xaml.Interop.IBindableVector::GetView()
extern void IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38 (void);
// 0x000000F4 System.Boolean Windows.UI.Xaml.Interop.IBindableVector::IndexOf(System.Object,System.UInt32&)
extern void IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4 (void);
// 0x000000F5 System.Void Windows.UI.Xaml.Interop.IBindableVector::SetAt(System.UInt32,System.Object)
extern void IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213 (void);
// 0x000000F6 System.Void Windows.UI.Xaml.Interop.IBindableVector::InsertAt(System.UInt32,System.Object)
extern void IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5 (void);
// 0x000000F7 System.Void Windows.UI.Xaml.Interop.IBindableVector::RemoveAt(System.UInt32)
extern void IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0 (void);
// 0x000000F8 System.Void Windows.UI.Xaml.Interop.IBindableVector::Append(System.Object)
extern void IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F (void);
// 0x000000F9 System.Void Windows.UI.Xaml.Interop.IBindableVector::RemoveAtEnd()
extern void IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3 (void);
// 0x000000FA System.Void Windows.UI.Xaml.Interop.IBindableVector::Clear()
extern void IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF (void);
// 0x000000FB System.Object Windows.UI.Xaml.Interop.IBindableVectorView::GetAt(System.UInt32)
extern void IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5 (void);
// 0x000000FC System.UInt32 Windows.UI.Xaml.Interop.IBindableVectorView::get_Size()
extern void IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09 (void);
// 0x000000FD System.Boolean Windows.UI.Xaml.Interop.IBindableVectorView::IndexOf(System.Object,System.UInt32&)
extern void IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2 (void);
// 0x000000FE System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken Windows.UI.Xaml.Interop.INotifyCollectionChanged::add_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
extern void INotifyCollectionChanged_add_CollectionChanged_mF325BC452DDABDBB457520CAE25ABF9914E04DBB (void);
// 0x000000FF System.Void Windows.UI.Xaml.Interop.INotifyCollectionChanged::remove_CollectionChanged(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
extern void INotifyCollectionChanged_remove_CollectionChanged_m32E5A44ED1C51C7BB04B70B03C8166874137ADEB (void);
// 0x00000100 System.Collections.Specialized.NotifyCollectionChangedAction Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs::get_Action()
// 0x00000101 System.Collections.IList Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs::get_NewItems()
// 0x00000102 System.Collections.IList Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs::get_OldItems()
// 0x00000103 System.Int32 Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs::get_NewStartingIndex()
// 0x00000104 System.Int32 Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs::get_OldStartingIndex()
// 0x00000105 System.Collections.Specialized.NotifyCollectionChangedEventArgs Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory::CreateInstanceWithAllParameters(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Collections.IList,System.Int32,System.Int32,System.Object,System.Object&)
// 0x00000106 System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::.ctor(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Collections.IList,System.Int32,System.Int32)
extern void NotifyCollectionChangedEventArgs__ctor_m8C7AD1A8A96F00A41368A0671FFCD1E41155B67D (void);
// 0x00000107 System.Collections.Specialized.NotifyCollectionChangedAction Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_Action()
extern void NotifyCollectionChangedEventArgs_get_Action_mD4E907299C1ED4D8D51AC3B4E2CDBF0BBA0C1373 (void);
// 0x00000108 System.Collections.IList Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_NewItems()
extern void NotifyCollectionChangedEventArgs_get_NewItems_mCB305F92DA7C2C95A9634AC5CF0E67F14297BCDC (void);
// 0x00000109 System.Collections.IList Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_OldItems()
extern void NotifyCollectionChangedEventArgs_get_OldItems_mBA08F8375EAD28CB5FDCB2C0D6B66C2FD8843BED (void);
// 0x0000010A System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_NewStartingIndex()
extern void NotifyCollectionChangedEventArgs_get_NewStartingIndex_m696345C9963D873897BAAA689F3111A7E39EB9AF (void);
// 0x0000010B System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_OldStartingIndex()
extern void NotifyCollectionChangedEventArgs_get_OldStartingIndex_m280277103FF5BF8DAE60136166D872D820D12A74 (void);
// 0x0000010C System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::Finalize()
extern void NotifyCollectionChangedEventArgs_Finalize_m79ED371A7E8174061D77847AFE671A62A0C9C3B1 (void);
// 0x0000010D System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void NotifyCollectionChangedEventHandler__ctor_m73BF986E8510573B04C02444705836EB7CBE96C2 (void);
// 0x0000010E System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.Collections.Specialized.NotifyCollectionChangedEventArgs)
extern void NotifyCollectionChangedEventHandler_Invoke_mFD845752A9DD94AE7FF22B6C80AF454A69F0486F (void);
static Il2CppMethodPointer s_methodPointers[270] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74,
	IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583,
	IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806,
	IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE,
	IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999,
	IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272,
	IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60,
	IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05,
	IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE,
	IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5,
	IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA,
	IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205,
	IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E,
	IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA,
	IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F,
	IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F,
	IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8,
	IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587,
	IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C,
	IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11,
	IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C,
	IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239,
	IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B,
	IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC,
	IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06,
	IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1,
	IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849,
	IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1,
	IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A,
	IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8,
	IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564,
	IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E,
	IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57,
	IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5,
	IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1,
	IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C,
	IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F,
	IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79,
	IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07,
	IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7,
	IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167,
	IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0,
	IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC,
	IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87,
	NULL,
	NULL,
	IStringable_ToString_mAACC01E89FA76E5F4B95116FDC1CF4DBE2ECC692,
	ActivatableAttribute__ctor_mD46F484204EAC5CFA97A677EEA9E3057B7EB0A1D,
	AllowMultipleAttribute__ctor_m38B472E44C36B692E88FB0E3371F49F89190B767,
	ApiContractAttribute__ctor_mA1DC183FCECA2802E9B2A8784EEB2CDDCDB499AE,
	AttributeNameAttribute__ctor_m7A11A1D60B4EB01C76419064CE4D848B01940844,
	AttributeUsageAttribute__ctor_m5750318D560E5564D46D234B358B09886EA21FA7,
	ComposableAttribute__ctor_mE7F61467F5217DE8F9B3B7D7B8F7FFD15F24041A,
	ContractVersionAttribute__ctor_m7105FB71D69F6B212C5EF0FC82B2FF1AD6278822,
	ContractVersionAttribute__ctor_mA259C171AB6F3483FBEBBA7095A5764E1C34F6D2,
	ContractVersionAttribute__ctor_mA7901265471AF7521D3B4F1CDC61EFD4D8F67ADE,
	DefaultAttribute__ctor_m4354570F424E2E8EFA55798F175E9ED96F73B73F,
	DeprecatedAttribute__ctor_m1C7F0A1DF75F920AD00D43E9576A8827392B4F2D,
	DualApiPartitionAttribute__ctor_m9CDBECBCF7007920F8904A4454A42116AFA721C1,
	ExclusiveToAttribute__ctor_m4B131B7E52F8AEB7771DA727EE9AA091DFE26F61,
	GuidAttribute__ctor_mF2EF6CA62F02E1EA45916B732D379377C761A3A7,
	LengthIsAttribute__ctor_mAF7D4E8E12B5FE659DE4B33FD4894E8029ADC46E,
	MarshalingBehaviorAttribute__ctor_m86B470D1DE8EC24E115185A6E2B7BF37F581C9E0,
	RemoteAsyncAttribute__ctor_mB05317840D939AD7000695453A4C88022B0FB9BE,
	StaticAttribute__ctor_mF97BB39BD47CAEF0DBBA6BC0C73E5A8EB2D413DD,
	ThreadingAttribute__ctor_m0B875434197471A46358686EE66D4D1A7BAF8C48,
	WebHostHiddenAttribute__ctor_m682515FD2F960F1DD70B4A60AE35D02187FFE00A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IUriRuntimeClass_get_RawUri_mA70F86F9BE3F3D07D4BBB8D5079D13A60D194891,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Uri__ctor_m0D439C7728FEE1D4F2B88E215C2D59A58C5FBE65,
	Uri__ctor_m41548CFDC457565BE64EC6CF236A0D08D1ED2500,
	Uri_get_AbsoluteUri_mBD430BA219541014CC78A817674F7E63FFD6439E,
	Uri_get_DisplayUri_mC840108DF8A1051D01E3CF7D3D3D311EFF19B654,
	Uri_get_Domain_m35368704392605936428C37AFE157E9CE5413937,
	Uri_get_Extension_m8142ECBA0B93DC4AEC1810E7F40B3594D3E640E6,
	Uri_get_Fragment_mF20EFE395740FD3CC9D5F7ACCAE6BDFB69797E7D,
	Uri_get_Host_m07327214CF731421F1B74B2BFF29EFE140F595A5,
	Uri_get_Password_mFB9F08FC30386D1C5D9AF21E18F76E8BD1ED6933,
	Uri_get_Path_m4EBFEC3B98C08E5B0BFB759C3517980CBD42CF7B,
	Uri_get_Query_mA89D787B4617536BCC50D367D1ECD586989722F1,
	Uri_get_QueryParsed_mAF4520F289FD311BDA5E2002FCDE57445E89840D,
	Uri_get_RawUri_m0F1B0FA3F111F707620C43083ECEB89851D1B5A5,
	Uri_get_SchemeName_m97AC67427E5EA0CBB76899709108D110088723DC,
	Uri_get_UserName_m826B8707FD4FBEF72C3B1CA82A504C213EB89C6E,
	Uri_get_Port_mFBAAAB48EE34DF72F1BF2EE645B71CC58254FC9F,
	Uri_get_Suspicious_mD493F8FE1FC1AAC6E12339862503C11BCC2E8FD2,
	Uri_Equals_m559A85A0315D7546E7094024EEDBCAC9F619D2FF,
	Uri_CombineUri_mBD3BF069E31739C01F855B60ECA8B183930ED355,
	Uri_get_AbsoluteCanonicalUri_m3415A1854346950B0AC7B6D19D31B0394C0CF007,
	Uri_get_DisplayIri_mFB2216CA1CC976FC636B460D4C7D66C6836CF1B8,
	Uri_ToString_m38F6D46B11B7C342DE117A4968556878798E1715,
	Uri_UnescapeComponent_m9AB29B6D922AC549CEE1D3A9BABC8AF9761624F7,
	Uri_EscapeComponent_m6C43EC4D66038917B17FA8042996E6EC121306D0,
	Uri_Finalize_mD72FB8446BDF1951EA6D00D6941227EC7EA55EFC,
	WwwFormUrlDecoder_First_m402CD9BC9D8F20A9B49743322372E692B4F8D9A7,
	WwwFormUrlDecoder_GetAt_m6EC28555D3ECAC154EA9FA6485D3572B3FC76273,
	WwwFormUrlDecoder_get_Size_m9EE99853ED73DCC48EE325AC2C2DA858685198EF,
	WwwFormUrlDecoder_IndexOf_m7D62504C835C82E535B5DFCFB5F2128806A8530B,
	WwwFormUrlDecoder_GetMany_m12617350BC8A57EB640495FF4DCED20CD4D3C485,
	WwwFormUrlDecoder_get_Item_m072111AF890B87246DD97B8ADF71ABCD8D789E33,
	WwwFormUrlDecoder_get_Count_m74493F6CB4386919E81FDEBB70FC0290B2FC0D6E,
	WwwFormUrlDecoder_GetEnumerator_mDFB83E5A9C72B432B3A99A74D2F7EA88CFED181F,
	WwwFormUrlDecoder_GetEnumerator_mEF61B02DF829B59C8C0A800A60B9B6A205EE656D,
	WwwFormUrlDecoder_Finalize_mD114EB5595C6225FBC7C65433DB5A1202685E864,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SpatialAnchor_Finalize_mD2DFFD5DDCF1D067D44429FDEE927A599EC4EB6A,
	SpatialAnchorTransferManager_TryImportAnchorsAsync_m45940D48CB4D949EBDCF5F0C67F77461213F5C17,
	SpatialAnchorTransferManager_TryExportAnchorsAsync_mAB9D4A82DD12A660A3B3857A65814F73C5812E9C,
	SpatialAnchorTransferManager_RequestAccessAsync_m0F960AF714BD7BA3BD6CB2B3A7478FB936E52C26,
	SpatialAnchorTransferManager_Finalize_m8BC617ED094631C3C0CA01E3312C6317C19D8491,
	IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470,
	IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19,
	IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01,
	IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B,
	IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F,
	IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C,
	IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6,
	IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7,
	IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB,
	IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023,
	IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3,
	IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A,
	IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A,
	IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071,
	IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MemoryManager_get_AppMemoryUsage_mC56F027A2D650BCC43228CD8AEDCEBB517F0B677,
	MemoryManager_get_AppMemoryUsageLimit_m4037BAE37C41E7F7FE868436D715C41E4CD9E636,
	MemoryManager_Finalize_m32730D6E439088B61A9D7DE5C6C5B45FA6529549,
	INotifyPropertyChanged_add_PropertyChanged_m3A2309416C81416601B6B2FE1EB8941A688D3B6D,
	INotifyPropertyChanged_remove_PropertyChanged_mAA09E3267802AF38D5092CF92A993C0E395D1BDC,
	NULL,
	NULL,
	PropertyChangedEventArgs__ctor_m691682B0498D9E3820F2BD095C4211F8A095B7EC,
	PropertyChangedEventArgs_get_PropertyName_m2378DEC6F3A1F541F7D141E3D0AB50FE994A4172,
	PropertyChangedEventArgs_Finalize_m88CE1D7FC561CCB5E7C83C56C341E1DEE0375073,
	PropertyChangedEventHandler__ctor_m8F87EA6305A644C8B0F6F6614E3E43AF83E6EEA5,
	PropertyChangedEventHandler_Invoke_m29A9173001968B28431AA21F2C7CF79FDA81A9FC,
	IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7,
	IBindableIterator_get_Current_m53A4B6F2DECC874908CA9335785007A39D6FC93E,
	IBindableIterator_get_HasCurrent_m4FD33F7F3A504A8F4A4C7DE3965342B19EA3A974,
	IBindableIterator_MoveNext_mA70DABC057BE3ED9199D4E0E6FEBDF6ED3570A75,
	IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED,
	IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9,
	IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38,
	IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4,
	IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213,
	IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5,
	IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0,
	IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F,
	IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3,
	IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF,
	IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5,
	IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09,
	IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2,
	INotifyCollectionChanged_add_CollectionChanged_mF325BC452DDABDBB457520CAE25ABF9914E04DBB,
	INotifyCollectionChanged_remove_CollectionChanged_m32E5A44ED1C51C7BB04B70B03C8166874137ADEB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NotifyCollectionChangedEventArgs__ctor_m8C7AD1A8A96F00A41368A0671FFCD1E41155B67D,
	NotifyCollectionChangedEventArgs_get_Action_mD4E907299C1ED4D8D51AC3B4E2CDBF0BBA0C1373,
	NotifyCollectionChangedEventArgs_get_NewItems_mCB305F92DA7C2C95A9634AC5CF0E67F14297BCDC,
	NotifyCollectionChangedEventArgs_get_OldItems_mBA08F8375EAD28CB5FDCB2C0D6B66C2FD8843BED,
	NotifyCollectionChangedEventArgs_get_NewStartingIndex_m696345C9963D873897BAAA689F3111A7E39EB9AF,
	NotifyCollectionChangedEventArgs_get_OldStartingIndex_m280277103FF5BF8DAE60136166D872D820D12A74,
	NotifyCollectionChangedEventArgs_Finalize_m79ED371A7E8174061D77847AFE671A62A0C9C3B1,
	NotifyCollectionChangedEventHandler__ctor_m73BF986E8510573B04C02444705836EB7CBE96C2,
	NotifyCollectionChangedEventHandler_Invoke_mFD845752A9DD94AE7FF22B6C80AF454A69F0486F,
};
static const int32_t s_InvokerIndices[270] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6658,
	6528,
	6559,
	6673,
	6673,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6673,
	6528,
	6456,
	6456,
	6527,
	6657,
	6528,
	6658,
	6529,
	6659,
	6609,
	6480,
	6657,
	6456,
	6559,
	6503,
	6475,
	6645,
	6566,
	6610,
	6584,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	5295,
	-1,
	-1,
	6559,
	1787,
	6673,
	6673,
	5433,
	5402,
	1209,
	5533,
	3086,
	3086,
	6673,
	1209,
	6673,
	5433,
	33,
	5402,
	5402,
	6673,
	1787,
	5402,
	6673,
	4785,
	4785,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6528,
	6456,
	3869,
	4785,
	4785,
	2470,
	6559,
	6559,
	6673,
	6673,
	6673,
	6673,
	5433,
	3073,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6559,
	6528,
	6456,
	3869,
	4785,
	6559,
	6559,
	6559,
	9772,
	9772,
	6673,
	6559,
	4799,
	6658,
	2025,
	2520,
	4778,
	6528,
	6559,
	6559,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	4785,
	2470,
	6559,
	6673,
	9772,
	8927,
	10188,
	6673,
	6658,
	6658,
	5533,
	1532,
	4785,
	6559,
	6659,
	5534,
	4800,
	4800,
	6659,
	5534,
	6559,
	6456,
	6456,
	6659,
	6659,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	6673,
	10228,
	10228,
	6673,
	4197,
	5358,
	6559,
	1525,
	5433,
	6559,
	6673,
	3068,
	3073,
	6559,
	6559,
	6456,
	6456,
	4799,
	6658,
	6559,
	2025,
	3180,
	3180,
	5533,
	5433,
	6673,
	6673,
	4799,
	6658,
	2025,
	4197,
	5358,
	6528,
	6559,
	6559,
	6528,
	6528,
	142,
	473,
	6528,
	6559,
	6559,
	6528,
	6528,
	6673,
	3068,
	3073,
};
extern const CustomAttributesCacheGenerator g_WindowsRuntimeMetadata_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_WindowsRuntimeMetadata_CodeGenModule;
const Il2CppCodeGenModule g_WindowsRuntimeMetadata_CodeGenModule = 
{
	"WindowsRuntimeMetadata",
	270,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_WindowsRuntimeMetadata_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
