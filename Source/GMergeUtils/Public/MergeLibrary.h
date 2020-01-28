// Copyright 2019 Guqing, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkeletalMeshMerge.h"
#include "Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Animation/SkeletalMeshActor.h"

#include "MeshUtilities.h"
#include "MeshMergeModule.h"
#include "Editor.h"
#include "Editor/UnrealEd/Classes/Editor/EditorEngine.h"
#include "../Plugins/Editor/EditorScriptingUtilities/Source/EditorScriptingUtilities/Public/EditorLevelLibrary.h"
#include "../Plugins/Editor/EditorScriptingUtilities/Source/EditorScriptingUtilities/Private/EditorScriptingUtils.h"
#include "FileHelpers.h"
#include "MergeLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GMERGEUTILS_API UMergeLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:

public:
	UFUNCTION()
		static void MergeSksComponentsAndSmsComponentsToStaticMesh(TArray<USkeletalMeshComponent*> Sks, TArray<UStaticMeshComponent*> Sms, FString SavePath = "/Game/MergedSource/", FString SaveName = "MergedStaticMesh");
	UFUNCTION()
		static void MergeSksActorsAndSmsActorsToStaticMesh(TArray<ASkeletalMeshActor*> Sks, TArray<AStaticMeshActor*> Sms, FString SavePath = "/Game/MergedSource/", FString SaveName = "MergedStaticMesh");
	UFUNCTION()
		static FString ConvertSkeletalMeshToStaticMesh(USkeletalMeshComponent* SkeletalComp, FString InPackageName = "/Game/MergedSource/MergedStaticMesh");

	static USkeletalMesh* MergeSkeletalMeshs(TArray<USkeletalMesh*> SrcMeshList, USkeletalMeshComponent* SkeletalComp, FString SaveName);
	//
	UFUNCTION()
		static USkeletalMesh* MergeSkeletalComponent(TArray<USkeletalMeshComponent*>SelectedSkeletal_MeshComponents, FString SaveName = "/Game/MergedSource/MergedStaticMesh");
	UFUNCTION()
		static USkeletalMesh* MergeSkeletalActors(TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors, FString SaveName = "/Game/MergedSource/MergedStaticMesh");
	//
	UFUNCTION()
		static void MergeStaticMeshComponents(TArray<UPrimitiveComponent*> AllComponents, FString SavePathName = "/Game/MergedSource/MergedStaticMesh");
	//
	static UObject* OpenAssets(FString path, FString name);
	static void SavePackage(FString pathPackage);
	static UWorld * InitWorld();
	static FString GetUniqueSaveName(FString OriSaveName);

	
};
