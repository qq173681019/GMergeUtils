// Copyright 2019 Guqing, Inc. All Rights Reserved.

#include "MergeLibrary.h"
#include "HAL/PlatformFilemanager.h"


USkeletalMesh* UMergeLibrary::MergeSkeletalComponent(TArray<USkeletalMeshComponent*>SelectedSkeletal_MeshComponents, FString SaveName)
{
	if (SelectedSkeletal_MeshComponents.Num() == 0)return nullptr;

	TArray<USkeletalMesh*> MergeSrc;
	for (USkeletalMeshComponent* SKMC : SelectedSkeletal_MeshComponents)
	{
		if(SKMC->SkeletalMesh&&SKMC->SkeletalMesh->Skeleton)
			MergeSrc.Add(SKMC->SkeletalMesh);
	}

	
	USkeletalMesh* SKM = MergeSkeletalMeshs(MergeSrc, SelectedSkeletal_MeshComponents[0], SaveName);
	return SKM;
}
//
USkeletalMesh* UMergeLibrary::MergeSkeletalActors(TArray<ASkeletalMeshActor*>SelectedSkeletal_MeshActors, FString SaveName)
{
	if (SelectedSkeletal_MeshActors.Num() == 0)return nullptr;

	TArray<USkeletalMeshComponent*>SelectedSkeletal_MeshComponents;


	for (ASkeletalMeshActor* SKMA : SelectedSkeletal_MeshActors)
	{
		SelectedSkeletal_MeshComponents.Add(SKMA->GetSkeletalMeshComponent());
	}
	//
	return MergeSkeletalComponent(SelectedSkeletal_MeshComponents, SaveName);
	//SavePackage(SaveName);
}


FString UMergeLibrary::ConvertSkeletalMeshToStaticMesh(USkeletalMeshComponent* SkeletalComp, FString InPackageName)
{
	TArray<UMeshComponent*> InMeshComponents;
	UMeshComponent* SC = Cast<UMeshComponent>(SkeletalComp);
	InMeshComponents.Add(SC);
	IMeshUtilities& MeshUtilities = FModuleManager::Get().LoadModuleChecked<IMeshUtilities>("MeshUtilities");
	FTransform InRootTransform = FTransform(FVector::ZeroVector);


	InPackageName = GetUniqueSaveName(InPackageName);

	UStaticMesh* SM = MeshUtilities.ConvertMeshesToStaticMesh(InMeshComponents, InRootTransform, InPackageName);
	UEditorLoadingAndSavingUtils::SaveDirtyPackages(false, true);
	return InPackageName;
}

void UMergeLibrary::MergeSksActorsAndSmsActorsToStaticMesh(TArray<ASkeletalMeshActor*> Sks, TArray<AStaticMeshActor*> Sms, FString SavePath, FString SaveName)
{
	TArray<USkeletalMeshComponent*> Skcs;
	TArray<UStaticMeshComponent*> Smcs;
	for (ASkeletalMeshActor* SKMA : Sks)
	{
		Skcs.Add(SKMA->GetSkeletalMeshComponent());
	}
	for (AStaticMeshActor* SMA : Sms)
	{
		Smcs.Add(SMA->GetStaticMeshComponent());
	}

	MergeSksComponentsAndSmsComponentsToStaticMesh(Skcs, Smcs, SavePath, SaveName);
}
//
void UMergeLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(TArray<USkeletalMeshComponent*> Sks, TArray<UStaticMeshComponent*> Sms, FString SavePath, FString SaveName)
{
	TArray<UPrimitiveComponent*> AllComponents;
	TArray<FString> ObjLoadPath;
	for (USkeletalMeshComponent* SKMC : Sks)
	{
		//	ComponentId
		FString SKName = FString::FromInt(SKMC->GetUniqueID());
		SKName = ConvertSkeletalMeshToStaticMesh(SKMC, SavePath + "TempMeshes/" + SKName);
		int Index;
		SKName.FindLastChar('/', Index);
		SKName = SKName.RightChop(Index + 1);
		ObjLoadPath.Add(SKName);
	}
	//然后将staticmesh们组合起来
	for (UStaticMeshComponent* SMA : Sms)
	{
		AllComponents.Add(SMA);
	}

	FPlatformProcess::Sleep(1);


	for (const auto &Pair : ObjLoadPath)
	{
		UStaticMesh* obj = Cast<UStaticMesh>(UMergeLibrary::OpenAssets(SavePath + "TempMeshes/", Pair));
		UClass* StaticMeshComponentClass = UStaticMeshComponent::StaticClass();
		UStaticMeshComponent* SMC = NewObject<UStaticMeshComponent>(GWorld, StaticMeshComponentClass);
		SMC->SetStaticMesh(obj);
		AllComponents.Add(SMC);
	}

	MergeStaticMeshComponents(AllComponents, SavePath + SaveName);
}

