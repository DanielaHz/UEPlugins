// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleanMaster/Public/CleanMasterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanMasterBase() {}

// Begin Cross Module References
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterBase();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterBase_NoRegister();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_CleanMaster();
// End Cross Module References

// Begin Class UCleanMasterBase
void UCleanMasterBase::StaticRegisterNativesUCleanMasterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanMasterBase);
UClass* Z_Construct_UClass_UCleanMasterBase_NoRegister()
{
	return UCleanMasterBase::StaticClass();
}
struct Z_Construct_UClass_UCleanMasterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Object handles all of the basic logic of the plugin.\n */" },
#endif
		{ "IncludePath", "CleanMasterBase.h" },
		{ "ModuleRelativePath", "Public/CleanMasterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object handles all of the basic logic of the plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CleanMasterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanMasterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCleanMasterBase_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCleanMasterBase, EditorWidget), Z_Construct_UClass_UCleanMasterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorWidget_MetaData), NewProp_EditorWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanMasterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanMasterBase_Statics::NewProp_EditorWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCleanMasterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CleanMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanMasterBase_Statics::ClassParams = {
	&UCleanMasterBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCleanMasterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanMasterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCleanMasterBase()
{
	if (!Z_Registration_Info_UClass_UCleanMasterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanMasterBase.OuterSingleton, Z_Construct_UClass_UCleanMasterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCleanMasterBase.OuterSingleton;
}
template<> CLEANMASTER_API UClass* StaticClass<UCleanMasterBase>()
{
	return UCleanMasterBase::StaticClass();
}
UCleanMasterBase::UCleanMasterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanMasterBase);
UCleanMasterBase::~UCleanMasterBase() {}
// End Class UCleanMasterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCleanMasterBase, UCleanMasterBase::StaticClass, TEXT("UCleanMasterBase"), &Z_Registration_Info_UClass_UCleanMasterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanMasterBase), 698249137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterBase_h_1609702379(TEXT("/Script/CleanMaster"),
	Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
