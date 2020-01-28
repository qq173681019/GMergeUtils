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
#ifdef MERGERUNTIME_MergeRuntimeBPLibrary_generated_h
#error "MergeRuntimeBPLibrary.generated.h already included, missing '#pragma once' in MergeRuntimeBPLibrary.h"
#endif
#define MERGERUNTIME_MergeRuntimeBPLibrary_generated_h

#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_SPARSE_DATA
#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMergeStaticMeshComponents) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_AllComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeStaticMeshComponents(Z_Param_AllComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalActors) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_SelectedSkeletal_MeshActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalActors(Z_Param_SelectedSkeletal_MeshActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalComponent) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_SelectedSkeletal_MeshComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalComponent(Z_Param_SelectedSkeletal_MeshComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalMeshs) \
	{ \
		P_GET_TARRAY(USkeletalMesh*,Z_Param_SrcMeshList); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalMeshs(Z_Param_SrcMeshList,Z_Param_SkeletalComp,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMergeRuntimeBPLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksActorsAndSmsActorsToStaticMesh) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_Sks); \
		P_GET_TARRAY(AStaticMeshActor*,Z_Param_Sms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeSksActorsAndSmsActorsToStaticMesh(Z_Param_Sks,Z_Param_Sms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksComponentsAndSmsComponentsToStaticMesh) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_Sks); \
		P_GET_TARRAY(UStaticMeshComponent*,Z_Param_Sms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(Z_Param_Sks,Z_Param_Sms); \
		P_NATIVE_END; \
	}


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMergeStaticMeshComponents) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_AllComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeStaticMeshComponents(Z_Param_AllComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalActors) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_SelectedSkeletal_MeshActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalActors(Z_Param_SelectedSkeletal_MeshActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalComponent) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_SelectedSkeletal_MeshComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalComponent(Z_Param_SelectedSkeletal_MeshComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSkeletalMeshs) \
	{ \
		P_GET_TARRAY(USkeletalMesh*,Z_Param_SrcMeshList); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMergeRuntimeBPLibrary::MergeSkeletalMeshs(Z_Param_SrcMeshList,Z_Param_SkeletalComp,Z_Param_SaveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMergeRuntimeBPLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksActorsAndSmsActorsToStaticMesh) \
	{ \
		P_GET_TARRAY(ASkeletalMeshActor*,Z_Param_Sks); \
		P_GET_TARRAY(AStaticMeshActor*,Z_Param_Sms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeSksActorsAndSmsActorsToStaticMesh(Z_Param_Sks,Z_Param_Sms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeSksComponentsAndSmsComponentsToStaticMesh) \
	{ \
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_Sks); \
		P_GET_TARRAY(UStaticMeshComponent*,Z_Param_Sms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMergeRuntimeBPLibrary::MergeSksComponentsAndSmsComponentsToStaticMesh(Z_Param_Sks,Z_Param_Sms); \
		P_NATIVE_END; \
	}


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMergeRuntimeBPLibrary(); \
	friend struct Z_Construct_UClass_UMergeRuntimeBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMergeRuntimeBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MergeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMergeRuntimeBPLibrary)


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMergeRuntimeBPLibrary(); \
	friend struct Z_Construct_UClass_UMergeRuntimeBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMergeRuntimeBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MergeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMergeRuntimeBPLibrary)


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMergeRuntimeBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMergeRuntimeBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMergeRuntimeBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMergeRuntimeBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMergeRuntimeBPLibrary(UMergeRuntimeBPLibrary&&); \
	NO_API UMergeRuntimeBPLibrary(const UMergeRuntimeBPLibrary&); \
public:


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMergeRuntimeBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMergeRuntimeBPLibrary(UMergeRuntimeBPLibrary&&); \
	NO_API UMergeRuntimeBPLibrary(const UMergeRuntimeBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMergeRuntimeBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMergeRuntimeBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMergeRuntimeBPLibrary)


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_26_PROLOG
#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_SPARSE_DATA \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_RPC_WRAPPERS \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_INCLASS \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_SPARSE_DATA \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MergeRuntimeBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MERGERUNTIME_API UClass* StaticClass<class UMergeRuntimeBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T424_Plugins_GMergeUtils_Source_MergeRuntime_Public_MergeRuntimeBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
