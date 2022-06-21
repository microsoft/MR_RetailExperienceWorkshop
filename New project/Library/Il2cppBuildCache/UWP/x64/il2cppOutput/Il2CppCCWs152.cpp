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

// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_1_t93F132D4CEA440B3876D49C9D9F979B481E8FBC2;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Func_1_tAB2D0A6615BE6845EDA59C6A7DDDF3EFD4AC30A9;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t5F142D5F85631CF7CABDEF894984FF8EEEE7E101;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task>
struct IList_1_tE4D1BB8BFE34E53959D1BBDB304176E3D5816699;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_tBA5E73554DE7D36B4BBD4CB398ABD74142DC5692;
// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct KeyCollection_t749DBEFA13BA24F77DF2C12137D5331F541F3B15;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct List_1_t195BE14D5FDBE7226779D63E048743025BD3554A;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>
struct List_1_tA5D0669ADD777FC03F03FC84227E4517F8E8F541;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct ValueCollection_tF5A29AA52483C44A9B166F23F45001565015B4EB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>[]
struct EntryU5BU5D_t8F8773833E17C6A0E66C03DDD293977F035F44EC;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Linq.Expressions.Interpreter.DebugInfo
struct DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Dynamic.ExpandoClass
struct ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D;
// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// UnityEngine.InputSystem.LowLevel.InputEventTrace
struct InputEventTrace_t5C143F89F3A43D2FDB2FF73AA1654276B95BA0F1;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.InputSystem.InputManager
struct InputManager_t64B18982A0B9A82419EC448BB0950FB92204BDFC;
// UnityEngine.InputSystem.InputRemoting
struct InputRemoting_t73B781C5F03730E6D9776DB1D348039B8130C6C4;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver
struct OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.GraphicsTools.ProximityLight
struct ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.InputSystem.RemoteInputPlayerConnection
struct RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B;
// System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Linq.XAttribute
struct XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7;
// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D;
// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor
struct XRSocketInteractor_t8DE39EB2BC2B0492DB06C424789CBAD66CFAD279;
// System.Xml.XmlNameTable
struct XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7;
// System.Dynamic.ExpandoObject/KeyCollection
struct KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127;
// System.Dynamic.ExpandoObject/MetaExpando
struct MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47;
// System.Dynamic.ExpandoObject/ValueCollection
struct ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_tA4B84F9777C0C4C200DFC7F95436813BBAA9A5BA;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;
// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881;
// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Net.TimerThread/Callback
struct Callback_t762D11D347389984D6A23378030FA60146124360;
// System.Data.XmlToDatasetMap/XmlNodeIdentety
struct XmlNodeIdentety_tDB2D0FFBEC368B86282BBEC679577C3E70B70454;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
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
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8F8773833E17C6A0E66C03DDD293977F035F44EC* ___entries_1;
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
	KeyCollection_t749DBEFA13BA24F77DF2C12137D5331F541F3B15 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF5A29AA52483C44A9B166F23F45001565015B4EB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___entries_1)); }
	inline EntryU5BU5D_t8F8773833E17C6A0E66C03DDD293977F035F44EC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8F8773833E17C6A0E66C03DDD293977F035F44EC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8F8773833E17C6A0E66C03DDD293977F035F44EC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___keys_7)); }
	inline KeyCollection_t749DBEFA13BA24F77DF2C12137D5331F541F3B15 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t749DBEFA13BA24F77DF2C12137D5331F541F3B15 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t749DBEFA13BA24F77DF2C12137D5331F541F3B15 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ___values_8)); }
	inline ValueCollection_tF5A29AA52483C44A9B166F23F45001565015B4EB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF5A29AA52483C44A9B166F23F45001565015B4EB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF5A29AA52483C44A9B166F23F45001565015B4EB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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

// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keyList_5)); }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___valueList_6)); }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_8), (void*)value);
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

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsdecls_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___nameTable_2)); }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___hashTable_4)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xml_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlNs_7), (void*)value);
	}
};


// UnityEngine.UI.InputField/<CaretBlink>d__161
struct U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__161::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__161::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__161::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E4__this_2)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183
struct U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E4__this_3)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputRemoting UnityEngine.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_t73B781C5F03730E6D9776DB1D348039B8130C6C4 * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6, ___owner_0)); }
	inline InputRemoting_t73B781C5F03730E6D9776DB1D348039B8130C6C4 * get_owner_0() const { return ___owner_0; }
	inline InputRemoting_t73B781C5F03730E6D9776DB1D348039B8130C6C4 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(InputRemoting_t73B781C5F03730E6D9776DB1D348039B8130C6C4 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8, ____token_0)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__token_0() const { return ____token_0; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___list_0)); }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * get_list_0() const { return ___list_0; }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeKeyValueCollection::list
	ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list_0;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919, ___list_0)); }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * get_list_0() const { return ___list_0; }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_2;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::shouldRestart
	bool ___shouldRestart_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E4__this_2)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___shouldRestart_3)); }
	inline bool get_shouldRestart_3() const { return ___shouldRestart_3; }
	inline bool* get_address_of_shouldRestart_3() { return &___shouldRestart_3; }
	inline void set_shouldRestart_3(bool value)
	{
		___shouldRestart_3 = value;
	}
};


// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>4__this
	OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::pathInStreamingAssets
	String_t* ___pathInStreamingAssets_3;
	// System.Uri Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<fullUri>5__2
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CfullUriU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<webRequest>5__3
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E4__this_2)); }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pathInStreamingAssets_3() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___pathInStreamingAssets_3)); }
	inline String_t* get_pathInStreamingAssets_3() const { return ___pathInStreamingAssets_3; }
	inline String_t** get_address_of_pathInStreamingAssets_3() { return &___pathInStreamingAssets_3; }
	inline void set_pathInStreamingAssets_3(String_t* value)
	{
		___pathInStreamingAssets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathInStreamingAssets_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfullUriU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CfullUriU3E5__2_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CfullUriU3E5__2_4() const { return ___U3CfullUriU3E5__2_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CfullUriU3E5__2_4() { return &___U3CfullUriU3E5__2_4; }
	inline void set_U3CfullUriU3E5__2_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CfullUriU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullUriU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CwebRequestU3E5__3_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__3_5() const { return ___U3CwebRequestU3E5__3_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__3_5() { return &___U3CwebRequestU3E5__3_5; }
	inline void set_U3CwebRequestU3E5__3_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__3_5), (void*)value);
	}
};


// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ____objects_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24
struct U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.GraphicsTools.ProximityLight Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<>4__this
	ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::pulseDuration
	float ___pulseDuration_3;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::fadeBegin
	float ___fadeBegin_4;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::fadeSpeed
	float ___fadeSpeed_5;
	// System.Single Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24::<pulseTimer>5__2
	float ___U3CpulseTimerU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CU3E4__this_2)); }
	inline ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProximityLight_tD6CB63C31B16CBEA35F75E498F29B56209A820BF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pulseDuration_3() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___pulseDuration_3)); }
	inline float get_pulseDuration_3() const { return ___pulseDuration_3; }
	inline float* get_address_of_pulseDuration_3() { return &___pulseDuration_3; }
	inline void set_pulseDuration_3(float value)
	{
		___pulseDuration_3 = value;
	}

	inline static int32_t get_offset_of_fadeBegin_4() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___fadeBegin_4)); }
	inline float get_fadeBegin_4() const { return ___fadeBegin_4; }
	inline float* get_address_of_fadeBegin_4() { return &___fadeBegin_4; }
	inline void set_fadeBegin_4(float value)
	{
		___fadeBegin_4 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_5() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___fadeSpeed_5)); }
	inline float get_fadeSpeed_5() const { return ___fadeSpeed_5; }
	inline float* get_address_of_fadeSpeed_5() { return &___fadeSpeed_5; }
	inline void set_fadeSpeed_5(float value)
	{
		___fadeSpeed_5 = value;
	}

	inline static int32_t get_offset_of_U3CpulseTimerU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7, ___U3CpulseTimerU3E5__2_6)); }
	inline float get_U3CpulseTimerU3E5__2_6() const { return ___U3CpulseTimerU3E5__2_6; }
	inline float* get_address_of_U3CpulseTimerU3E5__2_6() { return &___U3CpulseTimerU3E5__2_6; }
	inline void set_U3CpulseTimerU3E5__2_6(float value)
	{
		___U3CpulseTimerU3E5__2_6 = value;
	}
};


// UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.RemoteInputPlayerConnection UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::owner
	RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE, ___owner_0)); }
	inline RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * get_owner_0() const { return ___owner_0; }
	inline RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC  : public RuntimeObject
{
public:
	// System.Int32 System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>2__current
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CU3E2__current_1;
	// System.Resources.ResourceFallbackManager System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>4__this
	ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * ___U3CU3E4__this_2;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<currentCulture>5__1
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CcurrentCultureU3E5__1_3;
	// System.Boolean System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<reachedNeutralResourcesCulture>5__2
	bool ___U3CreachedNeutralResourcesCultureU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E2__current_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E4__this_2)); }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCultureU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CcurrentCultureU3E5__1_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CcurrentCultureU3E5__1_3() const { return ___U3CcurrentCultureU3E5__1_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CcurrentCultureU3E5__1_3() { return &___U3CcurrentCultureU3E5__1_3; }
	inline void set_U3CcurrentCultureU3E5__1_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CcurrentCultureU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentCultureU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CreachedNeutralResourcesCultureU3E5__2_4)); }
	inline bool get_U3CreachedNeutralResourcesCultureU3E5__2_4() const { return ___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline bool* get_address_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return &___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline void set_U3CreachedNeutralResourcesCultureU3E5__2_4(bool value)
	{
		___U3CreachedNeutralResourcesCultureU3E5__2_4 = value;
	}
};


// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t90FF026A62D56329DEFC1B768358977E70839881, ___sortedList_0)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedList_0), (void*)value);
	}
};


// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D, ___sortedList_0)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedList_0), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::predicate
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___predicate_5;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__predicate
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___U3CU3E3__predicate_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<length>5__2
	int32_t ___U3ClengthU3E5__2_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<position>5__3
	int32_t ___U3CpositionU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__str_4() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E3__str_4)); }
	inline String_t* get_U3CU3E3__str_4() const { return ___U3CU3E3__str_4; }
	inline String_t** get_address_of_U3CU3E3__str_4() { return &___U3CU3E3__str_4; }
	inline void set_U3CU3E3__str_4(String_t* value)
	{
		___U3CU3E3__str_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__str_4), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_5() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___predicate_5)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_predicate_5() const { return ___predicate_5; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_predicate_5() { return &___predicate_5; }
	inline void set_predicate_5(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___predicate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__predicate_6() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E3__predicate_6)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_U3CU3E3__predicate_6() const { return ___U3CU3E3__predicate_6; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_U3CU3E3__predicate_6() { return &___U3CU3E3__predicate_6; }
	inline void set_U3CU3E3__predicate_6(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___U3CU3E3__predicate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__predicate_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3ClengthU3E5__2_7)); }
	inline int32_t get_U3ClengthU3E5__2_7() const { return ___U3ClengthU3E5__2_7; }
	inline int32_t* get_address_of_U3ClengthU3E5__2_7() { return &___U3ClengthU3E5__2_7; }
	inline void set_U3ClengthU3E5__2_7(int32_t value)
	{
		___U3ClengthU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CpositionU3E5__3_8)); }
	inline int32_t get_U3CpositionU3E5__3_8() const { return ___U3CpositionU3E5__3_8; }
	inline int32_t* get_address_of_U3CpositionU3E5__3_8() { return &___U3CpositionU3E5__3_8; }
	inline void set_U3CpositionU3E5__3_8(int32_t value)
	{
		___U3CpositionU3E5__3_8 = value;
	}
};


// TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::delay
	float ___delay_2;
	// TMPro.TMP_Dropdown TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>4__this
	TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E4__this_3)); }
	inline TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField/<CaretBlink>d__276::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<CaretBlink>d__276::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<CaretBlink>d__276::<>4__this
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E4__this_2)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>4__this
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___U3CU3E4__this_2;
	// UnityEngine.EventSystems.PointerEventData TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E4__this_2)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___eventData_3)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_3() const { return ___eventData_3; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_3() { return &___eventData_3; }
	inline void set_eventData_3(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_3), (void*)value);
	}
};


// TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__89
struct U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__89::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__89::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__89::<>4__this
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02, ___U3CU3E4__this_2)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__90
struct U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__90::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__90::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__90::<>4__this
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26, ___U3CU3E4__this_2)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Net.TimerThread/Timer
struct Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323  : public RuntimeObject
{
public:
	// System.Int32 System.Net.TimerThread/Timer::m_StartTimeMilliseconds
	int32_t ___m_StartTimeMilliseconds_0;
	// System.Int32 System.Net.TimerThread/Timer::m_DurationMilliseconds
	int32_t ___m_DurationMilliseconds_1;

public:
	inline static int32_t get_offset_of_m_StartTimeMilliseconds_0() { return static_cast<int32_t>(offsetof(Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323, ___m_StartTimeMilliseconds_0)); }
	inline int32_t get_m_StartTimeMilliseconds_0() const { return ___m_StartTimeMilliseconds_0; }
	inline int32_t* get_address_of_m_StartTimeMilliseconds_0() { return &___m_StartTimeMilliseconds_0; }
	inline void set_m_StartTimeMilliseconds_0(int32_t value)
	{
		___m_StartTimeMilliseconds_0 = value;
	}

	inline static int32_t get_offset_of_m_DurationMilliseconds_1() { return static_cast<int32_t>(offsetof(Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323, ___m_DurationMilliseconds_1)); }
	inline int32_t get_m_DurationMilliseconds_1() const { return ___m_DurationMilliseconds_1; }
	inline int32_t* get_address_of_m_DurationMilliseconds_1() { return &___m_DurationMilliseconds_1; }
	inline void set_m_DurationMilliseconds_1(int32_t value)
	{
		___m_DurationMilliseconds_1 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster/RaycastHitArraySegment
struct RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster/RaycastHitArraySegment::m_Count
	int32_t ___m_Count_0;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster/RaycastHitArraySegment::m_Hits
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___m_Hits_1;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster/RaycastHitArraySegment::m_CurrentIndex
	int32_t ___m_CurrentIndex_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Hits_1() { return static_cast<int32_t>(offsetof(RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D, ___m_Hits_1)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_m_Hits_1() const { return ___m_Hits_1; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_m_Hits_1() { return &___m_Hits_1; }
	inline void set_m_Hits_1(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___m_Hits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hits_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_2() { return static_cast<int32_t>(offsetof(RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D, ___m_CurrentIndex_2)); }
	inline int32_t get_m_CurrentIndex_2() const { return ___m_CurrentIndex_2; }
	inline int32_t* get_address_of_m_CurrentIndex_2() { return &___m_CurrentIndex_2; }
	inline void set_m_CurrentIndex_2(int32_t value)
	{
		___m_CurrentIndex_2 = value;
	}
};


// System.Xml.Linq.XContainer/<GetDescendants>d__39
struct U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<>2__current
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::self
	bool ___self_3;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__self
	bool ___U3CU3E3__self_4;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetDescendants>d__39::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_6;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_7;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetDescendants>d__39::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_8;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<e>5__2
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CeU3E5__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E2__current_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___self_3)); }
	inline bool get_self_3() const { return ___self_3; }
	inline bool* get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(bool value)
	{
		___self_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__self_4() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E3__self_4)); }
	inline bool get_U3CU3E3__self_4() const { return ___U3CU3E3__self_4; }
	inline bool* get_address_of_U3CU3E3__self_4() { return &___U3CU3E3__self_4; }
	inline void set_U3CU3E3__self_4(bool value)
	{
		___U3CU3E3__self_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E4__this_5)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_6() const { return ___name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_7() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E3__name_7)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_7() const { return ___U3CU3E3__name_7; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_7() { return &___U3CU3E3__name_7; }
	inline void set_U3CU3E3__name_7(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CnU3E5__1_8)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_8() const { return ___U3CnU3E5__1_8; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_8() { return &___U3CnU3E5__1_8; }
	inline void set_U3CnU3E5__1_8(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CeU3E5__2_9)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CeU3E5__2_9() const { return ___U3CeU3E5__2_9; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CeU3E5__2_9() { return &___U3CeU3E5__2_9; }
	inline void set_U3CeU3E5__2_9(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CeU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_9), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetElements>d__40::<>2__current
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetElements>d__40::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetElements>d__40::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_4;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E2__current_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E4__this_3)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CnU3E5__1_4)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_4() const { return ___U3CnU3E5__1_4; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_4() { return &___U3CnU3E5__1_4; }
	inline void set_U3CnU3E5__1_4(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_6() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E3__name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_6() const { return ___U3CU3E3__name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_6() { return &___U3CU3E3__name_6; }
	inline void set_U3CU3E3__name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_6), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<Nodes>d__18
struct U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>d__18::<>2__current
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>d__18::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<Nodes>d__18::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>d__18::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E2__current_1)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E4__this_3)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CnU3E5__1_4)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_4() const { return ___U3CnU3E5__1_4; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_4() { return &___U3CnU3E5__1_4; }
	inline void set_U3CnU3E5__1_4(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_4), (void*)value);
	}
};


