#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>
struct Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F;
// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>
struct Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>
struct KeyCollection_t469DC4B407C3D5BC965C43289C846CAF385B0F56;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>
struct KeyCollection_t21915A357D83D2DF67EB4AC37911BD5BDB8E1860;
// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>
struct List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>
struct ValueCollection_t07AD02E179DA3410AF87C40F12167866C239ED94;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>
struct ValueCollection_t27951C4D9601389BA577E142D6BC25A523D809B2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>[]
struct EntryU5BU5D_t17FC7BCE6B09CD5916E88518CB72837E781CF90E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>[]
struct EntryU5BU5D_t209C955842F12DC3D063F6F6D9381F2C59E00C83;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Wikitude.CameraFramePlane[]
struct CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Wikitude.CameraFrame
struct CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1;
// Wikitude.ColorCameraFrameMetadata
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Wikitude.IPlatformBridge
struct IPlatformBridge_t9D2B43473712377A0F9DD6664C6E633051361384;
// Wikitude.IWikitudeBridge
struct IWikitudeBridge_t774321C94F11DBF0C255E6C191E1DE30723C0C1F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Wikitude.StaticPlatformBridgeInitializer
struct StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8;
// Wikitude.StaticWikitudeBridgeInitializer
struct StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Wikitude.BridgeFactory/PlatformBridgeConstructor
struct PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2;
// Wikitude.BridgeFactory/WikitudeBridgeConstructor
struct WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C;

