// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleanMaster/Public/CleanMasterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanMasterWidget() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterWidget();
CLEANMASTER_API UClass* Z_Construct_UClass_UCleanMasterWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CleanMaster();
// End Cross Module References

// Begin Class UCleanMasterWidget Function SetNumberOfTestButtonPressed
struct CleanMasterWidget_eventSetNumberOfTestButtonPressed_Parms
{
	int32 NewNumber;
};
static FName NAME_UCleanMasterWidget_SetNumberOfTestButtonPressed = FName(TEXT("SetNumberOfTestButtonPressed"));
void UCleanMasterWidget::SetNumberOfTestButtonPressed(int32 NewNumber)
{
	CleanMasterWidget_eventSetNumberOfTestButtonPressed_Parms Parms;
	Parms.NewNumber=NewNumber;
	ProcessEvent(FindFunctionChecked(NAME_UCleanMasterWidget_SetNumberOfTestButtonPressed),&Parms);
}
struct Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the number of test button pressed in the widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CleanMasterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of test button pressed in the widget." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::NewProp_NewNumber = { "NewNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CleanMasterWidget_eventSetNumberOfTestButtonPressed_Parms, NewNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::NewProp_NewNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanMasterWidget, nullptr, "SetNumberOfTestButtonPressed", nullptr, nullptr, Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::PropPointers), sizeof(CleanMasterWidget_eventSetNumberOfTestButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(CleanMasterWidget_eventSetNumberOfTestButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCleanMasterWidget Function SetNumberOfTestButtonPressed

// Begin Class UCleanMasterWidget Function SetTestCheckboxIsChecked
struct CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms
{
	bool bIsChecked;
};
static FName NAME_UCleanMasterWidget_SetTestCheckboxIsChecked = FName(TEXT("SetTestCheckboxIsChecked"));
void UCleanMasterWidget::SetTestCheckboxIsChecked(bool bIsChecked)
{
	CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms Parms;
	Parms.bIsChecked=bIsChecked ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UCleanMasterWidget_SetTestCheckboxIsChecked),&Parms);
}
struct Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets if the test checkbox should be checked.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CleanMasterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets if the test checkbox should be checked." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms), &Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanMasterWidget, nullptr, "SetTestCheckboxIsChecked", nullptr, nullptr, Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::PropPointers), sizeof(CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::Function_MetaDataParams) };
static_assert(sizeof(CleanMasterWidget_eventSetTestCheckboxIsChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCleanMasterWidget Function SetTestCheckboxIsChecked

// Begin Class UCleanMasterWidget Function TestButtonPressed
struct Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "My Plugin Editor Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the test button has been pressed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CleanMasterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the test button has been pressed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanMasterWidget, nullptr, "TestButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCleanMasterWidget::execTestButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestButtonPressed();
	P_NATIVE_END;
}
// End Class UCleanMasterWidget Function TestButtonPressed

// Begin Class UCleanMasterWidget Function TestCheckBoxCheckChanged
struct Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics
{
	struct CleanMasterWidget_eventTestCheckBoxCheckChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "My Plugin Editor Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the test checkbox has been checked.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CleanMasterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the test checkbox has been checked." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((CleanMasterWidget_eventTestCheckBoxCheckChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CleanMasterWidget_eventTestCheckBoxCheckChanged_Parms), &Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanMasterWidget, nullptr, "TestCheckBoxCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::CleanMasterWidget_eventTestCheckBoxCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::CleanMasterWidget_eventTestCheckBoxCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCleanMasterWidget::execTestCheckBoxCheckChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestCheckBoxCheckChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UCleanMasterWidget Function TestCheckBoxCheckChanged

// Begin Class UCleanMasterWidget
void UCleanMasterWidget::StaticRegisterNativesUCleanMasterWidget()
{
	UClass* Class = UCleanMasterWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestButtonPressed", &UCleanMasterWidget::execTestButtonPressed },
		{ "TestCheckBoxCheckChanged", &UCleanMasterWidget::execTestCheckBoxCheckChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanMasterWidget);
UClass* Z_Construct_UClass_UCleanMasterWidget_NoRegister()
{
	return UCleanMasterWidget::StaticClass();
}
struct Z_Construct_UClass_UCleanMasterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CleanMasterWidget.h" },
		{ "ModuleRelativePath", "Public/CleanMasterWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCleanMasterWidget_SetNumberOfTestButtonPressed, "SetNumberOfTestButtonPressed" }, // 2662434508
		{ &Z_Construct_UFunction_UCleanMasterWidget_SetTestCheckboxIsChecked, "SetTestCheckboxIsChecked" }, // 354581955
		{ &Z_Construct_UFunction_UCleanMasterWidget_TestButtonPressed, "TestButtonPressed" }, // 1274329718
		{ &Z_Construct_UFunction_UCleanMasterWidget_TestCheckBoxCheckChanged, "TestCheckBoxCheckChanged" }, // 2020037585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanMasterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCleanMasterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CleanMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanMasterWidget_Statics::ClassParams = {
	&UCleanMasterWidget::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanMasterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanMasterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCleanMasterWidget()
{
	if (!Z_Registration_Info_UClass_UCleanMasterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanMasterWidget.OuterSingleton, Z_Construct_UClass_UCleanMasterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCleanMasterWidget.OuterSingleton;
}
template<> CLEANMASTER_API UClass* StaticClass<UCleanMasterWidget>()
{
	return UCleanMasterWidget::StaticClass();
}
UCleanMasterWidget::UCleanMasterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanMasterWidget);
UCleanMasterWidget::~UCleanMasterWidget() {}
// End Class UCleanMasterWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCleanMasterWidget, UCleanMasterWidget::StaticClass, TEXT("UCleanMasterWidget"), &Z_Registration_Info_UClass_UCleanMasterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanMasterWidget), 4089835850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterWidget_h_3623107839(TEXT("/Script/CleanMaster"),
	Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s5628585_OneDrive___Bournemouth_University_PipelineProject_Plugins_CleanMaster_Source_CleanMaster_Public_CleanMasterWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