// System.Xml.Linq.XElement/<GetAttributes>d__105
struct U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XElement/<GetAttributes>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetAttributes>d__105::<>2__current
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XElement/<GetAttributes>d__105::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetAttributes>d__105::<>4__this
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetAttributes>d__105::<a>5__1
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___U3CaU3E5__1_4;
	// System.Xml.Linq.XName System.Xml.Linq.XElement/<GetAttributes>d__105::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XName System.Xml.Linq.XElement/<GetAttributes>d__105::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E2__current_1)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E4__this_3)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CaU3E5__1_4)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_U3CaU3E5__1_4() const { return ___U3CaU3E5__1_4; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_U3CaU3E5__1_4() { return &___U3CaU3E5__1_4; }
	inline void set_U3CaU3E5__1_4(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___U3CaU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_6() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E3__name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_6() const { return ___U3CU3E3__name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_6() { return &___U3CU3E3__name_6; }
	inline void set_U3CU3E3__name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_6), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__11
struct U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__11::<>4__this
	XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1, ___U3CU3E4__this_2)); }
	inline XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__47
struct U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__47::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.XR.CoreUtils.XROrigin Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__47::<>4__this
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB, ___U3CU3E4__this_2)); }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__38
struct U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__38::<>4__this
	XRSocketInteractor_t8DE39EB2BC2B0492DB06C424789CBAD66CFAD279 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F, ___U3CU3E4__this_2)); }
	inline XRSocketInteractor_t8DE39EB2BC2B0492DB06C424789CBAD66CFAD279 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XRSocketInteractor_t8DE39EB2BC2B0492DB06C424789CBAD66CFAD279 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XRSocketInteractor_t8DE39EB2BC2B0492DB06C424789CBAD66CFAD279 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection
struct ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry> System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection::entries
	List_1_tA5D0669ADD777FC03F03FC84227E4517F8E8F541 * ___entries_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection::size
	int32_t ___size_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C, ___entries_0)); }
	inline List_1_tA5D0669ADD777FC03F03FC84227E4517F8E8F541 * get_entries_0() const { return ___entries_0; }
	inline List_1_tA5D0669ADD777FC03F03FC84227E4517F8E8F541 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(List_1_tA5D0669ADD777FC03F03FC84227E4517F8E8F541 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
};


// System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Dynamic.ExpandoObject/KeyCollection System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15::<>4__this
	KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * ___U3CU3E4__this_2;
	// System.Int32 System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15::<i>5__1
	int32_t ___U3CiU3E5__1_3;
	// System.Int32 System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15::<n>5__2
	int32_t ___U3CnU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E4__this_2)); }
	inline KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CnU3E5__2_4)); }
	inline int32_t get_U3CnU3E5__2_4() const { return ___U3CnU3E5__2_4; }
	inline int32_t* get_address_of_U3CnU3E5__2_4() { return &___U3CnU3E5__2_4; }
	inline void set_U3CnU3E5__2_4(int32_t value)
	{
		___U3CnU3E5__2_4 = value;
	}
};


// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6
struct U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Dynamic.ExpandoObject/MetaExpando System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<>4__this
	MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * ___U3CU3E4__this_3;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<expandoData>5__1
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ___U3CexpandoDataU3E5__1_4;
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<klass>5__2
	ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * ___U3CklassU3E5__2_5;
	// System.Int32 System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E4__this_3)); }
	inline MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexpandoDataU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CexpandoDataU3E5__1_4)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get_U3CexpandoDataU3E5__1_4() const { return ___U3CexpandoDataU3E5__1_4; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of_U3CexpandoDataU3E5__1_4() { return &___U3CexpandoDataU3E5__1_4; }
	inline void set_U3CexpandoDataU3E5__1_4(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		___U3CexpandoDataU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexpandoDataU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CklassU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CklassU3E5__2_5)); }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * get_U3CklassU3E5__2_5() const { return ___U3CklassU3E5__2_5; }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D ** get_address_of_U3CklassU3E5__2_5() { return &___U3CklassU3E5__2_5; }
	inline void set_U3CklassU3E5__2_5(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * value)
	{
		___U3CklassU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CklassU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};


// System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Dynamic.ExpandoObject/ValueCollection System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15::<>4__this
	ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * ___U3CU3E4__this_2;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15::<data>5__1
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ___U3CdataU3E5__1_3;
	// System.Int32 System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15::<i>5__2
	int32_t ___U3CiU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E4__this_2)); }
	inline ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CdataU3E5__1_3)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get_U3CdataU3E5__1_3() const { return ___U3CdataU3E5__1_3; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of_U3CdataU3E5__1_3() { return &___U3CdataU3E5__1_3; }
	inline void set_U3CdataU3E5__1_3(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		___U3CdataU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820, ___U3CU3E2__current_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820, ___U3CU3E4__this_2)); }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>
struct Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___list_0)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_list_0() const { return ___list_0; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___current_3)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_current_3() const { return ___current_3; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice>
struct InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0, ___firstValue_1)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0, ___additionalValues_2)); }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E, ___value_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_value_1() const { return ___value_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7 
{
public:
	// System.String System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_methodName
	String_t* ____methodName_0;
	// System.Linq.Expressions.Interpreter.DebugInfo System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_debugInfo
	DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * ____debugInfo_1;

public:
	inline static int32_t get_offset_of__methodName_0() { return static_cast<int32_t>(offsetof(InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7, ____methodName_0)); }
	inline String_t* get__methodName_0() const { return ____methodName_0; }
	inline String_t** get_address_of__methodName_0() { return &____methodName_0; }
	inline void set__methodName_0(String_t* value)
	{
		____methodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodName_0), (void*)value);
	}

	inline static int32_t get_offset_of__debugInfo_1() { return static_cast<int32_t>(offsetof(InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7, ____debugInfo_1)); }
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * get__debugInfo_1() const { return ____debugInfo_1; }
	inline DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC ** get_address_of__debugInfo_1() { return &____debugInfo_1; }
	inline void set__debugInfo_1(DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * value)
	{
		____debugInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____debugInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshaled_pinvoke
{
	char* ____methodName_0;
	DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * ____debugInfo_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7_marshaled_com
{
	Il2CppChar* ____methodName_0;
	DebugInfo_t2FD37DEB5529C6813FAD30E67627B4CEFE8033AC * ____debugInfo_1;
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


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_History
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___m_History_0;
	// UnityEngine.InputSystem.EnhancedTouch.Finger UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Finger
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_1;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Count
	int32_t ___m_Count_2;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_StartIndex
	int32_t ___m_StartIndex_3;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Version
	uint32_t ___m_Version_4;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80, ___m_History_0)); }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Finger_1() { return static_cast<int32_t>(offsetof(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80, ___m_Finger_1)); }
	inline Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * get_m_Finger_1() const { return ___m_Finger_1; }
	inline Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C ** get_address_of_m_Finger_1() { return &___m_Finger_1; }
	inline void set_m_Finger_1(Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * value)
	{
		___m_Finger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Finger_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_2() { return static_cast<int32_t>(offsetof(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80, ___m_Count_2)); }
	inline int32_t get_m_Count_2() const { return ___m_Count_2; }
	inline int32_t* get_address_of_m_Count_2() { return &___m_Count_2; }
	inline void set_m_Count_2(int32_t value)
	{
		___m_Count_2 = value;
	}

	inline static int32_t get_offset_of_m_StartIndex_3() { return static_cast<int32_t>(offsetof(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80, ___m_StartIndex_3)); }
	inline int32_t get_m_StartIndex_3() const { return ___m_StartIndex_3; }
	inline int32_t* get_address_of_m_StartIndex_3() { return &___m_StartIndex_3; }
	inline void set_m_StartIndex_3(int32_t value)
	{
		___m_StartIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_Version_4() { return static_cast<int32_t>(offsetof(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80, ___m_Version_4)); }
	inline uint32_t get_m_Version_4() const { return ___m_Version_4; }
	inline uint32_t* get_address_of_m_Version_4() { return &___m_Version_4; }
	inline void set_m_Version_4(uint32_t value)
	{
		___m_Version_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80_marshaled_pinvoke
{
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___m_History_0;
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80_marshaled_com
{
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___m_History_0;
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
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


// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutTypes_1)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutStrings_2)); }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutBuilders_3)); }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___baseLayoutTable_4)); }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrides_5)); }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrideNames_6)); }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_precompiledLayouts_7() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___precompiledLayouts_7)); }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * get_precompiledLayouts_7() const { return ___precompiledLayouts_7; }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 ** get_address_of_precompiledLayouts_7() { return &___precompiledLayouts_7; }
	inline void set_precompiledLayouts_7(Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * value)
	{
		___precompiledLayouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precompiledLayouts_7), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_8() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutMatchers_8)); }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * get_layoutMatchers_8() const { return ___layoutMatchers_8; }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 ** get_address_of_layoutMatchers_8() { return &___layoutMatchers_8; }
	inline void set_layoutMatchers_8(List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * value)
	{
		___layoutMatchers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_History
	InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F * ___m_History_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA, ___m_History_0)); }
	inline InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_marshaled_pinvoke
{
	InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F * ___m_History_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_marshaled_com
{
	InputStateHistory_tE27F40AE6514047B23B0CBC2F34C61F499BFFD9F * ___m_History_0;
	int32_t ___m_Index_1;
};

// System.Collections.SortedList/SyncSortedList
struct SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3  : public SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3, ____list_9)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get__list_9() const { return ____list_9; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_9), (void*)value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____root_10), (void*)value);
	}
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288  : public Dictionary_2_t8BE99204247C1C97B2675C8E9AB2B482BADCD725
{
public:

public:
};