IL2CPP_EXTERN_C RuntimeClass* BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral50C7E6F9C180E55A31892257003D5305E60BA528;
IL2CPP_EXTERN_C String_t* _stringLiteral80409DB1D44791D537D90B7ABC6069A2817181D0;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D0526A16E79646D1E3EF86C75815134D34731;
IL2CPP_EXTERN_C String_t* _stringLiteralBD565A634358292218E4310246DFF4B0F0417965;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83;
IL2CPP_EXTERN_C String_t* _stringLiteralE81EE601BD51C621C5DD0CD4BE9BDBD2CEDB3398;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5EC4F062C5614C20E8C2FEB08055BED1931EA54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8B296B205E0BAA7FA37C4F4413487FB8FA22416E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0A9F0EB1350DD855FD59AB37BD39331BDD0F45B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD12E63647A4EE60426A6B8F57ECA7E18877B1BB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m013A0EE51998EB7B7EB1F6BF5169B243723A6B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m363D563224E2B6C413AD8972B60AFB139F5E5472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m082EEAA6215723331A01F6250722271D1277357E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBEFBD2CC223B63B6A75404352C8BCFDFF5705A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1_0_0_0_var;
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2;;
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com;
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com;;
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke;
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke;;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDE79A6628F94211B2D14326B72C7AAAAD2393D80 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>
struct Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17FC7BCE6B09CD5916E88518CB72837E781CF90E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t469DC4B407C3D5BC965C43289C846CAF385B0F56* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t07AD02E179DA3410AF87C40F12167866C239ED94* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>
struct Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t209C955842F12DC3D063F6F6D9381F2C59E00C83* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t21915A357D83D2DF67EB4AC37911BD5BDB8E1860* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t27951C4D9601389BA577E142D6BC25A523D809B2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>
struct List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Wikitude.BridgeFactory
struct BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Wikitude.Log
struct Log_tEB7D2B2271D0775545321F2D1E74AA1CF7525677  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Wikitude.ImageTargetScale
struct ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 
{
	// System.Single Wikitude.ImageTargetScale::x
	float ___x_0;
	// System.Single Wikitude.ImageTargetScale::y
	float ___y_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Wikitude.Matrix
struct Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE 
{
	// System.Single Wikitude.Matrix::m00
	float ___m00_0;
	// System.Single Wikitude.Matrix::m01
	float ___m01_1;
	// System.Single Wikitude.Matrix::m02
	float ___m02_2;
	// System.Single Wikitude.Matrix::m03
	float ___m03_3;
	// System.Single Wikitude.Matrix::m10
	float ___m10_4;
	// System.Single Wikitude.Matrix::m11
	float ___m11_5;
	// System.Single Wikitude.Matrix::m12
	float ___m12_6;
	// System.Single Wikitude.Matrix::m13
	float ___m13_7;
	// System.Single Wikitude.Matrix::m20
	float ___m20_8;
	// System.Single Wikitude.Matrix::m21
	float ___m21_9;
	// System.Single Wikitude.Matrix::m22
	float ___m22_10;
	// System.Single Wikitude.Matrix::m23
	float ___m23_11;
	// System.Single Wikitude.Matrix::m30
	float ___m30_12;
	// System.Single Wikitude.Matrix::m31
	float ___m31_13;
	// System.Single Wikitude.Matrix::m32
	float ___m32_14;
	// System.Single Wikitude.Matrix::m33
	float ___m33_15;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// Wikitude.ObjectTargetScale
struct ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 
{
	// System.Single Wikitude.ObjectTargetScale::x
	float ___x_0;
	// System.Single Wikitude.ObjectTargetScale::y
	float ___y_1;
	// System.Single Wikitude.ObjectTargetScale::z
	float ___z_2;
};

// Wikitude.Point
struct Point_t2F69A38D2298687336F20F8C7329A9FA06D92E22 
{
	// System.Single Wikitude.Point::X
	float ___X_0;
	// System.Single Wikitude.Point::Y
	float ___Y_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Wikitude.StaticPlatformBridgeInitializer
struct StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Wikitude.StaticWikitudeBridgeInitializer
struct StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// Wikitude.CSharpFunctions
struct CSharpFunctions_tFA564E04842B7CE60C77DEF2FF93C8C133A31D27 
{
	// System.IntPtr Wikitude.CSharpFunctions::DebugLogError
	intptr_t ___DebugLogError_0;
	// System.IntPtr Wikitude.CSharpFunctions::TargetCollectionResourceFailed
	intptr_t ___TargetCollectionResourceFailed_1;
	// System.IntPtr Wikitude.CSharpFunctions::TargetCollectionResourceInitialized
	intptr_t ___TargetCollectionResourceInitialized_2;
	// System.IntPtr Wikitude.CSharpFunctions::CloudRecognitionServiceFailed
	intptr_t ___CloudRecognitionServiceFailed_3;
	// System.IntPtr Wikitude.CSharpFunctions::CloudRecognitionServiceInitialized
	intptr_t ___CloudRecognitionServiceInitialized_4;
	// System.IntPtr Wikitude.CSharpFunctions::CloudRecognitionServiceResponseInterruption
	intptr_t ___CloudRecognitionServiceResponseInterruption_5;
	// System.IntPtr Wikitude.CSharpFunctions::CloudRecognitionServiceResponseSuccessful
	intptr_t ___CloudRecognitionServiceResponseSuccessful_6;
	// System.IntPtr Wikitude.CSharpFunctions::CloudRecognitionServiceResponseFailed
	intptr_t ___CloudRecognitionServiceResponseFailed_7;
	// System.IntPtr Wikitude.CSharpFunctions::TrackerInitializationError
	intptr_t ___TrackerInitializationError_8;
	// System.IntPtr Wikitude.CSharpFunctions::ImageTrackerFinishedLoading
	intptr_t ___ImageTrackerFinishedLoading_9;
	// System.IntPtr Wikitude.CSharpFunctions::ErrorLoadingImageTracker
	intptr_t ___ErrorLoadingImageTracker_10;
	// System.IntPtr Wikitude.CSharpFunctions::ObjectTrackerFinishedLoading
	intptr_t ___ObjectTrackerFinishedLoading_11;
	// System.IntPtr Wikitude.CSharpFunctions::ErrorLoadingObjectTracker
	intptr_t ___ErrorLoadingObjectTracker_12;
	// System.IntPtr Wikitude.CSharpFunctions::IsArBridgeSupported
	intptr_t ___IsArBridgeSupported_13;
	// System.IntPtr Wikitude.CSharpFunctions::OnCameraError
	intptr_t ___OnCameraError_14;
	// System.IntPtr Wikitude.CSharpFunctions::OnCameraOpened
	intptr_t ___OnCameraOpened_15;
	// System.IntPtr Wikitude.CSharpFunctions::CameraFrameAvailable
	intptr_t ___CameraFrameAvailable_16;
	// System.IntPtr Wikitude.CSharpFunctions::OnCameraReleased
	intptr_t ___OnCameraReleased_17;
	// System.IntPtr Wikitude.CSharpFunctions::OnCameraReleaseFailed
	intptr_t ___OnCameraReleaseFailed_18;
	// System.IntPtr Wikitude.CSharpFunctions::OnErrorRegisteringPlugin
	intptr_t ___OnErrorRegisteringPlugin_19;
};

// Wikitude.CameraFramePlane
struct CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E 
{
	// System.IntPtr Wikitude.CameraFramePlane::Data
	intptr_t ___Data_0;
	// System.UInt32 Wikitude.CameraFramePlane::DataSize
	uint32_t ___DataSize_1;
	// System.Int32 Wikitude.CameraFramePlane::PixelStride
	int32_t ___PixelStride_2;
	// System.Int32 Wikitude.CameraFramePlane::RowStride
	int32_t ___RowStride_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Wikitude.IntrinsicsCalibration
struct IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 
{
	// Wikitude.Point Wikitude.IntrinsicsCalibration::PrincipalPoint
	Point_t2F69A38D2298687336F20F8C7329A9FA06D92E22 ___PrincipalPoint_0;
	// Wikitude.Point Wikitude.IntrinsicsCalibration::FocalLength
	Point_t2F69A38D2298687336F20F8C7329A9FA06D92E22 ___FocalLength_1;
};

// Wikitude.MarshalImageTarget
struct MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19 
{
	// System.Int64 Wikitude.MarshalImageTarget::TargetId
	int64_t ___TargetId_0;
	// System.Int64 Wikitude.MarshalImageTarget::TrackerId
	int64_t ___TrackerId_1;
	// System.String Wikitude.MarshalImageTarget::Name
	String_t* ___Name_2;
	// Wikitude.Matrix Wikitude.MarshalImageTarget::ModelViewMatrix
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	// Wikitude.ImageTargetScale Wikitude.MarshalImageTarget::TargetScale
	ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 ___TargetScale_4;
	// System.Single Wikitude.MarshalImageTarget::PhysicalTargetHeight
	float ___PhysicalTargetHeight_5;
	// Wikitude.ImageTargetType Wikitude.MarshalImageTarget::TargetType
	int32_t ___TargetType_6;
	// System.Single Wikitude.MarshalImageTarget::TargetCircumferenceBase
	float ___TargetCircumferenceBase_7;
	// System.Single Wikitude.MarshalImageTarget::TargetCircumferenceTop
	float ___TargetCircumferenceTop_8;
};
// Native definition for P/Invoke marshalling of Wikitude.MarshalImageTarget
struct MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_pinvoke
{
	int64_t ___TargetId_0;
	int64_t ___TrackerId_1;
	char* ___Name_2;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 ___TargetScale_4;
	float ___PhysicalTargetHeight_5;
	int32_t ___TargetType_6;
	float ___TargetCircumferenceBase_7;
	float ___TargetCircumferenceTop_8;
};
// Native definition for COM marshalling of Wikitude.MarshalImageTarget
struct MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_com
{
	int64_t ___TargetId_0;
	int64_t ___TrackerId_1;
	char* ___Name_2;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 ___TargetScale_4;
	float ___PhysicalTargetHeight_5;
	int32_t ___TargetType_6;
	float ___TargetCircumferenceBase_7;
	float ___TargetCircumferenceTop_8;
};

// Wikitude.MarshalObjectTarget
struct MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918 
{
	// System.Int64 Wikitude.MarshalObjectTarget::TargetId
	int64_t ___TargetId_0;
	// System.Int64 Wikitude.MarshalObjectTarget::TrackerId
	int64_t ___TrackerId_1;
	// System.String Wikitude.MarshalObjectTarget::Name
	String_t* ___Name_2;
	// Wikitude.Matrix Wikitude.MarshalObjectTarget::ModelViewMatrix
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	// Wikitude.ObjectTargetScale Wikitude.MarshalObjectTarget::TargetScale
	ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 ___TargetScale_4;
};
// Native definition for P/Invoke marshalling of Wikitude.MarshalObjectTarget
struct MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_pinvoke
{
	int64_t ___TargetId_0;
	int64_t ___TrackerId_1;
	char* ___Name_2;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 ___TargetScale_4;
};
// Native definition for COM marshalling of Wikitude.MarshalObjectTarget
struct MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_com
{
	int64_t ___TargetId_0;
	int64_t ___TrackerId_1;
	char* ___Name_2;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___ModelViewMatrix_3;
	ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 ___TargetScale_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Wikitude.ColorCameraFrameMetadata
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 
{
	// System.Single Wikitude.ColorCameraFrameMetadata::HorizontalFieldOfView
	float ___HorizontalFieldOfView_0;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::Width
	int32_t ___Width_1;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::Height
	int32_t ___Height_2;
	// Wikitude.CaptureDevicePosition Wikitude.ColorCameraFrameMetadata::CameraPosition
	int32_t ___CameraPosition_3;
	// Wikitude.FrameColorSpace Wikitude.ColorCameraFrameMetadata::ColorSpace
	int32_t ___ColorSpace_4;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::TimestampScale
	int32_t ___TimestampScale_5;
	// System.Boolean Wikitude.ColorCameraFrameMetadata::HasIntrinsicsCalibration
	bool ___HasIntrinsicsCalibration_6;
	// Wikitude.IntrinsicsCalibration Wikitude.ColorCameraFrameMetadata::IntrinsicsCalibration
	IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 ___IntrinsicsCalibration_7;
};
// Native definition for P/Invoke marshalling of Wikitude.ColorCameraFrameMetadata
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke
{
	float ___HorizontalFieldOfView_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
	int32_t ___CameraPosition_3;
	int32_t ___ColorSpace_4;
	int32_t ___TimestampScale_5;
	int32_t ___HasIntrinsicsCalibration_6;
	IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 ___IntrinsicsCalibration_7;
};
// Native definition for COM marshalling of Wikitude.ColorCameraFrameMetadata
struct ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com
{
	float ___HorizontalFieldOfView_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
	int32_t ___CameraPosition_3;
	int32_t ___ColorSpace_4;
	int32_t ___TimestampScale_5;
	int32_t ___HasIntrinsicsCalibration_6;
	IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 ___IntrinsicsCalibration_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Wikitude.CameraFrame
struct CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1  : public RuntimeObject
{
	// System.Int64 Wikitude.CameraFrame::_frameId
	int64_t ____frameId_0;
	// System.Int64 Wikitude.CameraFrame::_colorTimestamp
	int64_t ____colorTimestamp_1;
	// Wikitude.ColorCameraFrameMetadata Wikitude.CameraFrame::_colorMetadata
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 ____colorMetadata_2;
	// System.Collections.Generic.List`1<Wikitude.CameraFramePlane> Wikitude.CameraFrame::_colorData
	List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* ____colorData_3;
	// System.Boolean Wikitude.CameraFrame::_hasPose
	bool ____hasPose_4;
	// Wikitude.Matrix Wikitude.CameraFrame::Matrix
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___Matrix_5;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Wikitude.UnityFrame
struct UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A 
{
	// System.Int64 Wikitude.UnityFrame::FrameId
	int64_t ___FrameId_0;
	// System.Int64 Wikitude.UnityFrame::Timestamp
	int64_t ___Timestamp_1;
	// Wikitude.ColorCameraFrameMetadata Wikitude.UnityFrame::ColorMetadata
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 ___ColorMetadata_2;
	// System.IntPtr Wikitude.UnityFrame::Planes
	intptr_t ___Planes_3;
	// System.Int32 Wikitude.UnityFrame::SizeOfPlaneData
	int32_t ___SizeOfPlaneData_4;
	// System.Int32 Wikitude.UnityFrame::PlaneCount
	int32_t ___PlaneCount_5;
	// System.Boolean Wikitude.UnityFrame::HasPose
	bool ___HasPose_6;
	// Wikitude.Matrix Wikitude.UnityFrame::Matrix
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___Matrix_7;
};
// Native definition for P/Invoke marshalling of Wikitude.UnityFrame
struct UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_pinvoke
{
	int64_t ___FrameId_0;
	int64_t ___Timestamp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke ___ColorMetadata_2;
	intptr_t ___Planes_3;
	int32_t ___SizeOfPlaneData_4;
	int32_t ___PlaneCount_5;
	int32_t ___HasPose_6;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___Matrix_7;
};
// Native definition for COM marshalling of Wikitude.UnityFrame
struct UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_com
{
	int64_t ___FrameId_0;
	int64_t ___Timestamp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com ___ColorMetadata_2;
	intptr_t ___Planes_3;
	int32_t ___SizeOfPlaneData_4;
	int32_t ___PlaneCount_5;
	int32_t ___HasPose_6;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___Matrix_7;
};

// Wikitude.BridgeFactory/PlatformBridgeConstructor
struct PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2  : public MulticastDelegate_t
{
};

// Wikitude.BridgeFactory/WikitudeBridgeConstructor
struct WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>

// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>

// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>
struct List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// Wikitude.BridgeFactory
struct BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor> Wikitude.BridgeFactory::_wikitudeBridgeConstructors
	Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* ____wikitudeBridgeConstructors_0;
	// System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor> Wikitude.BridgeFactory::_platformBridgeConstructors
	Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* ____platformBridgeConstructors_1;
};

// Wikitude.BridgeFactory

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// Wikitude.Log

// Wikitude.Log

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Wikitude.ImageTargetScale

// Wikitude.ImageTargetScale

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Wikitude.Matrix

// Wikitude.Matrix

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// Wikitude.ObjectTargetScale

// Wikitude.ObjectTargetScale

// Wikitude.Point

// Wikitude.Point

// System.Single

// System.Single

// Wikitude.StaticPlatformBridgeInitializer

// Wikitude.StaticPlatformBridgeInitializer

// Wikitude.StaticWikitudeBridgeInitializer

// Wikitude.StaticWikitudeBridgeInitializer

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// Wikitude.CSharpFunctions

// Wikitude.CSharpFunctions

// Wikitude.CameraFramePlane

// Wikitude.CameraFramePlane

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Wikitude.IntrinsicsCalibration

// Wikitude.IntrinsicsCalibration

// Wikitude.MarshalImageTarget

// Wikitude.MarshalImageTarget

// Wikitude.MarshalObjectTarget

// Wikitude.MarshalObjectTarget

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Wikitude.ColorCameraFrameMetadata

// Wikitude.ColorCameraFrameMetadata

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.AsyncCallback

// System.AsyncCallback

// Wikitude.CameraFrame

// Wikitude.CameraFrame

// System.NotSupportedException

// System.NotSupportedException

// Wikitude.UnityFrame

// Wikitude.UnityFrame

// Wikitude.BridgeFactory/PlatformBridgeConstructor

// Wikitude.BridgeFactory/PlatformBridgeConstructor

// Wikitude.BridgeFactory/WikitudeBridgeConstructor

// Wikitude.BridgeFactory/WikitudeBridgeConstructor
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// Wikitude.CameraFramePlane[]
struct CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982  : public RuntimeArray
{
	ALIGN_FIELD (8) CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E m_Items[1];

