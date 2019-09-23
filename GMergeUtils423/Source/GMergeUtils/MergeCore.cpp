// Copyright 2019 Guqing, Inc. All Rights Reserved.


#include "MergeCore.h"
#include "Editor/UnrealEd/Classes/Editor/EditorEngine.h"
#include "Runtime/Engine/Classes/Engine/Selection.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "MergeLibrary.h"

#define LOCTEXT_NAMESPACE "SMergeCore"

//using namespace EditorScriptingUtils;

void SMergeCore::Construct(const FArguments& InArgs)
{

	ChildSlot
		.HAlign(HAlign_Center)
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 10)
			[
				SNew(SButton)
				.OnClicked(this, &SMergeCore::OnMergeAllSelected)
				.Text(LOCTEXT("MergeAllSelectedToStaticMesh", "MergeAllSelectedToStaticMesh"))
			]

	
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 10)
			[
				SNew(SButton)
				.OnClicked(this, &SMergeCore::OnMergeSelectedSkeletal)
				.Text(LOCTEXT("MergeSelectedSkeletal", "MergeSelectedSkeletal"))
			]


			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 10)
			[
				SNew(SButton)
				.OnClicked(this, &SMergeCore::OnConvertSkeletalMeshToStaticMesh)
				.Text(LOCTEXT("ConvertSkeletalMeshToStaticMesh", "ConvertSkeletalMeshToStaticMesh"))
			]

			+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 10)
				[
					SNew(SHorizontalBox)


					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(LOCTEXT("SavePath:", "SavePath:"))
						.ColorAndOpacity(FLinearColor(0.0f, 1.0f, 0.0f))
					]

					+ SHorizontalBox::Slot()
						.AutoWidth()
					[
						SNew(SMultiLineEditableText)
						.Text(FText::FromString(DefaultSavePath))
						.OnTextChanged(this, &SMergeCore::OnPathTextChanged)

					]
				]

			+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 10)
				[
					SNew(SHorizontalBox)


					+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("SaveName:", "SaveName:"))
					.ColorAndOpacity(FLinearColor(0.0f, 1.0f, 0.0f))
				]

			+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SMultiLineEditableText)
					.Text(FText::FromString(DefaultSaveName))
					.OnTextChanged(this, &SMergeCore::OnNameTextChanged)
				]
				]
				
				
		];
}

void SMergeCore::OnPathTextChanged(const FText& InText)
{
	DefaultSavePath = InText.ToString();
	UE_LOG(LogTemp, Error, TEXT("A IS :%s"), *InText.ToString());
}


void SMergeCore::OnNameTextChanged(const FText& InText)
{
	DefaultSaveName = InText.ToString();
	UE_LOG(LogTemp, Error, TEXT("B IS :%s"), *InText.ToString());
}



FReply SMergeCore::OnMergeAllSelected()
{
	EditorWorld = UMergeLibrary::InitWorld();
	TArray<AStaticMeshActor*>SelectedStaticMeshActors;
	TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors;
	for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
	{
		if (It->IsA<AStaticMeshActor>())
		{
			AStaticMeshActor* Actor = static_cast<AStaticMeshActor*>(*It);
			SelectedStaticMeshActors.Add(Actor);
		}
		else if (It->IsA<ASkeletalMeshActor>())
		{
			ASkeletalMeshActor* Actor = static_cast<ASkeletalMeshActor*>(*It);
			SelectedSkeletal_MeshActors.Add(Actor);
		}

	}
	//
	UE_LOG(LogTemp, Error, TEXT("SelectedStaticMeshActors IS :%d"), SelectedStaticMeshActors.Num());
	UE_LOG(LogTemp, Error, TEXT("SelectedSkeletal_MeshActors IS :%d"), SelectedSkeletal_MeshActors.Num());
	if (SelectedSkeletal_MeshActors.Num() < 1 && SelectedStaticMeshActors.Num() < 1)return FReply::Handled();



	UMergeLibrary::MergeSksActorsAndSmsActorsToStaticMesh(SelectedSkeletal_MeshActors, SelectedStaticMeshActors, DefaultRoot+DefaultSavePath, DefaultSaveName);

	
	return FReply::Handled();
}
//组合选中的SkeletalMesh（只会在原点拼合）
FReply SMergeCore::OnMergeSelectedSkeletal()
{
	EditorWorld = UMergeLibrary::InitWorld();
	TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors;
	TArray<USkeletalMeshComponent*>SelectedSkeletal_MeshComponents;
	for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
	{
		UE_LOG(LogTemp, Error, TEXT("It :%s"), *It->GetName());
		if (It->IsA<ACharacter>())
		{
			ACharacter* Char = static_cast<ACharacter*>(*It);
			SelectedSkeletal_MeshComponents.Add(Char->GetMesh());
		}
		else
		{
			if (It->IsA<ASkeletalMeshActor>())
			{
				ASkeletalMeshActor* Actor = static_cast<ASkeletalMeshActor*>(*It);
				SelectedSkeletal_MeshActors.Add(Actor);
			}
		}
		
	}
	if (SelectedSkeletal_MeshActors.Num() > 0) 
	{
		USkeletalMesh* MergeSM = UMergeLibrary::MergeSkeletalActors(SelectedSkeletal_MeshActors, DefaultRoot+DefaultSavePath + DefaultSaveName);
		//
	}
	if (SelectedSkeletal_MeshComponents.Num() > 0)
	{
		UMergeLibrary::MergeSkeletalComponent(SelectedSkeletal_MeshComponents, DefaultRoot + DefaultSavePath + DefaultSaveName);
	}

	return FReply::Handled();
}
//

//组合选中的StaticMesh
FReply SMergeCore::OnMergeSelectedStaticMesh()
{
	EditorWorld = UMergeLibrary::InitWorld();
	TArray<AStaticMeshActor*>SelectedStaticMeshActors;
	for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
	{
		if (It->IsA<AStaticMeshActor>())
		{
			AStaticMeshActor* Actor = static_cast<AStaticMeshActor*>(*It);
			SelectedStaticMeshActors.Add(Actor);
		}
	}

	return FReply::Handled();
}
//
FReply SMergeCore::OnConvertSkeletalMeshToStaticMesh()
{
	EditorWorld = UMergeLibrary::InitWorld();
	TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors;
	for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
	{
		if (It->IsA<ASkeletalMeshActor>())
		{
			ASkeletalMeshActor* Actor = static_cast<ASkeletalMeshActor*>(*It);
			SelectedSkeletal_MeshActors.Add(Actor);
		}
	}

	for (ASkeletalMeshActor* SKMA : SelectedSkeletal_MeshActors)
	{
		FString SaveName = SKMA->GetName();
		UMergeLibrary::ConvertSkeletalMeshToStaticMesh(SKMA->GetSkeletalMeshComponent(), DefaultRoot+DefaultSavePath+SaveName);
	}
	
	return FReply::Handled();
}