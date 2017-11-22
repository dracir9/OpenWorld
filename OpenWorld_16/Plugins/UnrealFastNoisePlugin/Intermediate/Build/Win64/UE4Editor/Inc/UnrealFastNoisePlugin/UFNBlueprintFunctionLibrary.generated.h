// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUFNNoiseGenerator;
enum class ESelectInterpType : uint8;
class USplineComponent;
class UCurveFloat;
enum class ECellularDistanceFunction : uint8;
enum class ECellularReturnType : uint8;
enum class EFractalNoiseType : uint8;
enum class EInterp : uint8;
enum class EFractalType : uint8;
enum class ESimpleNoiseType : uint8;
enum class EWarpIterations : uint8;
enum class ENoiseType : uint8;
#ifdef UNREALFASTNOISEPLUGIN_UFNBlueprintFunctionLibrary_generated_h
#error "UFNBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in UFNBlueprintFunctionLibrary.h"
#endif
#define UNREALFASTNOISEPLUGIN_UFNBlueprintFunctionLibrary_generated_h

#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreate3SelectModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule3); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lowerThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_upperThreshold); \
		P_GET_ENUM(ESelectInterpType,Z_Param_interpolationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_falloff); \
		P_GET_PROPERTY(UIntProperty,Z_Param_steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::Create3SelectModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_inputModule3,Z_Param_selectModule,Z_Param_lowerThreshold,Z_Param_upperThreshold,ESelectInterpType(Z_Param_interpolationType),Z_Param_falloff,Z_Param_steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSplineGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_TARRAY(USplineComponent*,Z_Param_Splines); \
		P_GET_OBJECT(UCurveFloat,Z_Param_falloffCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSplineGenerator(Z_Param_outer,Z_Param_MaxDistance,Z_Param_MinDistance,Z_Param_Splines,Z_Param_falloffCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCellularNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_ENUM(ECellularDistanceFunction,Z_Param_cellularDistanceFunction); \
		P_GET_ENUM(ECellularReturnType,Z_Param_cellularReturnType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateCellularNoiseGenerator(Z_Param_outer,Z_Param_seed,Z_Param_frequency,ECellularDistanceFunction(Z_Param_cellularDistanceFunction),ECellularReturnType(Z_Param_cellularReturnType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFractalNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(EFractalNoiseType,Z_Param_noiseType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fractalGain); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_GET_ENUM(EFractalType,Z_Param_fractalType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lacunarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateFractalNoiseGenerator(Z_Param_outer,EFractalNoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,Z_Param_fractalGain,EInterp(Z_Param_interpolation),EFractalType(Z_Param_fractalType),Z_Param_octaves,Z_Param_lacunarity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSimpleNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(ESimpleNoiseType,Z_Param_noiseType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSimpleNoiseGenerator(Z_Param_outer,ESimpleNoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,EInterp(Z_Param_interpolation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateConstantModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_constantValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateConstantModule(Z_Param_outer,Z_Param_constantValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAddModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_maskModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateAddModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_maskModule,Z_Param_threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWarpModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_warpModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_GET_ENUM(EWarpIterations,Z_Param_warpIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateWarpModule(Z_Param_outer,Z_Param_inputModule,Z_Param_warpModule,Z_Param_multiplier,EWarpIterations(Z_Param_warpIterations)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateScaleBiasModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateScaleBiasModule(Z_Param_outer,Z_Param_inputModule,Z_Param_scale,Z_Param_bias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBlendModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_OBJECT(UCurveFloat,Z_Param_blendCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateBlendModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_selectModule,Z_Param_blendCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSelectModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_ENUM(ESelectInterpType,Z_Param_interpolationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_falloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_threshold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSelectModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_selectModule,ESelectInterpType(Z_Param_interpolationType),Z_Param_falloff,Z_Param_threshold,Z_Param_steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(ENoiseType,Z_Param_noiseType); \
		P_GET_ENUM(ECellularDistanceFunction,Z_Param_cellularDistanceFunction); \
		P_GET_ENUM(ECellularReturnType,Z_Param_cellularReturnType); \
		P_GET_ENUM(EFractalType,Z_Param_fractalType); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lacunarity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fractalGain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(Z_Param_outer,ENoiseType(Z_Param_noiseType),ECellularDistanceFunction(Z_Param_cellularDistanceFunction),ECellularReturnType(Z_Param_cellularReturnType),EFractalType(Z_Param_fractalType),EInterp(Z_Param_interpolation),Z_Param_seed,Z_Param_octaves,Z_Param_frequency,Z_Param_lacunarity,Z_Param_fractalGain); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreate3SelectModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule3); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lowerThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_upperThreshold); \
		P_GET_ENUM(ESelectInterpType,Z_Param_interpolationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_falloff); \
		P_GET_PROPERTY(UIntProperty,Z_Param_steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::Create3SelectModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_inputModule3,Z_Param_selectModule,Z_Param_lowerThreshold,Z_Param_upperThreshold,ESelectInterpType(Z_Param_interpolationType),Z_Param_falloff,Z_Param_steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSplineGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_TARRAY(USplineComponent*,Z_Param_Splines); \
		P_GET_OBJECT(UCurveFloat,Z_Param_falloffCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSplineGenerator(Z_Param_outer,Z_Param_MaxDistance,Z_Param_MinDistance,Z_Param_Splines,Z_Param_falloffCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCellularNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_ENUM(ECellularDistanceFunction,Z_Param_cellularDistanceFunction); \
		P_GET_ENUM(ECellularReturnType,Z_Param_cellularReturnType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateCellularNoiseGenerator(Z_Param_outer,Z_Param_seed,Z_Param_frequency,ECellularDistanceFunction(Z_Param_cellularDistanceFunction),ECellularReturnType(Z_Param_cellularReturnType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFractalNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(EFractalNoiseType,Z_Param_noiseType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fractalGain); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_GET_ENUM(EFractalType,Z_Param_fractalType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lacunarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateFractalNoiseGenerator(Z_Param_outer,EFractalNoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,Z_Param_fractalGain,EInterp(Z_Param_interpolation),EFractalType(Z_Param_fractalType),Z_Param_octaves,Z_Param_lacunarity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSimpleNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(ESimpleNoiseType,Z_Param_noiseType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSimpleNoiseGenerator(Z_Param_outer,ESimpleNoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,EInterp(Z_Param_interpolation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateConstantModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_constantValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateConstantModule(Z_Param_outer,Z_Param_constantValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAddModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_maskModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateAddModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_maskModule,Z_Param_threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWarpModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_warpModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_GET_ENUM(EWarpIterations,Z_Param_warpIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateWarpModule(Z_Param_outer,Z_Param_inputModule,Z_Param_warpModule,Z_Param_multiplier,EWarpIterations(Z_Param_warpIterations)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateScaleBiasModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateScaleBiasModule(Z_Param_outer,Z_Param_inputModule,Z_Param_scale,Z_Param_bias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBlendModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_OBJECT(UCurveFloat,Z_Param_blendCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateBlendModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_selectModule,Z_Param_blendCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSelectModule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule1); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_inputModule2); \
		P_GET_OBJECT(UUFNNoiseGenerator,Z_Param_selectModule); \
		P_GET_ENUM(ESelectInterpType,Z_Param_interpolationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_falloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_threshold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateSelectModule(Z_Param_outer,Z_Param_inputModule1,Z_Param_inputModule2,Z_Param_selectModule,ESelectInterpType(Z_Param_interpolationType),Z_Param_falloff,Z_Param_threshold,Z_Param_steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNoiseGenerator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_outer); \
		P_GET_ENUM(ENoiseType,Z_Param_noiseType); \
		P_GET_ENUM(ECellularDistanceFunction,Z_Param_cellularDistanceFunction); \
		P_GET_ENUM(ECellularReturnType,Z_Param_cellularReturnType); \
		P_GET_ENUM(EFractalType,Z_Param_fractalType); \
		P_GET_ENUM(EInterp,Z_Param_interpolation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lacunarity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fractalGain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUFNNoiseGenerator**)Z_Param__Result=UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(Z_Param_outer,ENoiseType(Z_Param_noiseType),ECellularDistanceFunction(Z_Param_cellularDistanceFunction),ECellularReturnType(Z_Param_cellularReturnType),EFractalType(Z_Param_fractalType),EInterp(Z_Param_interpolation),Z_Param_seed,Z_Param_octaves,Z_Param_frequency,Z_Param_lacunarity,Z_Param_fractalGain); \
		P_NATIVE_END; \
	}


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUFNBlueprintFunctionLibrary(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UUFNBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUUFNBlueprintFunctionLibrary(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UUFNBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNBlueprintFunctionLibrary(UUFNBlueprintFunctionLibrary&&); \
	NO_API UUFNBlueprintFunctionLibrary(const UUFNBlueprintFunctionLibrary&); \
public:


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNBlueprintFunctionLibrary(UUFNBlueprintFunctionLibrary&&); \
	NO_API UUFNBlueprintFunctionLibrary(const UUFNBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNBlueprintFunctionLibrary)


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_6_PROLOG
#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_RPC_WRAPPERS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_INCLASS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
	OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UFNBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_16_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