USkeletalMesh* UMergeLibrary::MergeSkeletalMeshs(TArray<USkeletalMesh*> SrcMeshList, USkeletalMeshComponent* SkeletalComp, FString SaveName)
{
	if (SrcMeshList.Num() == 0) return false;

	TArray<USkeletalMesh*>& SourceMeshList = SrcMeshList;

	UPackage* Package = CreatePackage(NULL, *SaveName);

	//auto CompositeMesh = NewObject<USkeletalMesh>(GetTransientPackage(), NAME_None, RF_Transient);
	USkeletalMesh* CompositeMesh = NewObject<USkeletalMesh>(Package, NAME_None, RF_Public | RF_Standalone);
	TArray<FSkelMeshMergeSectionMapping> InForceSectionMapping;
	FSkeletalMeshMerge MeshMergeUtil(CompositeMesh, SourceMeshList, InForceSectionMapping, 0);
	if (!MeshMergeUtil.DoMerge())
	{
		return nullptr;
	}
	CompositeMesh->Skeleton = SkeletalComp->SkeletalMesh->Skeleton; //设置新的 *SkeletalMesh* 的骨架
	SkeletalComp->SetSkeletalMesh(CompositeMesh); //用新组合成的 SkeletalMesh 替换旧的

	Package->SetDirtyFlag(true);
	UEditorLoadingAndSavingUtils::SaveDirtyPackages(false, true);
	return CompositeMesh;
}



void UMergeLibrary::MergeStaticMeshComponents(TArray<UPrimitiveComponent*> AllComponents, FString SavePathName)
{
	if (AllComponents.Num() < 1)
	{
		return;
	}
	//
	const IMeshMergeUtilities& MeshUtilities = FModuleManager::Get().LoadModuleChecked<IMeshMergeModule>("MeshMergeUtilities").GetUtilities();

	FEditorScriptingMergeStaticMeshActorsOptions MergeOptions;
	MergeOptions.bSpawnMergedActor = true;
	MergeOptions.BasePackageName = SavePathName;
	MergeOptions.MeshMergingSettings.bGenerateLightMapUV = false;


	FString PackageName = MergeOptions.BasePackageName;//
	UE_LOG(LogTemp, Error, TEXT("PackageName  :%s"), *PackageName);
	FVector MergedActorLocation;
	TArray<UObject*>CreatedAssetes;
	const float ScreenAreaSize = TNumericLimits<float>::Max();
	UWorld* world = InitWorld();


	PackageName = GetUniqueSaveName(PackageName);

	MeshUtilities.MergeComponentsToStaticMesh(AllComponents, world, MergeOptions.MeshMergingSettings, nullptr, nullptr, PackageName, CreatedAssetes, MergedActorLocation, ScreenAreaSize, true);

	UEditorLoadingAndSavingUtils::SaveDirtyPackages(false, true);


}





UObject* UMergeLibrary::OpenAssets(FString path, FString name)
{
	FString PathToLoad = "Object'" + path + name + "." + name + "'";
	UE_LOG(LogTemp, Error, TEXT("PathToLoad  :%s"), *PathToLoad);
	UObject* Temp = StaticLoadObject(UObject::StaticClass(), NULL, *PathToLoad);
	return Temp;
}

void UMergeLibrary::SavePackage(FString pathPackage)
{
	UPackage* Package = CreatePackage(nullptr, *pathPackage);

	Package->SetDirtyFlag(true);
	UEditorLoadingAndSavingUtils::SaveDirtyPackages(false, true);

}
//
FString UMergeLibrary::GetUniqueSaveName(FString OriSaveName)
{
	OriSaveName = OriSaveName.RightChop(6);
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	int SaveIndex = 0;
	FString SaveFileName = FPaths::ProjectContentDir() + OriSaveName + ".uasset";
	while (PlatformFile.FileExists(*SaveFileName))
	{
		OriSaveName = OriSaveName + FString::FromInt(SaveIndex);
		SaveFileName = FPaths::ProjectContentDir() + OriSaveName + ".uasset";
		SaveIndex++;
	}
	return "/Game/"+ OriSaveName;
}




UWorld * UMergeLibrary::InitWorld()
{
	check(GEngine);
	UWorld* World = nullptr;
	for (const FWorldContext& Context : GEngine->GetWorldContexts())
	{
		UWorld* ThisWorld = Context.World();
		if (!ThisWorld || (Context.WorldType == EWorldType::PIE))
		{
			continue;
		}
		else if (Context.WorldType == EWorldType::Editor)
		{
			World = ThisWorld;
		}
	}
	//
	return World;
}
