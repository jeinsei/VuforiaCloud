#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// JsonManager
struct JsonManager_t0A6E75C6D0340575400DC4B4728D3EC074C76DAB;
// MediaPlayerCtrl
struct MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF;
// MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165
struct U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315;
// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164
struct U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598;
// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163
struct U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3;
// MediaPlayerCtrl/VideoBuffering
struct VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE;
// MediaPlayerCtrl/VideoBufferingEnd
struct VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0;
// MediaPlayerCtrl/VideoEnd
struct VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84;
// MediaPlayerCtrl/VideoError
struct VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13;
// MediaPlayerCtrl/VideoFirstFrameReady
struct VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24;
// MediaPlayerCtrl/VideoReady
struct VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611;
// MediaPlayerCtrl/VideoResize
struct VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D;
// MediaPlayerEvent
struct MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D;
// MediaPlayerFullScreenCtrl
struct MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969;
// SeekBarCtrl
struct SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48;
// SimpleCloudHandler
struct SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB;
// SimpleCloudHandler/<LoadAssetBundles>d__9
struct U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518;
// SphereMirror
struct SphereMirror_t58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour>
struct Dictionary_2_t49D49E0D72539C160B6F736C64DBC729238B3481;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AssetBundle
struct AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.WWW
struct WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664;
// Vuforia.CloudRecoBehaviour
struct CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870;
// Vuforia.ICloudRecoEventHandler
struct ICloudRecoEventHandler_t28D7E850DEC10DF68874CCFEB8F14EB06A82B780;
// Vuforia.ITrackerManager
struct ITrackerManager_tF9B9BD66F3A783EE6406F6E14B874385FE5E156B;
// Vuforia.ImageTarget
struct ImageTarget_t916FA6EEDF77BFCE0C8490D8E534D871354B7E1C;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ObjectRecoBehaviour
struct ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.Trackable
struct Trackable_t2A23C572321E7D4FEAC9A1019DFA0AA144FC9B8F;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540_il2cpp_TypeInfo_var;
extern RuntimeClass* MEDIAPLAYER_ERROR_t8FC8B328771E22027B520993803C0C8A0F43ADBD_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral06F31290545C1DB1C3CC12767ADB823EE75FB378;
extern String_t* _stringLiteral0E24803F775C75B3E1C29012A874E60179599D1E;
extern String_t* _stringLiteral0ED3C0EF0D4257993C2E87DD24949AE1524775C0;
extern String_t* _stringLiteral1CC84AF15081FF8838A229A93535886CA0FB6140;
extern String_t* _stringLiteral1EC9C77019B9C571C284D11D62850D0BE7F7D725;
extern String_t* _stringLiteral220AB9BACC00466B9232DD9249C20C51C1F762F6;
extern String_t* _stringLiteral3B8712B1CF5361E6467E355FCE656A99AB6D6C52;
extern String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
extern String_t* _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C;
extern String_t* _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001;
extern String_t* _stringLiteralAA15D6E5885C1E9F19AD22CC8139EC0B00EEA00B;
extern String_t* _stringLiteralCAC99FEDBFCBCFEC61A7225E35D523EFF7FD6A7B;
extern String_t* _stringLiteralEF85A62A21FF109F145B4BC8CE92C2007BAA8D96;
extern const RuntimeMethod* Component_GetComponent_TisCloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870_m375F4556736B4DECAA86FA3022D4EC898BBDAA1B_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF_m14B8EF23834F6C45DFB3556593191D3FAC86D8C3_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_mCAB3ED46860A309B3862F2E69CE83AD4FCE42868_RuntimeMethod_var;
extern const RuntimeMethod* MediaPlayerEvent_OnEnd_m26CD647830A70EEE87B7F35C42E69CE9494BA715_RuntimeMethod_var;
extern const RuntimeMethod* MediaPlayerEvent_OnError_m75E51E259C7040B666E3C2CE20EC5B557FFBE8EC_RuntimeMethod_var;
extern const RuntimeMethod* MediaPlayerEvent_OnFirstFrameReady_m82E0C3F6E0535C46F45F8559F32F5E6205AE0D31_RuntimeMethod_var;
extern const RuntimeMethod* MediaPlayerEvent_OnReady_m0264324C1E9EFA79449DC4B0099AC02888DE48DA_RuntimeMethod_var;
extern const RuntimeMethod* MediaPlayerEvent_OnResize_mBF4B4A14DA6B4827E983A75C7E03CBDEF319582E_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
extern const RuntimeMethod* SimpleCloudHandler_OnUpdateError_m00DD404507FF60DA6D58A692880B1E069E5172E4_RuntimeMethod_var;
extern const RuntimeMethod* U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_Reset_mE40C44F7B538FD07773BBC905AEEA0F001804481_RuntimeMethod_var;
extern const RuntimeMethod* U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_Reset_m821125BEA351E437C5F2BAD2DB3A767C08029502_RuntimeMethod_var;
extern const RuntimeMethod* U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_Reset_m23F9F028D139112BE7656D31075D70145A296688_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_Reset_m82D97BFBD0E436C6AAA84983A9BBD110ED7755A8_RuntimeMethod_var;
extern const uint32_t MediaPlayerEvent_OnEnd_m26CD647830A70EEE87B7F35C42E69CE9494BA715_MetadataUsageId;
extern const uint32_t MediaPlayerEvent_OnError_m75E51E259C7040B666E3C2CE20EC5B557FFBE8EC_MetadataUsageId;
extern const uint32_t MediaPlayerEvent_OnFirstFrameReady_m82E0C3F6E0535C46F45F8559F32F5E6205AE0D31_MetadataUsageId;
extern const uint32_t MediaPlayerEvent_OnReady_m0264324C1E9EFA79449DC4B0099AC02888DE48DA_MetadataUsageId;
extern const uint32_t MediaPlayerEvent_OnResize_mBF4B4A14DA6B4827E983A75C7E03CBDEF319582E_MetadataUsageId;
extern const uint32_t MediaPlayerEvent_Start_m004C7C216FFF326B1C1C52036D00C484214E3442_MetadataUsageId;
extern const uint32_t MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178_MetadataUsageId;
extern const uint32_t SeekBarCtrl_OnDrag_m4EFC43D506B6DD440F08FBAC7C8682A302FB8A84_MetadataUsageId;
extern const uint32_t SeekBarCtrl_OnPointerEnter_m67663863C0E35C23A4C0E8C1684CD6356E3CABF2_MetadataUsageId;
extern const uint32_t SeekBarCtrl_OnPointerExit_mA1DEA9D22D55C93490AE63B51859D7DD02D1F011_MetadataUsageId;
extern const uint32_t SeekBarCtrl_Update_m3B5AAADCB4953C20EB4FE62ADE80F1D29EB317EA_MetadataUsageId;
extern const uint32_t SimpleCloudHandler_LoadAssetBundles_m6EBB988422D81AFF8B26B61F09658A4055EF9096_MetadataUsageId;
extern const uint32_t SimpleCloudHandler_OnNewSearchResult_mE849DA73E0B8BE5794E94C6155027EFE10D32F2D_MetadataUsageId;
extern const uint32_t SimpleCloudHandler_OnStateChanged_mA541364330D44410EF266569226C2F7A8E2635F4_MetadataUsageId;
extern const uint32_t SimpleCloudHandler_OnUpdateError_m00DD404507FF60DA6D58A692880B1E069E5172E4_MetadataUsageId;
extern const uint32_t SimpleCloudHandler_Start_mBE8C4EE8A4A70F5A4FD65CBAA209A8DD6234E6F8_MetadataUsageId;
extern const uint32_t SphereMirror_Start_mAFCE28AF1750CFE695E23D7BADE93647AF6523A1_MetadataUsageId;
extern const uint32_t U3CCopyStreamingAssetVideoAndLoadU3Ed__165_MoveNext_m946F601E70F8DEA14DE2B68D4DA3024D84B71A50_MetadataUsageId;
extern const uint32_t U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_Reset_mE40C44F7B538FD07773BBC905AEEA0F001804481_MetadataUsageId;
extern const uint32_t U3CDownloadStreamingVideoAndLoad2U3Ed__164_MoveNext_m5750838BF6972A8D42B1B03FFE0CFCF7549FCC6B_MetadataUsageId;
extern const uint32_t U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_Reset_m821125BEA351E437C5F2BAD2DB3A767C08029502_MetadataUsageId;
extern const uint32_t U3CDownloadStreamingVideoAndLoadU3Ed__163_MoveNext_m3FF5E9207421BB7160459728CCF0A256A56C6D2F_MetadataUsageId;
extern const uint32_t U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_Reset_m23F9F028D139112BE7656D31075D70145A296688_MetadataUsageId;
extern const uint32_t U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_Reset_m82D97BFBD0E436C6AAA84983A9BBD110ED7755A8_MetadataUsageId;
extern const uint32_t VideoError_BeginInvoke_mF9B400464BF5EB6AE69007E5CE2C80D3C52B0E4D_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CCOPYSTREAMINGASSETVIDEOANDLOADU3ED__165_T162B3F917B3AADD8903E158552C6C1FC4B7C4315_H
#define U3CCOPYSTREAMINGASSETVIDEOANDLOADU3ED__165_T162B3F917B3AADD8903E158552C6C1FC4B7C4315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165
struct  U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315  : public RuntimeObject
{
public:
	// System.Int32 MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::strURL
	String_t* ___strURL_2;
	// MediaPlayerCtrl MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::<>4__this
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * ___U3CU3E4__this_3;
	// System.String MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::<write_path>5__2
	String_t* ___U3Cwrite_pathU3E5__2_4;
	// UnityEngine.WWW MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::<www>5__3
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_strURL_2() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___strURL_2)); }
	inline String_t* get_strURL_2() const { return ___strURL_2; }
	inline String_t** get_address_of_strURL_2() { return &___strURL_2; }
	inline void set_strURL_2(String_t* value)
	{
		___strURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___strURL_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___U3CU3E4__this_3)); }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3Cwrite_pathU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___U3Cwrite_pathU3E5__2_4)); }
	inline String_t* get_U3Cwrite_pathU3E5__2_4() const { return ___U3Cwrite_pathU3E5__2_4; }
	inline String_t** get_address_of_U3Cwrite_pathU3E5__2_4() { return &___U3Cwrite_pathU3E5__2_4; }
	inline void set_U3Cwrite_pathU3E5__2_4(String_t* value)
	{
		___U3Cwrite_pathU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cwrite_pathU3E5__2_4), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315, ___U3CwwwU3E5__3_5)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__3_5() const { return ___U3CwwwU3E5__3_5; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__3_5() { return &___U3CwwwU3E5__3_5; }
	inline void set_U3CwwwU3E5__3_5(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOPYSTREAMINGASSETVIDEOANDLOADU3ED__165_T162B3F917B3AADD8903E158552C6C1FC4B7C4315_H
#ifndef U3CDOWNLOADSTREAMINGVIDEOANDLOAD2U3ED__164_TEED430D03EA9DEB65ADD1C7F94210F69580BA598_H
#define U3CDOWNLOADSTREAMINGVIDEOANDLOAD2U3ED__164_TEED430D03EA9DEB65ADD1C7F94210F69580BA598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164
struct  U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598  : public RuntimeObject
{
public:
	// System.Int32 MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::strURL
	String_t* ___strURL_2;
	// MediaPlayerCtrl MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::<>4__this
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * ___U3CU3E4__this_3;
	// System.String MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::<write_path>5__2
	String_t* ___U3Cwrite_pathU3E5__2_4;
	// UnityEngine.WWW MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::<www>5__3
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_strURL_2() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___strURL_2)); }
	inline String_t* get_strURL_2() const { return ___strURL_2; }
	inline String_t** get_address_of_strURL_2() { return &___strURL_2; }
	inline void set_strURL_2(String_t* value)
	{
		___strURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___strURL_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___U3CU3E4__this_3)); }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3Cwrite_pathU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___U3Cwrite_pathU3E5__2_4)); }
	inline String_t* get_U3Cwrite_pathU3E5__2_4() const { return ___U3Cwrite_pathU3E5__2_4; }
	inline String_t** get_address_of_U3Cwrite_pathU3E5__2_4() { return &___U3Cwrite_pathU3E5__2_4; }
	inline void set_U3Cwrite_pathU3E5__2_4(String_t* value)
	{
		___U3Cwrite_pathU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cwrite_pathU3E5__2_4), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598, ___U3CwwwU3E5__3_5)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__3_5() const { return ___U3CwwwU3E5__3_5; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__3_5() { return &___U3CwwwU3E5__3_5; }
	inline void set_U3CwwwU3E5__3_5(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADSTREAMINGVIDEOANDLOAD2U3ED__164_TEED430D03EA9DEB65ADD1C7F94210F69580BA598_H
#ifndef U3CDOWNLOADSTREAMINGVIDEOANDLOADU3ED__163_T341C6334A1B819B8221A7CB07AA714850081B5F3_H
#define U3CDOWNLOADSTREAMINGVIDEOANDLOADU3ED__163_T341C6334A1B819B8221A7CB07AA714850081B5F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163
struct  U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3  : public RuntimeObject
{
public:
	// System.Int32 MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::strURL
	String_t* ___strURL_2;
	// MediaPlayerCtrl MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::<>4__this
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * ___U3CU3E4__this_3;
	// UnityEngine.WWW MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::<www>5__2
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_strURL_2() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3, ___strURL_2)); }
	inline String_t* get_strURL_2() const { return ___strURL_2; }
	inline String_t** get_address_of_strURL_2() { return &___strURL_2; }
	inline void set_strURL_2(String_t* value)
	{
		___strURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___strURL_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3, ___U3CU3E4__this_3)); }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3, ___U3CwwwU3E5__2_4)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADSTREAMINGVIDEOANDLOADU3ED__163_T341C6334A1B819B8221A7CB07AA714850081B5F3_H
