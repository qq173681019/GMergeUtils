// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MergeRuntimeBPLibrary.h"
#include "MergeRuntime.h"

UMergeRuntimeBPLibrary::UMergeRuntimeBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UMergeRuntimeBPLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(TArray<USkeletalMeshComponent*> Sks, TArray<UStaticMeshComponent*> Sms)
{
	UMergeLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(Sks, Sms);
}



void UMergeRuntimeBPLibrary::MergeSksActorsAndSmsActorsToStaticMesh(TArray<ASkeletalMeshActor*> Sks, TArray<AStaticMeshActor*> Sms)
{
	UMergeLibrary::MergeSksActorsAndSmsActorsToStaticMesh(Sks, Sms);
}


FString UMergeRuntimeBPLibrary::ConvertSkeletalMeshToStaticMesh(USkeletalMeshComponent* SkeletalComp)
{
	return UMergeLibrary::ConvertSkeletalMeshToStaticMesh(SkeletalComp);
}


USkeletalMesh* UMergeRuntimeBPLibrary::MergeSkeletalMeshs(TArray<USkeletalMesh*> SrcMeshList, USkeletalMeshComponent* SkeletalComp, FString SaveName)
{
	return UMergeLibrary::MergeSkeletalMeshs(SrcMeshList, SkeletalComp, SaveName);
}
//

USkeletalMesh* UMergeRuntimeBPLibrary::MergeSkeletalComponent(TArray<USkeletalMeshComponent*>SelectedSkeletal_MeshComponents)
{
	return UMergeLibrary::MergeSkeletalComponent(SelectedSkeletal_MeshComponents);
}


USkeletalMesh* UMergeRuntimeBPLibrary::MergeSkeletalActors(TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors)
{
	return UMergeLibrary::MergeSkeletalActors(SelectedSkeletal_MeshActors);
}
//


void UMergeRuntimeBPLibrary::MergeStaticMeshComponents(TArray<UPrimitiveComponent*> AllComponents)
{
	UMergeLibrary::MergeStaticMeshComponents(AllComponents);
}