// System.Xml.XmlTextReaderImpl/NoNamespaceManager
struct NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2  : public XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465
{
public:

public:
};


// System.Xml.Schema.XsdBuilder/BuilderNamespaceManager
struct BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569  : public XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465
{
public:
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XsdBuilder/BuilderNamespaceManager::nsMgr
	XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * ___nsMgr_8;
	// System.Xml.XmlReader System.Xml.Schema.XsdBuilder/BuilderNamespaceManager::reader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_9;

public:
	inline static int32_t get_offset_of_nsMgr_8() { return static_cast<int32_t>(offsetof(BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569, ___nsMgr_8)); }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * get_nsMgr_8() const { return ___nsMgr_8; }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 ** get_address_of_nsMgr_8() { return &___nsMgr_8; }
	inline void set_nsMgr_8(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * value)
	{
		___nsMgr_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsMgr_8), (void*)value);
	}

	inline static int32_t get_offset_of_reader_9() { return static_cast<int32_t>(offsetof(BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569, ___reader_9)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_reader_9() const { return ___reader_9; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_reader_9() { return &___reader_9; }
	inline void set_reader_9(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___reader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_9), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange
struct BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::m_Current
	int32_t ___m_Current_0;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange::m_End
	int32_t ___m_End_1;

public:
	inline static int32_t get_offset_of_m_Current_0() { return static_cast<int32_t>(offsetof(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329, ___m_Current_0)); }
	inline int32_t get_m_Current_0() const { return ___m_Current_0; }
	inline int32_t* get_address_of_m_Current_0() { return &___m_Current_0; }
	inline void set_m_Current_0(int32_t value)
	{
		___m_Current_0 = value;
	}

	inline static int32_t get_offset_of_m_End_1() { return static_cast<int32_t>(offsetof(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329, ___m_End_1)); }
	inline int32_t get_m_End_1() const { return ___m_End_1; }
	inline int32_t* get_address_of_m_End_1() { return &___m_End_1; }
	inline void set_m_End_1(int32_t value)
	{
		___m_End_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9, ___firstValue_1)); }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  get_firstValue_1() const { return ___firstValue_1; }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9, ___additionalValues_2)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get_additionalValues_2() const { return ___additionalValues_2; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_tAB2D0A6615BE6845EDA59C6A7DDDF3EFD4AC30A9 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87, ___key_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_key_0() const { return ___key_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87, ___value_1)); }
	inline Func_1_tAB2D0A6615BE6845EDA59C6A7DDDF3EFD4AC30A9 * get_value_1() const { return ___value_1; }
	inline Func_1_tAB2D0A6615BE6845EDA59C6A7DDDF3EFD4AC30A9 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Func_1_tAB2D0A6615BE6845EDA59C6A7DDDF3EFD4AC30A9 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721, ___key_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_key_0() const { return ___key_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F, ___key_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_key_0() const { return ___key_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
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


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
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


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_0;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_2;

public:
	inline static int32_t get_offset_of_m_lock_0() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_0)); }
	inline RuntimeObject * get_m_lock_0() const { return ___m_lock_0; }
	inline RuntimeObject ** get_address_of_m_lock_0() { return &___m_lock_0; }
	inline void set_m_lock_0(RuntimeObject * value)
	{
		___m_lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_1() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_1)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_1() const { return ___m_eventObj_1; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_1() { return &___m_eventObj_1; }
	inline void set_m_eventObj_1(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_2)); }
	inline int32_t get_m_combinedState_2() const { return ___m_combinedState_2; }
	inline int32_t* get_address_of_m_combinedState_2() { return &___m_combinedState_2; }
	inline void set_m_combinedState_2(int32_t value)
	{
		___m_combinedState_2 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_3;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_3() const { return ___s_cancellationTokenCallback_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_3() { return &___s_cancellationTokenCallback_3; }
	inline void set_s_cancellationTokenCallback_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_3), (void*)value);
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Vertex
struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29
struct U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrameInfo System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>2__current
	InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7  ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<>4__this
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___U3CU3E4__this_3;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29::<frame>5__1
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___U3CframeU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2, ___U3CU3E2__current_1)); }
	inline InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InterpretedFrameInfo_tC2C153C83030E30AC9BEC762C0B549D6340A1DF7  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->____methodName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->____debugInfo_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2, ___U3CU3E4__this_3)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CframeU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2, ___U3CframeU3E5__1_4)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get_U3CframeU3E5__1_4() const { return ___U3CframeU3E5__1_4; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of_U3CframeU3E5__1_4() { return &___U3CframeU3E5__1_4; }
	inline void set_U3CframeU3E5__1_4(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		___U3CframeU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CframeU3E5__1_4), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>2__current
	KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>4__this
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t57955EB4BBC0AC734E27CFFFE4D53A36EA86723E  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8, ___U3CU3E4__this_2)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>4__this
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_3;
	// UnityEngine.Camera UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E4__this_2)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_screenPosition_3() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___screenPosition_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_3() const { return ___screenPosition_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_3() { return &___screenPosition_3; }
	inline void set_screenPosition_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_3 = value;
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_4() const { return ___camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_4), (void*)value);
	}
};


// System.IO.Stream/NullStream
struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:

public:
};

struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream/NullStream::s_nullReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___s_nullReadTask_4;

public:
	inline static int32_t get_offset_of_s_nullReadTask_4() { return static_cast<int32_t>(offsetof(NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_StaticFields, ___s_nullReadTask_4)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_s_nullReadTask_4() const { return ___s_nullReadTask_4; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_s_nullReadTask_4() { return &___s_nullReadTask_4; }
	inline void set_s_nullReadTask_4(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___s_nullReadTask_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_nullReadTask_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>2__current
	Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<length>5__2
	int32_t ___U3ClengthU3E5__2_5;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__3
	int32_t ___U3CendPosU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E2__current_1)); }
	inline Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__str_4() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E3__str_4)); }
	inline String_t* get_U3CU3E3__str_4() const { return ___U3CU3E3__str_4; }
	inline String_t** get_address_of_U3CU3E3__str_4() { return &___U3CU3E3__str_4; }
	inline void set_U3CU3E3__str_4(String_t* value)
	{
		___U3CU3E3__str_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__str_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3ClengthU3E5__2_5)); }
	inline int32_t get_U3ClengthU3E5__2_5() const { return ___U3ClengthU3E5__2_5; }
	inline int32_t* get_address_of_U3ClengthU3E5__2_5() { return &___U3ClengthU3E5__2_5; }
	inline void set_U3ClengthU3E5__2_5(int32_t value)
	{
		___U3ClengthU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CendPosU3E5__3_6)); }
	inline int32_t get_U3CendPosU3E5__3_6() const { return ___U3CendPosU3E5__3_6; }
	inline int32_t* get_address_of_U3CendPosU3E5__3_6() { return &___U3CendPosU3E5__3_6; }
	inline void set_U3CendPosU3E5__3_6(int32_t value)
	{
		___U3CendPosU3E5__3_6 = value;
	}
};


// System.IO.TextReader/NullTextReader
struct NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:

public:
};


// System.IO.TextReader/SyncTextReader
struct SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.TextReader System.IO.TextReader/SyncTextReader::_in
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ____in_4;

public:
	inline static int32_t get_offset_of__in_4() { return static_cast<int32_t>(offsetof(SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84, ____in_4)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get__in_4() const { return ____in_4; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of__in_4() { return &____in_4; }
	inline void set__in_4(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		____in_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____in_4), (void*)value);
	}
};


// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:

public:
};


// System.IO.TextWriter/SyncTextWriter
struct SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.TextWriter System.IO.TextWriter/SyncTextWriter::_out
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____out_11;

public:
	inline static int32_t get_offset_of__out_11() { return static_cast<int32_t>(offsetof(SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D, ____out_11)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__out_11() const { return ____out_11; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__out_11() { return &____out_11; }
	inline void set__out_11(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____out_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____out_11), (void*)value);
	}
};


// UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator
struct Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.EnhancedTouch.TouchHistory UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator::m_Owner
	TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80  ___m_Owner_0;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037, ___m_Owner_0)); }
	inline TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80  get_m_Owner_0() const { return ___m_Owner_0; }
	inline TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80 * get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(TouchHistory_t20E519AD658E54847CE7E9BF795A525DB6675D80  value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Owner_0))->___m_History_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Owner_0))->___m_Finger_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>4__this
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>7__wrap1
	Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E4__this_2)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
struct U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>2__current
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::includeSelf
	bool ___includeSelf_3;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___layout_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___U3CU3E3__layout_6;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>4__this
	Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  ___U3CU3E4__this_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__<>4__this
	Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  ___U3CU3E3__U3CU3E4__this_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E2__current_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_layout_5() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___layout_5)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_layout_5() const { return ___layout_5; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_layout_5() { return &___layout_5; }
	inline void set_layout_5(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___layout_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___layout_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___layout_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E3__layout_6() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E3__layout_6)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_U3CU3E3__layout_6() const { return ___U3CU3E3__layout_6; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_U3CU3E3__layout_6() { return &___U3CU3E3__layout_6; }
	inline void set_U3CU3E3__layout_6(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___U3CU3E3__layout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__layout_6))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__layout_6))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E4__this_7)); }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_7))->___layoutMatchers_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_8() { return static_cast<int32_t>(offsetof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F, ___U3CU3E3__U3CU3E4__this_8)); }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  get_U3CU3E3__U3CU3E4__this_8() const { return ___U3CU3E3__U3CU3E4__this_8; }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * get_address_of_U3CU3E3__U3CU3E4__this_8() { return &___U3CU3E3__U3CU3E4__this_8; }
	inline void set_U3CU3E3__U3CU3E4__this_8(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  value)
	{
		___U3CU3E3__U3CU3E4__this_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_8))->___layoutMatchers_8), (void*)NULL);
		#endif
	}
};


// System.Net.TimerThread/TimerNode/TimerState
struct TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22 
{
public:
	// System.Int32 System.Net.TimerThread/TimerNode/TimerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689, ___dictionary_0)); }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689, ___current_3)); }
	inline KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD0FB898C6FDB19A3A9215610F582F114F7C23A87  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60, ___dictionary_0)); }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60, ___current_3)); }
	inline KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t718B7306D8A446038779BE76EE09B9E9325EB721  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649, ___dictionary_0)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649, ___current_3)); }
	inline KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tF72E1A18FF64AFCDD2F6E756B56FBC0CFA35F22F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent>
struct NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1, ___m_AllocatorLabel_2)); }
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


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_EventTrace
	InputEventTrace_t5C143F89F3A43D2FDB2FF73AA1654276B95BA0F1 * ___m_EventTrace_3;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_Enumerator
	Enumerator_tA4B84F9777C0C4C200DFC7F95436813BBAA9A5BA * ___m_Enumerator_4;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_DeviceIDMappings
	InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9  ___m_DeviceIDMappings_5;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreateNewDevices
	bool ___m_CreateNewDevices_6;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreatedDevices
	InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0  ___m_CreatedDevices_7;
	// System.Action UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnFinished_8;
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnEvent
	Action_1_t93F132D4CEA440B3876D49C9D9F979B481E8FBC2 * ___m_OnEvent_9;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerFirstEvent
	double ___m_StartTimeAsPerFirstEvent_10;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerRuntime
	double ___m_StartTimeAsPerRuntime_11;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTimeIndex
	int32_t ___m_AllEventsByTimeIndex_12;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTime
	List_1_t195BE14D5FDBE7226779D63E048743025BD3554A * ___m_AllEventsByTime_13;

public:
	inline static int32_t get_offset_of_U3CfinishedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___U3CfinishedU3Ek__BackingField_0)); }
	inline bool get_U3CfinishedU3Ek__BackingField_0() const { return ___U3CfinishedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CfinishedU3Ek__BackingField_0() { return &___U3CfinishedU3Ek__BackingField_0; }
	inline void set_U3CfinishedU3Ek__BackingField_0(bool value)
	{
		___U3CfinishedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpausedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___U3CpausedU3Ek__BackingField_1)); }
	inline bool get_U3CpausedU3Ek__BackingField_1() const { return ___U3CpausedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CpausedU3Ek__BackingField_1() { return &___U3CpausedU3Ek__BackingField_1; }
	inline void set_U3CpausedU3Ek__BackingField_1(bool value)
	{
		___U3CpausedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___U3CpositionU3Ek__BackingField_2)); }
	inline int32_t get_U3CpositionU3Ek__BackingField_2() const { return ___U3CpositionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpositionU3Ek__BackingField_2() { return &___U3CpositionU3Ek__BackingField_2; }
	inline void set_U3CpositionU3Ek__BackingField_2(int32_t value)
	{
		___U3CpositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_EventTrace_3() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_EventTrace_3)); }
	inline InputEventTrace_t5C143F89F3A43D2FDB2FF73AA1654276B95BA0F1 * get_m_EventTrace_3() const { return ___m_EventTrace_3; }
	inline InputEventTrace_t5C143F89F3A43D2FDB2FF73AA1654276B95BA0F1 ** get_address_of_m_EventTrace_3() { return &___m_EventTrace_3; }
	inline void set_m_EventTrace_3(InputEventTrace_t5C143F89F3A43D2FDB2FF73AA1654276B95BA0F1 * value)
	{
		___m_EventTrace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventTrace_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enumerator_4() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_Enumerator_4)); }
	inline Enumerator_tA4B84F9777C0C4C200DFC7F95436813BBAA9A5BA * get_m_Enumerator_4() const { return ___m_Enumerator_4; }
	inline Enumerator_tA4B84F9777C0C4C200DFC7F95436813BBAA9A5BA ** get_address_of_m_Enumerator_4() { return &___m_Enumerator_4; }
	inline void set_m_Enumerator_4(Enumerator_tA4B84F9777C0C4C200DFC7F95436813BBAA9A5BA * value)
	{
		___m_Enumerator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Enumerator_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIDMappings_5() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_DeviceIDMappings_5)); }
	inline InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9  get_m_DeviceIDMappings_5() const { return ___m_DeviceIDMappings_5; }
	inline InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9 * get_address_of_m_DeviceIDMappings_5() { return &___m_DeviceIDMappings_5; }
	inline void set_m_DeviceIDMappings_5(InlinedArray_1_tB9874FAAAE53504112C81D074A7BB4C4867C76F9  value)
	{
		___m_DeviceIDMappings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DeviceIDMappings_5))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CreateNewDevices_6() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_CreateNewDevices_6)); }
	inline bool get_m_CreateNewDevices_6() const { return ___m_CreateNewDevices_6; }
	inline bool* get_address_of_m_CreateNewDevices_6() { return &___m_CreateNewDevices_6; }
	inline void set_m_CreateNewDevices_6(bool value)
	{
		___m_CreateNewDevices_6 = value;
	}

	inline static int32_t get_offset_of_m_CreatedDevices_7() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_CreatedDevices_7)); }
	inline InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0  get_m_CreatedDevices_7() const { return ___m_CreatedDevices_7; }
	inline InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0 * get_address_of_m_CreatedDevices_7() { return &___m_CreatedDevices_7; }
	inline void set_m_CreatedDevices_7(InlinedArray_1_tBDEF39447E0759B0EA8C95B2FDD632F6A11382C0  value)
	{
		___m_CreatedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnFinished_8() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_OnFinished_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnFinished_8() const { return ___m_OnFinished_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnFinished_8() { return &___m_OnFinished_8; }
	inline void set_m_OnFinished_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnFinished_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFinished_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEvent_9() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_OnEvent_9)); }
	inline Action_1_t93F132D4CEA440B3876D49C9D9F979B481E8FBC2 * get_m_OnEvent_9() const { return ___m_OnEvent_9; }
	inline Action_1_t93F132D4CEA440B3876D49C9D9F979B481E8FBC2 ** get_address_of_m_OnEvent_9() { return &___m_OnEvent_9; }
	inline void set_m_OnEvent_9(Action_1_t93F132D4CEA440B3876D49C9D9F979B481E8FBC2 * value)
	{
		___m_OnEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerFirstEvent_10() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_StartTimeAsPerFirstEvent_10)); }
	inline double get_m_StartTimeAsPerFirstEvent_10() const { return ___m_StartTimeAsPerFirstEvent_10; }
	inline double* get_address_of_m_StartTimeAsPerFirstEvent_10() { return &___m_StartTimeAsPerFirstEvent_10; }
	inline void set_m_StartTimeAsPerFirstEvent_10(double value)
	{
		___m_StartTimeAsPerFirstEvent_10 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerRuntime_11() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_StartTimeAsPerRuntime_11)); }
	inline double get_m_StartTimeAsPerRuntime_11() const { return ___m_StartTimeAsPerRuntime_11; }
	inline double* get_address_of_m_StartTimeAsPerRuntime_11() { return &___m_StartTimeAsPerRuntime_11; }
	inline void set_m_StartTimeAsPerRuntime_11(double value)
	{
		___m_StartTimeAsPerRuntime_11 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTimeIndex_12() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_AllEventsByTimeIndex_12)); }
	inline int32_t get_m_AllEventsByTimeIndex_12() const { return ___m_AllEventsByTimeIndex_12; }
	inline int32_t* get_address_of_m_AllEventsByTimeIndex_12() { return &___m_AllEventsByTimeIndex_12; }
	inline void set_m_AllEventsByTimeIndex_12(int32_t value)
	{
		___m_AllEventsByTimeIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTime_13() { return static_cast<int32_t>(offsetof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC, ___m_AllEventsByTime_13)); }
	inline List_1_t195BE14D5FDBE7226779D63E048743025BD3554A * get_m_AllEventsByTime_13() const { return ___m_AllEventsByTime_13; }
	inline List_1_t195BE14D5FDBE7226779D63E048743025BD3554A ** get_address_of_m_AllEventsByTime_13() { return &___m_AllEventsByTime_13; }
	inline void set_m_AllEventsByTime_13(List_1_t195BE14D5FDBE7226779D63E048743025BD3554A * value)
	{
		___m_AllEventsByTime_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllEventsByTime_13), (void*)value);
	}
};


// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838  : public StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3
{
public:

public:
};


// System.Threading.Tasks.Task/SetOnInvokeMres
struct SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD  : public ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E
{
public:

public:
};


// System.Net.TimerThread/TimerNode
struct TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9  : public Timer_t4921D0FD531C804B41361C9BBF5D197D751EB323
{
public:
	// System.Net.TimerThread/TimerNode/TimerState System.Net.TimerThread/TimerNode::m_TimerState
	int32_t ___m_TimerState_2;
	// System.Net.TimerThread/Callback System.Net.TimerThread/TimerNode::m_Callback
	Callback_t762D11D347389984D6A23378030FA60146124360 * ___m_Callback_3;
	// System.Object System.Net.TimerThread/TimerNode::m_Context
	RuntimeObject * ___m_Context_4;
	// System.Object System.Net.TimerThread/TimerNode::m_QueueLock
	RuntimeObject * ___m_QueueLock_5;
	// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::next
	TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___next_6;
	// System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::prev
	TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * ___prev_7;

public:
	inline static int32_t get_offset_of_m_TimerState_2() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_TimerState_2)); }
	inline int32_t get_m_TimerState_2() const { return ___m_TimerState_2; }
	inline int32_t* get_address_of_m_TimerState_2() { return &___m_TimerState_2; }
	inline void set_m_TimerState_2(int32_t value)
	{
		___m_TimerState_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_Callback_3)); }
	inline Callback_t762D11D347389984D6A23378030FA60146124360 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline Callback_t762D11D347389984D6A23378030FA60146124360 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(Callback_t762D11D347389984D6A23378030FA60146124360 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Context_4() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_Context_4)); }
	inline RuntimeObject * get_m_Context_4() const { return ___m_Context_4; }
	inline RuntimeObject ** get_address_of_m_Context_4() { return &___m_Context_4; }
	inline void set_m_Context_4(RuntimeObject * value)
	{
		___m_Context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Context_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueueLock_5() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___m_QueueLock_5)); }
	inline RuntimeObject * get_m_QueueLock_5() const { return ___m_QueueLock_5; }
	inline RuntimeObject ** get_address_of_m_QueueLock_5() { return &___m_QueueLock_5; }
	inline void set_m_QueueLock_5(RuntimeObject * value)
	{
		___m_QueueLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QueueLock_5), (void*)value);
	}

	inline static int32_t get_offset_of_next_6() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___next_6)); }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * get_next_6() const { return ___next_6; }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 ** get_address_of_next_6() { return &___next_6; }
	inline void set_next_6(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * value)
	{
		___next_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_6), (void*)value);
	}

	inline static int32_t get_offset_of_prev_7() { return static_cast<int32_t>(offsetof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9, ___prev_7)); }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * get_prev_7() const { return ___prev_7; }
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 ** get_address_of_prev_7() { return &___prev_7; }
	inline void set_prev_7(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9 * value)
	{
		___prev_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_7), (void*)value);
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


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76
struct U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::basedOn
	String_t* ___basedOn_3;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>3__basedOn
	String_t* ___U3CU3E3__basedOn_4;
	// UnityEngine.InputSystem.InputManager UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>4__this
	InputManager_t64B18982A0B9A82419EC448BB0950FB92204BDFC * ___U3CU3E4__this_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<internedBasedOn>5__2
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___U3CinternedBasedOnU3E5__2_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>7__wrap2
	Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649  ___U3CU3E7__wrap2_7;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>7__wrap3
	Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60  ___U3CU3E7__wrap3_8;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76::<>7__wrap4
	Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689  ___U3CU3E7__wrap4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_basedOn_3() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___basedOn_3)); }
	inline String_t* get_basedOn_3() const { return ___basedOn_3; }
	inline String_t** get_address_of_basedOn_3() { return &___basedOn_3; }
	inline void set_basedOn_3(String_t* value)
	{
		___basedOn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basedOn_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__basedOn_4() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E3__basedOn_4)); }
	inline String_t* get_U3CU3E3__basedOn_4() const { return ___U3CU3E3__basedOn_4; }
	inline String_t** get_address_of_U3CU3E3__basedOn_4() { return &___U3CU3E3__basedOn_4; }
	inline void set_U3CU3E3__basedOn_4(String_t* value)
	{
		___U3CU3E3__basedOn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__basedOn_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E4__this_5)); }
	inline InputManager_t64B18982A0B9A82419EC448BB0950FB92204BDFC * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline InputManager_t64B18982A0B9A82419EC448BB0950FB92204BDFC ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(InputManager_t64B18982A0B9A82419EC448BB0950FB92204BDFC * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinternedBasedOnU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CinternedBasedOnU3E5__2_6)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_U3CinternedBasedOnU3E5__2_6() const { return ___U3CinternedBasedOnU3E5__2_6; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_U3CinternedBasedOnU3E5__2_6() { return &___U3CinternedBasedOnU3E5__2_6; }
	inline void set_U3CinternedBasedOnU3E5__2_6(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___U3CinternedBasedOnU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E7__wrap2_7)); }
	inline Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649  get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649 * get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(Enumerator_tEDD609E81AA04F4EA06CF39B709EF5352C3C2649  value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E7__wrap3_8)); }
	inline Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60  get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60 * get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(Enumerator_tA3B0AA3449B6F3EBC5EF2C78D492944D1FE03B60  value)
	{
		___U3CU3E7__wrap3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_8))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_9() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59, ___U3CU3E7__wrap4_9)); }
	inline Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689  get_U3CU3E7__wrap4_9() const { return ___U3CU3E7__wrap4_9; }
	inline Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689 * get_address_of_U3CU3E7__wrap4_9() { return &___U3CU3E7__wrap4_9; }
	inline void set_U3CU3E7__wrap4_9(Enumerator_t40A8F01708F41CD8A8029CFCB1988A0027289689  value)
	{
		___U3CU3E7__wrap4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap4_9))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks
struct RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.RenderPassEvent> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockEventLimits
	NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  ___m_BlockEventLimits_0;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockRanges
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_BlockRanges_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks::m_BlockRangeLengths
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_BlockRangeLengths_2;