	inline CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_back(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled);
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_cleanup(ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_back(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled);
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_cleanup(ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA_gshared (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_gshared_inline (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* __this, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E ___0_item, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>::.ctor()
inline void Dictionary_2__ctor_m082EEAA6215723331A01F6250722271D1277357E (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>::.ctor()
inline void Dictionary_2__ctor_mBEFBD2CC223B63B6A75404352C8BCFDFF5705A58 (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::RunClassConstructor(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_RunClassConstructor_mDDFD9C6755023C06F5534C1EB0F7DF794D1819B6 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD12E63647A4EE60426A6B8F57ECA7E18877B1BB9 (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5EC4F062C5614C20E8C2FEB08055BED1931EA54D (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* __this, String_t* ___0_key, WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE*, String_t*, WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0A9F0EB1350DD855FD59AB37BD39331BDD0F45B0 (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8B296B205E0BAA7FA37C4F4413487FB8FA22416E (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* __this, String_t* ___0_key, PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F*, String_t*, PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m363D563224E2B6C413AD8972B60AFB139F5E5472 (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* __this, String_t* ___0_key, WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE*, String_t*, WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// Wikitude.IWikitudeBridge Wikitude.BridgeFactory/WikitudeBridgeConstructor::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_inline (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m013A0EE51998EB7B7EB1F6BF5169B243723A6B3F (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* __this, String_t* ___0_key, PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F*, String_t*, PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// Wikitude.IPlatformBridge Wikitude.BridgeFactory/PlatformBridgeConstructor::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_inline (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::.ctor(System.Int32)
inline void List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB*, int32_t, const RuntimeMethod*))List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA_gshared)(__this, ___0_capacity, method);
}
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___0_ptr, Type_t* ___1_structureType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::Add(T)
inline void List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_inline (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* __this, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB*, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E, const RuntimeMethod*))List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// System.Void Wikitude.BridgeFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeFactory__cctor_m45F77F5DB91897CFD7CA80959B7F0227C0A4632E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m082EEAA6215723331A01F6250722271D1277357E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBEFBD2CC223B63B6A75404352C8BCFDFF5705A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* L_0 = (Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE*)il2cpp_codegen_object_new(Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m082EEAA6215723331A01F6250722271D1277357E(L_0, Dictionary_2__ctor_m082EEAA6215723331A01F6250722271D1277357E_RuntimeMethod_var);
		((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____wikitudeBridgeConstructors_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____wikitudeBridgeConstructors_0), (void*)L_0);
		Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* L_1 = (Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F*)il2cpp_codegen_object_new(Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mBEFBD2CC223B63B6A75404352C8BCFDFF5705A58(L_1, Dictionary_2__ctor_mBEFBD2CC223B63B6A75404352C8BCFDFF5705A58_RuntimeMethod_var);
		((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____platformBridgeConstructors_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____platformBridgeConstructors_1), (void*)L_1);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_2);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3;
		L_3 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0086;
	}

IL_0023:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Assembly_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(14 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_7);
		V_2 = L_8;
		V_3 = 0;
		goto IL_007c;
	}

IL_0030:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
	}
	try
	{// begin try (depth: 1)
		{
			Type_t* L_13 = V_4;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_15;
			L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
			Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_16;
			L_16 = Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06(L_13, L_15, NULL);
			if (!L_16)
			{
				goto IL_0054_1;
			}
		}
		{
			Type_t* L_17 = V_4;
			NullCheck(L_17);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18;
			L_18 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(104 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_17);
			RuntimeHelpers_RunClassConstructor_mDDFD9C6755023C06F5534C1EB0F7DF794D1819B6(L_18, NULL);
		}

IL_0054_1:
		{
			Type_t* L_19 = V_4;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_21;
			L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
			Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_22;
			L_22 = Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06(L_19, L_21, NULL);
			if (!L_22)
			{
				goto IL_0073_1;
			}
		}
		{
			Type_t* L_23 = V_4;
			NullCheck(L_23);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24;
			L_24 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(104 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_23);
			RuntimeHelpers_RunClassConstructor_mDDFD9C6755023C06F5534C1EB0F7DF794D1819B6(L_24, NULL);
		}

IL_0073_1:
		{
			goto IL_0078;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0075;
		}
		throw e;
	}

CATCH_0075:
	{// begin catch(System.NotSupportedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0078:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void Wikitude.BridgeFactory::RegisterWikitudeBridgeConstructor(System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeFactory_RegisterWikitudeBridgeConstructor_m3B55D1D15C2B7C92F2DFAB4586B980A88DB32155 (String_t* ___0_platformName, WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* ___1_wikitudeBridgeConstructor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5EC4F062C5614C20E8C2FEB08055BED1931EA54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD12E63647A4EE60426A6B8F57ECA7E18877B1BB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80409DB1D44791D537D90B7ABC6069A2817181D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* L_0 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____wikitudeBridgeConstructors_0;
		String_t* L_1 = ___0_platformName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD12E63647A4EE60426A6B8F57ECA7E18877B1BB9(L_0, L_1, Dictionary_2_ContainsKey_mD12E63647A4EE60426A6B8F57ECA7E18877B1BB9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___0_platformName;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral80409DB1D44791D537D90B7ABC6069A2817181D0, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* L_5 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____wikitudeBridgeConstructors_0;
		String_t* L_6 = ___0_platformName;
		WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* L_7 = ___1_wikitudeBridgeConstructor;
		NullCheck(L_5);
		Dictionary_2_Add_m5EC4F062C5614C20E8C2FEB08055BED1931EA54D(L_5, L_6, L_7, Dictionary_2_Add_m5EC4F062C5614C20E8C2FEB08055BED1931EA54D_RuntimeMethod_var);
		return;
	}
}
// System.Void Wikitude.BridgeFactory::RegisterPlatformBridgeConstructor(System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeFactory_RegisterPlatformBridgeConstructor_m75C48CA552E38DAC1243406349041D27A2DE2322 (String_t* ___0_platformName, PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* ___1_platformBridgeConstructor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8B296B205E0BAA7FA37C4F4413487FB8FA22416E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0A9F0EB1350DD855FD59AB37BD39331BDD0F45B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80409DB1D44791D537D90B7ABC6069A2817181D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* L_0 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____platformBridgeConstructors_1;
		String_t* L_1 = ___0_platformName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m0A9F0EB1350DD855FD59AB37BD39331BDD0F45B0(L_0, L_1, Dictionary_2_ContainsKey_m0A9F0EB1350DD855FD59AB37BD39331BDD0F45B0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___0_platformName;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral80409DB1D44791D537D90B7ABC6069A2817181D0, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* L_5 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____platformBridgeConstructors_1;
		String_t* L_6 = ___0_platformName;
		PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* L_7 = ___1_platformBridgeConstructor;
		NullCheck(L_5);
		Dictionary_2_Add_m8B296B205E0BAA7FA37C4F4413487FB8FA22416E(L_5, L_6, L_7, Dictionary_2_Add_m8B296B205E0BAA7FA37C4F4413487FB8FA22416E_RuntimeMethod_var);
		return;
	}
}
// Wikitude.IWikitudeBridge Wikitude.BridgeFactory::ConstructWikitudeBridge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BridgeFactory_ConstructWikitudeBridge_mBDE4191860C8F35E3C30E214B4C0D7E1D3E279EA (String_t* ___0_bridgeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m363D563224E2B6C413AD8972B60AFB139F5E5472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE81EE601BD51C621C5DD0CD4BE9BDBD2CEDB3398);
		s_Il2CppMethodInitialized = true;
	}
	WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_tDCDF6B811351DE8C9DC7EA967C7E644805FE89CE* L_0 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____wikitudeBridgeConstructors_0;
		String_t* L_1 = ___0_bridgeName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m363D563224E2B6C413AD8972B60AFB139F5E5472(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m363D563224E2B6C413AD8972B60AFB139F5E5472_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_inline(L_3, NULL);
		return L_4;
	}

IL_0016:
	{
		String_t* L_5 = ___0_bridgeName;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE81EE601BD51C621C5DD0CD4BE9BDBD2CEDB3398, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return (RuntimeObject*)NULL;
	}
}
// Wikitude.IPlatformBridge Wikitude.BridgeFactory::ConstructPlatformBridge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BridgeFactory_ConstructPlatformBridge_m674B0A54A16F4D956617FAEDD9F1D3D9575343EE (String_t* ___0_bridgeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m013A0EE51998EB7B7EB1F6BF5169B243723A6B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD565A634358292218E4310246DFF4B0F0417965);
		s_Il2CppMethodInitialized = true;
	}
	PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var);
		Dictionary_2_t388B845DF6C742DC5C8D0FACCD11F4AEE6C1426F* L_0 = ((BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_StaticFields*)il2cpp_codegen_static_fields_for(BridgeFactory_t30E4F8D1408B2DE05337AD429EB39C5C5666341C_il2cpp_TypeInfo_var))->____platformBridgeConstructors_1;
		String_t* L_1 = ___0_bridgeName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m013A0EE51998EB7B7EB1F6BF5169B243723A6B3F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m013A0EE51998EB7B7EB1F6BF5169B243723A6B3F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_inline(L_3, NULL);
		return L_4;
	}

IL_0016:
	{
		String_t* L_5 = ___0_bridgeName;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBD565A634358292218E4310246DFF4B0F0417965, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return (RuntimeObject*)NULL;
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
RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_Multicast(WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* currentDelegate = reinterpret_cast<WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_OpenInst(WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_OpenStatic(WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_OpenStaticInvoker(WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL);
}
RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_ClosedStaticInvoker(WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Wikitude.BridgeFactory/WikitudeBridgeConstructor::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridgeConstructor__ctor_m7DFA7DC8117655798741CE145B89B3A22C73BD96 (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_Multicast;
}
// Wikitude.IWikitudeBridge Wikitude.BridgeFactory/WikitudeBridgeConstructor::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0 (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Wikitude.BridgeFactory/WikitudeBridgeConstructor::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeBridgeConstructor_BeginInvoke_m56A9F9F67B4BE9DF1DE52CCE5DDEA29C8C5B3336 (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// Wikitude.IWikitudeBridge Wikitude.BridgeFactory/WikitudeBridgeConstructor::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeBridgeConstructor_EndInvoke_mA0BDF82576DB83704249C12C3FD84086FA22C37B (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_Multicast(PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* currentDelegate = reinterpret_cast<PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_OpenInst(PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_OpenStatic(PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_OpenStaticInvoker(PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL);
}
RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_ClosedStaticInvoker(PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Wikitude.BridgeFactory/PlatformBridgeConstructor::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformBridgeConstructor__ctor_m6EC0F88616666B8271B1254DA998E3009105BE31 (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_Multicast;
}
// Wikitude.IPlatformBridge Wikitude.BridgeFactory/PlatformBridgeConstructor::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879 (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Wikitude.BridgeFactory/PlatformBridgeConstructor::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformBridgeConstructor_BeginInvoke_mC56273BDF328CB06126BCE73AA966EB913B88828 (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// Wikitude.IPlatformBridge Wikitude.BridgeFactory/PlatformBridgeConstructor::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformBridgeConstructor_EndInvoke_m7CC05721DE916E9D3741493684BC85686DFD8A76 (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
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
// System.Void Wikitude.Matrix::CopyMatrix(Wikitude.Matrix,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_CopyMatrix_m759DD7B84A1D71E85552E1D841A9AD8B6C8D9FDB (Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE ___0_src, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_dst, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_1 = ___0_src;
		float L_2 = L_1.___m00_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_4 = ___0_src;
		float L_5 = L_4.___m01_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_7 = ___0_src;
		float L_8 = L_7.___m02_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_10 = ___0_src;
		float L_11 = L_10.___m03_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_13 = ___0_src;
		float L_14 = L_13.___m10_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_16 = ___0_src;
		float L_17 = L_16.___m11_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (float)L_17);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_19 = ___0_src;
		float L_20 = L_19.___m12_6;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (float)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_22 = ___0_src;
		float L_23 = L_22.___m13_7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (float)L_23);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_25 = ___0_src;
		float L_26 = L_25.___m20_8;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(8), (float)L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_28 = ___0_src;
		float L_29 = L_28.___m21_9;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (float)L_29);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_31 = ___0_src;
		float L_32 = L_31.___m22_10;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (float)L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_34 = ___0_src;
		float L_35 = L_34.___m23_11;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (float)L_35);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_37 = ___0_src;
		float L_38 = L_37.___m30_12;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (float)L_38);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_40 = ___0_src;
		float L_41 = L_40.___m31_13;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (float)L_41);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_43 = ___0_src;
		float L_44 = L_43.___m32_14;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (float)L_44);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___1_dst;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_46 = ___0_src;
		float L_47 = L_46.___m33_15;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (float)L_47);
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
// Conversion methods for marshalling of: Wikitude.MarshalImageTarget
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_pinvoke(const MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19& unmarshaled, MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_pinvoke& marshaled)
{
	marshaled.___TargetId_0 = unmarshaled.___TargetId_0;
	marshaled.___TrackerId_1 = unmarshaled.___TrackerId_1;
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.___Name_2);
	marshaled.___ModelViewMatrix_3 = unmarshaled.___ModelViewMatrix_3;
	marshaled.___TargetScale_4 = unmarshaled.___TargetScale_4;
	marshaled.___PhysicalTargetHeight_5 = unmarshaled.___PhysicalTargetHeight_5;
	marshaled.___TargetType_6 = unmarshaled.___TargetType_6;
	marshaled.___TargetCircumferenceBase_7 = unmarshaled.___TargetCircumferenceBase_7;
	marshaled.___TargetCircumferenceTop_8 = unmarshaled.___TargetCircumferenceTop_8;
}
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_pinvoke_back(const MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_pinvoke& marshaled, MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19& unmarshaled)
{
	int64_t unmarshaledTargetId_temp_0 = 0;
	unmarshaledTargetId_temp_0 = marshaled.___TargetId_0;
	unmarshaled.___TargetId_0 = unmarshaledTargetId_temp_0;
	int64_t unmarshaledTrackerId_temp_1 = 0;
	unmarshaledTrackerId_temp_1 = marshaled.___TrackerId_1;
	unmarshaled.___TrackerId_1 = unmarshaledTrackerId_temp_1;
	unmarshaled.___Name_2 = il2cpp_codegen_marshal_string_result(marshaled.___Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledModelViewMatrix_temp_3;
	memset((&unmarshaledModelViewMatrix_temp_3), 0, sizeof(unmarshaledModelViewMatrix_temp_3));
	unmarshaledModelViewMatrix_temp_3 = marshaled.___ModelViewMatrix_3;
	unmarshaled.___ModelViewMatrix_3 = unmarshaledModelViewMatrix_temp_3;
	ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 unmarshaledTargetScale_temp_4;
	memset((&unmarshaledTargetScale_temp_4), 0, sizeof(unmarshaledTargetScale_temp_4));
	unmarshaledTargetScale_temp_4 = marshaled.___TargetScale_4;
	unmarshaled.___TargetScale_4 = unmarshaledTargetScale_temp_4;
	float unmarshaledPhysicalTargetHeight_temp_5 = 0.0f;
	unmarshaledPhysicalTargetHeight_temp_5 = marshaled.___PhysicalTargetHeight_5;
	unmarshaled.___PhysicalTargetHeight_5 = unmarshaledPhysicalTargetHeight_temp_5;
	int32_t unmarshaledTargetType_temp_6 = 0;
	unmarshaledTargetType_temp_6 = marshaled.___TargetType_6;
	unmarshaled.___TargetType_6 = unmarshaledTargetType_temp_6;
	float unmarshaledTargetCircumferenceBase_temp_7 = 0.0f;
	unmarshaledTargetCircumferenceBase_temp_7 = marshaled.___TargetCircumferenceBase_7;
	unmarshaled.___TargetCircumferenceBase_7 = unmarshaledTargetCircumferenceBase_temp_7;
	float unmarshaledTargetCircumferenceTop_temp_8 = 0.0f;
	unmarshaledTargetCircumferenceTop_temp_8 = marshaled.___TargetCircumferenceTop_8;
	unmarshaled.___TargetCircumferenceTop_8 = unmarshaledTargetCircumferenceTop_temp_8;
}
// Conversion method for clean up from marshalling of: Wikitude.MarshalImageTarget
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_pinvoke_cleanup(MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// Conversion methods for marshalling of: Wikitude.MarshalImageTarget
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_com(const MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19& unmarshaled, MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_com& marshaled)
{
	marshaled.___TargetId_0 = unmarshaled.___TargetId_0;
	marshaled.___TrackerId_1 = unmarshaled.___TrackerId_1;
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.___Name_2);
	marshaled.___ModelViewMatrix_3 = unmarshaled.___ModelViewMatrix_3;
	marshaled.___TargetScale_4 = unmarshaled.___TargetScale_4;
	marshaled.___PhysicalTargetHeight_5 = unmarshaled.___PhysicalTargetHeight_5;
	marshaled.___TargetType_6 = unmarshaled.___TargetType_6;
	marshaled.___TargetCircumferenceBase_7 = unmarshaled.___TargetCircumferenceBase_7;
	marshaled.___TargetCircumferenceTop_8 = unmarshaled.___TargetCircumferenceTop_8;
}
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_com_back(const MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_com& marshaled, MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19& unmarshaled)
{
	int64_t unmarshaledTargetId_temp_0 = 0;
	unmarshaledTargetId_temp_0 = marshaled.___TargetId_0;
	unmarshaled.___TargetId_0 = unmarshaledTargetId_temp_0;
	int64_t unmarshaledTrackerId_temp_1 = 0;
	unmarshaledTrackerId_temp_1 = marshaled.___TrackerId_1;
	unmarshaled.___TrackerId_1 = unmarshaledTrackerId_temp_1;
	unmarshaled.___Name_2 = il2cpp_codegen_marshal_string_result(marshaled.___Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledModelViewMatrix_temp_3;
	memset((&unmarshaledModelViewMatrix_temp_3), 0, sizeof(unmarshaledModelViewMatrix_temp_3));
	unmarshaledModelViewMatrix_temp_3 = marshaled.___ModelViewMatrix_3;
	unmarshaled.___ModelViewMatrix_3 = unmarshaledModelViewMatrix_temp_3;
	ImageTargetScale_tE9D37691444D2450F96D523874D1D0E34BCE0450 unmarshaledTargetScale_temp_4;
	memset((&unmarshaledTargetScale_temp_4), 0, sizeof(unmarshaledTargetScale_temp_4));
	unmarshaledTargetScale_temp_4 = marshaled.___TargetScale_4;
	unmarshaled.___TargetScale_4 = unmarshaledTargetScale_temp_4;
	float unmarshaledPhysicalTargetHeight_temp_5 = 0.0f;
	unmarshaledPhysicalTargetHeight_temp_5 = marshaled.___PhysicalTargetHeight_5;
	unmarshaled.___PhysicalTargetHeight_5 = unmarshaledPhysicalTargetHeight_temp_5;
	int32_t unmarshaledTargetType_temp_6 = 0;
	unmarshaledTargetType_temp_6 = marshaled.___TargetType_6;
	unmarshaled.___TargetType_6 = unmarshaledTargetType_temp_6;
	float unmarshaledTargetCircumferenceBase_temp_7 = 0.0f;
	unmarshaledTargetCircumferenceBase_temp_7 = marshaled.___TargetCircumferenceBase_7;
	unmarshaled.___TargetCircumferenceBase_7 = unmarshaledTargetCircumferenceBase_temp_7;
	float unmarshaledTargetCircumferenceTop_temp_8 = 0.0f;
	unmarshaledTargetCircumferenceTop_temp_8 = marshaled.___TargetCircumferenceTop_8;
	unmarshaled.___TargetCircumferenceTop_8 = unmarshaledTargetCircumferenceTop_temp_8;
}
// Conversion method for clean up from marshalling of: Wikitude.MarshalImageTarget
IL2CPP_EXTERN_C void MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshal_com_cleanup(MarshalImageTarget_t80B1FC603A4D02CFB6E8CBE90AC1C86463B9BF19_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
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
// Conversion methods for marshalling of: Wikitude.MarshalObjectTarget
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_pinvoke(const MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918& unmarshaled, MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_pinvoke& marshaled)
{
	marshaled.___TargetId_0 = unmarshaled.___TargetId_0;
	marshaled.___TrackerId_1 = unmarshaled.___TrackerId_1;
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.___Name_2);
	marshaled.___ModelViewMatrix_3 = unmarshaled.___ModelViewMatrix_3;
	marshaled.___TargetScale_4 = unmarshaled.___TargetScale_4;
}
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_pinvoke_back(const MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_pinvoke& marshaled, MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918& unmarshaled)
{
	int64_t unmarshaledTargetId_temp_0 = 0;
	unmarshaledTargetId_temp_0 = marshaled.___TargetId_0;
	unmarshaled.___TargetId_0 = unmarshaledTargetId_temp_0;
	int64_t unmarshaledTrackerId_temp_1 = 0;
	unmarshaledTrackerId_temp_1 = marshaled.___TrackerId_1;
	unmarshaled.___TrackerId_1 = unmarshaledTrackerId_temp_1;
	unmarshaled.___Name_2 = il2cpp_codegen_marshal_string_result(marshaled.___Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledModelViewMatrix_temp_3;
	memset((&unmarshaledModelViewMatrix_temp_3), 0, sizeof(unmarshaledModelViewMatrix_temp_3));
	unmarshaledModelViewMatrix_temp_3 = marshaled.___ModelViewMatrix_3;
	unmarshaled.___ModelViewMatrix_3 = unmarshaledModelViewMatrix_temp_3;
	ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 unmarshaledTargetScale_temp_4;
	memset((&unmarshaledTargetScale_temp_4), 0, sizeof(unmarshaledTargetScale_temp_4));
	unmarshaledTargetScale_temp_4 = marshaled.___TargetScale_4;
	unmarshaled.___TargetScale_4 = unmarshaledTargetScale_temp_4;
}
// Conversion method for clean up from marshalling of: Wikitude.MarshalObjectTarget
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_pinvoke_cleanup(MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// Conversion methods for marshalling of: Wikitude.MarshalObjectTarget
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_com(const MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918& unmarshaled, MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_com& marshaled)
{
	marshaled.___TargetId_0 = unmarshaled.___TargetId_0;
	marshaled.___TrackerId_1 = unmarshaled.___TrackerId_1;
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.___Name_2);
	marshaled.___ModelViewMatrix_3 = unmarshaled.___ModelViewMatrix_3;
	marshaled.___TargetScale_4 = unmarshaled.___TargetScale_4;
}
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_com_back(const MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_com& marshaled, MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918& unmarshaled)
{
	int64_t unmarshaledTargetId_temp_0 = 0;
	unmarshaledTargetId_temp_0 = marshaled.___TargetId_0;
	unmarshaled.___TargetId_0 = unmarshaledTargetId_temp_0;
	int64_t unmarshaledTrackerId_temp_1 = 0;
	unmarshaledTrackerId_temp_1 = marshaled.___TrackerId_1;
	unmarshaled.___TrackerId_1 = unmarshaledTrackerId_temp_1;
	unmarshaled.___Name_2 = il2cpp_codegen_marshal_string_result(marshaled.___Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledModelViewMatrix_temp_3;
	memset((&unmarshaledModelViewMatrix_temp_3), 0, sizeof(unmarshaledModelViewMatrix_temp_3));
	unmarshaledModelViewMatrix_temp_3 = marshaled.___ModelViewMatrix_3;
	unmarshaled.___ModelViewMatrix_3 = unmarshaledModelViewMatrix_temp_3;
	ObjectTargetScale_t08DEC2D3E808C99615FC89E2DF70DEF354762402 unmarshaledTargetScale_temp_4;
	memset((&unmarshaledTargetScale_temp_4), 0, sizeof(unmarshaledTargetScale_temp_4));
	unmarshaledTargetScale_temp_4 = marshaled.___TargetScale_4;
	unmarshaled.___TargetScale_4 = unmarshaledTargetScale_temp_4;
}
// Conversion method for clean up from marshalling of: Wikitude.MarshalObjectTarget
IL2CPP_EXTERN_C void MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshal_com_cleanup(MarshalObjectTarget_t7250857D50288C3FC7DB4475BBCA8EE46445C918_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
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
// Conversion methods for marshalling of: Wikitude.ColorCameraFrameMetadata
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled)
{
	marshaled.___HorizontalFieldOfView_0 = unmarshaled.___HorizontalFieldOfView_0;
	marshaled.___Width_1 = unmarshaled.___Width_1;
	marshaled.___Height_2 = unmarshaled.___Height_2;
	marshaled.___CameraPosition_3 = unmarshaled.___CameraPosition_3;
	marshaled.___ColorSpace_4 = unmarshaled.___ColorSpace_4;
	marshaled.___TimestampScale_5 = unmarshaled.___TimestampScale_5;
	marshaled.___HasIntrinsicsCalibration_6 = static_cast<int32_t>(unmarshaled.___HasIntrinsicsCalibration_6);
	marshaled.___IntrinsicsCalibration_7 = unmarshaled.___IntrinsicsCalibration_7;
}
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_back(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled)
{
	float unmarshaledHorizontalFieldOfView_temp_0 = 0.0f;
	unmarshaledHorizontalFieldOfView_temp_0 = marshaled.___HorizontalFieldOfView_0;
	unmarshaled.___HorizontalFieldOfView_0 = unmarshaledHorizontalFieldOfView_temp_0;
	int32_t unmarshaledWidth_temp_1 = 0;
	unmarshaledWidth_temp_1 = marshaled.___Width_1;
	unmarshaled.___Width_1 = unmarshaledWidth_temp_1;
	int32_t unmarshaledHeight_temp_2 = 0;
	unmarshaledHeight_temp_2 = marshaled.___Height_2;
	unmarshaled.___Height_2 = unmarshaledHeight_temp_2;
	int32_t unmarshaledCameraPosition_temp_3 = 0;
	unmarshaledCameraPosition_temp_3 = marshaled.___CameraPosition_3;
	unmarshaled.___CameraPosition_3 = unmarshaledCameraPosition_temp_3;
	int32_t unmarshaledColorSpace_temp_4 = 0;
	unmarshaledColorSpace_temp_4 = marshaled.___ColorSpace_4;
	unmarshaled.___ColorSpace_4 = unmarshaledColorSpace_temp_4;
	int32_t unmarshaledTimestampScale_temp_5 = 0;
	unmarshaledTimestampScale_temp_5 = marshaled.___TimestampScale_5;
	unmarshaled.___TimestampScale_5 = unmarshaledTimestampScale_temp_5;
	bool unmarshaledHasIntrinsicsCalibration_temp_6 = false;
	unmarshaledHasIntrinsicsCalibration_temp_6 = static_cast<bool>(marshaled.___HasIntrinsicsCalibration_6);
	unmarshaled.___HasIntrinsicsCalibration_6 = unmarshaledHasIntrinsicsCalibration_temp_6;
	IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 unmarshaledIntrinsicsCalibration_temp_7;
	memset((&unmarshaledIntrinsicsCalibration_temp_7), 0, sizeof(unmarshaledIntrinsicsCalibration_temp_7));
	unmarshaledIntrinsicsCalibration_temp_7 = marshaled.___IntrinsicsCalibration_7;
	unmarshaled.___IntrinsicsCalibration_7 = unmarshaledIntrinsicsCalibration_temp_7;
}
// Conversion method for clean up from marshalling of: Wikitude.ColorCameraFrameMetadata
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_cleanup(ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Wikitude.ColorCameraFrameMetadata
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled)
{
	marshaled.___HorizontalFieldOfView_0 = unmarshaled.___HorizontalFieldOfView_0;
	marshaled.___Width_1 = unmarshaled.___Width_1;
	marshaled.___Height_2 = unmarshaled.___Height_2;
	marshaled.___CameraPosition_3 = unmarshaled.___CameraPosition_3;
	marshaled.___ColorSpace_4 = unmarshaled.___ColorSpace_4;
	marshaled.___TimestampScale_5 = unmarshaled.___TimestampScale_5;
	marshaled.___HasIntrinsicsCalibration_6 = static_cast<int32_t>(unmarshaled.___HasIntrinsicsCalibration_6);
	marshaled.___IntrinsicsCalibration_7 = unmarshaled.___IntrinsicsCalibration_7;
}
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_back(const ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2& unmarshaled)
{
	float unmarshaledHorizontalFieldOfView_temp_0 = 0.0f;
	unmarshaledHorizontalFieldOfView_temp_0 = marshaled.___HorizontalFieldOfView_0;
	unmarshaled.___HorizontalFieldOfView_0 = unmarshaledHorizontalFieldOfView_temp_0;
	int32_t unmarshaledWidth_temp_1 = 0;
	unmarshaledWidth_temp_1 = marshaled.___Width_1;
	unmarshaled.___Width_1 = unmarshaledWidth_temp_1;
	int32_t unmarshaledHeight_temp_2 = 0;
	unmarshaledHeight_temp_2 = marshaled.___Height_2;
	unmarshaled.___Height_2 = unmarshaledHeight_temp_2;
	int32_t unmarshaledCameraPosition_temp_3 = 0;
	unmarshaledCameraPosition_temp_3 = marshaled.___CameraPosition_3;
	unmarshaled.___CameraPosition_3 = unmarshaledCameraPosition_temp_3;
	int32_t unmarshaledColorSpace_temp_4 = 0;
	unmarshaledColorSpace_temp_4 = marshaled.___ColorSpace_4;
	unmarshaled.___ColorSpace_4 = unmarshaledColorSpace_temp_4;
	int32_t unmarshaledTimestampScale_temp_5 = 0;
	unmarshaledTimestampScale_temp_5 = marshaled.___TimestampScale_5;
	unmarshaled.___TimestampScale_5 = unmarshaledTimestampScale_temp_5;
	bool unmarshaledHasIntrinsicsCalibration_temp_6 = false;
	unmarshaledHasIntrinsicsCalibration_temp_6 = static_cast<bool>(marshaled.___HasIntrinsicsCalibration_6);
	unmarshaled.___HasIntrinsicsCalibration_6 = unmarshaledHasIntrinsicsCalibration_temp_6;
	IntrinsicsCalibration_t2451DDFAFE4F6D8C6ED931E11248CBE4950E6215 unmarshaledIntrinsicsCalibration_temp_7;
	memset((&unmarshaledIntrinsicsCalibration_temp_7), 0, sizeof(unmarshaledIntrinsicsCalibration_temp_7));
	unmarshaledIntrinsicsCalibration_temp_7 = marshaled.___IntrinsicsCalibration_7;
	unmarshaled.___IntrinsicsCalibration_7 = unmarshaledIntrinsicsCalibration_temp_7;
}
// Conversion method for clean up from marshalling of: Wikitude.ColorCameraFrameMetadata
IL2CPP_EXTERN_C void ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_cleanup(ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Wikitude.UnityFrame
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_pinvoke(const UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A& unmarshaled, UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_pinvoke& marshaled)
{
	marshaled.___FrameId_0 = unmarshaled.___FrameId_0;
	marshaled.___Timestamp_1 = unmarshaled.___Timestamp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke(unmarshaled.___ColorMetadata_2, marshaled.___ColorMetadata_2);
	marshaled.___Planes_3 = unmarshaled.___Planes_3;
	marshaled.___SizeOfPlaneData_4 = unmarshaled.___SizeOfPlaneData_4;
	marshaled.___PlaneCount_5 = unmarshaled.___PlaneCount_5;
	marshaled.___HasPose_6 = static_cast<int32_t>(unmarshaled.___HasPose_6);
	marshaled.___Matrix_7 = unmarshaled.___Matrix_7;
}
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_pinvoke_back(const UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_pinvoke& marshaled, UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A& unmarshaled)
{
	int64_t unmarshaledFrameId_temp_0 = 0;
	unmarshaledFrameId_temp_0 = marshaled.___FrameId_0;
	unmarshaled.___FrameId_0 = unmarshaledFrameId_temp_0;
	int64_t unmarshaledTimestamp_temp_1 = 0;
	unmarshaledTimestamp_temp_1 = marshaled.___Timestamp_1;
	unmarshaled.___Timestamp_1 = unmarshaledTimestamp_temp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 unmarshaledColorMetadata_temp_2;
	memset((&unmarshaledColorMetadata_temp_2), 0, sizeof(unmarshaledColorMetadata_temp_2));
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_back(marshaled.___ColorMetadata_2, unmarshaledColorMetadata_temp_2);
	unmarshaled.___ColorMetadata_2 = unmarshaledColorMetadata_temp_2;
	intptr_t unmarshaledPlanes_temp_3;
	memset((&unmarshaledPlanes_temp_3), 0, sizeof(unmarshaledPlanes_temp_3));
	unmarshaledPlanes_temp_3 = marshaled.___Planes_3;
	unmarshaled.___Planes_3 = unmarshaledPlanes_temp_3;
	int32_t unmarshaledSizeOfPlaneData_temp_4 = 0;
	unmarshaledSizeOfPlaneData_temp_4 = marshaled.___SizeOfPlaneData_4;
	unmarshaled.___SizeOfPlaneData_4 = unmarshaledSizeOfPlaneData_temp_4;
	int32_t unmarshaledPlaneCount_temp_5 = 0;
	unmarshaledPlaneCount_temp_5 = marshaled.___PlaneCount_5;
	unmarshaled.___PlaneCount_5 = unmarshaledPlaneCount_temp_5;
	bool unmarshaledHasPose_temp_6 = false;
	unmarshaledHasPose_temp_6 = static_cast<bool>(marshaled.___HasPose_6);
	unmarshaled.___HasPose_6 = unmarshaledHasPose_temp_6;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledMatrix_temp_7;
	memset((&unmarshaledMatrix_temp_7), 0, sizeof(unmarshaledMatrix_temp_7));
	unmarshaledMatrix_temp_7 = marshaled.___Matrix_7;
	unmarshaled.___Matrix_7 = unmarshaledMatrix_temp_7;
}
// Conversion method for clean up from marshalling of: Wikitude.UnityFrame
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_pinvoke_cleanup(UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_pinvoke& marshaled)
{
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_pinvoke_cleanup(marshaled.___ColorMetadata_2);
}


// Conversion methods for marshalling of: Wikitude.UnityFrame
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_com(const UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A& unmarshaled, UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_com& marshaled)
{
	marshaled.___FrameId_0 = unmarshaled.___FrameId_0;
	marshaled.___Timestamp_1 = unmarshaled.___Timestamp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com(unmarshaled.___ColorMetadata_2, marshaled.___ColorMetadata_2);
	marshaled.___Planes_3 = unmarshaled.___Planes_3;
	marshaled.___SizeOfPlaneData_4 = unmarshaled.___SizeOfPlaneData_4;
	marshaled.___PlaneCount_5 = unmarshaled.___PlaneCount_5;
	marshaled.___HasPose_6 = static_cast<int32_t>(unmarshaled.___HasPose_6);
	marshaled.___Matrix_7 = unmarshaled.___Matrix_7;
}
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_com_back(const UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_com& marshaled, UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A& unmarshaled)
{
	int64_t unmarshaledFrameId_temp_0 = 0;
	unmarshaledFrameId_temp_0 = marshaled.___FrameId_0;
	unmarshaled.___FrameId_0 = unmarshaledFrameId_temp_0;
	int64_t unmarshaledTimestamp_temp_1 = 0;
	unmarshaledTimestamp_temp_1 = marshaled.___Timestamp_1;
	unmarshaled.___Timestamp_1 = unmarshaledTimestamp_temp_1;
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 unmarshaledColorMetadata_temp_2;
	memset((&unmarshaledColorMetadata_temp_2), 0, sizeof(unmarshaledColorMetadata_temp_2));
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_back(marshaled.___ColorMetadata_2, unmarshaledColorMetadata_temp_2);
	unmarshaled.___ColorMetadata_2 = unmarshaledColorMetadata_temp_2;
	intptr_t unmarshaledPlanes_temp_3;
	memset((&unmarshaledPlanes_temp_3), 0, sizeof(unmarshaledPlanes_temp_3));
	unmarshaledPlanes_temp_3 = marshaled.___Planes_3;
	unmarshaled.___Planes_3 = unmarshaledPlanes_temp_3;
	int32_t unmarshaledSizeOfPlaneData_temp_4 = 0;
	unmarshaledSizeOfPlaneData_temp_4 = marshaled.___SizeOfPlaneData_4;
	unmarshaled.___SizeOfPlaneData_4 = unmarshaledSizeOfPlaneData_temp_4;
	int32_t unmarshaledPlaneCount_temp_5 = 0;
	unmarshaledPlaneCount_temp_5 = marshaled.___PlaneCount_5;
	unmarshaled.___PlaneCount_5 = unmarshaledPlaneCount_temp_5;
	bool unmarshaledHasPose_temp_6 = false;
	unmarshaledHasPose_temp_6 = static_cast<bool>(marshaled.___HasPose_6);
	unmarshaled.___HasPose_6 = unmarshaledHasPose_temp_6;
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE unmarshaledMatrix_temp_7;
	memset((&unmarshaledMatrix_temp_7), 0, sizeof(unmarshaledMatrix_temp_7));
	unmarshaledMatrix_temp_7 = marshaled.___Matrix_7;
	unmarshaled.___Matrix_7 = unmarshaledMatrix_temp_7;
}
// Conversion method for clean up from marshalling of: Wikitude.UnityFrame
IL2CPP_EXTERN_C void UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshal_com_cleanup(UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A_marshaled_com& marshaled)
{
	ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2_marshal_com_cleanup(marshaled.___ColorMetadata_2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 Wikitude.CameraFrame::get_FrameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CameraFrame_get_FrameId_m2B09DF0B01A06C8EEB015A19668F32E8173A1ADE (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____frameId_0;
		return L_0;
	}
}
// System.Int64 Wikitude.CameraFrame::get_ColorTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CameraFrame_get_ColorTimestamp_mFF3CAB6774F720BEC803E71EFDF6574FF3CE85FD (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____colorTimestamp_1;
		return L_0;
	}
}
// Wikitude.ColorCameraFrameMetadata Wikitude.CameraFrame::get_ColorMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 CameraFrame_get_ColorMetadata_m97D5D144A853C2127C0248B5774A2D3F38AF7FCD (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, const RuntimeMethod* method) 
{
	{
		ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 L_0 = __this->____colorMetadata_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Wikitude.CameraFramePlane> Wikitude.CameraFrame::get_ColorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* CameraFrame_get_ColorData_m2BC361713D72C99787CE856EEEAAF21FB7432C32 (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* L_0 = __this->____colorData_3;
		return L_0;
	}
}
// System.Void Wikitude.CameraFrame::.ctor(System.Int64,System.Int64,Wikitude.ColorCameraFrameMetadata,System.Collections.Generic.List`1<Wikitude.CameraFramePlane>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFrame__ctor_mDF9F6A1FFA6676F2902C984109FB7038977F5E6D (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, int64_t ___0_frameId, int64_t ___1_colorTimestamp, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 ___2_colorMetadata, List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* ___3_colorData, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___0_frameId;
		__this->____frameId_0 = L_0;
		int64_t L_1 = ___1_colorTimestamp;
		__this->____colorTimestamp_1 = L_1;
		ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 L_2 = ___2_colorMetadata;
		__this->____colorMetadata_2 = L_2;
		List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* L_3 = ___3_colorData;
		__this->____colorData_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colorData_3), (void*)L_3);
		__this->____hasPose_4 = (bool)0;
		return;
	}
}
// System.Void Wikitude.CameraFrame::.ctor(System.Int64,System.Int64,Wikitude.ColorCameraFrameMetadata,System.Collections.Generic.List`1<Wikitude.CameraFramePlane>,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFrame__ctor_m587E59B820BCEAC6AC1FE954500DBA1F5BC725AD (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, int64_t ___0_frameId, int64_t ___1_colorTimestamp, ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 ___2_colorMetadata, List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* ___3_colorData, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_pose, const RuntimeMethod* method) 
{
	Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___0_frameId;
		__this->____frameId_0 = L_0;
		int64_t L_1 = ___1_colorTimestamp;
		__this->____colorTimestamp_1 = L_1;
		ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 L_2 = ___2_colorMetadata;
		__this->____colorMetadata_2 = L_2;
		List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* L_3 = ___3_colorData;
		__this->____colorData_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colorData_3), (void*)L_3);
		__this->____hasPose_4 = (bool)1;
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___4_pose;
		float L_5 = L_4.___m00_0;
		(&V_0)->___m00_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___4_pose;
		float L_7 = L_6.___m10_1;
		(&V_0)->___m01_1 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___4_pose;
		float L_9 = L_8.___m20_2;
		(&V_0)->___m02_2 = L_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___4_pose;
		float L_11 = L_10.___m30_3;
		(&V_0)->___m03_3 = L_11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___4_pose;
		float L_13 = L_12.___m01_4;
		(&V_0)->___m10_4 = L_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___4_pose;
		float L_15 = L_14.___m11_5;
		(&V_0)->___m11_5 = L_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___4_pose;
		float L_17 = L_16.___m21_6;
		(&V_0)->___m12_6 = L_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ___4_pose;
		float L_19 = L_18.___m31_7;
		(&V_0)->___m13_7 = L_19;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = ___4_pose;
		float L_21 = L_20.___m02_8;
		(&V_0)->___m20_8 = L_21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ___4_pose;
		float L_23 = L_22.___m12_9;
		(&V_0)->___m21_9 = L_23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___4_pose;
		float L_25 = L_24.___m22_10;
		(&V_0)->___m22_10 = L_25;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___4_pose;
		float L_27 = L_26.___m32_11;
		(&V_0)->___m23_11 = L_27;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28 = ___4_pose;
		float L_29 = L_28.___m03_12;
		(&V_0)->___m30_12 = L_29;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30 = ___4_pose;
		float L_31 = L_30.___m13_13;
		(&V_0)->___m31_13 = L_31;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_32 = ___4_pose;
		float L_33 = L_32.___m23_14;
		(&V_0)->___m32_14 = L_33;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = ___4_pose;
		float L_35 = L_34.___m33_15;
		(&V_0)->___m33_15 = L_35;
		Matrix_tEA72BBAE0FFB097A785DDE1D801AE509C94011AE L_36 = V_0;
		__this->___Matrix_5 = L_36;
		return;
	}
}
// System.Void Wikitude.CameraFrame::.ctor(Wikitude.UnityFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFrame__ctor_mFAC8D2AC5C21ADB2A9FABAA2449D7AD77AD8951E (CameraFrame_tB0FBE59CAC205C6859CFF234F3A39AC7464047B1* __this, UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A ___0_unityFrame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_0 = ___0_unityFrame;
		int64_t L_1 = L_0.___FrameId_0;
		__this->____frameId_0 = L_1;
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_2 = ___0_unityFrame;
		int64_t L_3 = L_2.___Timestamp_1;
		__this->____colorTimestamp_1 = L_3;
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_4 = ___0_unityFrame;
		ColorCameraFrameMetadata_tE00EC96666EE099CB269A4BAAEC33661ECC225F2 L_5 = L_4.___ColorMetadata_2;
		__this->____colorMetadata_2 = L_5;
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_6 = ___0_unityFrame;
		int32_t L_7 = L_6.___PlaneCount_5;
		List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* L_8 = (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB*)il2cpp_codegen_object_new(List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA(L_8, L_7, List_1__ctor_m89B9BA1DD62BF320EB19D62E6C1C4FBEFB8F22FA_RuntimeMethod_var);
		__this->____colorData_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colorData_3), (void*)L_8);
		V_0 = 0;
		goto IL_0080;
	}

