// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GMergeUtils.h"
#include "GMergeUtilsStyle.h"
#include "GMergeUtilsCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

static const FName GMergeUtilsTabName("GMergeUtils");

void FGMergeUtilsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FGMergeUtilsStyle::Initialize();
	FGMergeUtilsStyle::ReloadTextures();

	FGMergeUtilsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FGMergeUtilsCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FGMergeUtilsModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::First, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FGMergeUtilsModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FGMergeUtilsModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(GMergeUtilsTabName, FOnSpawnTab::CreateRaw(this, &FGMergeUtilsModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FGMergeUtilsTabTitle", "GMergeUtils"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FGMergeUtilsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FGMergeUtilsStyle::Shutdown();

	FGMergeUtilsCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(GMergeUtilsTabName);
}

TSharedRef<SDockTab> FGMergeUtilsModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SMergeCore)
			]
		];
}

void FGMergeUtilsModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(GMergeUtilsTabName);
}

void FGMergeUtilsModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FGMergeUtilsCommands::Get().OpenPluginWindow);
}

void FGMergeUtilsModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FGMergeUtilsCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGMergeUtilsModule, GMergeUtils)