public:
	inline static int32_t get_offset_of_m_BlockEventLimits_0() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockEventLimits_0)); }
	inline NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  get_m_BlockEventLimits_0() const { return ___m_BlockEventLimits_0; }
	inline NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1 * get_address_of_m_BlockEventLimits_0() { return &___m_BlockEventLimits_0; }
	inline void set_m_BlockEventLimits_0(NativeArray_1_tC94DDF61263B3FD275C540EE8CE31E8A2E30C9B1  value)
	{
		___m_BlockEventLimits_0 = value;
	}

	inline static int32_t get_offset_of_m_BlockRanges_1() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockRanges_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_BlockRanges_1() const { return ___m_BlockRanges_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_BlockRanges_1() { return &___m_BlockRanges_1; }
	inline void set_m_BlockRanges_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_BlockRanges_1 = value;
	}

	inline static int32_t get_offset_of_m_BlockRangeLengths_2() { return static_cast<int32_t>(offsetof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1, ___m_BlockRangeLengths_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_BlockRangeLengths_2() const { return ___m_BlockRangeLengths_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_BlockRangeLengths_2() { return &___m_BlockRangeLengths_2; }
	inline void set_m_BlockRangeLengths_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_BlockRangeLengths_2 = value;
	}
};


// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E  : public Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849
{
public:
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Prev
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___Prev_25;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Next
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___Next_26;

public:
	inline static int32_t get_offset_of_Prev_25() { return static_cast<int32_t>(offsetof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E, ___Prev_25)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_Prev_25() const { return ___Prev_25; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_Prev_25() { return &___Prev_25; }
	inline void set_Prev_25(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___Prev_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_25), (void*)value);
	}

	inline static int32_t get_offset_of_Next_26() { return static_cast<int32_t>(offsetof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E, ___Next_26)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_Next_26() const { return ___Next_26; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_Next_26() { return &___Next_26; }
	inline void set_Next_26(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___Next_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_26), (void*)value);
	}
};


// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974  : public Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725
{
public:
	// System.Boolean System.IO.Stream/ReadWriteTask::_isRead
	bool ____isRead_25;
	// System.IO.Stream System.IO.Stream/ReadWriteTask::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_26;
	// System.Byte[] System.IO.Stream/ReadWriteTask::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_27;
	// System.Int32 System.IO.Stream/ReadWriteTask::_offset
	int32_t ____offset_28;
	// System.Int32 System.IO.Stream/ReadWriteTask::_count
	int32_t ____count_29;
	// System.AsyncCallback System.IO.Stream/ReadWriteTask::_callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ____callback_30;
	// System.Threading.ExecutionContext System.IO.Stream/ReadWriteTask::_context
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____context_31;

public:
	inline static int32_t get_offset_of__isRead_25() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____isRead_25)); }
	inline bool get__isRead_25() const { return ____isRead_25; }
	inline bool* get_address_of__isRead_25() { return &____isRead_25; }
	inline void set__isRead_25(bool value)
	{
		____isRead_25 = value;
	}

	inline static int32_t get_offset_of__stream_26() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____stream_26)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_26() const { return ____stream_26; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_26() { return &____stream_26; }
	inline void set__stream_26(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_26), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_27() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____buffer_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_27() const { return ____buffer_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_27() { return &____buffer_27; }
	inline void set__buffer_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_27), (void*)value);
	}

	inline static int32_t get_offset_of__offset_28() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____offset_28)); }
	inline int32_t get__offset_28() const { return ____offset_28; }
	inline int32_t* get_address_of__offset_28() { return &____offset_28; }
	inline void set__offset_28(int32_t value)
	{
		____offset_28 = value;
	}

	inline static int32_t get_offset_of__count_29() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____count_29)); }
	inline int32_t get__count_29() const { return ____count_29; }
	inline int32_t* get_address_of__count_29() { return &____count_29; }
	inline void set__count_29(int32_t value)
	{
		____count_29 = value;
	}

	inline static int32_t get_offset_of__callback_30() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____callback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get__callback_30() const { return ____callback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of__callback_30() { return &____callback_30; }
	inline void set__callback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		____callback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_30), (void*)value);
	}

	inline static int32_t get_offset_of__context_31() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____context_31)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get__context_31() const { return ____context_31; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of__context_31() { return &____context_31; }
	inline void set__context_31(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		____context_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_31), (void*)value);
	}
};

struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_StaticFields
{
public:
	// System.Threading.ContextCallback System.IO.Stream/ReadWriteTask::s_invokeAsyncCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_invokeAsyncCallback_32;

public:
	inline static int32_t get_offset_of_s_invokeAsyncCallback_32() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_StaticFields, ___s_invokeAsyncCallback_32)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_invokeAsyncCallback_32() const { return ___s_invokeAsyncCallback_32; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_invokeAsyncCallback_32() { return &___s_invokeAsyncCallback_32; }
	inline void set_s_invokeAsyncCallback_32(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_invokeAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_invokeAsyncCallback_32), (void*)value);
	}
};


// TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>4__this
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___U3CU3E4__this_2;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::start
	int32_t ___start_3;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::end
	int32_t ___end_4;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_5;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::currentCharacter
	int32_t ___currentCharacter_6;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::framerate
	int32_t ___framerate_7;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<currentFrame>5__2
	int32_t ___U3CcurrentFrameU3E5__2_8;
	// TMPro.TMP_CharacterInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<charInfo>5__3
	TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  ___U3CcharInfoU3E5__3_9;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<materialIndex>5__4
	int32_t ___U3CmaterialIndexU3E5__4_10;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<vertexIndex>5__5
	int32_t ___U3CvertexIndexU3E5__5_11;
	// TMPro.TMP_MeshInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<meshInfo>5__6
	TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  ___U3CmeshInfoU3E5__6_12;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<baseSpriteScale>5__7
	float ___U3CbaseSpriteScaleU3E5__7_13;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<elapsedTime>5__8
	float ___U3CelapsedTimeU3E5__8_14;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<targetTime>5__9
	float ___U3CtargetTimeU3E5__9_15;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E4__this_2)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___start_3)); }
	inline int32_t get_start_3() const { return ___start_3; }
	inline int32_t* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(int32_t value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___end_4)); }
	inline int32_t get_end_4() const { return ___end_4; }
	inline int32_t* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(int32_t value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_spriteAsset_5() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___spriteAsset_5)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_5() const { return ___spriteAsset_5; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_5() { return &___spriteAsset_5; }
	inline void set_spriteAsset_5(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentCharacter_6() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___currentCharacter_6)); }
	inline int32_t get_currentCharacter_6() const { return ___currentCharacter_6; }
	inline int32_t* get_address_of_currentCharacter_6() { return &___currentCharacter_6; }
	inline void set_currentCharacter_6(int32_t value)
	{
		___currentCharacter_6 = value;
	}

	inline static int32_t get_offset_of_framerate_7() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___framerate_7)); }
	inline int32_t get_framerate_7() const { return ___framerate_7; }
	inline int32_t* get_address_of_framerate_7() { return &___framerate_7; }
	inline void set_framerate_7(int32_t value)
	{
		___framerate_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcurrentFrameU3E5__2_8)); }
	inline int32_t get_U3CcurrentFrameU3E5__2_8() const { return ___U3CcurrentFrameU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E5__2_8() { return &___U3CcurrentFrameU3E5__2_8; }
	inline void set_U3CcurrentFrameU3E5__2_8(int32_t value)
	{
		___U3CcurrentFrameU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CcharInfoU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcharInfoU3E5__3_9)); }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  get_U3CcharInfoU3E5__3_9() const { return ___U3CcharInfoU3E5__3_9; }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * get_address_of_U3CcharInfoU3E5__3_9() { return &___U3CcharInfoU3E5__3_9; }
	inline void set_U3CcharInfoU3E5__3_9(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		___U3CcharInfoU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___material_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmaterialIndexU3E5__4_10)); }
	inline int32_t get_U3CmaterialIndexU3E5__4_10() const { return ___U3CmaterialIndexU3E5__4_10; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__4_10() { return &___U3CmaterialIndexU3E5__4_10; }
	inline void set_U3CmaterialIndexU3E5__4_10(int32_t value)
	{
		___U3CmaterialIndexU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CvertexIndexU3E5__5_11)); }
	inline int32_t get_U3CvertexIndexU3E5__5_11() const { return ___U3CvertexIndexU3E5__5_11; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__5_11() { return &___U3CvertexIndexU3E5__5_11; }
	inline void set_U3CvertexIndexU3E5__5_11(int32_t value)
	{
		___U3CvertexIndexU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CmeshInfoU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmeshInfoU3E5__6_12)); }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  get_U3CmeshInfoU3E5__6_12() const { return ___U3CmeshInfoU3E5__6_12; }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * get_address_of_U3CmeshInfoU3E5__6_12() { return &___U3CmeshInfoU3E5__6_12; }
	inline void set_U3CmeshInfoU3E5__6_12(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		___U3CmeshInfoU3E5__6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___material_13), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CbaseSpriteScaleU3E5__7_13() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CbaseSpriteScaleU3E5__7_13)); }
	inline float get_U3CbaseSpriteScaleU3E5__7_13() const { return ___U3CbaseSpriteScaleU3E5__7_13; }
	inline float* get_address_of_U3CbaseSpriteScaleU3E5__7_13() { return &___U3CbaseSpriteScaleU3E5__7_13; }
	inline void set_U3CbaseSpriteScaleU3E5__7_13(float value)
	{
		___U3CbaseSpriteScaleU3E5__7_13 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__8_14() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CelapsedTimeU3E5__8_14)); }
	inline float get_U3CelapsedTimeU3E5__8_14() const { return ___U3CelapsedTimeU3E5__8_14; }
	inline float* get_address_of_U3CelapsedTimeU3E5__8_14() { return &___U3CelapsedTimeU3E5__8_14; }
	inline void set_U3CelapsedTimeU3E5__8_14(float value)
	{
		___U3CelapsedTimeU3E5__8_14 = value;
	}

	inline static int32_t get_offset_of_U3CtargetTimeU3E5__9_15() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CtargetTimeU3E5__9_15)); }
	inline float get_U3CtargetTimeU3E5__9_15() const { return ___U3CtargetTimeU3E5__9_15; }
	inline float* get_address_of_U3CtargetTimeU3E5__9_15() { return &___U3CtargetTimeU3E5__9_15; }
	inline void set_U3CtargetTimeU3E5__9_15(float value)
	{
		___U3CtargetTimeU3E5__9_15 = value;
	}
};


