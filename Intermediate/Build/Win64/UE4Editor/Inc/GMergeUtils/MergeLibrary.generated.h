// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class ASkeletalMeshActor;
class USkeletalMesh;
class USkeletalMeshComponent;
class AStaticMeshActor;
class UStaticMeshComponent;
#ifdef GMERGEUTILS_MergeLibrary_generated_h
#error "MergeLibrary.generated.h already included, missing '#pragma once' in MergeLibrary.h"
#endif
#define GMERGEUTILS_MergeLibrary_generated_h

#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_SPARSE_DATA
#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMergeStaticMeshComponents) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_AllComponents); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePathName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeStaticMeshComponents(Z_Param_AllComponents,Z_Param_SavePathName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalActors) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_SelectedSkeletal_MeshActors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeLibrary::MergeSkeletalActors(Z_Param_SelectedSkeletal_MeshActors,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalComponent) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_SelectedSkeletal_MeshComponents); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeLibrary::MergeSkeletalComponent(Z_Param_SelectedSkeletal_MeshComponents,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMergeLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalComp,Z_Param_InPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksActorsAndSmsActorsToStaticMesh) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_Sks); \
		P_GET_TARRAY(AStaticMeshActor*,Z_Param_Sms); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeSksActorsAndSmsActorsToStaticMesh(Z_Param_Sks,Z_Param_Sms,Z_Param_SavePath,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksComponentsAndSmsComponentsToStaticMesh) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_Sks); \
		P_GET_TARRAY(UStaticMeshComponent*,Z_Param_Sms); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(Z_Param_Sks,Z_Param_Sms,Z_Param_SavePath,Z_Param_SaveName); \
		P_NATIVE_END; \
	}


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMergeStaticMeshComponents) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_AllComponents); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePathName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeStaticMeshComponents(Z_Param_AllComponents,Z_Param_SavePathName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalActors) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_SelectedSkeletal_MeshActors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeLibrary::MergeSkeletalActors(Z_Param_SelectedSkeletal_MeshActors,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalComponent) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_SelectedSkeletal_MeshComponents); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeLibrary::MergeSkeletalComponent(Z_Param_SelectedSkeletal_MeshComponents,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMergeLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalComp,Z_Param_InPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksActorsAndSmsActorsToStaticMesh) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_Sks); \
		P_GET_TARRAY(AStaticMeshActor*,Z_Param_Sms); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeSksActorsAndSmsActorsToStaticMesh(Z_Param_Sks,Z_Param_Sms,Z_Param_SavePath,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksComponentsAndSmsComponentsToStaticMesh) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_Sks); \
		P_GET_TARRAY(UStaticMeshComponent*,Z_Param_Sms); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(Z_Param_Sks,Z_Param_Sms,Z_Param_SavePath,Z_Param_SaveName); \
		P_NATIVE_END; \
	}


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMergeLibrary(); \
	friend struct Z_Construct_UClass_UMergeLibrary_Statics; \
public: \
	DECLARE_CLASS(UMergeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMergeUtils"), NO_API) \
	DECLARE_SERIALIZER(UMergeLibrary)


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMergeLibrary(); \
	friend struct Z_Construct_UClass_UMergeLibrary_Statics; \
public: \
	DECLARE_CLASS(UMergeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMergeUtils"), NO_API) \
	DECLARE_SERIALIZER(UMergeLibrary)


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMergeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMergeLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMergeLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMergeLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMergeLibrary(UMergeLibrary&&); \
	NO_API UMergeLibrary(const UMergeLibrary&); \
public:


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMergeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMergeLibrary(UMergeLibrary&&); \
	NO_API UMergeLibrary(const UMergeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMergeLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMergeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMergeLibrary)


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_23_PROLOG
#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_SPARSE_DATA \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_RPC_WRAPPERS \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_INCLASS \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_SPARSE_DATA \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_INCLASS_NO_PURE_DECLS \
	T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMERGEUTILS_API UClass* StaticClass<class UMergeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T424_Plugins_GMergeUtils_Source_GMergeUtils_Public_MergeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
