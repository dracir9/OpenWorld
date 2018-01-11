// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNBlueprintFunctionLibrary() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_Create3SelectModule();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateAddModule();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateBlendModule();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateCellularNoiseGenerator();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateConstantModule();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateFractalNoiseGenerator();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateNoiseGenerator();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateScaleBiasModule();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSelectModule();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSimpleNoiseGenerator();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSplineGenerator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateWarpModule();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations();
// End Cross Module References
	void UUFNBlueprintFunctionLibrary::StaticRegisterNativesUUFNBlueprintFunctionLibrary()
	{
		UClass* Class = UUFNBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create3SelectModule", (Native)&UUFNBlueprintFunctionLibrary::execCreate3SelectModule },
			{ "CreateAddModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateAddModule },
			{ "CreateBlendModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateBlendModule },
			{ "CreateCellularNoiseGenerator", (Native)&UUFNBlueprintFunctionLibrary::execCreateCellularNoiseGenerator },
			{ "CreateConstantModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateConstantModule },
			{ "CreateFractalNoiseGenerator", (Native)&UUFNBlueprintFunctionLibrary::execCreateFractalNoiseGenerator },
			{ "CreateNoiseGenerator", (Native)&UUFNBlueprintFunctionLibrary::execCreateNoiseGenerator },
			{ "CreateScaleBiasModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateScaleBiasModule },
			{ "CreateSelectModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateSelectModule },
			{ "CreateSimpleNoiseGenerator", (Native)&UUFNBlueprintFunctionLibrary::execCreateSimpleNoiseGenerator },
			{ "CreateSplineGenerator", (Native)&UUFNBlueprintFunctionLibrary::execCreateSplineGenerator },
			{ "CreateWarpModule", (Native)&UUFNBlueprintFunctionLibrary::execCreateWarpModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_Create3SelectModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule1;
			UUFNNoiseGenerator* inputModule2;
			UUFNNoiseGenerator* inputModule3;
			UUFNNoiseGenerator* selectModule;
			float lowerThreshold;
			float upperThreshold;
			ESelectInterpType interpolationType;
			float falloff;
			int32 steps;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_steps = { UE4CodeGen_Private::EPropertyClass::Int, "steps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, steps), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_falloff = { UE4CodeGen_Private::EPropertyClass::Float, "falloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, falloff), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interpolationType = { UE4CodeGen_Private::EPropertyClass::Enum, "interpolationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, interpolationType), Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interpolationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_upperThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "upperThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, upperThreshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lowerThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "lowerThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, lowerThreshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectModule = { UE4CodeGen_Private::EPropertyClass::Object, "selectModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, selectModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule3 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, inputModule3), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule2 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, inputModule2), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule1 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, inputModule1), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_steps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_falloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolationType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_upperThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lowerThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selectModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_falloff", "0.000000" },
				{ "CPP_Default_interpolationType", "None" },
				{ "CPP_Default_lowerThreshold", "0.000000" },
				{ "CPP_Default_steps", "4" },
				{ "CPP_Default_upperThreshold", "0.000000" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Select module. Returns a value either from input1 or input 2 or input 3, depending on the value returned from the select module." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "Create3SelectModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreate3SelectModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateAddModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule1;
			UUFNNoiseGenerator* inputModule2;
			UUFNNoiseGenerator* maskModule;
			float threshold;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_threshold = { UE4CodeGen_Private::EPropertyClass::Float, "threshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, threshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maskModule = { UE4CodeGen_Private::EPropertyClass::Object, "maskModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, maskModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule2 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, inputModule2), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule1 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, inputModule1), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_threshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maskModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_threshold", "1.000000" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates an Add module. Adds two modules together, clamping the result and optionally accepting a third module as a mask with threshold" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateAddModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateAddModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateBlendModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule1;
			UUFNNoiseGenerator* inputModule2;
			UUFNNoiseGenerator* selectModule;
			UCurveFloat* blendCurve;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "blendCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, blendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectModule = { UE4CodeGen_Private::EPropertyClass::Object, "selectModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, selectModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule2 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, inputModule2), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule1 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, inputModule1), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_blendCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selectModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates Blend modules. Returns a blended value from input1 and input 2, based on the value returned from the select module. Blend range is from -1.0 to 1.0;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateBlendModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateBlendModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateCellularNoiseGenerator()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms
		{
			UObject* outer;
			int32 seed;
			float frequency;
			ECellularDistanceFunction cellularDistanceFunction;
			ECellularReturnType cellularReturnType;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType = { UE4CodeGen_Private::EPropertyClass::Enum, "cellularReturnType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, cellularReturnType), Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction = { UE4CodeGen_Private::EPropertyClass::Enum, "cellularDistanceFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, cellularDistanceFunction), Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed = { UE4CodeGen_Private::EPropertyClass::Int, "seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularReturnType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularReturnType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularDistanceFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularDistanceFunction_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_cellularDistanceFunction", "Euclidean" },
				{ "CPP_Default_cellularReturnType", "CellValue" },
				{ "CPP_Default_frequency", "0.100000" },
				{ "CPP_Default_seed", "12345" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Cellular (Voronoi) noise module" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateCellularNoiseGenerator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateCellularNoiseGenerator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateConstantModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateConstantModule_Parms
		{
			UObject* outer;
			float constantValue;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateConstantModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_constantValue = { UE4CodeGen_Private::EPropertyClass::Float, "constantValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateConstantModule_Parms, constantValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateConstantModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_constantValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Constant modules. Returns a constant value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateConstantModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateConstantModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateFractalNoiseGenerator()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms
		{
			UObject* outer;
			EFractalNoiseType noiseType;
			int32 seed;
			float frequency;
			float fractalGain;
			EInterp interpolation;
			EFractalType fractalType;
			int32 octaves;
			float lacunarity;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacunarity = { UE4CodeGen_Private::EPropertyClass::Float, "lacunarity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, lacunarity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_octaves = { UE4CodeGen_Private::EPropertyClass::Int, "octaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, octaves), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fractalType = { UE4CodeGen_Private::EPropertyClass::Enum, "fractalType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, fractalType), Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interpolation = { UE4CodeGen_Private::EPropertyClass::Enum, "interpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, interpolation), Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interpolation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fractalGain = { UE4CodeGen_Private::EPropertyClass::Float, "fractalGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, fractalGain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed = { UE4CodeGen_Private::EPropertyClass::Int, "seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noiseType = { UE4CodeGen_Private::EPropertyClass::Enum, "noiseType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, noiseType), Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lacunarity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_octaves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_fractalGain", "0.500000" },
				{ "CPP_Default_fractalType", "Billow" },
				{ "CPP_Default_frequency", "0.100000" },
				{ "CPP_Default_interpolation", "InterpLinear" },
				{ "CPP_Default_lacunarity", "2.000000" },
				{ "CPP_Default_octaves", "4" },
				{ "CPP_Default_seed", "12345" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Fractal noise module" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateFractalNoiseGenerator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateFractalNoiseGenerator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateNoiseGenerator()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms
		{
			UObject* outer;
			ENoiseType noiseType;
			ECellularDistanceFunction cellularDistanceFunction;
			ECellularReturnType cellularReturnType;
			EFractalType fractalType;
			EInterp interpolation;
			int32 seed;
			int32 octaves;
			float frequency;
			float lacunarity;
			float fractalGain;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fractalGain = { UE4CodeGen_Private::EPropertyClass::Float, "fractalGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, fractalGain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacunarity = { UE4CodeGen_Private::EPropertyClass::Float, "lacunarity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, lacunarity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_octaves = { UE4CodeGen_Private::EPropertyClass::Int, "octaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, octaves), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed = { UE4CodeGen_Private::EPropertyClass::Int, "seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interpolation = { UE4CodeGen_Private::EPropertyClass::Enum, "interpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, interpolation), Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interpolation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fractalType = { UE4CodeGen_Private::EPropertyClass::Enum, "fractalType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, fractalType), Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType = { UE4CodeGen_Private::EPropertyClass::Enum, "cellularReturnType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, cellularReturnType), Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction = { UE4CodeGen_Private::EPropertyClass::Enum, "cellularDistanceFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, cellularDistanceFunction), Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noiseType = { UE4CodeGen_Private::EPropertyClass::Enum, "noiseType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, noiseType), Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lacunarity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_octaves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fractalType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularReturnType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularReturnType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularDistanceFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cellularDistanceFunction_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_fractalGain", "0.500000" },
				{ "CPP_Default_frequency", "0.001000" },
				{ "CPP_Default_lacunarity", "2.000000" },
				{ "CPP_Default_octaves", "4" },
				{ "CPP_Default_seed", "1337" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a new noise generator module. Note that not all parameters may be relevant e.g. Fractal noise types will ignore Cellular parameters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateNoiseGenerator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateNoiseGenerator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateScaleBiasModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule;
			float scale;
			float bias;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bias = { UE4CodeGen_Private::EPropertyClass::Float, "bias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms, bias), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale = { UE4CodeGen_Private::EPropertyClass::Float, "scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms, scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms, inputModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_bias", "0.000000" },
				{ "CPP_Default_scale", "1.000000" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Scale/Bias modules. Applies a multiplier, and or additive value to the value returned from the input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateScaleBiasModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateScaleBiasModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSelectModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule1;
			UUFNNoiseGenerator* inputModule2;
			UUFNNoiseGenerator* selectModule;
			ESelectInterpType interpolationType;
			float falloff;
			float threshold;
			int32 steps;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_steps = { UE4CodeGen_Private::EPropertyClass::Int, "steps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, steps), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_threshold = { UE4CodeGen_Private::EPropertyClass::Float, "threshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, threshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_falloff = { UE4CodeGen_Private::EPropertyClass::Float, "falloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, falloff), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interpolationType = { UE4CodeGen_Private::EPropertyClass::Enum, "interpolationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, interpolationType), Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interpolationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectModule = { UE4CodeGen_Private::EPropertyClass::Object, "selectModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, selectModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule2 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, inputModule2), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule1 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, inputModule1), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_steps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_threshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_falloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolationType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selectModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_falloff", "0.000000" },
				{ "CPP_Default_interpolationType", "None" },
				{ "CPP_Default_steps", "4" },
				{ "CPP_Default_threshold", "0.000000" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a Select module. Returns a value either from input1 or input 2, depending on the value returned from the select module. Has sine in/out smooth falloff option (may be wonky)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateSelectModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateSelectModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSimpleNoiseGenerator()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms
		{
			UObject* outer;
			ESimpleNoiseType noiseType;
			int32 seed;
			float frequency;
			EInterp interpolation;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interpolation = { UE4CodeGen_Private::EPropertyClass::Enum, "interpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, interpolation), Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interpolation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed = { UE4CodeGen_Private::EPropertyClass::Int, "seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noiseType = { UE4CodeGen_Private::EPropertyClass::Enum, "noiseType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, noiseType), Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interpolation_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noiseType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "CPP_Default_frequency", "0.100000" },
				{ "CPP_Default_interpolation", "InterpLinear" },
				{ "CPP_Default_seed", "12345" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a simple (non-fractal) noise module" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateSimpleNoiseGenerator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateSimpleNoiseGenerator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSplineGenerator()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms
		{
			UObject* outer;
			float MaxDistance;
			float MinDistance;
			TArray<USplineComponent*> Splines;
			UCurveFloat* falloffCurve;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_falloffCurve = { UE4CodeGen_Private::EPropertyClass::Object, "falloffCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, falloffCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splines_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splines = { UE4CodeGen_Private::EPropertyClass::Array, "Splines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, Splines), METADATA_PARAMS(NewProp_Splines_MetaData, ARRAY_COUNT(NewProp_Splines_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Splines_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Splines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, MinDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_falloffCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Splines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Splines_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Creates a spline module." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateSplineGenerator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateSplineGenerator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateWarpModule()
	{
		struct UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms
		{
			UObject* outer;
			UUFNNoiseGenerator* inputModule;
			UUFNNoiseGenerator* warpModule;
			float multiplier;
			EWarpIterations warpIterations;
			UUFNNoiseGenerator* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, ReturnValue), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_warpIterations = { UE4CodeGen_Private::EPropertyClass::Enum, "warpIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, warpIterations), Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_warpIterations_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_warpModule = { UE4CodeGen_Private::EPropertyClass::Object, "warpModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, warpModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, inputModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer = { UE4CodeGen_Private::EPropertyClass::Object, "outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_warpIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_warpIterations_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_warpModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNBlueprintFunctionLibrary, "CreateWarpModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(UFNBlueprintFunctionLibrary_eventCreateWarpModule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary_NoRegister()
	{
		return UUFNBlueprintFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_Create3SelectModule, "Create3SelectModule" }, // 2957571195
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateAddModule, "CreateAddModule" }, // 94252390
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateBlendModule, "CreateBlendModule" }, // 29203990
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateCellularNoiseGenerator, "CreateCellularNoiseGenerator" }, // 702003467
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateConstantModule, "CreateConstantModule" }, // 1546373721
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateFractalNoiseGenerator, "CreateFractalNoiseGenerator" }, // 1039125966
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateNoiseGenerator, "CreateNoiseGenerator" }, // 955522995
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateScaleBiasModule, "CreateScaleBiasModule" }, // 992190864
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSelectModule, "CreateSelectModule" }, // 3200454488
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSimpleNoiseGenerator, "CreateSimpleNoiseGenerator" }, // 1325138142
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateSplineGenerator, "CreateSplineGenerator" }, // 924376135
				{ &Z_Construct_UFunction_UUFNBlueprintFunctionLibrary_CreateWarpModule, "CreateWarpModule" }, // 2066894268
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UFNBlueprintFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/UFNBlueprintFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNBlueprintFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNBlueprintFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUFNBlueprintFunctionLibrary, 3634850689);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNBlueprintFunctionLibrary(Z_Construct_UClass_UUFNBlueprintFunctionLibrary, &UUFNBlueprintFunctionLibrary::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