// System.Threading.Tasks.Task/DelayPromise
struct DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.Task/DelayPromise::Token
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___Token_25;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/DelayPromise::Registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___Registration_26;
	// System.Threading.Timer System.Threading.Tasks.Task/DelayPromise::Timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___Timer_27;

public:
	inline static int32_t get_offset_of_Token_25() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Token_25)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_Token_25() const { return ___Token_25; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_Token_25() { return &___Token_25; }
	inline void set_Token_25(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___Token_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Token_25))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Registration_26() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Registration_26)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_Registration_26() const { return ___Registration_26; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_Registration_26() { return &___Registration_26; }
	inline void set_Registration_26(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___Registration_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Registration_26))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Registration_26))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Timer_27() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Timer_27)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_Timer_27() const { return ___Timer_27; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_Timer_27() { return &___Timer_27; }
	inline void set_Timer_27(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___Timer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Timer_27), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18  : public Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284
{
public:
	// System.Collections.Generic.IList`1<System.Threading.Tasks.Task> System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::_tasks
	RuntimeObject* ____tasks_25;
	// System.Int32 System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::m_firstTaskAlreadyCompleted
	int32_t ___m_firstTaskAlreadyCompleted_26;

public:
	inline static int32_t get_offset_of__tasks_25() { return static_cast<int32_t>(offsetof(CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18, ____tasks_25)); }
	inline RuntimeObject* get__tasks_25() const { return ____tasks_25; }
	inline RuntimeObject** get_address_of__tasks_25() { return &____tasks_25; }
	inline void set__tasks_25(RuntimeObject* value)
	{
		____tasks_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tasks_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_firstTaskAlreadyCompleted_26() { return static_cast<int32_t>(offsetof(CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18, ___m_firstTaskAlreadyCompleted_26)); }
	inline int32_t get_m_firstTaskAlreadyCompleted_26() const { return ___m_firstTaskAlreadyCompleted_26; }
	inline int32_t* get_address_of_m_firstTaskAlreadyCompleted_26() { return &___m_firstTaskAlreadyCompleted_26; }
	inline void set_m_firstTaskAlreadyCompleted_26(int32_t value)
	{
		___m_firstTaskAlreadyCompleted_26 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_13;

public:
	inline static int32_t get_offset_of__sourceBuffer_13() { return static_cast<int32_t>(offsetof(WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2, ____sourceBuffer_13)); }
	inline RuntimeObject* get__sourceBuffer_13() const { return ____sourceBuffer_13; }
	inline RuntimeObject** get_address_of__sourceBuffer_13() { return &____sourceBuffer_13; }
	inline void set__sourceBuffer_13(RuntimeObject* value)
	{
		____sourceBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceBuffer_13), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Index
	int32_t ___m_Index_0;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Requirements
	DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* ___m_Requirements_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Controls
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Controls_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_Requirements_1() { return static_cast<int32_t>(offsetof(Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF, ___m_Requirements_1)); }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* get_m_Requirements_1() const { return ___m_Requirements_1; }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A** get_address_of_m_Requirements_1() { return &___m_Requirements_1; }
	inline void set_m_Requirements_1(DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* value)
	{
		___m_Requirements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Requirements_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_2() { return static_cast<int32_t>(offsetof(Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF, ___m_Controls_2)); }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  get_m_Controls_2() const { return ___m_Controls_2; }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 * get_address_of_m_Controls_2() { return &___m_Controls_2; }
	inline void set_m_Controls_2(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  value)
	{
		___m_Controls_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_marshaled_pinvoke
{
	int32_t ___m_Index_0;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke* ___m_Requirements_1;
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Controls_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_marshaled_com
{
	int32_t ___m_Index_0;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com* ___m_Requirements_1;
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Controls_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue);
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


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReplayController_t9DF9CC9EC5C2F2DD902C5063506CBA06442779DC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<CaretBlink>d__161
struct U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183
struct U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__76
struct U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListControlLayoutsU3Ed__76_tE1B17E2A2B8B04EE666E0B8CC98BF69BD447BC59_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t86807189C47AD3AA1EE67C452184246F4E51A2E6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tCA2BDD4C525211DE82E9F645FFB2D5874B2272BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29
struct U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetStackTraceDebugInfoU3Ed__29_t894D21BA268B7114D928DF1371B7BA795D998BF2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__63_tF93D45085885A178BCF829466B976D82BB2A40C8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 5;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[2] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2
{
	inline InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID;
		interfaceIds[2] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[3] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) IL2CPP_OVERRIDE
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
			RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __thisValue = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE(__thisValue, ___value0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC(__thisValue, ___position0, NULL);
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
		IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93(__thisValue, ___position0, NULL);
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
		IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) IL2CPP_OVERRIDE
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
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C(__thisValue, ___position0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4(__thisValue, NULL);
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
		IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) IL2CPP_OVERRIDE
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
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) IL2CPP_OVERRIDE
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
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.GraphicsTools.ProximityLight/<PulseRoutine>d__24
struct U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPulseRoutineU3Ed__24_tACEEE5C5236BA3C54D63F617CBC0CBD09CACE9C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks
struct RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderBlocks_t00C0E874A3736EF5470CFA68AD44F0537F2A83C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyList_t90FF026A62D56329DEFC1B768358977E70839881(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/SyncSortedList
struct SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/NullStream
struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.StreamReader/NullStreamReader
struct NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task/DelayPromise
struct DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task/SetOnInvokeMres
struct SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TerrainGroups_t7252F67656E98D75852FF5CE365E82AB2ADB9288_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__89
struct U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedGraphicRebuildU3Ed__89_t4344BE5B582CA8FA97AD75DDDC5A3773E5DC4E02_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__90
struct U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedMaterialRebuildU3Ed__90_t86D334C125057A5A17C14582D622BA4D41BF1D26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextReader/NullTextReader
struct NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextReader/SyncTextReader
struct SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextWriter/SyncTextWriter
struct SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.TimerThread/TimerNode
struct TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimerNode_t320EB9C4551A6998CDD3643411057AB8F4609FF9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator
struct Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t8DBC7503FC39170765261EBFF93C20F4777A3037_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster/RaycastHitArraySegment
struct RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RaycastHitArraySegment_t04A248B0BED68FB207CC9A643D86E0DBBEEB0F5D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Linq.XContainer/<GetDescendants>d__39
struct U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Linq.XContainer/<Nodes>d__18
struct U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Linq.XElement/<GetAttributes>d__105
struct U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__11
struct U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateCollidersAfterOnTriggerStayU3Ed__11_t723F8A1734A8ADA075FEAF41C0D3C60DBC15B4C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__47
struct U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRepeatInitializeCameraU3Ed__47_t354C3B5B1E49063377F09EF3314D938EBF1CDCBB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__38
struct U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateCollidersAfterOnTriggerStayU3Ed__38_t4E8F11BD77EF07133E4FC621AAF4CCB43034427F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection
struct ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValuesCollection_t6CC3C6446C1AD7889907226E5D2CD8767CC30C0C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.XmlTextReaderImpl/NoNamespaceManager
struct NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.XmlToDatasetMap/XmlNodeIdHashtable
struct XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlNodeIdHashtable_t85B5C0603DB6A1F37E4B9DB328B573A4C8BE6C9E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Schema.XsdBuilder/BuilderNamespaceManager
struct BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BuilderNamespaceManager_t2C512A27A27350424467A105CD1E56B20AA44569_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6
struct U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
struct U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetBaseLayoutsU3Ed__24_tACA24D39AABC7EEBCDC899BF6C82ED4092B3136F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t266370635B45A4CE0B182A35DD226145DB253DFF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t1E96107B4D2B18B97ECC9EDC92EE86E8063A5820_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange
struct BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlockRange_t6D0C70038FF24257CF57475FFFB294D10AAD0329_ComCallableWrapper(obj));
}
