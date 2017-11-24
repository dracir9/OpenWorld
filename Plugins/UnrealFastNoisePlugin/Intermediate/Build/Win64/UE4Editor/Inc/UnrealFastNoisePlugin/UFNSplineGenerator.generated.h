// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef UNREALFASTNOISEPLUGIN_UFNSplineGenerator_generated_h
#error "UFNSplineGenerator.generated.h already included, missing '#pragma once' in UFNSplineGenerator.h"
#endif
#define UNREALFASTNOISEPLUGIN_UFNSplineGenerator_generated_h

#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_Spline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpline(Z_Param_Spline); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_Spline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpline(Z_Param_Spline); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUFNSplineGenerator(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNSplineGenerator(); \
public: \
	DECLARE_CLASS(UUFNSplineGenerator, UUFNNoiseGenerator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNSplineGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUUFNSplineGenerator(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNSplineGenerator(); \
public: \
	DECLARE_CLASS(UUFNSplineGenerator, UUFNNoiseGenerator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNSplineGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNSplineGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNSplineGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNSplineGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNSplineGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNSplineGenerator(UUFNSplineGenerator&&); \
	NO_API UUFNSplineGenerator(const UUFNSplineGenerator&); \
public:


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNSplineGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNSplineGenerator(UUFNSplineGenerator&&); \
	NO_API UUFNSplineGenerator(const UUFNSplineGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNSplineGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNSplineGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNSplineGenerator)


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_PRIVATE_PROPERTY_OFFSET
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_6_PROLOG
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_RPC_WRAPPERS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_INCLASS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_INCLASS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UFNSplineGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNSplineGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