#ifndef U3CLOADASSETBUNDLESU3ED__9_T424E4C6AAC8F86BB496A1C6AB797B81EABA5E518_H
#define U3CLOADASSETBUNDLESU3ED__9_T424E4C6AAC8F86BB496A1C6AB797B81EABA5E518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCloudHandler/<LoadAssetBundles>d__9
struct  U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518  : public RuntimeObject
{
public:
	// System.Int32 SimpleCloudHandler/<LoadAssetBundles>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleCloudHandler/<LoadAssetBundles>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADASSETBUNDLESU3ED__9_T424E4C6AAC8F86BB496A1C6AB797B81EABA5E518_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#define TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#define DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#define SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WWW_TA50AFB5DE276783409B4CE88FE9B772322EE5664_H
#define WWW_TA50AFB5DE276783409B4CE88FE9B772322EE5664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ____uwr_0)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_TA50AFB5DE276783409B4CE88FE9B772322EE5664_H
#ifndef OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#define OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mDataSets_2;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___mTargetFinder_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mActiveDataSets_1)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mDataSets_2)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinder_3)); }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * get_mTargetFinder_3() const { return ___mTargetFinder_3; }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** get_address_of_mTargetFinder_3() { return &___mTargetFinder_3; }
	inline void set_mTargetFinder_3(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * value)
	{
		___mTargetFinder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_3), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#ifndef TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#define TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#ifndef MEDIAPLAYER_ERROR_T8FC8B328771E22027B520993803C0C8A0F43ADBD_H
#define MEDIAPLAYER_ERROR_T8FC8B328771E22027B520993803C0C8A0F43ADBD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/MEDIAPLAYER_ERROR
struct  MEDIAPLAYER_ERROR_t8FC8B328771E22027B520993803C0C8A0F43ADBD 
{
public:
	// System.Int32 MediaPlayerCtrl/MEDIAPLAYER_ERROR::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MEDIAPLAYER_ERROR_t8FC8B328771E22027B520993803C0C8A0F43ADBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPLAYER_ERROR_T8FC8B328771E22027B520993803C0C8A0F43ADBD_H
#ifndef MEDIAPLAYER_STATE_TF822830CCC106A0B64ED9FA8EA870A0C8522BFD5_H
#define MEDIAPLAYER_STATE_TF822830CCC106A0B64ED9FA8EA870A0C8522BFD5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/MEDIAPLAYER_STATE
struct  MEDIAPLAYER_STATE_tF822830CCC106A0B64ED9FA8EA870A0C8522BFD5 
{
public:
	// System.Int32 MediaPlayerCtrl/MEDIAPLAYER_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MEDIAPLAYER_STATE_tF822830CCC106A0B64ED9FA8EA870A0C8522BFD5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPLAYER_STATE_TF822830CCC106A0B64ED9FA8EA870A0C8522BFD5_H
#ifndef MEDIA_SCALE_T80C63F94CB5D2376B36BF6E3FFA857BE2BD05792_H
#define MEDIA_SCALE_T80C63F94CB5D2376B36BF6E3FFA857BE2BD05792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/MEDIA_SCALE
struct  MEDIA_SCALE_t80C63F94CB5D2376B36BF6E3FFA857BE2BD05792 
{
public:
	// System.Int32 MediaPlayerCtrl/MEDIA_SCALE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MEDIA_SCALE_t80C63F94CB5D2376B36BF6E3FFA857BE2BD05792, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIA_SCALE_T80C63F94CB5D2376B36BF6E3FFA857BE2BD05792_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef FILEATTRIBUTES_T224B42F6F82954C94B51791913857C005C559876_H
#define FILEATTRIBUTES_T224B42F6F82954C94B51791913857C005C559876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEATTRIBUTES_T224B42F6F82954C94B51791913857C005C559876_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#define NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef INPUTBUTTON_TCC7470F9FD2AFE525243394F0215B47D4BF86AB0_H
#define INPUTBUTTON_TCC7470F9FD2AFE525243394F0215B47D4BF86AB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_TCC7470F9FD2AFE525243394F0215B47D4BF86AB0_H
#ifndef RAYCASTRESULT_T991BCED43A91EDD8580F39631DA07B1F88C58B91_H
#define RAYCASTRESULT_T991BCED43A91EDD8580F39631DA07B1F88C58B91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T991BCED43A91EDD8580F39631DA07B1F88C58B91_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#define COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifndef MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#define MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifndef SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#define SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_tF089B96B46A592693753CBF23C52A3887632D210 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_tF089B96B46A592693753CBF23C52A3887632D210, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifndef TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#define TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifndef DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#define DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#ifndef IMAGETARGETTYPE_T3A1F68B5507799B9B73A9806FA199BF2F3A819D6_H
#define IMAGETARGETTYPE_T3A1F68B5507799B9B73A9806FA199BF2F3A819D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetType
struct  ImageTargetType_t3A1F68B5507799B9B73A9806FA199BF2F3A819D6 
{
public:
	// System.Int32 Vuforia.ImageTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageTargetType_t3A1F68B5507799B9B73A9806FA199BF2F3A819D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETTYPE_T3A1F68B5507799B9B73A9806FA199BF2F3A819D6_H
#ifndef TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#define TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTargets_1), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#ifndef INITSTATE_TF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_H
#define INITSTATE_TF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/InitState
struct  InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925 
{
public:
	// System.Int32 Vuforia.TargetFinder/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_TF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_H
#ifndef TARGETSEARCHRESULT_TC958489A5AB66221259FCDFD35F79CA426DAC6F5_H
#define TARGETSEARCHRESULT_TC958489A5AB66221259FCDFD35F79CA426DAC6F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 
{
public:
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.Single Vuforia.TargetFinder/TargetSearchResult::TargetSize
	float ___TargetSize_2;
	// System.String Vuforia.TargetFinder/TargetSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder/TargetSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_5;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TargetName_0), value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((&___UniqueTargetId_1), value);
	}

	inline static int32_t get_offset_of_TargetSize_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TargetSize_2)); }
	inline float get_TargetSize_2() const { return ___TargetSize_2; }
	inline float* get_address_of_TargetSize_2() { return &___TargetSize_2; }
	inline void set_TargetSize_2(float value)
	{
		___TargetSize_2 = value;
	}

