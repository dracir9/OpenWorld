// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UFNConstantModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFNConstantModule() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNConstantModule_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNConstantModule();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
// End Cross Module References
	void UUFNConstantModule::StaticRegisterNativesUUFNConstantModule()
	{
	}
	UClass* Z_Construct_UClass_UUFNConstantModule_NoRegister()
	{
		return UUFNConstantModule::StaticClass();
	}
	UClass* Z_Construct_UClass_UUFNConstantModule()
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
				{ "IncludePath", "UFNConstantModule.h" },
				{ "ModuleRelativePath", "Public/UFNConstantModule.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUFNConstantModule>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUFNConstantModule::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UUFNConstantModule, 3654878269);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUFNConstantModule(Z_Construct_UClass_UUFNConstantModule, &UUFNConstantModule::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UUFNConstantModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUFNConstantModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
