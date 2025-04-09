// Copyright Epic Games, Inc. All Rights Reserved.

#include "CleanMaster.h"
#include "CleanMasterWidget.h"
#include "CleanMasterSettings.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "LevelEditor.h"

void UCleanMaster::Init()
{
	// Put initialization code here
}

void UCleanMaster::InitializeTheWidget()
{
	// Initialize the widget here
	EditorWidget->SetNumberOfTestButtonPressed(NumberOfTestButtonPressed);
	EditorWidget->SetTestCheckboxIsChecked(UCleanMasterSettings::GetIsCheckboxChecked());

	// Bind all required delegates to the Widget.
	EditorWidget->OnTestButtonPressedDelegate.BindUObject(this, &UCleanMaster::OnTestButtonPressed);
	EditorWidget->OnTestCheckboxDelegate.BindUObject(this, &UCleanMaster::OnTestCheckboxChanged);
}

void UCleanMaster::OnTestButtonPressed()
{
	// Button on the widget has been pressed. Increase the counter and inform the widget about it.
	NumberOfTestButtonPressed++;
	EditorWidget->SetNumberOfTestButtonPressed(NumberOfTestButtonPressed);
}

void UCleanMaster::OnTestCheckboxChanged(bool bIsChecked)
{
	// Checkbox on  the widget has been changed. Save it's state to the settings.
	UCleanMasterSettings::SetIsCheckboxChecked(bIsChecked);
}