	inline static int32_t get_offset_of_MetaData_3() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___MetaData_3)); }
	inline String_t* get_MetaData_3() const { return ___MetaData_3; }
	inline String_t** get_address_of_MetaData_3() { return &___MetaData_3; }
	inline void set_MetaData_3(String_t* value)
	{
		___MetaData_3 = value;
		Il2CppCodeGenWriteBarrier((&___MetaData_3), value);
	}

	inline static int32_t get_offset_of_TrackingRating_4() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TrackingRating_4)); }
	inline uint8_t get_TrackingRating_4() const { return ___TrackingRating_4; }
	inline uint8_t* get_address_of_TrackingRating_4() { return &___TrackingRating_4; }
	inline void set_TrackingRating_4(uint8_t value)
	{
		___TrackingRating_4 = value;
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_5() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TargetSearchResultPtr_5)); }
	inline intptr_t get_TargetSearchResultPtr_5() const { return ___TargetSearchResultPtr_5; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_5() { return &___TargetSearchResultPtr_5; }
	inline void set_TargetSearchResultPtr_5(intptr_t value)
	{
		___TargetSearchResultPtr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5_marshaled_pinvoke
{
	char* ___TargetName_0;
	char* ___UniqueTargetId_1;
	float ___TargetSize_2;
	char* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
// Native definition for COM marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5_marshaled_com
{
	Il2CppChar* ___TargetName_0;
	Il2CppChar* ___UniqueTargetId_1;
	float ___TargetSize_2;
	Il2CppChar* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
#endif // TARGETSEARCHRESULT_TC958489A5AB66221259FCDFD35F79CA426DAC6F5_H
#ifndef UPDATESTATE_T9780BF40F4F57951DF918E1522D9A863D587EF8A_H
#define UPDATESTATE_T9780BF40F4F57951DF918E1522D9A863D587EF8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/UpdateState
struct  UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A 
{
public:
	// System.Int32 Vuforia.TargetFinder/UpdateState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESTATE_T9780BF40F4F57951DF918E1522D9A863D587EF8A_H
#ifndef STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#define STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#ifndef MONOIOSTAT_T819C03DA1902AA493BDBF4B55E76DCE6FB16A124_H
#define MONOIOSTAT_T819C03DA1902AA493BDBF4B55E76DCE6FB16A124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
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
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIOSTAT_T819C03DA1902AA493BDBF4B55E76DCE6FB16A124_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef POINTEREVENTDATA_TC18994283B7753E430E316A62D9E45BA6D644C63_H
#define POINTEREVENTDATA_TC18994283B7753E430E316A62D9E45BA6D644C63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_TC18994283B7753E430E316A62D9E45BA6D644C63_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#define NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifndef VIDEOBUFFERING_T8303D793DF94AB903D689BC194D740A3C81D47DE_H
#define VIDEOBUFFERING_T8303D793DF94AB903D689BC194D740A3C81D47DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoBuffering
struct  VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBUFFERING_T8303D793DF94AB903D689BC194D740A3C81D47DE_H
#ifndef VIDEOBUFFERINGEND_T10A00F27D7AF9DF25150394673F1204057FF4DB0_H
#define VIDEOBUFFERINGEND_T10A00F27D7AF9DF25150394673F1204057FF4DB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoBufferingEnd
struct  VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBUFFERINGEND_T10A00F27D7AF9DF25150394673F1204057FF4DB0_H
#ifndef VIDEOEND_T0EDE4E168BD999C1F03BFB55E062B7792B027D84_H
#define VIDEOEND_T0EDE4E168BD999C1F03BFB55E062B7792B027D84_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoEnd
struct  VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOEND_T0EDE4E168BD999C1F03BFB55E062B7792B027D84_H
#ifndef VIDEOERROR_T7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_H
#define VIDEOERROR_T7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoError
struct  VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOERROR_T7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_H
#ifndef VIDEOFIRSTFRAMEREADY_TDF5ACF9BE987126454CCE81987C2D4A66907CF24_H
#define VIDEOFIRSTFRAMEREADY_TDF5ACF9BE987126454CCE81987C2D4A66907CF24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoFirstFrameReady
struct  VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFIRSTFRAMEREADY_TDF5ACF9BE987126454CCE81987C2D4A66907CF24_H
#ifndef VIDEOREADY_TCB9497E66D4F9AD566BA35692DEB94E852F37611_H
#define VIDEOREADY_TCB9497E66D4F9AD566BA35692DEB94E852F37611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoReady
struct  VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOREADY_TCB9497E66D4F9AD566BA35692DEB94E852F37611_H
#ifndef VIDEORESIZE_T4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_H
#define VIDEORESIZE_T4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl/VideoResize
struct  VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEORESIZE_T4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef FILESYSTEMINFO_T6831B76FBA37F7181E4A5AEB28194730EB356A3D_H
#define FILESYSTEMINFO_T6831B76FBA37F7181E4A5AEB28194730EB356A3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_3), value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_4), value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((&____displayPath_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T6831B76FBA37F7181E4A5AEB28194730EB356A3D_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef DIRECTORYINFO_T432CD06DF148701E930708371CB985BC0E8EF87F_H
#define DIRECTORYINFO_T432CD06DF148701E930708371CB985BC0E8EF87F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((&___current_6), value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((&___parent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T432CD06DF148701E930708371CB985BC0E8EF87F_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef MEDIAPLAYERCTRL_T43545F288C5255137BF431F1CB77EDCABF139BAF_H
#define MEDIAPLAYERCTRL_T43545F288C5255137BF431F1CB77EDCABF139BAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl
struct  MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// JsonManager MediaPlayerCtrl::jsonManager
	JsonManager_t0A6E75C6D0340575400DC4B4728D3EC074C76DAB * ___jsonManager_5;
	// System.String MediaPlayerCtrl::m_strFileName
	String_t* ___m_strFileName_6;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_TargetMaterial
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___m_TargetMaterial_7;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTexture_8;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummy
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureDummy_9;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureY
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureY_10;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureU
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureU_11;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureV
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureV_12;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyY
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureDummyY_13;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyU
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureDummyU_14;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummyV
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_VideoTextureDummyV_15;
	// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::m_CurrentState
	int32_t ___m_CurrentState_16;
	// System.Int32 MediaPlayerCtrl::m_iCurrentSeekPosition
	int32_t ___m_iCurrentSeekPosition_17;
	// System.Single MediaPlayerCtrl::m_fVolume
	float ___m_fVolume_18;
	// System.Int32 MediaPlayerCtrl::m_iWidth
	int32_t ___m_iWidth_19;
	// System.Int32 MediaPlayerCtrl::m_iHeight
	int32_t ___m_iHeight_20;
	// System.Single MediaPlayerCtrl::m_fSpeed
	float ___m_fSpeed_21;
	// System.Boolean MediaPlayerCtrl::m_bFullScreen
	bool ___m_bFullScreen_22;
	// System.Boolean MediaPlayerCtrl::m_bSupportRockchip
	bool ___m_bSupportRockchip_23;
	// System.Boolean MediaPlayerCtrl::m_bPC_FastMode
	bool ___m_bPC_FastMode_24;
	// MediaPlayerCtrl/VideoResize MediaPlayerCtrl::OnResize
	VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * ___OnResize_25;
	// MediaPlayerCtrl/VideoReady MediaPlayerCtrl::OnReady
	VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * ___OnReady_26;
	// MediaPlayerCtrl/VideoEnd MediaPlayerCtrl::OnEnd
	VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * ___OnEnd_27;
	// MediaPlayerCtrl/VideoError MediaPlayerCtrl::OnVideoError
	VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * ___OnVideoError_28;
	// MediaPlayerCtrl/VideoFirstFrameReady MediaPlayerCtrl::OnVideoFirstFrameReady
	VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * ___OnVideoFirstFrameReady_29;
	// MediaPlayerCtrl/VideoBuffering MediaPlayerCtrl::OnVideoBuffering
	VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * ___OnVideoBuffering_30;
	// MediaPlayerCtrl/VideoBuffering MediaPlayerCtrl::OnVideoBufferingEnd
	VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * ___OnVideoBufferingEnd_31;
	// System.IntPtr MediaPlayerCtrl::m_texPtr
	intptr_t ___m_texPtr_32;
	// System.IntPtr MediaPlayerCtrl::m_texPtrY
	intptr_t ___m_texPtrY_33;
	// System.IntPtr MediaPlayerCtrl::m_texPtrU
	intptr_t ___m_texPtrU_34;
	// System.IntPtr MediaPlayerCtrl::m_texPtrV
	intptr_t ___m_texPtrV_35;
	// UnityEngine.Shader MediaPlayerCtrl::m_shaderYUV
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___m_shaderYUV_36;
	// System.Int32 MediaPlayerCtrl::m_iPauseFrame
	int32_t ___m_iPauseFrame_37;
	// System.Boolean MediaPlayerCtrl::m_bBuffring
	bool ___m_bBuffring_38;
	// System.Int32 MediaPlayerCtrl::m_iAndroidMgrID
	int32_t ___m_iAndroidMgrID_39;
	// System.Boolean MediaPlayerCtrl::m_bIsFirstFrameReady
	bool ___m_bIsFirstFrameReady_40;
	// System.Boolean MediaPlayerCtrl::m_bFirst
	bool ___m_bFirst_41;
	// MediaPlayerCtrl/MEDIA_SCALE MediaPlayerCtrl::m_ScaleValue
	int32_t ___m_ScaleValue_42;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_objResize
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___m_objResize_43;
	// System.Boolean MediaPlayerCtrl::m_bLoop
	bool ___m_bLoop_44;
	// System.Boolean MediaPlayerCtrl::m_bAutoPlay
	bool ___m_bAutoPlay_45;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnResize
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnResize_46;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnReady
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnReady_47;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnEnd
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnEnd_48;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnVideoError
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnVideoError_49;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnVideoFirstFrameReady
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnVideoFirstFrameReady_50;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnVideoBuffering
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnVideoBuffering_51;
	// UnityEngine.Events.UnityEvent MediaPlayerCtrl::m_eventOnVideoBufferingEnd
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___m_eventOnVideoBufferingEnd_52;
	// System.Boolean MediaPlayerCtrl::m_bInit
	bool ___m_bInit_53;
	// System.Boolean MediaPlayerCtrl::m_bCheckFBO
	bool ___m_bCheckFBO_54;
	// System.Boolean MediaPlayerCtrl::m_bPause
	bool ___m_bPause_55;
	// System.Boolean MediaPlayerCtrl::m_bPlaying
	bool ___m_bPlaying_56;
	// System.Boolean MediaPlayerCtrl::m_bReadyPlay
	bool ___m_bReadyPlay_57;
	// System.Int32 MediaPlayerCtrl::m_iID
	int32_t ___m_iID_58;
	// UnityEngine.Texture2D MediaPlayerCtrl::_videoTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____videoTexture_59;
	// System.Boolean MediaPlayerCtrl::bFirstIOS
	bool ___bFirstIOS_60;

public:
	inline static int32_t get_offset_of_jsonManager_5() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___jsonManager_5)); }
	inline JsonManager_t0A6E75C6D0340575400DC4B4728D3EC074C76DAB * get_jsonManager_5() const { return ___jsonManager_5; }
	inline JsonManager_t0A6E75C6D0340575400DC4B4728D3EC074C76DAB ** get_address_of_jsonManager_5() { return &___jsonManager_5; }
	inline void set_jsonManager_5(JsonManager_t0A6E75C6D0340575400DC4B4728D3EC074C76DAB * value)
	{
		___jsonManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___jsonManager_5), value);
	}

	inline static int32_t get_offset_of_m_strFileName_6() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_strFileName_6)); }
	inline String_t* get_m_strFileName_6() const { return ___m_strFileName_6; }
	inline String_t** get_address_of_m_strFileName_6() { return &___m_strFileName_6; }
	inline void set_m_strFileName_6(String_t* value)
	{
		___m_strFileName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_strFileName_6), value);
	}

	inline static int32_t get_offset_of_m_TargetMaterial_7() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_TargetMaterial_7)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_m_TargetMaterial_7() const { return ___m_TargetMaterial_7; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_m_TargetMaterial_7() { return &___m_TargetMaterial_7; }
	inline void set_m_TargetMaterial_7(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___m_TargetMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetMaterial_7), value);
	}

	inline static int32_t get_offset_of_m_VideoTexture_8() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTexture_8)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTexture_8() const { return ___m_VideoTexture_8; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTexture_8() { return &___m_VideoTexture_8; }
	inline void set_m_VideoTexture_8(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTexture_8), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummy_9() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureDummy_9)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureDummy_9() const { return ___m_VideoTextureDummy_9; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureDummy_9() { return &___m_VideoTextureDummy_9; }
	inline void set_m_VideoTextureDummy_9(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureDummy_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureDummy_9), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureY_10() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureY_10)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureY_10() const { return ___m_VideoTextureY_10; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureY_10() { return &___m_VideoTextureY_10; }
	inline void set_m_VideoTextureY_10(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureY_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureY_10), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureU_11() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureU_11)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureU_11() const { return ___m_VideoTextureU_11; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureU_11() { return &___m_VideoTextureU_11; }
	inline void set_m_VideoTextureU_11(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureU_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureU_11), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureV_12() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureV_12)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureV_12() const { return ___m_VideoTextureV_12; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureV_12() { return &___m_VideoTextureV_12; }
	inline void set_m_VideoTextureV_12(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureV_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureV_12), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyY_13() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureDummyY_13)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureDummyY_13() const { return ___m_VideoTextureDummyY_13; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureDummyY_13() { return &___m_VideoTextureDummyY_13; }
	inline void set_m_VideoTextureDummyY_13(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureDummyY_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureDummyY_13), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyU_14() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureDummyU_14)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureDummyU_14() const { return ___m_VideoTextureDummyU_14; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureDummyU_14() { return &___m_VideoTextureDummyU_14; }
	inline void set_m_VideoTextureDummyU_14(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureDummyU_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureDummyU_14), value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummyV_15() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_VideoTextureDummyV_15)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_VideoTextureDummyV_15() const { return ___m_VideoTextureDummyV_15; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_VideoTextureDummyV_15() { return &___m_VideoTextureDummyV_15; }
	inline void set_m_VideoTextureDummyV_15(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_VideoTextureDummyV_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoTextureDummyV_15), value);
	}

	inline static int32_t get_offset_of_m_CurrentState_16() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_CurrentState_16)); }
	inline int32_t get_m_CurrentState_16() const { return ___m_CurrentState_16; }
	inline int32_t* get_address_of_m_CurrentState_16() { return &___m_CurrentState_16; }
	inline void set_m_CurrentState_16(int32_t value)
	{
		___m_CurrentState_16 = value;
	}

	inline static int32_t get_offset_of_m_iCurrentSeekPosition_17() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iCurrentSeekPosition_17)); }
	inline int32_t get_m_iCurrentSeekPosition_17() const { return ___m_iCurrentSeekPosition_17; }
	inline int32_t* get_address_of_m_iCurrentSeekPosition_17() { return &___m_iCurrentSeekPosition_17; }
	inline void set_m_iCurrentSeekPosition_17(int32_t value)
	{
		___m_iCurrentSeekPosition_17 = value;
	}

	inline static int32_t get_offset_of_m_fVolume_18() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_fVolume_18)); }
	inline float get_m_fVolume_18() const { return ___m_fVolume_18; }
	inline float* get_address_of_m_fVolume_18() { return &___m_fVolume_18; }
	inline void set_m_fVolume_18(float value)
	{
		___m_fVolume_18 = value;
	}

	inline static int32_t get_offset_of_m_iWidth_19() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iWidth_19)); }
	inline int32_t get_m_iWidth_19() const { return ___m_iWidth_19; }
	inline int32_t* get_address_of_m_iWidth_19() { return &___m_iWidth_19; }
	inline void set_m_iWidth_19(int32_t value)
	{
		___m_iWidth_19 = value;
	}

	inline static int32_t get_offset_of_m_iHeight_20() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iHeight_20)); }
	inline int32_t get_m_iHeight_20() const { return ___m_iHeight_20; }
	inline int32_t* get_address_of_m_iHeight_20() { return &___m_iHeight_20; }
	inline void set_m_iHeight_20(int32_t value)
	{
		___m_iHeight_20 = value;
	}

	inline static int32_t get_offset_of_m_fSpeed_21() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_fSpeed_21)); }
	inline float get_m_fSpeed_21() const { return ___m_fSpeed_21; }
	inline float* get_address_of_m_fSpeed_21() { return &___m_fSpeed_21; }
	inline void set_m_fSpeed_21(float value)
	{
		___m_fSpeed_21 = value;
	}

	inline static int32_t get_offset_of_m_bFullScreen_22() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bFullScreen_22)); }
	inline bool get_m_bFullScreen_22() const { return ___m_bFullScreen_22; }
	inline bool* get_address_of_m_bFullScreen_22() { return &___m_bFullScreen_22; }
	inline void set_m_bFullScreen_22(bool value)
	{
		___m_bFullScreen_22 = value;
	}

	inline static int32_t get_offset_of_m_bSupportRockchip_23() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bSupportRockchip_23)); }
	inline bool get_m_bSupportRockchip_23() const { return ___m_bSupportRockchip_23; }
	inline bool* get_address_of_m_bSupportRockchip_23() { return &___m_bSupportRockchip_23; }
	inline void set_m_bSupportRockchip_23(bool value)
	{
		___m_bSupportRockchip_23 = value;
	}

	inline static int32_t get_offset_of_m_bPC_FastMode_24() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bPC_FastMode_24)); }
	inline bool get_m_bPC_FastMode_24() const { return ___m_bPC_FastMode_24; }
	inline bool* get_address_of_m_bPC_FastMode_24() { return &___m_bPC_FastMode_24; }
	inline void set_m_bPC_FastMode_24(bool value)
	{
		___m_bPC_FastMode_24 = value;
	}

	inline static int32_t get_offset_of_OnResize_25() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnResize_25)); }
	inline VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * get_OnResize_25() const { return ___OnResize_25; }
	inline VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D ** get_address_of_OnResize_25() { return &___OnResize_25; }
	inline void set_OnResize_25(VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * value)
	{
		___OnResize_25 = value;
		Il2CppCodeGenWriteBarrier((&___OnResize_25), value);
	}

	inline static int32_t get_offset_of_OnReady_26() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnReady_26)); }
	inline VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * get_OnReady_26() const { return ___OnReady_26; }
	inline VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 ** get_address_of_OnReady_26() { return &___OnReady_26; }
	inline void set_OnReady_26(VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * value)
	{
		___OnReady_26 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_26), value);
	}

	inline static int32_t get_offset_of_OnEnd_27() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnEnd_27)); }
	inline VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * get_OnEnd_27() const { return ___OnEnd_27; }
	inline VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 ** get_address_of_OnEnd_27() { return &___OnEnd_27; }
	inline void set_OnEnd_27(VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * value)
	{
		___OnEnd_27 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnd_27), value);
	}

	inline static int32_t get_offset_of_OnVideoError_28() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnVideoError_28)); }
	inline VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * get_OnVideoError_28() const { return ___OnVideoError_28; }
	inline VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 ** get_address_of_OnVideoError_28() { return &___OnVideoError_28; }
	inline void set_OnVideoError_28(VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * value)
	{
		___OnVideoError_28 = value;
		Il2CppCodeGenWriteBarrier((&___OnVideoError_28), value);
	}

	inline static int32_t get_offset_of_OnVideoFirstFrameReady_29() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnVideoFirstFrameReady_29)); }
	inline VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * get_OnVideoFirstFrameReady_29() const { return ___OnVideoFirstFrameReady_29; }
	inline VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 ** get_address_of_OnVideoFirstFrameReady_29() { return &___OnVideoFirstFrameReady_29; }
	inline void set_OnVideoFirstFrameReady_29(VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * value)
	{
		___OnVideoFirstFrameReady_29 = value;
		Il2CppCodeGenWriteBarrier((&___OnVideoFirstFrameReady_29), value);
	}

	inline static int32_t get_offset_of_OnVideoBuffering_30() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnVideoBuffering_30)); }
	inline VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * get_OnVideoBuffering_30() const { return ___OnVideoBuffering_30; }
	inline VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE ** get_address_of_OnVideoBuffering_30() { return &___OnVideoBuffering_30; }
	inline void set_OnVideoBuffering_30(VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * value)
	{
		___OnVideoBuffering_30 = value;
		Il2CppCodeGenWriteBarrier((&___OnVideoBuffering_30), value);
	}

	inline static int32_t get_offset_of_OnVideoBufferingEnd_31() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___OnVideoBufferingEnd_31)); }
	inline VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * get_OnVideoBufferingEnd_31() const { return ___OnVideoBufferingEnd_31; }
	inline VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE ** get_address_of_OnVideoBufferingEnd_31() { return &___OnVideoBufferingEnd_31; }
	inline void set_OnVideoBufferingEnd_31(VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * value)
	{
		___OnVideoBufferingEnd_31 = value;
		Il2CppCodeGenWriteBarrier((&___OnVideoBufferingEnd_31), value);
	}

	inline static int32_t get_offset_of_m_texPtr_32() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_texPtr_32)); }
	inline intptr_t get_m_texPtr_32() const { return ___m_texPtr_32; }
	inline intptr_t* get_address_of_m_texPtr_32() { return &___m_texPtr_32; }
	inline void set_m_texPtr_32(intptr_t value)
	{
		___m_texPtr_32 = value;
	}

	inline static int32_t get_offset_of_m_texPtrY_33() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_texPtrY_33)); }
	inline intptr_t get_m_texPtrY_33() const { return ___m_texPtrY_33; }
	inline intptr_t* get_address_of_m_texPtrY_33() { return &___m_texPtrY_33; }
	inline void set_m_texPtrY_33(intptr_t value)
	{
		___m_texPtrY_33 = value;
	}

	inline static int32_t get_offset_of_m_texPtrU_34() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_texPtrU_34)); }
	inline intptr_t get_m_texPtrU_34() const { return ___m_texPtrU_34; }
	inline intptr_t* get_address_of_m_texPtrU_34() { return &___m_texPtrU_34; }
	inline void set_m_texPtrU_34(intptr_t value)
	{
		___m_texPtrU_34 = value;
	}

	inline static int32_t get_offset_of_m_texPtrV_35() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_texPtrV_35)); }
	inline intptr_t get_m_texPtrV_35() const { return ___m_texPtrV_35; }
	inline intptr_t* get_address_of_m_texPtrV_35() { return &___m_texPtrV_35; }
	inline void set_m_texPtrV_35(intptr_t value)
	{
		___m_texPtrV_35 = value;
	}

	inline static int32_t get_offset_of_m_shaderYUV_36() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_shaderYUV_36)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_m_shaderYUV_36() const { return ___m_shaderYUV_36; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_m_shaderYUV_36() { return &___m_shaderYUV_36; }
	inline void set_m_shaderYUV_36(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___m_shaderYUV_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_shaderYUV_36), value);
	}

	inline static int32_t get_offset_of_m_iPauseFrame_37() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iPauseFrame_37)); }
	inline int32_t get_m_iPauseFrame_37() const { return ___m_iPauseFrame_37; }
	inline int32_t* get_address_of_m_iPauseFrame_37() { return &___m_iPauseFrame_37; }
	inline void set_m_iPauseFrame_37(int32_t value)
	{
		___m_iPauseFrame_37 = value;
	}

	inline static int32_t get_offset_of_m_bBuffring_38() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bBuffring_38)); }
	inline bool get_m_bBuffring_38() const { return ___m_bBuffring_38; }
	inline bool* get_address_of_m_bBuffring_38() { return &___m_bBuffring_38; }
	inline void set_m_bBuffring_38(bool value)
	{
		___m_bBuffring_38 = value;
	}

	inline static int32_t get_offset_of_m_iAndroidMgrID_39() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iAndroidMgrID_39)); }
	inline int32_t get_m_iAndroidMgrID_39() const { return ___m_iAndroidMgrID_39; }
	inline int32_t* get_address_of_m_iAndroidMgrID_39() { return &___m_iAndroidMgrID_39; }
	inline void set_m_iAndroidMgrID_39(int32_t value)
	{
		___m_iAndroidMgrID_39 = value;
	}

	inline static int32_t get_offset_of_m_bIsFirstFrameReady_40() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bIsFirstFrameReady_40)); }
	inline bool get_m_bIsFirstFrameReady_40() const { return ___m_bIsFirstFrameReady_40; }
	inline bool* get_address_of_m_bIsFirstFrameReady_40() { return &___m_bIsFirstFrameReady_40; }
	inline void set_m_bIsFirstFrameReady_40(bool value)
	{
		___m_bIsFirstFrameReady_40 = value;
	}

	inline static int32_t get_offset_of_m_bFirst_41() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bFirst_41)); }
	inline bool get_m_bFirst_41() const { return ___m_bFirst_41; }
	inline bool* get_address_of_m_bFirst_41() { return &___m_bFirst_41; }
	inline void set_m_bFirst_41(bool value)
	{
		___m_bFirst_41 = value;
	}

	inline static int32_t get_offset_of_m_ScaleValue_42() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_ScaleValue_42)); }
	inline int32_t get_m_ScaleValue_42() const { return ___m_ScaleValue_42; }
	inline int32_t* get_address_of_m_ScaleValue_42() { return &___m_ScaleValue_42; }
	inline void set_m_ScaleValue_42(int32_t value)
	{
		___m_ScaleValue_42 = value;
	}

	inline static int32_t get_offset_of_m_objResize_43() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_objResize_43)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_m_objResize_43() const { return ___m_objResize_43; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_m_objResize_43() { return &___m_objResize_43; }
	inline void set_m_objResize_43(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___m_objResize_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_objResize_43), value);
	}

	inline static int32_t get_offset_of_m_bLoop_44() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bLoop_44)); }
	inline bool get_m_bLoop_44() const { return ___m_bLoop_44; }
	inline bool* get_address_of_m_bLoop_44() { return &___m_bLoop_44; }
	inline void set_m_bLoop_44(bool value)
	{
		___m_bLoop_44 = value;
	}

	inline static int32_t get_offset_of_m_bAutoPlay_45() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bAutoPlay_45)); }
	inline bool get_m_bAutoPlay_45() const { return ___m_bAutoPlay_45; }
	inline bool* get_address_of_m_bAutoPlay_45() { return &___m_bAutoPlay_45; }
	inline void set_m_bAutoPlay_45(bool value)
	{
		___m_bAutoPlay_45 = value;
	}

	inline static int32_t get_offset_of_m_eventOnResize_46() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnResize_46)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnResize_46() const { return ___m_eventOnResize_46; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnResize_46() { return &___m_eventOnResize_46; }
	inline void set_m_eventOnResize_46(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnResize_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnResize_46), value);
	}

	inline static int32_t get_offset_of_m_eventOnReady_47() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnReady_47)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnReady_47() const { return ___m_eventOnReady_47; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnReady_47() { return &___m_eventOnReady_47; }
	inline void set_m_eventOnReady_47(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnReady_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnReady_47), value);
	}

	inline static int32_t get_offset_of_m_eventOnEnd_48() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnEnd_48)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnEnd_48() const { return ___m_eventOnEnd_48; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnEnd_48() { return &___m_eventOnEnd_48; }
	inline void set_m_eventOnEnd_48(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnEnd_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnEnd_48), value);
	}

	inline static int32_t get_offset_of_m_eventOnVideoError_49() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnVideoError_49)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnVideoError_49() const { return ___m_eventOnVideoError_49; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnVideoError_49() { return &___m_eventOnVideoError_49; }
	inline void set_m_eventOnVideoError_49(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnVideoError_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnVideoError_49), value);
	}

	inline static int32_t get_offset_of_m_eventOnVideoFirstFrameReady_50() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnVideoFirstFrameReady_50)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnVideoFirstFrameReady_50() const { return ___m_eventOnVideoFirstFrameReady_50; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnVideoFirstFrameReady_50() { return &___m_eventOnVideoFirstFrameReady_50; }
	inline void set_m_eventOnVideoFirstFrameReady_50(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnVideoFirstFrameReady_50 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnVideoFirstFrameReady_50), value);
	}

	inline static int32_t get_offset_of_m_eventOnVideoBuffering_51() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnVideoBuffering_51)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnVideoBuffering_51() const { return ___m_eventOnVideoBuffering_51; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnVideoBuffering_51() { return &___m_eventOnVideoBuffering_51; }
	inline void set_m_eventOnVideoBuffering_51(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnVideoBuffering_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnVideoBuffering_51), value);
	}

	inline static int32_t get_offset_of_m_eventOnVideoBufferingEnd_52() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_eventOnVideoBufferingEnd_52)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_m_eventOnVideoBufferingEnd_52() const { return ___m_eventOnVideoBufferingEnd_52; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_m_eventOnVideoBufferingEnd_52() { return &___m_eventOnVideoBufferingEnd_52; }
	inline void set_m_eventOnVideoBufferingEnd_52(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___m_eventOnVideoBufferingEnd_52 = value;
		Il2CppCodeGenWriteBarrier((&___m_eventOnVideoBufferingEnd_52), value);
	}

	inline static int32_t get_offset_of_m_bInit_53() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bInit_53)); }
	inline bool get_m_bInit_53() const { return ___m_bInit_53; }
	inline bool* get_address_of_m_bInit_53() { return &___m_bInit_53; }
	inline void set_m_bInit_53(bool value)
	{
		___m_bInit_53 = value;
	}

	inline static int32_t get_offset_of_m_bCheckFBO_54() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bCheckFBO_54)); }
	inline bool get_m_bCheckFBO_54() const { return ___m_bCheckFBO_54; }
	inline bool* get_address_of_m_bCheckFBO_54() { return &___m_bCheckFBO_54; }
	inline void set_m_bCheckFBO_54(bool value)
	{
		___m_bCheckFBO_54 = value;
	}

	inline static int32_t get_offset_of_m_bPause_55() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bPause_55)); }
	inline bool get_m_bPause_55() const { return ___m_bPause_55; }
	inline bool* get_address_of_m_bPause_55() { return &___m_bPause_55; }
	inline void set_m_bPause_55(bool value)
	{
		___m_bPause_55 = value;
	}

	inline static int32_t get_offset_of_m_bPlaying_56() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bPlaying_56)); }
	inline bool get_m_bPlaying_56() const { return ___m_bPlaying_56; }
	inline bool* get_address_of_m_bPlaying_56() { return &___m_bPlaying_56; }
	inline void set_m_bPlaying_56(bool value)
	{
		___m_bPlaying_56 = value;
	}

	inline static int32_t get_offset_of_m_bReadyPlay_57() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_bReadyPlay_57)); }
	inline bool get_m_bReadyPlay_57() const { return ___m_bReadyPlay_57; }
	inline bool* get_address_of_m_bReadyPlay_57() { return &___m_bReadyPlay_57; }
	inline void set_m_bReadyPlay_57(bool value)
	{
		___m_bReadyPlay_57 = value;
	}

	inline static int32_t get_offset_of_m_iID_58() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___m_iID_58)); }
	inline int32_t get_m_iID_58() const { return ___m_iID_58; }
	inline int32_t* get_address_of_m_iID_58() { return &___m_iID_58; }
	inline void set_m_iID_58(int32_t value)
	{
		___m_iID_58 = value;
	}

	inline static int32_t get_offset_of__videoTexture_59() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ____videoTexture_59)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__videoTexture_59() const { return ____videoTexture_59; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__videoTexture_59() { return &____videoTexture_59; }
	inline void set__videoTexture_59(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____videoTexture_59 = value;
		Il2CppCodeGenWriteBarrier((&____videoTexture_59), value);
	}

	inline static int32_t get_offset_of_bFirstIOS_60() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF, ___bFirstIOS_60)); }
	inline bool get_bFirstIOS_60() const { return ___bFirstIOS_60; }
	inline bool* get_address_of_bFirstIOS_60() { return &___bFirstIOS_60; }
	inline void set_bFirstIOS_60(bool value)
	{
		___bFirstIOS_60 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPLAYERCTRL_T43545F288C5255137BF431F1CB77EDCABF139BAF_H
#ifndef MEDIAPLAYEREVENT_T37A86764C87004FA7248C077232AB859BFD7F17D_H
#define MEDIAPLAYEREVENT_T37A86764C87004FA7248C077232AB859BFD7F17D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerEvent
struct  MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// MediaPlayerCtrl MediaPlayerEvent::m_srcVideo
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * ___m_srcVideo_4;

public:
	inline static int32_t get_offset_of_m_srcVideo_4() { return static_cast<int32_t>(offsetof(MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D, ___m_srcVideo_4)); }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * get_m_srcVideo_4() const { return ___m_srcVideo_4; }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF ** get_address_of_m_srcVideo_4() { return &___m_srcVideo_4; }
	inline void set_m_srcVideo_4(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * value)
	{
		___m_srcVideo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_srcVideo_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPLAYEREVENT_T37A86764C87004FA7248C077232AB859BFD7F17D_H
#ifndef MEDIAPLAYERFULLSCREENCTRL_TA1275420138A617CA41B33F2760A8ACB6FB19969_H
#define MEDIAPLAYERFULLSCREENCTRL_TA1275420138A617CA41B33F2760A8ACB6FB19969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerFullScreenCtrl
struct  MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MediaPlayerFullScreenCtrl::m_objVideo
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_objVideo_4;
	// System.Int32 MediaPlayerFullScreenCtrl::m_iOrgWidth
	int32_t ___m_iOrgWidth_5;
	// System.Int32 MediaPlayerFullScreenCtrl::m_iOrgHeight
	int32_t ___m_iOrgHeight_6;

public:
	inline static int32_t get_offset_of_m_objVideo_4() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969, ___m_objVideo_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_objVideo_4() const { return ___m_objVideo_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_objVideo_4() { return &___m_objVideo_4; }
	inline void set_m_objVideo_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_objVideo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_objVideo_4), value);
	}

	inline static int32_t get_offset_of_m_iOrgWidth_5() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969, ___m_iOrgWidth_5)); }
	inline int32_t get_m_iOrgWidth_5() const { return ___m_iOrgWidth_5; }
	inline int32_t* get_address_of_m_iOrgWidth_5() { return &___m_iOrgWidth_5; }
	inline void set_m_iOrgWidth_5(int32_t value)
	{
		___m_iOrgWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_iOrgHeight_6() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969, ___m_iOrgHeight_6)); }
	inline int32_t get_m_iOrgHeight_6() const { return ___m_iOrgHeight_6; }
	inline int32_t* get_address_of_m_iOrgHeight_6() { return &___m_iOrgHeight_6; }
	inline void set_m_iOrgHeight_6(int32_t value)
	{
		___m_iOrgHeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPLAYERFULLSCREENCTRL_TA1275420138A617CA41B33F2760A8ACB6FB19969_H
#ifndef SEEKBARCTRL_T6D4161C7E89B9A48E51057A977B5D1A187559E48_H
#define SEEKBARCTRL_T6D4161C7E89B9A48E51057A977B5D1A187559E48_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SeekBarCtrl
struct  SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// MediaPlayerCtrl SeekBarCtrl::m_srcVideo
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * ___m_srcVideo_4;
	// UnityEngine.UI.Slider SeekBarCtrl::m_srcSlider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___m_srcSlider_5;
	// System.Single SeekBarCtrl::m_fDragTime
	float ___m_fDragTime_6;
	// System.Boolean SeekBarCtrl::m_bActiveDrag
	bool ___m_bActiveDrag_7;
	// System.Boolean SeekBarCtrl::m_bUpdate
	bool ___m_bUpdate_8;
	// System.Single SeekBarCtrl::m_fDeltaTime
	float ___m_fDeltaTime_9;
	// System.Single SeekBarCtrl::m_fLastValue
	float ___m_fLastValue_10;
	// System.Single SeekBarCtrl::m_fLastSetValue
	float ___m_fLastSetValue_11;

public:
	inline static int32_t get_offset_of_m_srcVideo_4() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_srcVideo_4)); }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * get_m_srcVideo_4() const { return ___m_srcVideo_4; }
	inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF ** get_address_of_m_srcVideo_4() { return &___m_srcVideo_4; }
	inline void set_m_srcVideo_4(MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * value)
	{
		___m_srcVideo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_srcVideo_4), value);
	}

	inline static int32_t get_offset_of_m_srcSlider_5() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_srcSlider_5)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_m_srcSlider_5() const { return ___m_srcSlider_5; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_m_srcSlider_5() { return &___m_srcSlider_5; }
	inline void set_m_srcSlider_5(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___m_srcSlider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_srcSlider_5), value);
	}

	inline static int32_t get_offset_of_m_fDragTime_6() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_fDragTime_6)); }
	inline float get_m_fDragTime_6() const { return ___m_fDragTime_6; }
	inline float* get_address_of_m_fDragTime_6() { return &___m_fDragTime_6; }
	inline void set_m_fDragTime_6(float value)
	{
		___m_fDragTime_6 = value;
	}

	inline static int32_t get_offset_of_m_bActiveDrag_7() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_bActiveDrag_7)); }
	inline bool get_m_bActiveDrag_7() const { return ___m_bActiveDrag_7; }
	inline bool* get_address_of_m_bActiveDrag_7() { return &___m_bActiveDrag_7; }
	inline void set_m_bActiveDrag_7(bool value)
	{
		___m_bActiveDrag_7 = value;
	}

	inline static int32_t get_offset_of_m_bUpdate_8() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_bUpdate_8)); }
	inline bool get_m_bUpdate_8() const { return ___m_bUpdate_8; }
	inline bool* get_address_of_m_bUpdate_8() { return &___m_bUpdate_8; }
	inline void set_m_bUpdate_8(bool value)
	{
		___m_bUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_fDeltaTime_9() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_fDeltaTime_9)); }
	inline float get_m_fDeltaTime_9() const { return ___m_fDeltaTime_9; }
	inline float* get_address_of_m_fDeltaTime_9() { return &___m_fDeltaTime_9; }
	inline void set_m_fDeltaTime_9(float value)
	{
		___m_fDeltaTime_9 = value;
	}

	inline static int32_t get_offset_of_m_fLastValue_10() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_fLastValue_10)); }
	inline float get_m_fLastValue_10() const { return ___m_fLastValue_10; }
	inline float* get_address_of_m_fLastValue_10() { return &___m_fLastValue_10; }
	inline void set_m_fLastValue_10(float value)
	{
		___m_fLastValue_10 = value;
	}

	inline static int32_t get_offset_of_m_fLastSetValue_11() { return static_cast<int32_t>(offsetof(SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48, ___m_fLastSetValue_11)); }
	inline float get_m_fLastSetValue_11() const { return ___m_fLastSetValue_11; }
	inline float* get_address_of_m_fLastSetValue_11() { return &___m_fLastSetValue_11; }
	inline void set_m_fLastSetValue_11(float value)
	{
		___m_fLastSetValue_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKBARCTRL_T6D4161C7E89B9A48E51057A977B5D1A187559E48_H
#ifndef SIMPLECLOUDHANDLER_T7C0475230667C8D5217EB575E1430173C6CC7DCB_H
#define SIMPLECLOUDHANDLER_T7C0475230667C8D5217EB575E1430173C6CC7DCB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCloudHandler
struct  SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Vuforia.ImageTargetBehaviour SimpleCloudHandler::ImageTargetTemplate
	ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540 * ___ImageTargetTemplate_5;
	// Vuforia.CloudRecoBehaviour SimpleCloudHandler::mcloudRecoBehaviour
	CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * ___mcloudRecoBehaviour_6;
	// UnityEngine.GameObject SimpleCloudHandler::assetBundleGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___assetBundleGameObject_7;
	// UnityEngine.AssetBundle SimpleCloudHandler::myLoadAssetBundle
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * ___myLoadAssetBundle_8;
	// System.Boolean SimpleCloudHandler::mIsScanning
	bool ___mIsScanning_9;
	// System.Boolean SimpleCloudHandler::stopAssetBundleoCoroutine
	bool ___stopAssetBundleoCoroutine_10;

public:
	inline static int32_t get_offset_of_ImageTargetTemplate_5() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___ImageTargetTemplate_5)); }
	inline ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540 * get_ImageTargetTemplate_5() const { return ___ImageTargetTemplate_5; }
	inline ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540 ** get_address_of_ImageTargetTemplate_5() { return &___ImageTargetTemplate_5; }
	inline void set_ImageTargetTemplate_5(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540 * value)
	{
		___ImageTargetTemplate_5 = value;
		Il2CppCodeGenWriteBarrier((&___ImageTargetTemplate_5), value);
	}

	inline static int32_t get_offset_of_mcloudRecoBehaviour_6() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___mcloudRecoBehaviour_6)); }
	inline CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * get_mcloudRecoBehaviour_6() const { return ___mcloudRecoBehaviour_6; }
	inline CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 ** get_address_of_mcloudRecoBehaviour_6() { return &___mcloudRecoBehaviour_6; }
	inline void set_mcloudRecoBehaviour_6(CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * value)
	{
		___mcloudRecoBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier((&___mcloudRecoBehaviour_6), value);
	}

	inline static int32_t get_offset_of_assetBundleGameObject_7() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___assetBundleGameObject_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_assetBundleGameObject_7() const { return ___assetBundleGameObject_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_assetBundleGameObject_7() { return &___assetBundleGameObject_7; }
	inline void set_assetBundleGameObject_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___assetBundleGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___assetBundleGameObject_7), value);
	}

	inline static int32_t get_offset_of_myLoadAssetBundle_8() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___myLoadAssetBundle_8)); }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * get_myLoadAssetBundle_8() const { return ___myLoadAssetBundle_8; }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 ** get_address_of_myLoadAssetBundle_8() { return &___myLoadAssetBundle_8; }
	inline void set_myLoadAssetBundle_8(AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * value)
	{
		___myLoadAssetBundle_8 = value;
		Il2CppCodeGenWriteBarrier((&___myLoadAssetBundle_8), value);
	}

	inline static int32_t get_offset_of_mIsScanning_9() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___mIsScanning_9)); }
	inline bool get_mIsScanning_9() const { return ___mIsScanning_9; }
	inline bool* get_address_of_mIsScanning_9() { return &___mIsScanning_9; }
	inline void set_mIsScanning_9(bool value)
	{
		___mIsScanning_9 = value;
	}

	inline static int32_t get_offset_of_stopAssetBundleoCoroutine_10() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB, ___stopAssetBundleoCoroutine_10)); }
	inline bool get_stopAssetBundleoCoroutine_10() const { return ___stopAssetBundleoCoroutine_10; }
	inline bool* get_address_of_stopAssetBundleoCoroutine_10() { return &___stopAssetBundleoCoroutine_10; }
	inline void set_stopAssetBundleoCoroutine_10(bool value)
	{
		___stopAssetBundleoCoroutine_10 = value;
	}
};

