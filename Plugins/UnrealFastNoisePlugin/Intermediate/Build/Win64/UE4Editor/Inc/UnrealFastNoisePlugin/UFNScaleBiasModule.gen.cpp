// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNScaleBiasModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNScaleBiasModule() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNScaleBiasModule_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNScaleBiasModule();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister();
// End Cross Module References
	void UUFNScaleBiasModule::StaticRegisterNativesUUFNScaleBiasModule()
	{
	}
	UClass* Z_Construct_UClass_UUFNScaleBiasModule_NoRegister()
	{
		return UUFNScaleBiasModule::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNScaleBiasModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUFNNoiseGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UFNScaleBiasModule.h" },
				{ "ModuleRelativePath", "Public/UFNScaleBiasModule.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputModule_MetaData[] = {
				{ "ModuleRelativePath", "Public/UFNScaleBiasModule.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUFNScaleBiasModule, inputModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(NewProp_inputModule_MetaData, ARRAY_COUNT(NewProp_inputModule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNScaleBiasModule>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNScaleBiasModule::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UUFNScaleBiasModule, 4019561046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNScaleBiasModule(Z_Construct_UClass_UUFNScaleBiasModule, &UUFNScaleBiasModule::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNScaleBiasModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNScaleBiasModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
