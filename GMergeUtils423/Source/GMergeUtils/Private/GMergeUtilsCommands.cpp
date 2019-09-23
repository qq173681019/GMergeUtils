// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GMergeUtilsCommands.h"

#define LOCTEXT_NAMESPACE "FGMergeUtilsModule"

void FGMergeUtilsCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "GMergeUtils", "Bring up GMergeUtils window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