struct SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB_StaticFields
{
public:
	// System.String SimpleCloudHandler::metaData
	String_t* ___metaData_4;

public:
	inline static int32_t get_offset_of_metaData_4() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB_StaticFields, ___metaData_4)); }
	inline String_t* get_metaData_4() const { return ___metaData_4; }
	inline String_t** get_address_of_metaData_4() { return &___metaData_4; }
	inline void set_metaData_4(String_t* value)
	{
		___metaData_4 = value;
		Il2CppCodeGenWriteBarrier((&___metaData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECLOUDHANDLER_T7C0475230667C8D5217EB575E1430173C6CC7DCB_H
#ifndef SPHEREMIRROR_T58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F_H
#define SPHEREMIRROR_T58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SphereMirror
struct  SphereMirror_t58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHEREMIRROR_T58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#define VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#ifndef SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#define SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_5)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_7)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_8)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_11)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_17)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_List_4)); }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifndef OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
#define OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * ___mHandlers_10;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mObjectTracker_4)); }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_4), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinder_5)); }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_5), value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mHandlers_10)); }
	inline List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_10), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinderStartedBeforeDisable_11)); }
	inline bool get_mTargetFinderStartedBeforeDisable_11() const { return ___mTargetFinderStartedBeforeDisable_11; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_11() { return &___mTargetFinderStartedBeforeDisable_11; }
	inline void set_mTargetFinderStartedBeforeDisable_11(bool value)
	{
		___mTargetFinderStartedBeforeDisable_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
#ifndef TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
#define TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreviousScale_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableEventHandlers_11)); }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
#ifndef SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#define SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_18;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_19;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_20;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_21;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_22;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_23;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_24;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_25;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_30;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_31;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_32;

public:
	inline static int32_t get_offset_of_m_FillRect_18() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_18)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_18() const { return ___m_FillRect_18; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_18() { return &___m_FillRect_18; }
	inline void set_m_FillRect_18(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_18), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_19() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_19)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_19() const { return ___m_HandleRect_19; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_19() { return &___m_HandleRect_19; }
	inline void set_m_HandleRect_19(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_19), value);
	}

	inline static int32_t get_offset_of_m_Direction_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_20)); }
	inline int32_t get_m_Direction_20() const { return ___m_Direction_20; }
	inline int32_t* get_address_of_m_Direction_20() { return &___m_Direction_20; }
	inline void set_m_Direction_20(int32_t value)
	{
		___m_Direction_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_21)); }
	inline float get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline float* get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(float value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_22)); }
	inline float get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline float* get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(float value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_23)); }
	inline bool get_m_WholeNumbers_23() const { return ___m_WholeNumbers_23; }
	inline bool* get_address_of_m_WholeNumbers_23() { return &___m_WholeNumbers_23; }
	inline void set_m_WholeNumbers_23(bool value)
	{
		___m_WholeNumbers_23 = value;
	}

	inline static int32_t get_offset_of_m_Value_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_24)); }
	inline float get_m_Value_24() const { return ___m_Value_24; }
	inline float* get_address_of_m_Value_24() { return &___m_Value_24; }
	inline void set_m_Value_24(float value)
	{
		___m_Value_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_25)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_FillImage_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_26)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_26() const { return ___m_FillImage_26; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_26() { return &___m_FillImage_26; }
	inline void set_m_FillImage_26(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_26), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_27)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_27() const { return ___m_FillTransform_27; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_27() { return &___m_FillTransform_27; }
	inline void set_m_FillTransform_27(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_27), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_28)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_28() const { return ___m_FillContainerRect_28; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_28() { return &___m_FillContainerRect_28; }
	inline void set_m_FillContainerRect_28(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_29() const { return ___m_HandleTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_29() { return &___m_HandleTransform_29; }
	inline void set_m_HandleTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_29), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_30() const { return ___m_HandleContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_30() { return &___m_HandleContainerRect_30; }
	inline void set_m_HandleContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_30), value);
	}

	inline static int32_t get_offset_of_m_Offset_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_31)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_31() const { return ___m_Offset_31; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_31() { return &___m_Offset_31; }
	inline void set_m_Offset_31(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_31 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_32)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_32() const { return ___m_Tracker_32; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_32() { return &___m_Tracker_32; }
	inline void set_m_Tracker_32(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#ifndef CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#define CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CloudRecoBehaviour
struct  CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870  : public ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D
{
public:
	// System.String Vuforia.CloudRecoBehaviour::AccessKey
	String_t* ___AccessKey_12;
	// System.String Vuforia.CloudRecoBehaviour::SecretKey
	String_t* ___SecretKey_13;

public:
	inline static int32_t get_offset_of_AccessKey_12() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870, ___AccessKey_12)); }
	inline String_t* get_AccessKey_12() const { return ___AccessKey_12; }
	inline String_t** get_address_of_AccessKey_12() { return &___AccessKey_12; }
	inline void set_AccessKey_12(String_t* value)
	{
		___AccessKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___AccessKey_12), value);
	}

	inline static int32_t get_offset_of_SecretKey_13() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870, ___SecretKey_13)); }
	inline String_t* get_SecretKey_13() const { return ___SecretKey_13; }
	inline String_t** get_address_of_SecretKey_13() { return &___SecretKey_13; }
	inline void set_SecretKey_13(String_t* value)
	{
		___SecretKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKey_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#define DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706  : public TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706, ___mDataSetPath_12)); }
	inline String_t* get_mDataSetPath_12() const { return ___mDataSetPath_12; }
	inline String_t** get_address_of_mDataSetPath_12() { return &___mDataSetPath_12; }
	inline void set_mDataSetPath_12(String_t* value)
	{
		___mDataSetPath_12 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#ifndef IMAGETARGETBEHAVIOUR_T2014110FECB3CAB6142743A36CA3F50A91E97540_H
#define IMAGETARGETBEHAVIOUR_T2014110FECB3CAB6142743A36CA3F50A91E97540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBehaviour
struct  ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540  : public DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706
{
public:
	// System.Single Vuforia.ImageTargetBehaviour::mAspectRatio
	float ___mAspectRatio_13;
	// Vuforia.ImageTargetType Vuforia.ImageTargetBehaviour::mImageTargetType
	int32_t ___mImageTargetType_14;
	// System.Single Vuforia.ImageTargetBehaviour::mWidth
	float ___mWidth_15;
	// System.Single Vuforia.ImageTargetBehaviour::mHeight
	float ___mHeight_16;
	// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::mImageTarget
	RuntimeObject* ___mImageTarget_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour> Vuforia.ImageTargetBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t49D49E0D72539C160B6F736C64DBC729238B3481 * ___mVirtualButtonBehaviours_18;
	// System.Single Vuforia.ImageTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_19;
	// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::mLastSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mLastSize_20;

public:
	inline static int32_t get_offset_of_mAspectRatio_13() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mAspectRatio_13)); }
	inline float get_mAspectRatio_13() const { return ___mAspectRatio_13; }
	inline float* get_address_of_mAspectRatio_13() { return &___mAspectRatio_13; }
	inline void set_mAspectRatio_13(float value)
	{
		___mAspectRatio_13 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_14() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mImageTargetType_14)); }
	inline int32_t get_mImageTargetType_14() const { return ___mImageTargetType_14; }
	inline int32_t* get_address_of_mImageTargetType_14() { return &___mImageTargetType_14; }
	inline void set_mImageTargetType_14(int32_t value)
	{
		___mImageTargetType_14 = value;
	}

	inline static int32_t get_offset_of_mWidth_15() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mWidth_15)); }
	inline float get_mWidth_15() const { return ___mWidth_15; }
	inline float* get_address_of_mWidth_15() { return &___mWidth_15; }
	inline void set_mWidth_15(float value)
	{
		___mWidth_15 = value;
	}

	inline static int32_t get_offset_of_mHeight_16() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mHeight_16)); }
	inline float get_mHeight_16() const { return ___mHeight_16; }
	inline float* get_address_of_mHeight_16() { return &___mHeight_16; }
	inline void set_mHeight_16(float value)
	{
		___mHeight_16 = value;
	}

	inline static int32_t get_offset_of_mImageTarget_17() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mImageTarget_17)); }
	inline RuntimeObject* get_mImageTarget_17() const { return ___mImageTarget_17; }
	inline RuntimeObject** get_address_of_mImageTarget_17() { return &___mImageTarget_17; }
	inline void set_mImageTarget_17(RuntimeObject* value)
	{
		___mImageTarget_17 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTarget_17), value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_18() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mVirtualButtonBehaviours_18)); }
	inline Dictionary_2_t49D49E0D72539C160B6F736C64DBC729238B3481 * get_mVirtualButtonBehaviours_18() const { return ___mVirtualButtonBehaviours_18; }
	inline Dictionary_2_t49D49E0D72539C160B6F736C64DBC729238B3481 ** get_address_of_mVirtualButtonBehaviours_18() { return &___mVirtualButtonBehaviours_18; }
	inline void set_mVirtualButtonBehaviours_18(Dictionary_2_t49D49E0D72539C160B6F736C64DBC729238B3481 * value)
	{
		___mVirtualButtonBehaviours_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButtonBehaviours_18), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_19() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mLastTransformScale_19)); }
	inline float get_mLastTransformScale_19() const { return ___mLastTransformScale_19; }
	inline float* get_address_of_mLastTransformScale_19() { return &___mLastTransformScale_19; }
	inline void set_mLastTransformScale_19(float value)
	{
		___mLastTransformScale_19 = value;
	}

	inline static int32_t get_offset_of_mLastSize_20() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540, ___mLastSize_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_mLastSize_20() const { return ___mLastSize_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_mLastSize_20() { return &___mLastSize_20; }
	inline void set_mLastSize_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___mLastSize_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETBEHAVIOUR_T2014110FECB3CAB6142743A36CA3F50A91E97540_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F (const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WWW__ctor_m855BBB40089401B7BE6DE7A19FAD81EB070A2196 (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WWW_get_bytes_m9C9B2E62AC6733A39EDBF61E5C751438EC41126C (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594 (String_t* p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B (MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * __this, String_t* ___strFileName0, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66 (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_mC924D20DC71F85A7106D9DD09BF41497C6816E20 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84 (String_t* p0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * Resources_UnloadUnusedAssets_m04EC5EA06A8F7F26ED95BD704E1DDF62BBAB7043 (const RuntimeMethod* method);
// System.Void MediaPlayerCtrl/VideoReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoReady__ctor_mFA34A38D6EA109FB46CFCC45ED07A7604FEA8F12 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl/VideoFirstFrameReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFirstFrameReady__ctor_m05EC64D7AFAAFEDE8F5784CEFFF8D51D5AD04D50 (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl/VideoError::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoError__ctor_m09BADAE75C4D92ED7210FAB1DAF7AD85E2291F14 (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl/VideoEnd::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoEnd__ctor_m0AF248CFE7FFD91516D07A0744540CEA77BF3099 (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl/VideoResize::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoResize__ctor_m674574F126810A761F62E263BDFE71026CC70EDC (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void MediaPlayerFullScreenCtrl::Resize()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178 (MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MediaPlayerCtrl>()
inline MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * Component_GetComponent_TisMediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF_m14B8EF23834F6C45DFB3556593191D3FAC86D8C3 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void MediaPlayerCtrl::Resize()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerCtrl_Resize_m2E31A8ED5D202A1CEBF45E19820BD3A467CA61BD (MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Single MediaPlayerCtrl::GetSeekBarValue()
extern "C" IL2CPP_METHOD_ATTR float MediaPlayerCtrl_GetSeekBarValue_m8B15ADE09BE898F34CD0B0EDDC60F55C14507872 (MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * __this, const RuntimeMethod* method);
// System.Void MediaPlayerCtrl::SetSeekBarValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerCtrl_SetSeekBarValue_m5DCDED5373E8224CD04B79505CC2910DA1AAF30F (MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * __this, float ___fValue0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.CloudRecoBehaviour>()
inline CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * Component_GetComponent_TisCloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870_m375F4556736B4DECAA86FA3022D4EC898BBDAA1B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Vuforia.ObjectRecoBehaviour::RegisterEventHandler(Vuforia.ICloudRecoEventHandler)
extern "C" IL2CPP_METHOD_ATTR void ObjectRecoBehaviour_RegisterEventHandler_mDE7686AC9A86D4E843E4C65543006AF4599077A9 (ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.IEnumerator SimpleCloudHandler::LoadAssetBundles()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleCloudHandler_LoadAssetBundles_m6EBB988422D81AFF8B26B61F09658A4055EF9096 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void SimpleCloudHandler/<LoadAssetBundles>d__9::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAssetBundlesU3Ed__9__ctor_m48D0B32CAFCD38504D9CDF7E3AB817265C74B25D (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m43607A127E7B2C17B3B26173C821A0BF2944D3D0 (const RuntimeMethod* method);
// Vuforia.TargetFinder Vuforia.ObjectTracker::get_TargetFinder()
extern "C" IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_get_TargetFinder_m33CCEF27D285321799959BA10007FFB2B3D2D8CC (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method);
// System.Void Vuforia.TargetFinder::ClearTrackables(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TargetFinder_ClearTrackables_m78EBEBC8F105C0AAE7A8C512221970E7565DE734 (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour Vuforia.TargetFinder::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * TargetFinder_EnableTracking_m68B520DCBE39156A36CF8E726FF1D62F978160E9 (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  p0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p1, const RuntimeMethod* method);
// System.Void Vuforia.CloudRecoBehaviour::set_CloudRecoEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CloudRecoBehaviour_set_CloudRecoEnabled_mCFA533AAB93B200516E007332CDFA9CAB8C758E7 (CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_get_uv_m0EBA5CA4644C9D5F1B2125AF3FE3873EFC8A4616 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CCopyStreamingAssetVideoAndLoadU3Ed__165__ctor_mF79D55F54FC6583B01A73CE37EE7B0DE12D4FE3D (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_IDisposable_Dispose_m21B16F79CB96AB8105A6ACA0F55AA18E45961B43 (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCopyStreamingAssetVideoAndLoadU3Ed__165_MoveNext_m946F601E70F8DEA14DE2B68D4DA3024D84B71A50 (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_MoveNext_m946F601E70F8DEA14DE2B68D4DA3024D84B71A50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a7;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		String_t* L_4 = __this->get_strURL_2();
		NullCheck(L_4);
		String_t* L_5 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_4, /*hidden argument*/NULL);
		__this->set_strURL_2(L_5);
		String_t* L_6 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_7 = __this->get_strURL_2();
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_7, /*hidden argument*/NULL);
		__this->set_U3Cwrite_pathU3E5__2_4(L_8);
		String_t* L_9 = __this->get_U3Cwrite_pathU3E5__2_4();
		bool L_10 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0124;
		}
	}
	{
		String_t* L_11 = __this->get_strURL_2();
		String_t* L_12 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1CC84AF15081FF8838A229A93535886CA0FB6140, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		String_t* L_13 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		String_t* L_14 = __this->get_strURL_2();
		String_t* L_15 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_13, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_14, /*hidden argument*/NULL);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_16 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_m855BBB40089401B7BE6DE7A19FAD81EB070A2196(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_5(L_16);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_17 = __this->get_U3CwwwU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a7:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_18 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_18);
		String_t* L_19 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_18, /*hidden argument*/NULL);
		bool L_20 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00f9;
		}
	}
	{
		String_t* L_21 = __this->get_U3Cwrite_pathU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_21, /*hidden argument*/NULL);
		String_t* L_22 = __this->get_U3Cwrite_pathU3E5__2_4();
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_23 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = WWW_get_bytes_m9C9B2E62AC6733A39EDBF61E5C751438EC41126C(L_23, /*hidden argument*/NULL);
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_22, L_24, /*hidden argument*/NULL);
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_25 = V_1;
		String_t* L_26 = __this->get_U3Cwrite_pathU3E5__2_4();
		String_t* L_27 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B(L_25, L_27, /*hidden argument*/NULL);
		goto IL_0109;
	}

IL_00f9:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_28 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_28);
		String_t* L_29 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_29, /*hidden argument*/NULL);
	}