IL_003f:
	{
		intptr_t* L_9 = (&(&___0_unityFrame)->___Planes_3);
		int64_t L_10;
		L_10 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032(L_9, NULL);
		int32_t L_11 = V_0;
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_12 = ___0_unityFrame;
		int32_t L_13 = L_12.___SizeOfPlaneData_4;
		intptr_t L_14;
		memset((&L_14), 0, sizeof(L_14));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_14), ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), ((int64_t)L_13))))), /*hidden argument*/NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_14, L_16, NULL);
		V_1 = ((*(CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E*)((CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E*)(CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E*)UnBox(L_17, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E_il2cpp_TypeInfo_var))));
		List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* L_18 = __this->____colorData_3;
		CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E L_19 = V_1;
		NullCheck(L_18);
		List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_inline(L_18, L_19, List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_RuntimeMethod_var);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0080:
	{
		int32_t L_21 = V_0;
		UnityFrame_t53F91F591E760BE49B7E1D1800DAA7FCA227525A L_22 = ___0_unityFrame;
		int32_t L_23 = L_22.___PlaneCount_5;
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_003f;
		}
	}
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
// System.Void Wikitude.Log::v(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_v_mC4C5264CD2E4C8BCDC2C06660C1ECA85AA94D2C9 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D0526A16E79646D1E3EF86C75815134D34731);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9B5D0526A16E79646D1E3EF86C75815134D34731, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		return;
	}
}
// System.Void Wikitude.Log::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_e_mA1D76ADC1414EE5FA8299050303EF8F55AEB88B3 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D0526A16E79646D1E3EF86C75815134D34731);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9B5D0526A16E79646D1E3EF86C75815134D34731, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		return;
	}
}
// System.Void Wikitude.Log::PrintMatrix(System.String,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_PrintMatrix_m394EAF47CD262DCD318C158646F151F6AA9B28AD (String_t* ___0_matrixLabel, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_matrix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C7E6F9C180E55A31892257003D5305E60BA528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___0_matrixLabel;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral50C7E6F9C180E55A31892257003D5305E60BA528, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___1_matrix;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0047;
	}

