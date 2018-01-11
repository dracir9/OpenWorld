// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/UnrealFastNoisePlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealFastNoisePlugin() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
// End Cross Module References
	static UEnum* EWarpIterations_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("EWarpIterations"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWarpIterations(EWarpIterations_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("EWarpIterations"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations_CRC() { return 2320915397U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWarpIterations"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EWarpIterations_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWarpIterations::One", (int64)EWarpIterations::One },
				{ "EWarpIterations::Two", (int64)EWarpIterations::Two },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UnrealFastNoisePlugin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWarpIterations",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWarpIterations",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