IL_0109:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_30 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_30);
		WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66(L_30, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_5((WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)NULL);
		__this->set_U3CwwwU3E5__3_5((WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)NULL);
		goto IL_013a;
	}

IL_0124:
	{
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_31 = V_1;
		String_t* L_32 = __this->get_U3Cwrite_pathU3E5__2_4();
		String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B(L_31, L_33, /*hidden argument*/NULL);
	}

IL_013a:
	{
		return (bool)0;
	}
}
// System.Object MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6CD6DD33051F71B89BE248FDA4A5BD5730E8F9C0 (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_Reset_mE40C44F7B538FD07773BBC905AEEA0F001804481 (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_Reset_mE40C44F7B538FD07773BBC905AEEA0F001804481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_Reset_mE40C44F7B538FD07773BBC905AEEA0F001804481_RuntimeMethod_var);
	}
}
// System.Object MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>d__165::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCopyStreamingAssetVideoAndLoadU3Ed__165_System_Collections_IEnumerator_get_Current_m3631C87593D6B32ABEEA064FEC34596D4B6C1758 (U3CCopyStreamingAssetVideoAndLoadU3Ed__165_t162B3F917B3AADD8903E158552C6C1FC4B7C4315 * __this, const RuntimeMethod* method)
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
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoad2U3Ed__164__ctor_mAE6F28EF1C2BF4F7F79CCDD903F50D5FE719CEA2 (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_IDisposable_Dispose_m8E6C8D62BE90E7C4678F6E97AA1D6A3DB3C985C2 (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDownloadStreamingVideoAndLoad2U3Ed__164_MoveNext_m5750838BF6972A8D42B1B03FFE0CFCF7549FCC6B (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadStreamingVideoAndLoad2U3Ed__164_MoveNext_m5750838BF6972A8D42B1B03FFE0CFCF7549FCC6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		String_t* L_4 = __this->get_strURL_2();
		NullCheck(L_4);
		String_t* L_5 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_4, /*hidden argument*/NULL);
		__this->set_strURL_2(L_5);
		String_t* L_6 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_7 = __this->get_strURL_2();
		String_t* L_8 = __this->get_strURL_2();
		NullCheck(L_8);
		int32_t L_9 = String_LastIndexOf_mC924D20DC71F85A7106D9DD09BF41497C6816E20(L_8, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_7, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, L_10, /*hidden argument*/NULL);
		__this->set_U3Cwrite_pathU3E5__2_4(L_11);
		String_t* L_12 = __this->get_U3Cwrite_pathU3E5__2_4();
		bool L_13 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_14 = V_1;
		String_t* L_15 = __this->get_U3Cwrite_pathU3E5__2_4();
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_008a:
	{
		String_t* L_17 = __this->get_strURL_2();
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_18 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_m855BBB40089401B7BE6DE7A19FAD81EB070A2196(L_18, L_17, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_5(L_18);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_19 = __this->get_U3CwwwU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_20 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_20);
		String_t* L_21 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_20, /*hidden argument*/NULL);
		bool L_22 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_23 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_24 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_23, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, /*hidden argument*/NULL);
		bool L_25 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00f4;
		}
	}
	{
		String_t* L_26 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_27 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_26, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, /*hidden argument*/NULL);
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_27, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		String_t* L_28 = __this->get_U3Cwrite_pathU3E5__2_4();
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_29 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_29);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = WWW_get_bytes_m9C9B2E62AC6733A39EDBF61E5C751438EC41126C(L_29, /*hidden argument*/NULL);
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_28, L_30, /*hidden argument*/NULL);
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_31 = V_1;
		String_t* L_32 = __this->get_U3Cwrite_pathU3E5__2_4();
		String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B(L_31, L_33, /*hidden argument*/NULL);
		goto IL_0132;
	}

