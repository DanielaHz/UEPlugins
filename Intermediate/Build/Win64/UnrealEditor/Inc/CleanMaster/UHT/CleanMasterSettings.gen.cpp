// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleanMaster/Public/CleanMasterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanMasterSettings() {}

// Begin Cross Module References
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterSettings();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_CleanMaster();
// End Cross Module References

// Begin Class UCleanMasterSettings
void UCleanMasterSettings::StaticRegisterNativesUCleanMasterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanMasterSettings);
UClass* Z_Construct_UClass_UCleanMasterSettings_NoRegister()
{
	return UCleanMasterSettings::StaticClass();
}
struct Z_Construct_UClass_UCleanMasterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CleanMasterSettings.h" },
		{ "ModuleRelativePath", "Public/CleanMasterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckboxChecked_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remember if the test checkbox is checked\n" },
#endif
		{ "ModuleRelativePath", "Public/CleanMasterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remember if the test checkbox is checked" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsCheckboxChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckboxChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanMasterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCleanMasterSettings_Statics::NewProp_bIsCheckboxChecked_SetBit(void* Obj)
{
	((UCleanMasterSettings*)Obj)->bIsCheckboxChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCleanMasterSettings_Statics::NewProp_bIsCheckboxChecked = { "bIsCheckboxChecked", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCleanMasterSettings), &Z_Construct_UClass_UCleanMasterSettings_Statics::NewProp_bIsCheckboxChecked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckboxChecked_MetaData), NewProp_bIsCheckboxChecked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanMasterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanMasterSettings_Statics::NewProp_bIsCheckboxChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCleanMasterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CleanMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanMasterSettings_Statics::ClassParams = {
	&UCleanMasterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCleanMasterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanMasterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCleanMasterSettings()
{
	if (!Z_Registration_Info_UClass_UCleanMasterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanMasterSettings.OuterSingleton, Z_Construct_UClass_UCleanMasterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCleanMasterSettings.OuterSingleton;
}
template<> CLEANMASTER_API UClass* StaticClass<UCleanMasterSettings>()
{
	return UCleanMasterSettings::StaticClass();
}
UCleanMasterSettings::UCleanMasterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanMasterSettings);
UCleanMasterSettings::~UCleanMasterSettings() {}
// End Class UCleanMasterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCleanMasterSettings, UCleanMasterSettings::StaticClass, TEXT("UCleanMasterSettings"), &Z_Registration_Info_UClass_UCleanMasterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanMasterSettings), 745382641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterSettings_h_2619312006(TEXT("/Script/CleanMaster"),
	Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
