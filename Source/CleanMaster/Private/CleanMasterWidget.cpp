// Fill out your copyright notice in the Description page of Project Settings.

#include "CleanMasterWidget.h"

void UCleanMasterWidget::TestButtonPressed()
{
	OnTestButtonPressedDelegate.ExecuteIfBound();
}

void UCleanMasterWidget::TestCheckBoxCheckChanged(bool bIsChecked)
{
	OnTestCheckboxDelegate.ExecuteIfBound(bIsChecked);
}
