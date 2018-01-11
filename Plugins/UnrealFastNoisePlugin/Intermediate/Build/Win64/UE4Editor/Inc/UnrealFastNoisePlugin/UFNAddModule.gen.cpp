// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNAddModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNAddModule() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNAddModule_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNAddModule();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister();
// End Cross Module References
	void UUFNAddModule::StaticRegisterNativesUUFNAddModule()
	{
	}
	UClass* Z_Construct_UClass_UUFNAddModule_NoRegister()
	{
		return UUFNAddModule::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNAddModule()
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
				{ "IncludePath", "UFNAddModule.h" },
				{ "ModuleRelativePath", "Public/UFNAddModule.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maskModule_MetaData[] = {
				{ "ModuleRelativePath", "Public/UFNAddModule.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maskModule = { UE4CodeGen_Private::EPropertyClass::Object, "maskModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUFNAddModule, maskModule), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(NewProp_maskModule_MetaData, ARRAY_COUNT(NewProp_maskModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputModule2_MetaData[] = {
				{ "ModuleRelativePath", "Public/UFNAddModule.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule2 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUFNAddModule, inputModule2), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(NewProp_inputModule2_MetaData, ARRAY_COUNT(NewProp_inputModule2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputModule1_MetaData[] = {
				{ "ModuleRelativePath", "Public/UFNAddModule.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputModule1 = { UE4CodeGen_Private::EPropertyClass::Object, "inputModule1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UUFNAddModule, inputModule1), Z_Construct_UClass_UUFNNoiseGenerator_NoRegister, METADATA_PARAMS(NewProp_inputModule1_MetaData, ARRAY_COUNT(NewProp_inputModule1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maskModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inputModule1,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNAddModule>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNAddModule::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UUFNAddModule, 1677149733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNAddModule(Z_Construct_UClass_UUFNAddModule, &UUFNAddModule::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNAddModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNAddModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
