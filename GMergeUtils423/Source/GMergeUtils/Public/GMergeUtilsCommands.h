// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "GMergeUtilsStyle.h"

class FGMergeUtilsCommands : public TCommands<FGMergeUtilsCommands>
{
public:

	FGMergeUtilsCommands()
		: TCommands<FGMergeUtilsCommands>(TEXT("GMergeUtils"), NSLOCTEXT("Contexts", "GMergeUtils", "GMergeUtils Plugin"), NAME_None, FGMergeUtilsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};