IL_0020:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		StringBuilder_t* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_13;
		L_13 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_3), L_12, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83, NULL);
		return;
	}
}
// System.Void Wikitude.Log::BeginSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_BeginSample_m42ADF1DB5E30D5CFC153E534A87FD53B30E1772E (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Wikitude.Log::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_EndSample_m877362D70FD2311BFD50303DE22E09BE5BFF3530 (const RuntimeMethod* method) 
{
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
// System.Void Wikitude.StaticPlatformBridgeInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticPlatformBridgeInitializer__ctor_m1B59DC1C69CE90116C8C51E61A87E18F0409079D (StaticPlatformBridgeInitializer_t6B5FAF57203AC7FCB02BD0DCC03EB16CEE15EDA8* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Wikitude.StaticWikitudeBridgeInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticWikitudeBridgeInitializer__ctor_m327AAE4020593361C8133EEEB307A623D9A56BD7 (StaticWikitudeBridgeInitializer_t6FA1498EED73091D8046D872B7C8501FBD9F40E1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WikitudeBridgeConstructor_Invoke_mC036E3448AC0F17EA17295FE84DAFF39DD200CE0_inline (WikitudeBridgeConstructor_t54F5F2CB00A4F7633411A8BDDCE85EC17FF17C4C* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlatformBridgeConstructor_Invoke_m414C87A298CF0EFAF33885FAB43014F9FB043879_inline (PlatformBridgeConstructor_t9C07955E1C4008B6A5E25172CB19B7E92F0A98B2* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mFB0D961910FB74D5D4A1E7978E1DADAFEE06500F_gshared_inline (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB* __this, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E ___0_item, const RuntimeMethod* method) 
{
	CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* L_1 = (CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CameraFramePlaneU5BU5D_t068DAC1A81EBB07EED5E4EF4AFFBE6BB5EC51982* L_6 = V_0;
		int32_t L_7 = V_1;
		CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E)L_8);
		return;
	}

IL_0034:
	{
		CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E L_9 = ___0_item;
		((  void (*) (List_1_t9EE19F36735C28765555CB7E86BDE0991C8753AB*, CameraFramePlane_tED575CAD192F38CC27320843C73A2F65EFA2083E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
