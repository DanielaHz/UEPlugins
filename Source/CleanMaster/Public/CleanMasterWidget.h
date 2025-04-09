// Copyright Epic Games, Inc. All Rights Reserved.
// The following Unreal Engine class is based on the project cited below. I generated the modules from scratch, but the content follows the base structure of the plugin template created by Damian Nowakowski.
// Modified from:
// Damian Nowakowski (June 4, 2024). UE4EditorPluginTemplate [online].
// [Accessed 2016]. Available from: <https://github.com/zompi2/UE4EditorPluginTemplate>

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "CleanMasterWidget.generated.h"

/**
 * 
 */

// Called when the button has been pressed.
DECLARE_DELEGATE(FOnTestButton);

// Called when the checkbox has been changed.
DECLARE_DELEGATE_OneParam(FOnTestCheckbox, bool /*bIsChecked*/);

UCLASS()
class CLEANMASTER_API UCleanMasterWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	/**
	 * Sets the number of test button pressed in the widget.
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void SetNumberOfTestButtonPressed(int32 NewNumber);

	/**
	 * Called when the test button has been pressed.
	 */
	UFUNCTION(BlueprintCallable, Category = "My Plugin Editor Widget")
	void TestButtonPressed();

	/**
	 * Sets if the test checkbox should be checked.
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void SetTestCheckboxIsChecked(bool bIsChecked);

	/**
	 * Called when the test checkbox has been checked.
	 */
	UFUNCTION(BlueprintCallable, Category = "My Plugin Editor Widget")
	void TestCheckBoxCheckChanged(bool bIsChecked);

	/**
	 * Callbacks to be binded to the MyPluginEditor methods.
	 */
	FOnTestButton OnTestButtonPressedDelegate;
	FOnTestCheckbox OnTestCheckboxDelegate;
};
