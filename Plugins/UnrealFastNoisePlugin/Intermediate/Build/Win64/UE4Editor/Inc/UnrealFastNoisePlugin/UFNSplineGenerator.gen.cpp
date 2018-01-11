// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNSplineGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNSplineGenerator() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNSplineGenerator_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNSplineGenerator();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UFunction* Z_Construct_UFunction_UUFNSplineGenerator_AddSpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void UUFNSplineGenerator::StaticRegisterNativesUUFNSplineGenerator()
	{
		UClass* Class = UUFNSplineGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSpline", (Native)&UUFNSplineGenerator::execAddSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUFNSplineGenerator_AddSpline()
	{
		struct UFNSplineGenerator_eventAddSpline_Parms
		{
			USplineComponent* Spline;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline = { UE4CodeGen_Private::EPropertyClass::Object, "Spline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(UFNSplineGenerator_eventAddSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_Spline_MetaData, ARRAY_COUNT(NewProp_Spline_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spline,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FastNoise" },
				{ "ModuleRelativePath", "Public/UFNSplineGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUFNSplineGenerator, "AddSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UFNSplineGenerator_eventAddSpline_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUFNSplineGenerator_NoRegister()
	{
		return UUFNSplineGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNSplineGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUFNNoiseGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUFNSplineGenerator_AddSpline, "AddSpline" }, // 367566859
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "UFNSplineGenerator.h" },
				{ "ModuleRelativePath", "Public/UFNSplineGenerator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splines_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UFNSplineGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splines = { UE4CodeGen_Private::EPropertyClass::Array, "Splines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UUFNSplineGenerator, Splines), METADATA_PARAMS(NewProp_Splines_MetaData, ARRAY_COUNT(NewProp_Splines_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Splines_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Splines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Splines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Splines_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNSplineGenerator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNSplineGenerator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUFNSplineGenerator, 150374591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNSplineGenerator(Z_Construct_UClass_UUFNSplineGenerator, &UUFNSplineGenerator::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNSplineGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNSplineGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
