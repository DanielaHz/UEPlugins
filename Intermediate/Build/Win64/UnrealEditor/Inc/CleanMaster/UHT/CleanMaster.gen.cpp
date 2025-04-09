// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleanMaster/Public/CleanMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanMaster() {}

// Begin Cross Module References
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMaster();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMaster_NoRegister();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterBase();
UPackage* Z_Construct_UPackage__Script_CleanMaster();
// End Cross Module References

// Begin Class UCleanMaster
void UCleanMaster::StaticRegisterNativesUCleanMaster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanMaster);
UClass* Z_Construct_UClass_UCleanMaster_NoRegister()
{
	return UCleanMaster::StaticClass();
}
struct Z_Construct_UClass_UCleanMaster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CleanMaster.h" },
		{ "ModuleRelativePath", "Public/CleanMaster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanMaster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCleanMaster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCleanMasterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CleanMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMaster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanMaster_Statics::ClassParams = {
	&UCleanMaster::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanMaster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCleanMaster()
{
	if (!Z_Registration_Info_UClass_UCleanMaster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanMaster.OuterSingleton, Z_Construct_UClass_UCleanMaster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCleanMaster.OuterSingleton;
}
template<> CLEANMASTER_API UClass* StaticClass<UCleanMaster>()
{
	return UCleanMaster::StaticClass();
}
UCleanMaster::UCleanMaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanMaster);
UCleanMaster::~UCleanMaster() {}
// End Class UCleanMaster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMaster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCleanMaster, UCleanMaster::StaticClass, TEXT("UCleanMaster"), &Z_Registration_Info_UClass_UCleanMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanMaster), 4077544141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMaster_h_1142297175(TEXT("/Script/CleanMaster"),
	Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMaster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
