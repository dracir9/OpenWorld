// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFASTNOISEPLUGIN_FastNoise_generated_h
#error "FastNoise.generated.h already included, missing '#pragma once' in FastNoise.h"
#endif
#define UNREALFASTNOISEPLUGIN_FastNoise_generated_h

#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_RPC_WRAPPERS
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_RPC_WRAPPERS_NO_PURE_DECLS
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFastNoise(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UFastNoise(); \
public: \
	DECLARE_CLASS(UFastNoise, UUFNNoiseGenerator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UFastNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUFastNoise(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UFastNoise(); \
public: \
	DECLARE_CLASS(UFastNoise, UUFNNoiseGenerator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UFastNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastNoise(UFastNoise&&); \
	NO_API UFastNoise(const UFastNoise&); \
public:


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastNoise(UFastNoise&&); \
	NO_API UFastNoise(const UFastNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastNoise); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastNoise)


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_PRIVATE_PROPERTY_OFFSET
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_96_PROLOG
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_RPC_WRAPPERS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_INCLASS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_INCLASS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h_99_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FastNoise."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_FastNoise_FastNoise_h


#define FOREACH_ENUM_ESELECTINTERPTYPE(op) \
	op(ESelectInterpType::None) \
	op(ESelectInterpType::CircularIn) \
	op(ESelectInterpType::CircularOut) \
	op(ESelectInterpType::CircularInOut) \
	op(ESelectInterpType::ExponentialIn) \
	op(ESelectInterpType::ExponentialOut) \
	op(ESelectInterpType::ExponentialInOut) \
	op(ESelectInterpType::SineIn) \
	op(ESelectInterpType::SineOut) \
	op(ESelectInterpType::SineInOut) \
	op(ESelectInterpType::Step) 
#define FOREACH_ENUM_EPOSITIONWARPTYPE(op) \
	op(EPositionWarpType::None) \
	op(EPositionWarpType::Regular) \
	op(EPositionWarpType::Fractal) 
#define FOREACH_ENUM_ECELLULARRETURNTYPE(op) \
	op(ECellularReturnType::CellValue) \
	op(ECellularReturnType::NoiseLookup) \
	op(ECellularReturnType::Distance) \
	op(ECellularReturnType::Distance2) \
	op(ECellularReturnType::Distance2Add) \
	op(ECellularReturnType::Distance2Sub) \
	op(ECellularReturnType::Distance2Mul) \
	op(ECellularReturnType::Distance2Div) 
#define FOREACH_ENUM_ECELLULARDISTANCEFUNCTION(op) \
	op(ECellularDistanceFunction::Euclidean) \
	op(ECellularDistanceFunction::Manhattan) \
	op(ECellularDistanceFunction::Natural) 
#define FOREACH_ENUM_EFRACTALTYPE(op) \
	op(EFractalType::FBM) \
	op(EFractalType::Billow) \
	op(EFractalType::RigidMulti) 
#define FOREACH_ENUM_EINTERP(op) \
	op(EInterp::InterpLinear) \
	op(EInterp::InterpHermite) \
	op(EInterp::InterpQuintic) 
#define FOREACH_ENUM_EFRACTALNOISETYPE(op) \
	op(EFractalNoiseType::FractalValue) \
	op(EFractalNoiseType::FractalGradient) \
	op(EFractalNoiseType::FractalSimplex) 
#define FOREACH_ENUM_ESIMPLENOISETYPE(op) \
	op(ESimpleNoiseType::SimpleValue) \
	op(ESimpleNoiseType::SimpleGradient) \
	op(ESimpleNoiseType::SimpleSimplex) \
	op(ESimpleNoiseType::SimpleWhiteNoise) 
#define FOREACH_ENUM_ENOISETYPE(op) \
	op(ENoiseType::Value) \
	op(ENoiseType::ValueFractal) \
	op(ENoiseType::Gradient) \
	op(ENoiseType::GradientFractal) \
	op(ENoiseType::Simplex) \
	op(ENoiseType::SimplexFractal) \
	op(ENoiseType::Cellular) \
	op(ENoiseType::WhiteNoise) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