IL_0122:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_34 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_34);
		String_t* L_35 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_35, /*hidden argument*/NULL);
	}

IL_0132:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_36 = __this->get_U3CwwwU3E5__3_5();
		NullCheck(L_36);
		WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66(L_36, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_5((WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)NULL);
		Resources_UnloadUnusedAssets_m04EC5EA06A8F7F26ED95BD704E1DDF62BBAB7043(/*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_5((WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)NULL);
	}

IL_0151:
	{
		return (bool)0;
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE6FAB27A0E7225BF1D577E266710B46A4682A20A (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_Reset_m821125BEA351E437C5F2BAD2DB3A767C08029502 (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_Reset_m821125BEA351E437C5F2BAD2DB3A767C08029502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_Reset_m821125BEA351E437C5F2BAD2DB3A767C08029502_RuntimeMethod_var);
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad2>d__164::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadStreamingVideoAndLoad2U3Ed__164_System_Collections_IEnumerator_get_Current_m5F616EC9E29232EBA771A2745EF9C9462EE64748 (U3CDownloadStreamingVideoAndLoad2U3Ed__164_tEED430D03EA9DEB65ADD1C7F94210F69580BA598 * __this, const RuntimeMethod* method)
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
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoadU3Ed__163__ctor_m6CA338C2A350A6CF56BBD00E532E9E6B7596087F (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoadU3Ed__163_System_IDisposable_Dispose_mA9BCD90BFB9E5D5AEDEA54839C596B69ACE3A742 (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDownloadStreamingVideoAndLoadU3Ed__163_MoveNext_m3FF5E9207421BB7160459728CCF0A256A56C6D2F (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadStreamingVideoAndLoadU3Ed__163_MoveNext_m3FF5E9207421BB7160459728CCF0A256A56C6D2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		String_t* L_4 = __this->get_strURL_2();
		NullCheck(L_4);
		String_t* L_5 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_4, /*hidden argument*/NULL);
		__this->set_strURL_2(L_5);
		String_t* L_6 = __this->get_strURL_2();
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCAC99FEDBFCBCFEC61A7225E35D523EFF7FD6A7B, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_strURL_2();
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_9 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_m855BBB40089401B7BE6DE7A19FAD81EB070A2196(L_9, L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_4(L_9);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_10 = __this->get_U3CwwwU3E5__2_4();
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006a:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_11 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_11);
		String_t* L_12 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_11, /*hidden argument*/NULL);
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00fd;
		}
	}
	{
		String_t* L_14 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, /*hidden argument*/NULL);
		bool L_16 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_17 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_17, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, /*hidden argument*/NULL);
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_18, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		String_t* L_19 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_20 = __this->get_strURL_2();
		String_t* L_21 = __this->get_strURL_2();
		NullCheck(L_21);
		int32_t L_22 = String_LastIndexOf_mC924D20DC71F85A7106D9DD09BF41497C6816E20(L_21, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_20, L_22, /*hidden argument*/NULL);
		String_t* L_24 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_19, _stringLiteral817BBDFCF68C4CABD4FCE2BA3B5AAB9B9CAE120C, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		String_t* L_25 = V_2;
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_26 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_26);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = WWW_get_bytes_m9C9B2E62AC6733A39EDBF61E5C751438EC41126C(L_26, /*hidden argument*/NULL);
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_25, L_27, /*hidden argument*/NULL);
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_28 = V_1;
		String_t* L_29 = V_2;
		String_t* L_30 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		MediaPlayerCtrl_Load_mA2072BDE104F252ABDD5858F5D0D0079ADD1BA7B(L_28, L_30, /*hidden argument*/NULL);
		goto IL_010d;
	}

