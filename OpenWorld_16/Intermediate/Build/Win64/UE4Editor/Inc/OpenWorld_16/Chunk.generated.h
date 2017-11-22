// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENWORLD_16_Chunk_generated_h
#error "Chunk.generated.h already included, missing '#pragma once' in Chunk.h"
#endif
#define OPENWORLD_16_Chunk_generated_h

#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenderChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RenderChunk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeChunk(); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenderChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RenderChunk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeChunk(); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunk(); \
	friend OPENWORLD_16_API class UClass* Z_Construct_UClass_AChunk(); \
public: \
	DECLARE_CLASS(AChunk, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenWorld_16"), NO_API) \
	DECLARE_SERIALIZER(AChunk) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAChunk(); \
	friend OPENWORLD_16_API class UClass* Z_Construct_UClass_AChunk(); \
public: \
	DECLARE_CLASS(AChunk, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenWorld_16"), NO_API) \
	DECLARE_SERIALIZER(AChunk) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChunk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChunk(AChunk&&); \
	NO_API AChunk(const AChunk&); \
public:


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChunk(AChunk&&); \
	NO_API AChunk(const AChunk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunk)


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChunkDensity() { return STRUCT_OFFSET(AChunk, ChunkDensity); }


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_11_PROLOG
#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_RPC_WRAPPERS \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_INCLASS \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_INCLASS_NO_PURE_DECLS \
	OpenWorld_16_Source_OpenWorld_16_Chunk_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_16_Source_OpenWorld_16_Chunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
