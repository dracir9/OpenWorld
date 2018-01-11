// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UnrealFastNoisePlugin.h"
#include "Public/FastNoise/FastNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoise() {}
// Cross Module References
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType();
	UPackage* Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EPositionWarpType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType();
	UNREALFASTNOISEPLUGIN_API UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UFastNoise_NoRegister();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UFastNoise();
	UNREALFASTNOISEPLUGIN_API UClass* Z_Construct_UClass_UUFNNoiseGenerator();
// End Cross Module References
	static UEnum* ESelectInterpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("ESelectInterpType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectInterpType(ESelectInterpType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("ESelectInterpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType_CRC() { return 926771036U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectInterpType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ESelectInterpType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectInterpType::None", (int64)ESelectInterpType::None },
				{ "ESelectInterpType::CircularIn", (int64)ESelectInterpType::CircularIn },
				{ "ESelectInterpType::CircularOut", (int64)ESelectInterpType::CircularOut },
				{ "ESelectInterpType::CircularInOut", (int64)ESelectInterpType::CircularInOut },
				{ "ESelectInterpType::ExponentialIn", (int64)ESelectInterpType::ExponentialIn },
				{ "ESelectInterpType::ExponentialOut", (int64)ESelectInterpType::ExponentialOut },
				{ "ESelectInterpType::ExponentialInOut", (int64)ESelectInterpType::ExponentialInOut },
				{ "ESelectInterpType::SineIn", (int64)ESelectInterpType::SineIn },
				{ "ESelectInterpType::SineOut", (int64)ESelectInterpType::SineOut },
				{ "ESelectInterpType::SineInOut", (int64)ESelectInterpType::SineInOut },
				{ "ESelectInterpType::Step", (int64)ESelectInterpType::Step },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESelectInterpType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESelectInterpType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPositionWarpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_EPositionWarpType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("EPositionWarpType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPositionWarpType(EPositionWarpType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("EPositionWarpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EPositionWarpType_CRC() { return 4213558458U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EPositionWarpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPositionWarpType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EPositionWarpType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPositionWarpType::None", (int64)EPositionWarpType::None },
				{ "EPositionWarpType::Regular", (int64)EPositionWarpType::Regular },
				{ "EPositionWarpType::Fractal", (int64)EPositionWarpType::Fractal },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPositionWarpType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPositionWarpType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECellularReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("ECellularReturnType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECellularReturnType(ECellularReturnType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("ECellularReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType_CRC() { return 1613888163U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECellularReturnType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECellularReturnType::CellValue", (int64)ECellularReturnType::CellValue },
				{ "ECellularReturnType::NoiseLookup", (int64)ECellularReturnType::NoiseLookup },
				{ "ECellularReturnType::Distance", (int64)ECellularReturnType::Distance },
				{ "ECellularReturnType::Distance2", (int64)ECellularReturnType::Distance2 },
				{ "ECellularReturnType::Distance2Add", (int64)ECellularReturnType::Distance2Add },
				{ "ECellularReturnType::Distance2Sub", (int64)ECellularReturnType::Distance2Sub },
				{ "ECellularReturnType::Distance2Mul", (int64)ECellularReturnType::Distance2Mul },
				{ "ECellularReturnType::Distance2Div", (int64)ECellularReturnType::Distance2Div },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECellularReturnType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECellularReturnType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECellularDistanceFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("ECellularDistanceFunction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECellularDistanceFunction(ECellularDistanceFunction_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("ECellularDistanceFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction_CRC() { return 3195589461U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECellularDistanceFunction"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECellularDistanceFunction::Euclidean", (int64)ECellularDistanceFunction::Euclidean },
				{ "ECellularDistanceFunction::Manhattan", (int64)ECellularDistanceFunction::Manhattan },
				{ "ECellularDistanceFunction::Natural", (int64)ECellularDistanceFunction::Natural },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECellularDistanceFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECellularDistanceFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFractalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("EFractalType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFractalType(EFractalType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("EFractalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType_CRC() { return 1520106474U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFractalType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFractalType::FBM", (int64)EFractalType::FBM },
				{ "EFractalType::Billow", (int64)EFractalType::Billow },
				{ "EFractalType::RigidMulti", (int64)EFractalType::RigidMulti },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFractalType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFractalType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInterp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("EInterp"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterp(EInterp_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("EInterp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp_CRC() { return 3053792040U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterp"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterp::InterpLinear", (int64)EInterp::InterpLinear },
				{ "EInterp::InterpHermite", (int64)EInterp::InterpHermite },
				{ "EInterp::InterpQuintic", (int64)EInterp::InterpQuintic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InterpHermite.DisplayName", "Hermite" },
				{ "InterpLinear.DisplayName", "Linear" },
				{ "InterpQuintic.DisplayName", "Quintic" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInterp",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EInterp",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFractalNoiseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("EFractalNoiseType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFractalNoiseType(EFractalNoiseType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("EFractalNoiseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType_CRC() { return 1623519621U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFractalNoiseType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalNoiseType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFractalNoiseType::FractalValue", (int64)EFractalNoiseType::FractalValue },
				{ "EFractalNoiseType::FractalGradient", (int64)EFractalNoiseType::FractalGradient },
				{ "EFractalNoiseType::FractalSimplex", (int64)EFractalNoiseType::FractalSimplex },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FractalGradient.DisplayName", "Gradient" },
				{ "FractalSimplex.DisplayName", "Simplex" },
				{ "FractalValue.DisplayName", "Value" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFractalNoiseType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFractalNoiseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleNoiseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("ESimpleNoiseType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleNoiseType(ESimpleNoiseType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("ESimpleNoiseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType_CRC() { return 1230062623U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleNoiseType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ESimpleNoiseType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleNoiseType::SimpleValue", (int64)ESimpleNoiseType::SimpleValue },
				{ "ESimpleNoiseType::SimpleGradient", (int64)ESimpleNoiseType::SimpleGradient },
				{ "ESimpleNoiseType::SimpleSimplex", (int64)ESimpleNoiseType::SimpleSimplex },
				{ "ESimpleNoiseType::SimpleWhiteNoise", (int64)ESimpleNoiseType::SimpleWhiteNoise },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
				{ "SimpleGradient.DisplayName", "Gradient" },
				{ "SimpleSimplex.DisplayName", "Simplex" },
				{ "SimpleValue.DisplayName", "Value" },
				{ "SimpleWhiteNoise.DisplayName", "WhiteNoise" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESimpleNoiseType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESimpleNoiseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENoiseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType, Z_Construct_UPackage__Script_UnrealFastNoisePlugin(), TEXT("ENoiseType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoiseType(ENoiseType_StaticEnum, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("ENoiseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType_CRC() { return 1544704250U; }
	UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealFastNoisePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoiseType"), 0, Get_Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENoiseType::Value", (int64)ENoiseType::Value },
				{ "ENoiseType::ValueFractal", (int64)ENoiseType::ValueFractal },
				{ "ENoiseType::Gradient", (int64)ENoiseType::Gradient },
				{ "ENoiseType::GradientFractal", (int64)ENoiseType::GradientFractal },
				{ "ENoiseType::Simplex", (int64)ENoiseType::Simplex },
				{ "ENoiseType::SimplexFractal", (int64)ENoiseType::SimplexFractal },
				{ "ENoiseType::Cellular", (int64)ENoiseType::Cellular },
				{ "ENoiseType::WhiteNoise", (int64)ENoiseType::WhiteNoise },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealFastNoisePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENoiseType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ENoiseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFastNoise::StaticRegisterNativesUFastNoise()
	{
	}
	UClass* Z_Construct_UClass_UFastNoise_NoRegister()
	{
		return UFastNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UFastNoise()
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
				{ "IncludePath", "FastNoise/FastNoise.h" },
				{ "ModuleRelativePath", "Public/FastNoise/FastNoise.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFastNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFastNoise::StaticClass,
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
	IMPLEMENT_CLASS(UFastNoise, 3446099712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFastNoise(Z_Construct_UClass_UFastNoise, &UFastNoise::StaticClass, TEXT("/Script/UnrealFastNoisePlugin"), TEXT("UFastNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFastNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