IL_00fd:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_31 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_31);
		String_t* L_32 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_32, /*hidden argument*/NULL);
	}

IL_010d:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_33 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_33);
		WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66(L_33, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_4((WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)NULL);
		Resources_UnloadUnusedAssets_m04EC5EA06A8F7F26ED95BD704E1DDF62BBAB7043(/*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFDCF0F6753757C67F43DE113532FBBA7683DA2A (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_Reset_m23F9F028D139112BE7656D31075D70145A296688 (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_Reset_m23F9F028D139112BE7656D31075D70145A296688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_Reset_m23F9F028D139112BE7656D31075D70145A296688_RuntimeMethod_var);
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>d__163::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadStreamingVideoAndLoadU3Ed__163_System_Collections_IEnumerator_get_Current_mD0BB19395AD9D61914EE1C9F83BA75331AC6FD96 (U3CDownloadStreamingVideoAndLoadU3Ed__163_t341C6334A1B819B8221A7CB07AA714850081B5F3 * __this, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE (VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoBuffering::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoBuffering__ctor_mCB3EBF0EC483880B903F4D18B4B523778D02D10E (VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoBuffering::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoBuffering_Invoke_m028D7C52082C933AF5FD3119E6A2EE5877353AE3 (VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoBuffering::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoBuffering_BeginInvoke_mFE81B60B9254F5C65AA63207F157AE6DAC9294BA (VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoBuffering::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoBuffering_EndInvoke_m443A485871F098643EA9D247EB14E31298AE19CF (VideoBuffering_t8303D793DF94AB903D689BC194D740A3C81D47DE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 (VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoBufferingEnd::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoBufferingEnd__ctor_mC450F2362D4FFFC367EC9E95030B1CEFDDE6F3B5 (VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoBufferingEnd::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoBufferingEnd_Invoke_mA6D74ABEE9BFC1C8DE4FC5CBFECF375523CDEDC6 (VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoBufferingEnd::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoBufferingEnd_BeginInvoke_m3BE0F7DC55661433FF2C5285CA67D88784036F77 (VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoBufferingEnd::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoBufferingEnd_EndInvoke_mE2CF7B2CDF54006F360E0A9CD5259CF0F2B47E5D (VideoBufferingEnd_t10A00F27D7AF9DF25150394673F1204057FF4DB0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoEnd::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoEnd__ctor_m0AF248CFE7FFD91516D07A0744540CEA77BF3099 (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoEnd::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoEnd_Invoke_mA501750DB2310676C3770EDED312C2CE4A14AFB2 (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoEnd::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoEnd_BeginInvoke_m0DA49A206CD64AB7606912568623D4C867E22B5F (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoEnd::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoEnd_EndInvoke_m047ED7F31DAA00702E9B9F35C0C6642EBC1AA9FC (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___errorCode0, ___errorCodeExtra1);

}
// System.Void MediaPlayerCtrl/VideoError::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoError__ctor_m09BADAE75C4D92ED7210FAB1DAF7AD85E2291F14 (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoError::Invoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C" IL2CPP_METHOD_ATTR void VideoError_Invoke_m54FF368EA704B8928E2EE51FED00FCC066920FC9 (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorCode0, ___errorCodeExtra1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, ___errorCodeExtra1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___errorCode0, ___errorCodeExtra1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___errorCode0, ___errorCodeExtra1);
							else
								GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___errorCode0, ___errorCodeExtra1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCode0, ___errorCodeExtra1);
							else
								VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCode0, ___errorCodeExtra1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, ___errorCodeExtra1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorCode0, ___errorCodeExtra1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, ___errorCodeExtra1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___errorCode0, ___errorCodeExtra1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___errorCode0, ___errorCodeExtra1);
						else
							GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___errorCode0, ___errorCodeExtra1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCode0, ___errorCodeExtra1);
						else
							VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCode0, ___errorCodeExtra1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, ___errorCodeExtra1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoError::BeginInvoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoError_BeginInvoke_mF9B400464BF5EB6AE69007E5CE2C80D3C52B0E4D (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoError_BeginInvoke_mF9B400464BF5EB6AE69007E5CE2C80D3C52B0E4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(MEDIAPLAYER_ERROR_t8FC8B328771E22027B520993803C0C8A0F43ADBD_il2cpp_TypeInfo_var, &___errorCode0);
	__d_args[1] = Box(MEDIAPLAYER_ERROR_t8FC8B328771E22027B520993803C0C8A0F43ADBD_il2cpp_TypeInfo_var, &___errorCodeExtra1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MediaPlayerCtrl/VideoError::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoError_EndInvoke_m81C2ACA54269A4978455622826F08FF38A14721F (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoFirstFrameReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFirstFrameReady__ctor_m05EC64D7AFAAFEDE8F5784CEFFF8D51D5AD04D50 (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoFirstFrameReady::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoFirstFrameReady_Invoke_m78BC2971EEC39B57E61EA1A0F18D983FCB74CEA2 (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoFirstFrameReady::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoFirstFrameReady_BeginInvoke_m6A33093841400C5545F437E83A2F63A466A5D0D9 (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoFirstFrameReady::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoFirstFrameReady_EndInvoke_m320DD480C3EDB0E958EFC4D0FC527F7B7BC0B42B (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoReady__ctor_mFA34A38D6EA109FB46CFCC45ED07A7604FEA8F12 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoReady::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoReady_Invoke_m1592B74E515AFE14228300759C8B06A49ABDCEF8 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoReady::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoReady_BeginInvoke_m32D47C32821AFBD498B9E76B9A6DD7C8F2DEBF25 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoReady::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoReady_EndInvoke_mF4FC099D2114272073D23B206BFDAC78B0EBF654 (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MediaPlayerCtrl/VideoResize::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoResize__ctor_m674574F126810A761F62E263BDFE71026CC70EDC (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MediaPlayerCtrl/VideoResize::Invoke()
extern "C" IL2CPP_METHOD_ATTR void VideoResize_Invoke_mB46DE4DA817B115EEAA90288C621B7ABE2099F1B (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MediaPlayerCtrl/VideoResize::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoResize_BeginInvoke_mCE60CCEEF212C1CA2FD136B2BA098D0B90A439A1 (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MediaPlayerCtrl/VideoResize::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoResize_EndInvoke_m11EA4F0B8F9A41120D6655C3074AA8FA9394CF2A (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void MediaPlayerEvent::Start()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_Start_m004C7C216FFF326B1C1C52036D00C484214E3442 (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_Start_m004C7C216FFF326B1C1C52036D00C484214E3442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_0 = __this->get_m_srcVideo_4();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_1 = L_0;
		NullCheck(L_1);
		VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * L_2 = L_1->get_OnReady_26();
		VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 * L_3 = (VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 *)il2cpp_codegen_object_new(VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611_il2cpp_TypeInfo_var);
		VideoReady__ctor_mFA34A38D6EA109FB46CFCC45ED07A7604FEA8F12(L_3, __this, (intptr_t)((intptr_t)MediaPlayerEvent_OnReady_m0264324C1E9EFA79449DC4B0099AC02888DE48DA_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_OnReady_26(((VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611 *)CastclassSealed((RuntimeObject*)L_4, VideoReady_tCB9497E66D4F9AD566BA35692DEB94E852F37611_il2cpp_TypeInfo_var)));
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_5 = __this->get_m_srcVideo_4();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_6 = L_5;
		NullCheck(L_6);
		VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * L_7 = L_6->get_OnVideoFirstFrameReady_29();
		VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 * L_8 = (VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 *)il2cpp_codegen_object_new(VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24_il2cpp_TypeInfo_var);
		VideoFirstFrameReady__ctor_m05EC64D7AFAAFEDE8F5784CEFFF8D51D5AD04D50(L_8, __this, (intptr_t)((intptr_t)MediaPlayerEvent_OnFirstFrameReady_m82E0C3F6E0535C46F45F8559F32F5E6205AE0D31_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_9 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_OnVideoFirstFrameReady_29(((VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24 *)CastclassSealed((RuntimeObject*)L_9, VideoFirstFrameReady_tDF5ACF9BE987126454CCE81987C2D4A66907CF24_il2cpp_TypeInfo_var)));
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_10 = __this->get_m_srcVideo_4();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_11 = L_10;
		NullCheck(L_11);
		VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * L_12 = L_11->get_OnVideoError_28();
		VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 * L_13 = (VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 *)il2cpp_codegen_object_new(VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_il2cpp_TypeInfo_var);
		VideoError__ctor_m09BADAE75C4D92ED7210FAB1DAF7AD85E2291F14(L_13, __this, (intptr_t)((intptr_t)MediaPlayerEvent_OnError_m75E51E259C7040B666E3C2CE20EC5B557FFBE8EC_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_14 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_OnVideoError_28(((VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13 *)CastclassSealed((RuntimeObject*)L_14, VideoError_t7E815617F9B35FC2FBB60E1EDA1040B47E2A8C13_il2cpp_TypeInfo_var)));
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_15 = __this->get_m_srcVideo_4();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_16 = L_15;
		NullCheck(L_16);
		VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * L_17 = L_16->get_OnEnd_27();
		VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 * L_18 = (VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 *)il2cpp_codegen_object_new(VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84_il2cpp_TypeInfo_var);
		VideoEnd__ctor_m0AF248CFE7FFD91516D07A0744540CEA77BF3099(L_18, __this, (intptr_t)((intptr_t)MediaPlayerEvent_OnEnd_m26CD647830A70EEE87B7F35C42E69CE9494BA715_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_19 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_OnEnd_27(((VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84 *)CastclassSealed((RuntimeObject*)L_19, VideoEnd_t0EDE4E168BD999C1F03BFB55E062B7792B027D84_il2cpp_TypeInfo_var)));
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_20 = __this->get_m_srcVideo_4();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_21 = L_20;
		NullCheck(L_21);
		VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * L_22 = L_21->get_OnResize_25();
		VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D * L_23 = (VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D *)il2cpp_codegen_object_new(VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_il2cpp_TypeInfo_var);
		VideoResize__ctor_m674574F126810A761F62E263BDFE71026CC70EDC(L_23, __this, (intptr_t)((intptr_t)MediaPlayerEvent_OnResize_mBF4B4A14DA6B4827E983A75C7E03CBDEF319582E_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_24 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_OnResize_25(((VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D *)CastclassSealed((RuntimeObject*)L_24, VideoResize_t4B5F16ED6FCCD109BEB9EC2B07CD2E135A7CF73D_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void MediaPlayerEvent::Update()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_Update_mEE86F8D0044AFFC720D0B4D795C9DFB437B331E1 (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MediaPlayerEvent::OnReady()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_OnReady_m0264324C1E9EFA79449DC4B0099AC02888DE48DA (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_OnReady_m0264324C1E9EFA79449DC4B0099AC02888DE48DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralAA15D6E5885C1E9F19AD22CC8139EC0B00EEA00B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerEvent::OnFirstFrameReady()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_OnFirstFrameReady_m82E0C3F6E0535C46F45F8559F32F5E6205AE0D31 (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_OnFirstFrameReady_m82E0C3F6E0535C46F45F8559F32F5E6205AE0D31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral06F31290545C1DB1C3CC12767ADB823EE75FB378, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerEvent::OnEnd()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_OnEnd_m26CD647830A70EEE87B7F35C42E69CE9494BA715 (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_OnEnd_m26CD647830A70EEE87B7F35C42E69CE9494BA715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0ED3C0EF0D4257993C2E87DD24949AE1524775C0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerEvent::OnResize()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_OnResize_mBF4B4A14DA6B4827E983A75C7E03CBDEF319582E (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_OnResize_mBF4B4A14DA6B4827E983A75C7E03CBDEF319582E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralEF85A62A21FF109F145B4BC8CE92C2007BAA8D96, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerEvent::OnError(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent_OnError_m75E51E259C7040B666E3C2CE20EC5B557FFBE8EC (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerEvent_OnError_m75E51E259C7040B666E3C2CE20EC5B557FFBE8EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral1EC9C77019B9C571C284D11D62850D0BE7F7D725, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerEvent__ctor_m327E059967CD7F1F0814E4263127DC835A020F27 (MediaPlayerEvent_t37A86764C87004FA7248C077232AB859BFD7F17D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MediaPlayerFullScreenCtrl::Start()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerFullScreenCtrl_Start_m23E889E1AB1EA0FAEDA9FDCD70135102E60D99FF (MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969 * __this, const RuntimeMethod* method)
{
	{
		MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::Update()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerFullScreenCtrl_Update_m4E0CFC7250AE0DD1466C19C8EE6F40E515447523 (MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_iOrgWidth_5();
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		int32_t L_2 = __this->get_m_iOrgHeight_6();
		int32_t L_3 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::Resize()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178 (MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaPlayerFullScreenCtrl_Resize_m05189EE2F25A2BA0387A815E8C9A228701F32178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		__this->set_m_iOrgWidth_5(L_0);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		__this->set_m_iOrgHeight_6(L_1);
		int32_t L_2 = __this->get_m_iOrgHeight_6();
		int32_t L_3 = __this->get_m_iOrgWidth_5();
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_3)))));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_m_objVideo_4();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), ((float)((float)(20.0f)/(float)L_6)), ((float)((float)(20.0f)/(float)L_7)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_m_objVideo_4();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_11 = Component_GetComponent_TisMediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF_m14B8EF23834F6C45DFB3556593191D3FAC86D8C3(L_10, /*hidden argument*/Component_GetComponent_TisMediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF_m14B8EF23834F6C45DFB3556593191D3FAC86D8C3_RuntimeMethod_var);
		NullCheck(L_11);
		MediaPlayerCtrl_Resize_m2E31A8ED5D202A1CEBF45E19820BD3A467CA61BD(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MediaPlayerFullScreenCtrl__ctor_m346872E2F46B2CDD523E92B36596225642A49F20 (MediaPlayerFullScreenCtrl_tA1275420138A617CA41B33F2760A8ACB6FB19969 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SeekBarCtrl::Start()
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_Start_mC53405A1B00BB479C542459C690AADEAC6A82C6C (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SeekBarCtrl::Update()
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_Update_m3B5AAADCB4953C20EB4FE62ADE80F1D29EB317EA (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SeekBarCtrl_Update_m3B5AAADCB4953C20EB4FE62ADE80F1D29EB317EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_bActiveDrag_7();
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		float L_1 = __this->get_m_fDeltaTime_9();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_m_fDeltaTime_9(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_m_fDeltaTime_9();
		float L_4 = __this->get_m_fDragTime_6();
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003a;
		}
	}
	{
		__this->set_m_bActiveDrag_7((bool)1);
		__this->set_m_fDeltaTime_9((0.0f));
	}

IL_003a:
	{
		bool L_5 = __this->get_m_bUpdate_8();
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_6 = __this->get_m_srcVideo_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_8 = __this->get_m_srcSlider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_10 = __this->get_m_srcSlider_5();
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_11 = __this->get_m_srcVideo_4();
		NullCheck(L_11);
		float L_12 = MediaPlayerCtrl_GetSeekBarValue_m8B15ADE09BE898F34CD0B0EDDC60F55C14507872(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_10, L_12);
	}

IL_0075:
	{
		return;
	}
}
// System.Void SeekBarCtrl::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_OnPointerEnter_m67663863C0E35C23A4C0E8C1684CD6356E3CABF2 (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SeekBarCtrl_OnPointerEnter_m67663863C0E35C23A4C0E8C1684CD6356E3CABF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral220AB9BACC00466B9232DD9249C20C51C1F762F6, /*hidden argument*/NULL);
		__this->set_m_bUpdate_8((bool)0);
		return;
	}
}
// System.Void SeekBarCtrl::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_OnPointerExit_mA1DEA9D22D55C93490AE63B51859D7DD02D1F011 (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SeekBarCtrl_OnPointerExit_mA1DEA9D22D55C93490AE63B51859D7DD02D1F011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3B8712B1CF5361E6467E355FCE656A99AB6D6C52, /*hidden argument*/NULL);
		__this->set_m_bUpdate_8((bool)1);
		return;
	}
}
// System.Void SeekBarCtrl::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_OnPointerDown_m5BDA2BB459F85E465F4DAA680D4719F03E02B472 (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SeekBarCtrl::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_OnPointerUp_m7A91BF1B95E552F467B4ECE7E133F107B11B3BF5 (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		MediaPlayerCtrl_t43545F288C5255137BF431F1CB77EDCABF139BAF * L_0 = __this->get_m_srcVideo_4();
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = __this->get_m_srcSlider_5();
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		MediaPlayerCtrl_SetSeekBarValue_m5DCDED5373E8224CD04B79505CC2910DA1AAF30F(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SeekBarCtrl::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl_OnDrag_m4EFC43D506B6DD440F08FBAC7C8682A302FB8A84 (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SeekBarCtrl_OnDrag_m4EFC43D506B6DD440F08FBAC7C8682A302FB8A84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___eventData0;
		String_t* L_1 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0E24803F775C75B3E1C29012A874E60179599D1E, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_m_bActiveDrag_7();
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_3 = __this->get_m_srcSlider_5();
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		__this->set_m_fLastValue_10(L_4);
		return;
	}

IL_002a:
	{
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_5 = __this->get_m_srcSlider_5();
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		__this->set_m_fLastSetValue_11(L_6);
		__this->set_m_bActiveDrag_7((bool)0);
		return;
	}
}
// System.Void SeekBarCtrl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SeekBarCtrl__ctor_mEBC6EDA8C8F15DA2DDA781FACD9707170A45C1AE (SeekBarCtrl_t6D4161C7E89B9A48E51057A977B5D1A187559E48 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_fDragTime_6((0.2f));
		__this->set_m_bActiveDrag_7((bool)1);
		__this->set_m_bUpdate_8((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SimpleCloudHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_Start_mBE8C4EE8A4A70F5A4FD65CBAA209A8DD6234E6F8 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCloudHandler_Start_mBE8C4EE8A4A70F5A4FD65CBAA209A8DD6234E6F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * V_0 = NULL;
	{
		CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * L_0 = Component_GetComponent_TisCloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870_m375F4556736B4DECAA86FA3022D4EC898BBDAA1B(__this, /*hidden argument*/Component_GetComponent_TisCloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870_m375F4556736B4DECAA86FA3022D4EC898BBDAA1B_RuntimeMethod_var);
		V_0 = L_0;
		CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * L_3 = V_0;
		NullCheck(L_3);
		ObjectRecoBehaviour_RegisterEventHandler_mDE7686AC9A86D4E843E4C65543006AF4599077A9(L_3, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * L_4 = V_0;
		__this->set_mcloudRecoBehaviour_6(L_4);
		return;
	}
}
// System.Void SimpleCloudHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_Update_mE087F06D81A1014DC86B3A572A9E4EF601C23679 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = SimpleCloudHandler_LoadAssetBundles_m6EBB988422D81AFF8B26B61F09658A4055EF9096(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SimpleCloudHandler::LoadAssetBundles()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleCloudHandler_LoadAssetBundles_m6EBB988422D81AFF8B26B61F09658A4055EF9096 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCloudHandler_LoadAssetBundles_m6EBB988422D81AFF8B26B61F09658A4055EF9096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * L_0 = (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 *)il2cpp_codegen_object_new(U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518_il2cpp_TypeInfo_var);
		U3CLoadAssetBundlesU3Ed__9__ctor_m48D0B32CAFCD38504D9CDF7E3AB817265C74B25D(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleCloudHandler::OnInitError(Vuforia.TargetFinder/InitState)
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_OnInitError_m6B146B849BDEF7C32E5CB639B811B6803D3F7B9F (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleCloudHandler::OnInitialized(Vuforia.TargetFinder)
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_OnInitialized_m5DC9EED32F62EA67CF40475B5D2D5ACD344D42D1 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___targetFinder0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleCloudHandler::OnStateChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_OnStateChanged_mA541364330D44410EF266569226C2F7A8E2635F4 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, bool ___scanning0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCloudHandler_OnStateChanged_mA541364330D44410EF266569226C2F7A8E2635F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___scanning0;
		__this->set_mIsScanning_9(L_0);
		bool L_1 = ___scanning0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = TrackerManager_get_Instance_m43607A127E7B2C17B3B26173C821A0BF2944D3D0(/*hidden argument*/NULL);
		NullCheck(L_2);
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_3 = GenericInterfaceFuncInvoker0< ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_mCAB3ED46860A309B3862F2E69CE83AD4FCE42868_RuntimeMethod_var, L_2);
		NullCheck(L_3);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_4 = ObjectTracker_get_TargetFinder_m33CCEF27D285321799959BA10007FFB2B3D2D8CC(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TargetFinder_ClearTrackables_m78EBEBC8F105C0AAE7A8C512221970E7565DE734(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SimpleCloudHandler::OnNewSearchResult(Vuforia.TargetFinder/TargetSearchResult)
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_OnNewSearchResult_mE849DA73E0B8BE5794E94C6155027EFE10D32F2D (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  ___targetSearchResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCloudHandler_OnNewSearchResult_mE849DA73E0B8BE5794E94C6155027EFE10D32F2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  L_0 = ___targetSearchResult0;
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  L_1 = L_0;
		String_t* L_2 = L_1.get_MetaData_3();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		String_t* L_3 = L_1.get_MetaData_3();
		((SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB_StaticFields*)il2cpp_codegen_static_fields_for(SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB_il2cpp_TypeInfo_var))->set_metaData_4(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_assetBundleGameObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_1;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_0;
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_9, L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		ImageTargetBehaviour_t2014110FECB3CAB6142743A36CA3F50A91E97540 * L_12 = __this->get_ImageTargetTemplate_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_14 = TrackerManager_get_Instance_m43607A127E7B2C17B3B26173C821A0BF2944D3D0(/*hidden argument*/NULL);
		NullCheck(L_14);
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_15 = GenericInterfaceFuncInvoker0< ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_mCAB3ED46860A309B3862F2E69CE83AD4FCE42868_RuntimeMethod_var, L_14);
		NullCheck(L_15);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_16 = ObjectTracker_get_TargetFinder_m33CCEF27D285321799959BA10007FFB2B3D2D8CC(L_15, /*hidden argument*/NULL);
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  L_17 = ___targetSearchResult0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_0;
		NullCheck(L_16);
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_19 = TargetFinder_EnableTracking_m68B520DCBE39156A36CF8E726FF1D62F978160E9(L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0067:
	{
		bool L_20 = __this->get_mIsScanning_9();
		if (L_20)
		{
			goto IL_007b;
		}
	}
	{
		CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870 * L_21 = __this->get_mcloudRecoBehaviour_6();
		NullCheck(L_21);
		CloudRecoBehaviour_set_CloudRecoEnabled_mCFA533AAB93B200516E007332CDFA9CAB8C758E7(L_21, (bool)1, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void SimpleCloudHandler::OnUpdateError(Vuforia.TargetFinder/UpdateState)
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler_OnUpdateError_m00DD404507FF60DA6D58A692880B1E069E5172E4 (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, int32_t ___updateError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCloudHandler_OnUpdateError_m00DD404507FF60DA6D58A692880B1E069E5172E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SimpleCloudHandler_OnUpdateError_m00DD404507FF60DA6D58A692880B1E069E5172E4_RuntimeMethod_var);
	}
}
// System.Void SimpleCloudHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleCloudHandler__ctor_m2AEB5F80DFF38D2A64D86A5E093C43B06710111E (SimpleCloudHandler_t7C0475230667C8D5217EB575E1430173C6CC7DCB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SimpleCloudHandler/<LoadAssetBundles>d__9::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAssetBundlesU3Ed__9__ctor_m48D0B32CAFCD38504D9CDF7E3AB817265C74B25D (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SimpleCloudHandler/<LoadAssetBundles>d__9::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAssetBundlesU3Ed__9_System_IDisposable_Dispose_m08476B965C2CDC6CD410BB2C9038FF33541C8751 (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SimpleCloudHandler/<LoadAssetBundles>d__9::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadAssetBundlesU3Ed__9_MoveNext_mC57186E8F52C52F5C87EB6C8F757867594F62203 (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.Object SimpleCloudHandler/<LoadAssetBundles>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAssetBundlesU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFB64FCF2814BFCA34BD1C5027F7A020A19CF5C98 (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleCloudHandler/<LoadAssetBundles>d__9::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_Reset_m82D97BFBD0E436C6AAA84983A9BBD110ED7755A8 (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_Reset_m82D97BFBD0E436C6AAA84983A9BBD110ED7755A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_Reset_m82D97BFBD0E436C6AAA84983A9BBD110ED7755A8_RuntimeMethod_var);
	}
}
// System.Object SimpleCloudHandler/<LoadAssetBundles>d__9::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAssetBundlesU3Ed__9_System_Collections_IEnumerator_get_Current_mE50B69BA35658F7202D111554DEB2247A23B6B48 (U3CLoadAssetBundlesU3Ed__9_t424E4C6AAC8F86BB496A1C6AB797B81EABA5E518 * __this, const RuntimeMethod* method)
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
// System.Void SphereMirror::Start()
extern "C" IL2CPP_METHOD_ATTR void SphereMirror_Start_mAFCE28AF1750CFE695E23D7BADE93647AF6523A1 (SphereMirror_t58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SphereMirror_Start_mAFCE28AF1750CFE695E23D7BADE93647AF6523A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(L_0, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = Mesh_get_uv_m0EBA5CA4644C9D5F1B2125AF3FE3873EFC8A4616(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0048;
	}

IL_001a:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_x_0();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_12), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_8)), L_11, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_17 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(L_16, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_17);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_18 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_17, /*hidden argument*/NULL);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_19 = V_0;
		NullCheck(L_18);
		Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SphereMirror::Update()
extern "C" IL2CPP_METHOD_ATTR void SphereMirror_Update_m4995E482AB7A9A2E606DF90CEE3E81ABD47678E2 (SphereMirror_t58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SphereMirror::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SphereMirror__ctor_m620B27A832E844C738730ED48A78D00FA18CCCBE (SphereMirror_t58AFB5894869CF8D1FC14BC5FA2A6A36592BE02F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
