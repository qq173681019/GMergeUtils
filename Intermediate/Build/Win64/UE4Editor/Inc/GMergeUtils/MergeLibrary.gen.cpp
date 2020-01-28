// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMergeUtils/Public/MergeLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeLibrary() {}
// Cross Module References
	GMERGEUTILS_API UClass* Z_Construct_UClass_UMergeLibrary_NoRegister();
	GMERGEUTILS_API UClass* Z_Construct_UClass_UMergeLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GMergeUtils();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GMERGEUTILS_API UFunction* Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UMergeLibrary::StaticRegisterNativesUMergeLibrary()
	{
		UClass* Class = UMergeLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertSkeletalMeshToStaticMesh", &UMergeLibrary::execConvertSkeletalMeshToStaticMesh },
			{ "MergeSkeletalActors", &UMergeLibrary::execMergeSkeletalActors },
			{ "MergeSkeletalComponent", &UMergeLibrary::execMergeSkeletalComponent },
			{ "MergeSksActorsAndSmsActorsToStaticMesh", &UMergeLibrary::execMergeSksActorsAndSmsActorsToStaticMesh },
			{ "MergeSksComponentsAndSmsComponentsToStaticMesh", &UMergeLibrary::execMergeSksComponentsAndSmsComponentsToStaticMesh },
			{ "MergeStaticMeshComponents", &UMergeLibrary::execMergeStaticMeshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics
	{
		struct MergeLibrary_eventConvertSkeletalMeshToStaticMesh_Parms
		{
			USkeletalMeshComponent* SkeletalComp;
			FString InPackageName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, InPackageName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalComp = { "SkeletalComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, SkeletalComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_InPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "ConvertSkeletalMeshToStaticMesh", nullptr, nullptr, sizeof(MergeLibrary_eventConvertSkeletalMeshToStaticMesh_Parms), Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics
	{
		struct MergeLibrary_eventMergeSkeletalActors_Parms
		{
			TArray<ASkeletalMeshActor*> SelectedSkeletal_MeshActors;
			FString SaveName;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedSkeletal_MeshActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedSkeletal_MeshActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalActors_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalActors_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SelectedSkeletal_MeshActors = { "SelectedSkeletal_MeshActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalActors_Parms, SelectedSkeletal_MeshActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SelectedSkeletal_MeshActors_Inner = { "SelectedSkeletal_MeshActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SaveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SelectedSkeletal_MeshActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::NewProp_SelectedSkeletal_MeshActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "MergeSkeletalActors", nullptr, nullptr, sizeof(MergeLibrary_eventMergeSkeletalActors_Parms), Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics
	{
		struct MergeLibrary_eventMergeSkeletalComponent_Parms
		{
			TArray<USkeletalMeshComponent*> SelectedSkeletal_MeshComponents;
			FString SaveName;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedSkeletal_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedSkeletal_MeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedSkeletal_MeshComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalComponent_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents = { "SelectedSkeletal_MeshComponents", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSkeletalComponent_Parms, SelectedSkeletal_MeshComponents), METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents_Inner = { "SelectedSkeletal_MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SaveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::NewProp_SelectedSkeletal_MeshComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "MergeSkeletalComponent", nullptr, nullptr, sizeof(MergeLibrary_eventMergeSkeletalComponent_Parms), Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics
	{
		struct MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms
		{
			TArray<ASkeletalMeshActor*> Sks;
			TArray<AStaticMeshActor*> Sms;
			FString SavePath;
			FString SaveName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sms_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms, SavePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sms = { "Sms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms, Sms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sms_Inner = { "Sms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sks = { "Sks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms, Sks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sks_Inner = { "Sks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_SaveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::NewProp_Sks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "MergeSksActorsAndSmsActorsToStaticMesh", nullptr, nullptr, sizeof(MergeLibrary_eventMergeSksActorsAndSmsActorsToStaticMesh_Parms), Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics
	{
		struct MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms
		{
			TArray<USkeletalMeshComponent*> Sks;
			TArray<UStaticMeshComponent*> Sms;
			FString SavePath;
			FString SaveName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms, SavePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms = { "Sms", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms, Sms), METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms_Inner = { "Sms", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks = { "Sks", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms, Sks), METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks_Inner = { "Sks", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_SaveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::NewProp_Sks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "MergeSksComponentsAndSmsComponentsToStaticMesh", nullptr, nullptr, sizeof(MergeLibrary_eventMergeSksComponentsAndSmsComponentsToStaticMesh_Parms), Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics
	{
		struct MergeLibrary_eventMergeStaticMeshComponents_Parms
		{
			TArray<UPrimitiveComponent*> AllComponents;
			FString SavePathName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_SavePathName = { "SavePathName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeStaticMeshComponents_Parms, SavePathName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents = { "AllComponents", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MergeLibrary_eventMergeStaticMeshComponents_Parms, AllComponents), METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents_Inner = { "AllComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_SavePathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::NewProp_AllComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMergeLibrary, nullptr, "MergeStaticMeshComponents", nullptr, nullptr, sizeof(MergeLibrary_eventMergeStaticMeshComponents_Parms), Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMergeLibrary_NoRegister()
	{
		return UMergeLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMergeLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GMergeUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMergeLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMergeLibrary_ConvertSkeletalMeshToStaticMesh, "ConvertSkeletalMeshToStaticMesh" }, // 1681977102
		{ &Z_Construct_UFunction_UMergeLibrary_MergeSkeletalActors, "MergeSkeletalActors" }, // 667847119
		{ &Z_Construct_UFunction_UMergeLibrary_MergeSkeletalComponent, "MergeSkeletalComponent" }, // 1855718138
		{ &Z_Construct_UFunction_UMergeLibrary_MergeSksActorsAndSmsActorsToStaticMesh, "MergeSksActorsAndSmsActorsToStaticMesh" }, // 3647230830
		{ &Z_Construct_UFunction_UMergeLibrary_MergeSksComponentsAndSmsComponentsToStaticMesh, "MergeSksComponentsAndSmsComponentsToStaticMesh" }, // 923488833
		{ &Z_Construct_UFunction_UMergeLibrary_MergeStaticMeshComponents, "MergeStaticMeshComponents" }, // 2799106493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MergeLibrary.h" },
		{ "ModuleRelativePath", "Public/MergeLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMergeLibrary_Statics::ClassParams = {
		&UMergeLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMergeLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMergeLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMergeLibrary, 3511170674);
	template<> GMERGEUTILS_API UClass* StaticClass<UMergeLibrary>()
	{
		return UMergeLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMergeLibrary(Z_Construct_UClass_UMergeLibrary, &UMergeLibrary::StaticClass, TEXT("/Script/GMergeUtils"), TEXT("UMergeLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
