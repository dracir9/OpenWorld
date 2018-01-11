// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshComponent;
struct FVector;
enum class ERuntimeMeshSliceCapOption : uint8;
class UMaterialInterface;
#ifdef RUNTIMEMESHCOMPONENTSLICER_RuntimeMeshSlicer_generated_h
#error "RuntimeMeshSlicer.generated.h already included, missing '#pragma once' in RuntimeMeshSlicer.h"
#endif
#define RUNTIMEMESHCOMPONENTSLICER_RuntimeMeshSlicer_generated_h

#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalfRuntimeMesh); \
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfRuntimeMesh,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	}


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalfRuntimeMesh); \
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfRuntimeMesh,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	}


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend RUNTIMEMESHCOMPONENTSLICER_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer(); \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponentSlicer"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend RUNTIMEMESHCOMPONENTSLICER_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer(); \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponentSlicer"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public:


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer)


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_PRIVATE_PROPERTY_OFFSET
#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_24_PROLOG
#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_RPC_WRAPPERS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_INCLASS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_INCLASS_NO_PURE_DECLS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeMeshSlicer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponentSlicer_Public_RuntimeMeshSlicer_h


#define FOREACH_ENUM_ERUNTIMEMESHSLICECAPOPTION(op) \
	op(ERuntimeMeshSliceCapOption::NoCap) \
	op(ERuntimeMeshSliceCapOption::CreateNewSectionForCap) \
	op(ERuntimeMeshSliceCapOption::UseLastSectionForCap) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
