// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef OPENWORLD_16_WorldManager_generated_h
#error "WorldManager.generated.h already included, missing '#pragma once' in WorldManager.h"
#endif
#define OPENWORLD_16_WorldManager_generated_h

#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTriangles) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertex); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY(uint8,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTriangles(Z_Param_Out_Vertex,Z_Param_Out_Triangles,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoxelFromWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetVoxelFromWorld(Z_Param_Location,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoxelFromWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetVoxelFromWorld(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnloadMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT(FVector2D,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->InRange(Z_Param_x,Z_Param_y,Z_Param_Center,Z_Param_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->UpdatePosition(); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTriangles) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertex); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY(uint8,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTriangles(Z_Param_Out_Vertex,Z_Param_Out_Triangles,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoxelFromWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetVoxelFromWorld(Z_Param_Location,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoxelFromWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetVoxelFromWorld(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnloadMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT(FVector2D,Z_Param_Center); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->InRange(Z_Param_x,Z_Param_y,Z_Param_Center,Z_Param_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->UpdatePosition(); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldManager(); \
public: \
	DECLARE_CLASS(AWorldManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenWorld_16"), NO_API) \
	DECLARE_SERIALIZER(AWorldManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldManager(); \
public: \
	DECLARE_CLASS(AWorldManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenWorld_16"), NO_API) \
	DECLARE_SERIALIZER(AWorldManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldManager(AWorldManager&&); \
	NO_API AWorldManager(const AWorldManager&); \
public:


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldManager(AWorldManager&&); \
	NO_API AWorldManager(const AWorldManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldManager)


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_PRIVATE_PROPERTY_OFFSET
#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_15_PROLOG
#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_RPC_WRAPPERS \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_INCLASS \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_INCLASS_NO_PURE_DECLS \
	OpenWorld_16_Source_OpenWorld_16_WorldManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_16_Source_OpenWorld_16_WorldManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
