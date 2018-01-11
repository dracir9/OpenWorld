// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNNoiseGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNNoiseGenerator() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise2D();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise3D();
// End Cross Module References
	void UUFNNoiseGenerator::StaticRegisterNativesUUFNNoiseGenerator()
	{
		UClass* Class = UUFNNoiseGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNoise2D", (Native)&UUFNNoiseGenerator::execGetNoise2D },
			{ "GetNoise3D", (Native)&UUFNNoiseGenerator::execGetNoise3D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise2D()
	{
		struct UFNNoiseGenerator_eventGetNoise2D_Parms
		{
			float aX;
			float aY;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aY = { UE4CodeGen_Private::EPropertyClass::Float, "aY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise2D_Parms, aY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aX = { UE4CodeGen_Private::EPropertyClass::Float, "aX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise2D_Parms, aX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNNoiseGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNNoiseGenerator, "GetNoise2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(UFNNoiseGenerator_eventGetNoise2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise3D()
	{
		struct UFNNoiseGenerator_eventGetNoise3D_Parms
		{
			float aX;
			float aY;
			float aZ;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aZ = { UE4CodeGen_Private::EPropertyClass::Float, "aZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise3D_Parms, aZ), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aY = { UE4CodeGen_Private::EPropertyClass::Float, "aY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise3D_Parms, aY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aX = { UE4CodeGen_Private::EPropertyClass::Float, "aX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UFNNoiseGenerator_eventGetNoise3D_Parms, aX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UnrealFastNoise" },
				{ "ModuleRelativePath", "Public/UFNNoiseGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNNoiseGenerator, "GetNoise3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(UFNNoiseGenerator_eventGetNoise3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister()
	{
		return UUFNNoiseGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNNoiseGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise2D, "GetNoise2D" }, // 2657635972
				{ &Z_Construct_UFunction_UUFNNoiseGenerator_GetNoise3D, "GetNoise3D" }, // 370796415
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "UFNNoiseGenerator.h" },
				{ "ModuleRelativePath", "Public/UFNNoiseGenerator.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNNoiseGenerator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNNoiseGenerator::StaticClass,
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
	IMPLEMENT_CLASS(UUFNNoiseGenerator, 3823328274);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNNoiseGenerator(Z_Construct_UClass_UUFNNoiseGenerator, &UUFNNoiseGenerator::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNNoiseGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNNoiseGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
