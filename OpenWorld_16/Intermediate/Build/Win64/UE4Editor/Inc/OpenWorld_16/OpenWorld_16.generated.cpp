// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenWorld_16.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1OpenWorld_16() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	UNREALFASTNOISEPLUGIN_API class UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp();
	UNREALFASTNOISEPLUGIN_API class UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType();
	UNREALFASTNOISEPLUGIN_API class UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType();
	UNREALFASTNOISEPLUGIN_API class UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction();
	UNREALFASTNOISEPLUGIN_API class UEnum* Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType();
	UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNNoiseGenerator_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	PROCEDURALMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API class UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();

	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_AddTriangles();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_GetVoxelFromWorld();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_InRange();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_LoadMap();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_SetVoxelFromWorld();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_UnloadMap();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldManager_UpdatePosition();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldManager_NoRegister();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldManager();
	OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FVoxelTipes();
	OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FDynamicMaterial();
	OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FMesh();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_AddTriangles();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_CalcMatIndex();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_GetDynMat();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_GetVoxelFromWorld();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_InRange();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_LoadMap();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_SetVoxelFromWorld();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_UnloadMap();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AWorldGameMode_UpdatePosition();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldGameMode_NoRegister();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AWorldGameMode();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AChunk_InitializeChunk();
	OPENWORLD_16_API class UFunction* Z_Construct_UFunction_AChunk_RenderChunk();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AChunk_NoRegister();
	OPENWORLD_16_API class UClass* Z_Construct_UClass_AChunk();
	OPENWORLD_16_API class UPackage* Z_Construct_UPackage__Script_OpenWorld_16();
	void AWorldManager::StaticRegisterNativesAWorldManager()
	{
		UClass* Class = AWorldManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddTriangles", (Native)&AWorldManager::execAddTriangles },
			{ "GetVoxelFromWorld", (Native)&AWorldManager::execGetVoxelFromWorld },
			{ "InRange", (Native)&AWorldManager::execInRange },
			{ "LoadMap", (Native)&AWorldManager::execLoadMap },
			{ "SetVoxelFromWorld", (Native)&AWorldManager::execSetVoxelFromWorld },
			{ "UnloadMap", (Native)&AWorldManager::execUnloadMap },
			{ "UpdatePosition", (Native)&AWorldManager::execUpdatePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 7);
	}
	UFunction* Z_Construct_UFunction_AWorldManager_AddTriangles()
	{
		struct WorldManager_eventAddTriangles_Parms
		{
			TArray<FVector> Vertex;
			TArray<int32> Triangles;
			TArray<uint8> values;
		};
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(WorldManager_eventAddTriangles_Parms));
			UProperty* NewProp_values = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(values, WorldManager_eventAddTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_values_Inner = new(EC_InternalUseOnlyConstructor, NewProp_values, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, WorldManager_eventAddTriangles_Parms), 0x0010000000000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertex"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertex, WorldManager_eventAddTriangles_Parms), 0x0010000000000180);
			UProperty* NewProp_Vertex_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertex, TEXT("Vertex"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_GetVoxelFromWorld()
	{
		struct WorldManager_eventGetVoxelFromWorld_Parms
		{
			FVector Location;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVoxelFromWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldManager_eventGetVoxelFromWorld_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, WorldManager_eventGetVoxelFromWorld_Parms), 0x0010000000000580);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, WorldManager_eventGetVoxelFromWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Voxel from world"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("block"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_InRange()
	{
		struct WorldManager_eventInRange_Parms
		{
			int32 x;
			int32 y;
			FVector2D Center;
			int32 Range;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldManager_eventInRange_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldManager_eventInRange_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldManager_eventInRange_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldManager_eventInRange_Parms), sizeof(bool), true);
			UProperty* NewProp_Range = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Range"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Range, WorldManager_eventInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_Center = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Center"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Center, WorldManager_eventInRange_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_y = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("y"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(y, WorldManager_eventInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_x = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("x"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(x, WorldManager_eventInRange_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Check Range"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Range"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Cheks if a chunk is in the render range"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_LoadMap()
	{
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Load Map"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Load"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add chunks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_SetVoxelFromWorld()
	{
		struct WorldManager_eventSetVoxelFromWorld_Parms
		{
			FVector Location;
			int32 value;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVoxelFromWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldManager_eventSetVoxelFromWorld_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldManager_eventSetVoxelFromWorld_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldManager_eventSetVoxelFromWorld_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldManager_eventSetVoxelFromWorld_Parms), sizeof(bool), true);
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(value, WorldManager_eventSetVoxelFromWorld_Parms), 0x0010000000000080);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, WorldManager_eventSetVoxelFromWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Set voxel from world"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("block"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_UnloadMap()
	{
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Unload map"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Unload"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Delete chunks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldManager_UpdatePosition()
	{
		struct WorldManager_eventUpdatePosition_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WorldManager_eventUpdatePosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldManager_eventUpdatePosition_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldManager_eventUpdatePosition_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldManager_eventUpdatePosition_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Update Position"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Update"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stores the player position"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldManager_NoRegister()
	{
		return AWorldManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorldManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OpenWorld_16();
			OuterClass = AWorldManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_AddTriangles());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_GetVoxelFromWorld());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_InRange());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_LoadMap());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_SetVoxelFromWorld());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_UnloadMap());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldManager_UpdatePosition());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_FractialGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FractialGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FractialGain, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Lacunarity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Lacunarity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Lacunarity, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Frequency = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Frequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Frequency, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Octaves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Octaves"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Octaves, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_seed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("seed"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(seed, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Interpolation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Interpolation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Interpolation, AWorldManager), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp());
				UProperty* NewProp_Interpolation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Interpolation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_FractalType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FractalType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FractalType, AWorldManager), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType());
				UProperty* NewProp_FractalType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FractalType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CellularReturnType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellularReturnType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CellularReturnType, AWorldManager), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType());
				UProperty* NewProp_CellularReturnType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CellularReturnType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CellularDistanceFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellularDistanceFunction"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CellularDistanceFunction, AWorldManager), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction());
				UProperty* NewProp_CellularDistanceFunction_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CellularDistanceFunction, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_NoiseType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NoiseType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NoiseType, AWorldManager), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType());
				UProperty* NewProp_NoiseType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NoiseType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Noise = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Noise"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Noise, AWorldManager), 0x0010000000000005, Z_Construct_UClass_UUFNNoiseGenerator_NoRegister());
				UProperty* NewProp_World = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(World, AWorldManager), 0x0010000000000015);
				UProperty* NewProp_World_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_World, TEXT("World_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_World_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_World, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, Z_Construct_UClass_AChunk_NoRegister());
				UProperty* NewProp_ChunkCenter = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkCenter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ChunkCenter, AWorldManager), 0x0010000000000015, Z_Construct_UScriptStruct_FVector2D());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UseRuntime, AWorldManager, bool);
				UProperty* NewProp_UseRuntime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UseRuntime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UseRuntime, AWorldManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(UseRuntime, AWorldManager), sizeof(bool), true);
				UProperty* NewProp_Voxels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Voxels"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Voxels, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Voxels_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Voxels, TEXT("Voxels"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_RenderRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RenderRange"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RenderRange, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_VoxelSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoxelSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(VoxelSize, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_ChunkSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ChunkSize, AWorldManager), 0x0010000000000005);
				UProperty* NewProp_Chunk = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Chunk"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Chunk, AWorldManager), 0x0014000000000005, Z_Construct_UClass_AChunk_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_AddTriangles(), "AddTriangles"); // 411845248
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_GetVoxelFromWorld(), "GetVoxelFromWorld"); // 1189663817
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_InRange(), "InRange"); // 520675455
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_LoadMap(), "LoadMap"); // 1419066917
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_SetVoxelFromWorld(), "SetVoxelFromWorld"); // 758202562
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_UnloadMap(), "UnloadMap"); // 2894671308
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldManager_UpdatePosition(), "UpdatePosition"); // 3533627819
				static TCppClassTypeInfo<TCppClassTypeTraits<AWorldManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_FractialGain, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_FractialGain, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Lacunarity, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Lacunarity, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Frequency, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Frequency, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Octaves, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Octaves, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_seed, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_seed, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Interpolation, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Interpolation, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_FractalType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_FractalType, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_CellularReturnType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_CellularReturnType, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_CellularDistanceFunction, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_CellularDistanceFunction, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_NoiseType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_NoiseType, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Noise, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Noise, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Noise, TEXT("ToolTip"), TEXT("Stores the voxels classes\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"World Settings\")\n               TArray<TSubclassOf<UBlock>> Voxel_Classes;///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n////**     NOISE SETTINGS    ****///////////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"));
				MetaData->SetValue(NewProp_World, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_World, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_World, TEXT("ToolTip"), TEXT("Stores the generated chunks"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("ToolTip"), TEXT("Point used to calculate the rendered chunks"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("ToolTip"), TEXT("Can we use RuntimeMeshComponent plugin?"));
				MetaData->SetValue(NewProp_Voxels, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_Voxels, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Voxels, TEXT("ToolTip"), TEXT("Stores the materials for all the tipes of voxel"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("ToolTip"), TEXT("Used to calculte the chunks that will be generated"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ToolTip"), TEXT("Size of the voxels in UUs."));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ToolTip"), TEXT("Sets the number of voxels per line that the chunk will contain."));
				MetaData->SetValue(NewProp_Chunk, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_Chunk, TEXT("ModuleRelativePath"), TEXT("WorldManager.h"));
				MetaData->SetValue(NewProp_Chunk, TEXT("ToolTip"), TEXT("Chunk to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldManager, 2490194507);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldManager(Z_Construct_UClass_AWorldManager, &AWorldManager::StaticClass, TEXT("/Script/OpenWorld_16"), TEXT("AWorldManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldManager);
class UScriptStruct* FVoxelTipes::StaticStruct()
{
	extern OPENWORLD_16_API class UPackage* Z_Construct_UPackage__Script_OpenWorld_16();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FVoxelTipes();
		extern OPENWORLD_16_API uint32 Get_Z_Construct_UScriptStruct_FVoxelTipes_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTipes, Z_Construct_UPackage__Script_OpenWorld_16(), TEXT("VoxelTipes"), sizeof(FVoxelTipes), Get_Z_Construct_UScriptStruct_FVoxelTipes_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelTipes(FVoxelTipes::StaticStruct, TEXT("/Script/OpenWorld_16"), TEXT("VoxelTipes"), false, nullptr, nullptr);
static struct FScriptStruct_OpenWorld_16_StaticRegisterNativesFVoxelTipes
{
	FScriptStruct_OpenWorld_16_StaticRegisterNativesFVoxelTipes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelTipes")),new UScriptStruct::TCppStructOps<FVoxelTipes>);
	}
} ScriptStruct_OpenWorld_16_StaticRegisterNativesFVoxelTipes;
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTipes()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWorld_16();
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelTipes_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelTipes"), sizeof(FVoxelTipes), Get_Z_Construct_UScriptStruct_FVoxelTipes_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VoxelTipes"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FVoxelTipes>, EStructFlags(0x00000001));
			UProperty* NewProp_NormalMap = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NormalMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NormalMap, FVoxelTipes), 0x0010000000000001, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_BaseColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BaseColor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BaseColor, FVoxelTipes), 0x0010000000000001, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_Mat = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Mat"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mat, FVoxelTipes), 0x0010000000000001, Z_Construct_UClass_UMaterialInstance_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_NormalMap, TEXT("Category"), TEXT("VoxelTipes"));
			MetaData->SetValue(NewProp_NormalMap, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_BaseColor, TEXT("Category"), TEXT("VoxelTipes"));
			MetaData->SetValue(NewProp_BaseColor, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Mat, TEXT("Category"), TEXT("VoxelTipes"));
			MetaData->SetValue(NewProp_Mat, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelTipes_CRC() { return 1002742272U; }
class UScriptStruct* FDynamicMaterial::StaticStruct()
{
	extern OPENWORLD_16_API class UPackage* Z_Construct_UPackage__Script_OpenWorld_16();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FDynamicMaterial();
		extern OPENWORLD_16_API uint32 Get_Z_Construct_UScriptStruct_FDynamicMaterial_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMaterial, Z_Construct_UPackage__Script_OpenWorld_16(), TEXT("DynamicMaterial"), sizeof(FDynamicMaterial), Get_Z_Construct_UScriptStruct_FDynamicMaterial_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicMaterial(FDynamicMaterial::StaticStruct, TEXT("/Script/OpenWorld_16"), TEXT("DynamicMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_OpenWorld_16_StaticRegisterNativesFDynamicMaterial
{
	FScriptStruct_OpenWorld_16_StaticRegisterNativesFDynamicMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicMaterial")),new UScriptStruct::TCppStructOps<FDynamicMaterial>);
	}
} ScriptStruct_OpenWorld_16_StaticRegisterNativesFDynamicMaterial;
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicMaterial()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWorld_16();
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicMaterial_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicMaterial"), sizeof(FDynamicMaterial), Get_Z_Construct_UScriptStruct_FDynamicMaterial_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DynamicMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDynamicMaterial>, EStructFlags(0x00000001));
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(index, FDynamicMaterial), 0x0010000000000001);
			UProperty* NewProp_Mat = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Mat"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mat, FDynamicMaterial), 0x0010000000000001, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_index, TEXT("Category"), TEXT("DynamicMaterial"));
			MetaData->SetValue(NewProp_index, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Mat, TEXT("Category"), TEXT("DynamicMaterial"));
			MetaData->SetValue(NewProp_Mat, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicMaterial_CRC() { return 4085220930U; }
class UScriptStruct* FMesh::StaticStruct()
{
	extern OPENWORLD_16_API class UPackage* Z_Construct_UPackage__Script_OpenWorld_16();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENWORLD_16_API class UScriptStruct* Z_Construct_UScriptStruct_FMesh();
		extern OPENWORLD_16_API uint32 Get_Z_Construct_UScriptStruct_FMesh_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMesh, Z_Construct_UPackage__Script_OpenWorld_16(), TEXT("Mesh"), sizeof(FMesh), Get_Z_Construct_UScriptStruct_FMesh_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMesh(FMesh::StaticStruct, TEXT("/Script/OpenWorld_16"), TEXT("Mesh"), false, nullptr, nullptr);
static struct FScriptStruct_OpenWorld_16_StaticRegisterNativesFMesh
{
	FScriptStruct_OpenWorld_16_StaticRegisterNativesFMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Mesh")),new UScriptStruct::TCppStructOps<FMesh>);
	}
} ScriptStruct_OpenWorld_16_StaticRegisterNativesFMesh;
	UScriptStruct* Z_Construct_UScriptStruct_FMesh()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWorld_16();
		extern uint32 Get_Z_Construct_UScriptStruct_FMesh_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Mesh"), sizeof(FMesh), Get_Z_Construct_UScriptStruct_FMesh_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMesh>, EStructFlags(0x00000001));
			UProperty* NewProp_Mat = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Mat"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mat, FMesh), 0x0010000000000001, Z_Construct_UClass_UMaterialInstance_NoRegister());
			UProperty* NewProp_VertexColors = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VertexColors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VertexColors, FMesh), 0x0010000000000001);
			UProperty* NewProp_VertexColors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VertexColors, TEXT("VertexColors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FColor());
			UProperty* NewProp_RTangents = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RTangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RTangents, FMesh), 0x0010000000000001);
			UProperty* NewProp_RTangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RTangents, TEXT("RTangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, FMesh), 0x0010000000000001);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FProcMeshTangent());
			UProperty* NewProp_UVs = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UVs, FMesh), 0x0010000000000001);
			UProperty* NewProp_UVs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UVs, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, FMesh), 0x0010000000000001);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, FMesh), 0x0010000000000001);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, FMesh), 0x0010000000000001);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Mat, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_Mat, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_VertexColors, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_VertexColors, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_RTangents, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_RTangents, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Tangents, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_Tangents, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_UVs, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_UVs, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Normals, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_Normals, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Triangles, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_Triangles, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(NewProp_Vertices, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(NewProp_Vertices, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMesh_CRC() { return 3835174173U; }
	void AWorldGameMode::StaticRegisterNativesAWorldGameMode()
	{
		UClass* Class = AWorldGameMode::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddTriangles", (Native)&AWorldGameMode::execAddTriangles },
			{ "CalcMatIndex", (Native)&AWorldGameMode::execCalcMatIndex },
			{ "GetDynMat", (Native)&AWorldGameMode::execGetDynMat },
			{ "GetVoxelFromWorld", (Native)&AWorldGameMode::execGetVoxelFromWorld },
			{ "InRange", (Native)&AWorldGameMode::execInRange },
			{ "LoadMap", (Native)&AWorldGameMode::execLoadMap },
			{ "SetVoxelFromWorld", (Native)&AWorldGameMode::execSetVoxelFromWorld },
			{ "UnloadMap", (Native)&AWorldGameMode::execUnloadMap },
			{ "UpdatePosition", (Native)&AWorldGameMode::execUpdatePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 9);
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_AddTriangles()
	{
		struct WorldGameMode_eventAddTriangles_Parms
		{
			TArray<FVector> Vertex;
			TArray<int32> Triangles;
			TArray<uint8> values;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(WorldGameMode_eventAddTriangles_Parms));
			UProperty* NewProp_values = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(values, WorldGameMode_eventAddTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_values_Inner = new(EC_InternalUseOnlyConstructor, NewProp_values, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, WorldGameMode_eventAddTriangles_Parms), 0x0010000000000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertex"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertex, WorldGameMode_eventAddTriangles_Parms), 0x0010000000000180);
			UProperty* NewProp_Vertex_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertex, TEXT("Vertex"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_CalcMatIndex()
	{
		struct WorldGameMode_eventCalcMatIndex_Parms
		{
			int32 id1;
			int32 id2;
			int32 id3;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalcMatIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(WorldGameMode_eventCalcMatIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, WorldGameMode_eventCalcMatIndex_Parms), 0x0010000000000580);
			UProperty* NewProp_id3 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id3"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id3, WorldGameMode_eventCalcMatIndex_Parms), 0x0010000000000180);
			UProperty* NewProp_id2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id2"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id2, WorldGameMode_eventCalcMatIndex_Parms), 0x0010000000000180);
			UProperty* NewProp_id1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id1"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id1, WorldGameMode_eventCalcMatIndex_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gives the index for a given group of material ID's"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_GetDynMat()
	{
		struct WorldGameMode_eventGetDynMat_Parms
		{
			int32 id1;
			int32 id2;
			int32 id3;
			FDynamicMaterial ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDynMat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(WorldGameMode_eventGetDynMat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, WorldGameMode_eventGetDynMat_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FDynamicMaterial());
			UProperty* NewProp_id3 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id3"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id3, WorldGameMode_eventGetDynMat_Parms), 0x0010000000000180);
			UProperty* NewProp_id2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id2"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id2, WorldGameMode_eventGetDynMat_Parms), 0x0010000000000180);
			UProperty* NewProp_id1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id1"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(id1, WorldGameMode_eventGetDynMat_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a dynamic transition material with the specified matetial index"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_GetVoxelFromWorld()
	{
		struct WorldGameMode_eventGetVoxelFromWorld_Parms
		{
			FVector Location;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVoxelFromWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldGameMode_eventGetVoxelFromWorld_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, WorldGameMode_eventGetVoxelFromWorld_Parms), 0x0010000000000580);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, WorldGameMode_eventGetVoxelFromWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Voxel from world"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("block"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_InRange()
	{
		struct WorldGameMode_eventInRange_Parms
		{
			int32 x;
			int32 y;
			FVector2D Center;
			int32 Range;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldGameMode_eventInRange_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldGameMode_eventInRange_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldGameMode_eventInRange_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldGameMode_eventInRange_Parms), sizeof(bool), true);
			UProperty* NewProp_Range = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Range"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Range, WorldGameMode_eventInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_Center = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Center"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Center, WorldGameMode_eventInRange_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_y = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("y"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(y, WorldGameMode_eventInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_x = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("x"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(x, WorldGameMode_eventInRange_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Check Range"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Range"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Cheks if a chunk is in the render range"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_LoadMap()
	{
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Load Map"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Load"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add chunks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_SetVoxelFromWorld()
	{
		struct WorldGameMode_eventSetVoxelFromWorld_Parms
		{
			FVector Location;
			int32 value;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVoxelFromWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(WorldGameMode_eventSetVoxelFromWorld_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldGameMode_eventSetVoxelFromWorld_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldGameMode_eventSetVoxelFromWorld_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldGameMode_eventSetVoxelFromWorld_Parms), sizeof(bool), true);
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(value, WorldGameMode_eventSetVoxelFromWorld_Parms), 0x0010000000000080);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, WorldGameMode_eventSetVoxelFromWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Set voxel from world"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("block"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_UnloadMap()
	{
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Unload map"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Unload"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Delete chunks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWorldGameMode_UpdatePosition()
	{
		struct WorldGameMode_eventUpdatePosition_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWorldGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WorldGameMode_eventUpdatePosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WorldGameMode_eventUpdatePosition_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WorldGameMode_eventUpdatePosition_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WorldGameMode_eventUpdatePosition_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Procedural"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Update Position"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Update"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stores the player position"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldGameMode_NoRegister()
	{
		return AWorldGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorldGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_OpenWorld_16();
			OuterClass = AWorldGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;

				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_AddTriangles());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_CalcMatIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_GetDynMat());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_GetVoxelFromWorld());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_InRange());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_LoadMap());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_SetVoxelFromWorld());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_UnloadMap());
				OuterClass->LinkChild(Z_Construct_UFunction_AWorldGameMode_UpdatePosition());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_FractialGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FractialGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FractialGain, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_Lacunarity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Lacunarity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Lacunarity, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_Frequency = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Frequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Frequency, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_Octaves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Octaves"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Octaves, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_seed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("seed"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(seed, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_Interpolation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Interpolation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Interpolation, AWorldGameMode), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_EInterp());
				UProperty* NewProp_Interpolation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Interpolation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_FractalType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FractalType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FractalType, AWorldGameMode), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_EFractalType());
				UProperty* NewProp_FractalType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FractalType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CellularReturnType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellularReturnType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CellularReturnType, AWorldGameMode), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularReturnType());
				UProperty* NewProp_CellularReturnType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CellularReturnType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CellularDistanceFunction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellularDistanceFunction"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CellularDistanceFunction, AWorldGameMode), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ECellularDistanceFunction());
				UProperty* NewProp_CellularDistanceFunction_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CellularDistanceFunction, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_NoiseType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NoiseType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NoiseType, AWorldGameMode), 0x0010000000000005, Z_Construct_UEnum_UnrealFastNoisePlugin_ENoiseType());
				UProperty* NewProp_NoiseType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NoiseType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Noise = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Noise"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Noise, AWorldGameMode), 0x0010000000000005, Z_Construct_UClass_UUFNNoiseGenerator_NoRegister());
				UProperty* NewProp_time1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("time1"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(time1, AWorldGameMode), 0x0010000000000014);
				UProperty* NewProp_time = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(time, AWorldGameMode), 0x0010000000000014);
				UProperty* NewProp_count = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("count"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(count, AWorldGameMode), 0x0010000000000014);
				UProperty* NewProp_iterations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("iterations"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(iterations, AWorldGameMode), 0x0010000000000015);
				UProperty* NewProp_CountdownTimerHandle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CountdownTimerHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CountdownTimerHandle, AWorldGameMode), 0x0010000000000000, Z_Construct_UScriptStruct_FTimerHandle());
				UProperty* NewProp_World = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(World, AWorldGameMode), 0x0010000000000015);
				UProperty* NewProp_World_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_World, TEXT("World_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_World_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_World, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, Z_Construct_UClass_AChunk_NoRegister());
				UProperty* NewProp_ChunkCenter = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkCenter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ChunkCenter, AWorldGameMode), 0x0010000000000015, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_DynamicMatChache = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicMatChache"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(DynamicMatChache, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_DynamicMatChache_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_DynamicMatChache, TEXT("DynamicMatChache_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001);
				UProperty* NewProp_DynamicMatChache_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_DynamicMatChache, TEXT("DynamicMatChache"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, Z_Construct_UScriptStruct_FDynamicMaterial());
				UProperty* NewProp_Voxels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Voxels"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Voxels, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_Voxels_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Voxels, TEXT("Voxels"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVoxelTipes());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UseRuntime, AWorldGameMode, bool);
				UProperty* NewProp_UseRuntime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UseRuntime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UseRuntime, AWorldGameMode), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(UseRuntime, AWorldGameMode), sizeof(bool), true);
				UProperty* NewProp_RenderRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RenderRange"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RenderRange, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_VoxelSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoxelSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(VoxelSize, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_ChunkSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ChunkSize, AWorldGameMode), 0x0010000000000005);
				UProperty* NewProp_TransitionMat = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransitionMat"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TransitionMat, AWorldGameMode), 0x0010000000000005, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_Chunk = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Chunk"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Chunk, AWorldGameMode), 0x0014000000000005, Z_Construct_UClass_AChunk_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_AddTriangles(), "AddTriangles"); // 4178361637
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_CalcMatIndex(), "CalcMatIndex"); // 482083354
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_GetDynMat(), "GetDynMat"); // 2940046446
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_GetVoxelFromWorld(), "GetVoxelFromWorld"); // 1602138627
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_InRange(), "InRange"); // 249567130
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_LoadMap(), "LoadMap"); // 1795811455
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_SetVoxelFromWorld(), "SetVoxelFromWorld"); // 856540726
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_UnloadMap(), "UnloadMap"); // 2145122752
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWorldGameMode_UpdatePosition(), "UpdatePosition"); // 3912258061
				static TCppClassTypeInfo<TCppClassTypeTraits<AWorldGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_FractialGain, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_FractialGain, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Lacunarity, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Lacunarity, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Frequency, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Frequency, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Octaves, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Octaves, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_seed, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_seed, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Interpolation, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Interpolation, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_FractalType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_FractalType, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_CellularReturnType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_CellularReturnType, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_CellularDistanceFunction, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_CellularDistanceFunction, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_NoiseType, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_NoiseType, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Noise, TEXT("Category"), TEXT("Noise Settings"));
				MetaData->SetValue(NewProp_Noise, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Noise, TEXT("ToolTip"), TEXT("/**     NOISE SETTINGS    ****"));
				MetaData->SetValue(NewProp_time1, TEXT("Category"), TEXT("Debug Variables"));
				MetaData->SetValue(NewProp_time1, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_time1, TEXT("ToolTip"), TEXT("Remove chunk time"));
				MetaData->SetValue(NewProp_time, TEXT("Category"), TEXT("Debug Variables"));
				MetaData->SetValue(NewProp_time, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_time, TEXT("ToolTip"), TEXT("Add chunk time"));
				MetaData->SetValue(NewProp_count, TEXT("Category"), TEXT("Debug Variables"));
				MetaData->SetValue(NewProp_count, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_count, TEXT("ToolTip"), TEXT("Global loop count"));
				MetaData->SetValue(NewProp_iterations, TEXT("Category"), TEXT("Debug Variables"));
				MetaData->SetValue(NewProp_iterations, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_iterations, TEXT("ToolTip"), TEXT("/**     DEBUG SETTINGS    ****"));
				MetaData->SetValue(NewProp_CountdownTimerHandle, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_World, TEXT("Category"), TEXT("World Variables"));
				MetaData->SetValue(NewProp_World, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_World, TEXT("ToolTip"), TEXT("Stores the generated chunks"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("Category"), TEXT("World Variables"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_ChunkCenter, TEXT("ToolTip"), TEXT("Point used to calculate the rendered chunks"));
				MetaData->SetValue(NewProp_DynamicMatChache, TEXT("Category"), TEXT("World Variables"));
				MetaData->SetValue(NewProp_DynamicMatChache, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_DynamicMatChache, TEXT("ToolTip"), TEXT("Stores dynamic material instances"));
				MetaData->SetValue(NewProp_Voxels, TEXT("Category"), TEXT("World Varaibles"));
				MetaData->SetValue(NewProp_Voxels, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Voxels, TEXT("ToolTip"), TEXT("Stores the materials for all the tipes of voxel"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_UseRuntime, TEXT("ToolTip"), TEXT("Can we use RuntimeMeshComponent plugin?"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_RenderRange, TEXT("ToolTip"), TEXT("Used to calculte the chunks that will be generated"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ToolTip"), TEXT("Size of the voxels in UUs."));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ToolTip"), TEXT("Sets the number of voxels per line that the chunk will contain."));
				MetaData->SetValue(NewProp_TransitionMat, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_TransitionMat, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_TransitionMat, TEXT("ToolTip"), TEXT("Stores the base instance for transition between materials"));
				MetaData->SetValue(NewProp_Chunk, TEXT("Category"), TEXT("World Settings"));
				MetaData->SetValue(NewProp_Chunk, TEXT("ModuleRelativePath"), TEXT("WorldGameMode.h"));
				MetaData->SetValue(NewProp_Chunk, TEXT("ToolTip"), TEXT("Chunk to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldGameMode, 3854757380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldGameMode(Z_Construct_UClass_AWorldGameMode, &AWorldGameMode::StaticClass, TEXT("/Script/OpenWorld_16"), TEXT("AWorldGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldGameMode);
	void AChunk::StaticRegisterNativesAChunk()
	{
		UClass* Class = AChunk::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "InitializeChunk", (Native)&AChunk::execInitializeChunk },
			{ "RenderChunk", (Native)&AChunk::execRenderChunk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AChunk_InitializeChunk()
	{
		UObject* Outer=Z_Construct_UClass_AChunk();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitializeChunk"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Calculates all the block data"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AChunk_RenderChunk()
	{
		UObject* Outer=Z_Construct_UClass_AChunk();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RenderChunk"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Creates the mesh to be rendered"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChunk_NoRegister()
	{
		return AChunk::StaticClass();
	}
	UClass* Z_Construct_UClass_AChunk()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OpenWorld_16();
			OuterClass = AChunk::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AChunk_InitializeChunk());
				OuterClass->LinkChild(Z_Construct_UFunction_AChunk_RenderChunk());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ChunkDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ChunkDensity, AChunk), 0x0040000000000000);
				UProperty* NewProp_ChunkDensity_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ChunkDensity, TEXT("ChunkDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(NeedUpdate, AChunk, bool);
				UProperty* NewProp_NeedUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NeedUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NeedUpdate, AChunk), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(NeedUpdate, AChunk), sizeof(bool), true);
				UProperty* NewProp_Noise = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Noise"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Noise, AChunk), 0x0010000000000015, Z_Construct_UClass_UUFNNoiseGenerator_NoRegister());
				UProperty* NewProp_ChunkSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ChunkSize, AChunk), 0x0010000000000015);
				UProperty* NewProp_VoxelSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VoxelSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(VoxelSize, AChunk), 0x0010000000000015);
				UProperty* NewProp_GameMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameMode"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GameMode, AChunk), 0x0010000000000015, Z_Construct_UClass_AWorldGameMode_NoRegister());
				UProperty* NewProp_WorldManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WorldManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldManager, AChunk), 0x0010000000000015, Z_Construct_UClass_AWorldManager_NoRegister());
				UProperty* NewProp_TerrainMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TerrainMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TerrainMesh, AChunk), 0x00100000000a001d, Z_Construct_UClass_URuntimeMeshComponent_NoRegister());
				UProperty* NewProp_ChunkMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ChunkMesh, AChunk), 0x00100000000a001d, Z_Construct_UClass_UProceduralMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AChunk_InitializeChunk(), "InitializeChunk"); // 4132852163
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AChunk_RenderChunk(), "RenderChunk"); // 2841713590
				static TCppClassTypeInfo<TCppClassTypeTraits<AChunk> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Chunk.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_ChunkDensity, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_ChunkDensity, TEXT("ToolTip"), TEXT("Stores the voxel IDs of the chunk"));
				MetaData->SetValue(NewProp_NeedUpdate, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_NeedUpdate, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_NeedUpdate, TEXT("ToolTip"), TEXT("Sets the chunk to be updated in the next load world cicle"));
				MetaData->SetValue(NewProp_Noise, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_Noise, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_Noise, TEXT("ToolTip"), TEXT("Stores the reference to the noise used to generate terrain"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_ChunkSize, TEXT("ToolTip"), TEXT("Stores the number of voxels per side of the chunk"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_VoxelSize, TEXT("ToolTip"), TEXT("Stores the size of the voxels"));
				MetaData->SetValue(NewProp_GameMode, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_GameMode, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_GameMode, TEXT("ToolTip"), TEXT("Stores the reference to World Game Mode"));
				MetaData->SetValue(NewProp_WorldManager, TEXT("Category"), TEXT("Chunk"));
				MetaData->SetValue(NewProp_WorldManager, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_WorldManager, TEXT("ToolTip"), TEXT("Stores the reference to the World Manager"));
				MetaData->SetValue(NewProp_TerrainMesh, TEXT("Category"), TEXT("Terrain"));
				MetaData->SetValue(NewProp_TerrainMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TerrainMesh, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_TerrainMesh, TEXT("ToolTip"), TEXT("Base component of the terrain ****** EPERIMENTAL********"));
				MetaData->SetValue(NewProp_ChunkMesh, TEXT("Category"), TEXT("Terrain"));
				MetaData->SetValue(NewProp_ChunkMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ChunkMesh, TEXT("ModuleRelativePath"), TEXT("Chunk.h"));
				MetaData->SetValue(NewProp_ChunkMesh, TEXT("ToolTip"), TEXT("Base componen of the world terrain"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChunk, 137060876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChunk(Z_Construct_UClass_AChunk, &AChunk::StaticClass, TEXT("/Script/OpenWorld_16"), TEXT("AChunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunk);
	UPackage* Z_Construct_UPackage__Script_OpenWorld_16()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/OpenWorld_16")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x744A614F;
			Guid.B = 0xB150D386;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
