// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/RuntimeMeshComponentPluginPrivatePCH.h"
#include "RuntimeMeshComponent.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1RuntimeMeshComponent() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API class UClass* Z_Construct_UClass_UMeshComponent();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API class UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	RUNTIMEMESHCOMPONENT_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	RUNTIMEMESHCOMPONENT_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection();
	RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer();
	RUNTIMEMESHCOMPONENT_API class UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary();
	RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
static UEnum* ERuntimeMeshCollisionCookingMode_StaticEnum()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionCookingMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshCollisionCookingMode(ERuntimeMeshCollisionCookingMode_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshCollisionCookingMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshCollisionCookingMode"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ERuntimeMeshCollisionCookingMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ERuntimeMeshCollisionCookingMode::CollisionPerformance"), 0);
			EnumNames.Emplace(TEXT("ERuntimeMeshCollisionCookingMode::CookingPerformance"), 1);
			EnumNames.Emplace(TEXT("ERuntimeMeshCollisionCookingMode::ERuntimeMeshCollisionCookingMode_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ERuntimeMeshCollisionCookingMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("CollisionPerformance.DisplayName"), TEXT("Collision Performance"));
			MetaData->SetValue(ReturnEnum, TEXT("CollisionPerformance.ToolTip"), TEXT("*       Favors runtime collision performance of cooking speed.\n*       This means that cooking a new mesh will be slower, but collision will be faster."));
			MetaData->SetValue(ReturnEnum, TEXT("CookingPerformance.DisplayName"), TEXT("Cooking Performance"));
			MetaData->SetValue(ReturnEnum, TEXT("CookingPerformance.ToolTip"), TEXT("*       Favors cooking speed over collision performance.\n*       This means that cooking a new mesh will be faster, but collision will be slower."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("*      Configuration flag for the collision cooking to prioritize cooking speed or collision performance."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_CRC() { return 3337168036U; }
static UEnum* EUpdateFrequency_StaticEnum()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency();
		Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("EUpdateFrequency"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateFrequency(EUpdateFrequency_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("EUpdateFrequency"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateFrequency"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EUpdateFrequency"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EUpdateFrequency::Average"), 0);
			EnumNames.Emplace(TEXT("EUpdateFrequency::Frequent"), 1);
			EnumNames.Emplace(TEXT("EUpdateFrequency::Infrequent"), 2);
			EnumNames.Emplace(TEXT("EUpdateFrequency::EUpdateFrequency_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EUpdateFrequency");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Average.DisplayName"), TEXT("Average"));
			MetaData->SetValue(ReturnEnum, TEXT("Average.ToolTip"), TEXT("Tries to skip recreating the scene proxy if possible."));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Frequent.DisplayName"), TEXT("Frequent"));
			MetaData->SetValue(ReturnEnum, TEXT("Frequent.ToolTip"), TEXT("Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates."));
			MetaData->SetValue(ReturnEnum, TEXT("Infrequent.DisplayName"), TEXT("Infrequent"));
			MetaData->SetValue(ReturnEnum, TEXT("Infrequent.ToolTip"), TEXT("If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy)"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Update frequency for a section. Used to optimize for update or render speed"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency_CRC() { return 79394267U; }
class UScriptStruct* FRuntimeConvexCollisionSection::StaticStruct()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection();
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeConvexCollisionSection"), sizeof(FRuntimeConvexCollisionSection), Get_Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeConvexCollisionSection(FRuntimeConvexCollisionSection::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeConvexCollisionSection"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeConvexCollisionSection
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeConvexCollisionSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeConvexCollisionSection")),new UScriptStruct::TCppStructOps<FRuntimeConvexCollisionSection>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeConvexCollisionSection;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeConvexCollisionSection"), sizeof(FRuntimeConvexCollisionSection), Get_Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RuntimeConvexCollisionSection"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FRuntimeConvexCollisionSection>, EStructFlags(0x00000001));
			UProperty* NewProp_BoundingBox = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundingBox"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoundingBox, FRuntimeConvexCollisionSection), 0x0010000000000000, Z_Construct_UScriptStruct_FBox());
			UProperty* NewProp_VertexBuffer = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VertexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VertexBuffer, FRuntimeConvexCollisionSection), 0x0010000000000000);
			UProperty* NewProp_VertexBuffer_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VertexBuffer, TEXT("VertexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_BoundingBox, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_VertexBuffer, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection_CRC() { return 1112828918U; }
class UScriptStruct* FRuntimeMeshCollisionSection::StaticStruct()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection();
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSection"), sizeof(FRuntimeMeshCollisionSection), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionSection(FRuntimeMeshCollisionSection::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionSection"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSection
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionSection")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSection>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSection;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionSection"), sizeof(FRuntimeMeshCollisionSection), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RuntimeMeshCollisionSection"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSection>, EStructFlags(0x00000001));
			UProperty* NewProp_IndexBuffer = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IndexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(IndexBuffer, FRuntimeMeshCollisionSection), 0x0010000000000000);
			UProperty* NewProp_IndexBuffer_Inner = new(EC_InternalUseOnlyConstructor, NewProp_IndexBuffer, TEXT("IndexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_VertexBuffer = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VertexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VertexBuffer, FRuntimeMeshCollisionSection), 0x0010000000000000);
			UProperty* NewProp_VertexBuffer_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VertexBuffer, TEXT("VertexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_IndexBuffer, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_VertexBuffer, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection_CRC() { return 697203946U; }
class UScriptStruct* FRuntimeMeshTangent::StaticStruct()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTangent, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshTangent(FRuntimeMeshTangent::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshTangent"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshTangent")),new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RuntimeMeshTangent"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFlipTangentY, FRuntimeMeshTangent, bool);
			UProperty* NewProp_bFlipTangentY = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFlipTangentY"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFlipTangentY, FRuntimeMeshTangent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFlipTangentY, FRuntimeMeshTangent), sizeof(bool), true);
			UProperty* NewProp_TangentX = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TangentX"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TangentX, FRuntimeMeshTangent), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member."));
			MetaData->SetValue(NewProp_bFlipTangentY, TEXT("Category"), TEXT("Tangent"));
			MetaData->SetValue(NewProp_bFlipTangentY, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_bFlipTangentY, TEXT("ToolTip"), TEXT("Bool that indicates whether we should flip the Y tangent when we compute it using cross product"));
			MetaData->SetValue(NewProp_TangentX, TEXT("Category"), TEXT("Tangent"));
			MetaData->SetValue(NewProp_TangentX, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshCore.h"));
			MetaData->SetValue(NewProp_TangentX, TEXT("ToolTip"), TEXT("Direction of X tangent for this vertex"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC() { return 4024990444U; }
class UScriptStruct* FRuntimeMeshComponentPrePhysicsTickFunction::StaticStruct()
{
	extern RUNTIMEMESHCOMPONENT_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction();
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshComponentPrePhysicsTickFunction"), sizeof(FRuntimeMeshComponentPrePhysicsTickFunction), Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction(FRuntimeMeshComponentPrePhysicsTickFunction::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshComponentPrePhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshComponentPrePhysicsTickFunction
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshComponentPrePhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshComponentPrePhysicsTickFunction")),new UScriptStruct::TCppStructOps<FRuntimeMeshComponentPrePhysicsTickFunction>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshComponentPrePhysicsTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshComponentPrePhysicsTickFunction"), sizeof(FRuntimeMeshComponentPrePhysicsTickFunction), Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RuntimeMeshComponentPrePhysicsTickFunction"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FTickFunction(), new UScriptStruct::TCppStructOps<FRuntimeMeshComponentPrePhysicsTickFunction>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("*      This tick function is used to drive the collision cooker. It is enabled for one frame when we need to update collision.\n*      This keeps from cooking on each individual create/update section as the original PMC did"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC() { return 988898369U; }
	void URuntimeMeshComponent::StaticRegisterNativesURuntimeMeshComponent()
	{
		UClass* Class = URuntimeMeshComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddCollisionConvexMesh", (Native)&URuntimeMeshComponent::execAddCollisionConvexMesh },
			{ "BeginBatchUpdates", (Native)&URuntimeMeshComponent::execBeginBatchUpdates },
			{ "ClearAllMeshCollisionSections", (Native)&URuntimeMeshComponent::execClearAllMeshCollisionSections },
			{ "ClearAllMeshSections", (Native)&URuntimeMeshComponent::execClearAllMeshSections },
			{ "ClearCollisionConvexMeshes", (Native)&URuntimeMeshComponent::execClearCollisionConvexMeshes },
			{ "ClearMeshCollisionSection", (Native)&URuntimeMeshComponent::execClearMeshCollisionSection },
			{ "ClearMeshSection", (Native)&URuntimeMeshComponent::execClearMeshSection },
			{ "CookCollisionNow", (Native)&URuntimeMeshComponent::execCookCollisionNow },
			{ "CreateMeshSection_Blueprint", (Native)&URuntimeMeshComponent::execCreateMeshSection_Blueprint },
			{ "DoesSectionExist", (Native)&URuntimeMeshComponent::execDoesSectionExist },
			{ "EndBatchUpdates", (Native)&URuntimeMeshComponent::execEndBatchUpdates },
			{ "FirstAvailableMeshSectionIndex", (Native)&URuntimeMeshComponent::execFirstAvailableMeshSectionIndex },
			{ "GetLastSectionIndex", (Native)&URuntimeMeshComponent::execGetLastSectionIndex },
			{ "GetNumSections", (Native)&URuntimeMeshComponent::execGetNumSections },
			{ "IsMeshSectionCastingShadows", (Native)&URuntimeMeshComponent::execIsMeshSectionCastingShadows },
			{ "IsMeshSectionCollisionEnabled", (Native)&URuntimeMeshComponent::execIsMeshSectionCollisionEnabled },
			{ "IsMeshSectionVisible", (Native)&URuntimeMeshComponent::execIsMeshSectionVisible },
			{ "SetMeshCollisionSection", (Native)&URuntimeMeshComponent::execSetMeshCollisionSection },
			{ "SetMeshSectionCastsShadow", (Native)&URuntimeMeshComponent::execSetMeshSectionCastsShadow },
			{ "SetMeshSectionCollisionEnabled", (Native)&URuntimeMeshComponent::execSetMeshSectionCollisionEnabled },
			{ "SetMeshSectionVisible", (Native)&URuntimeMeshComponent::execSetMeshSectionVisible },
			{ "SetSectionTessellationTriangles", (Native)&URuntimeMeshComponent::execSetSectionTessellationTriangles },
			{ "UpdateMeshSection_Blueprint", (Native)&URuntimeMeshComponent::execUpdateMeshSection_Blueprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 23);
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh()
	{
		struct RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms
		{
			TArray<FVector> ConvexVerts;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddCollisionConvexMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms));
			UProperty* NewProp_ConvexVerts = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConvexVerts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ConvexVerts, RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms), 0x0010000000000080);
			UProperty* NewProp_ConvexVerts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ConvexVerts, TEXT("ConvexVerts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add simple collision convex to this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginBatchUpdates"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Begins a batch of updates, delays updates until you call EndBatchUpdates()"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearAllMeshCollisionSections"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears the geometry for ALL collision only sections"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearAllMeshSections"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clear all mesh sections and reset to empty state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearCollisionConvexMeshes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add simple collision convex to this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection()
	{
		struct RuntimeMeshComponent_eventClearMeshCollisionSection_Parms
		{
			int32 CollisionSectionIndex;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearMeshCollisionSection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventClearMeshCollisionSection_Parms));
			UProperty* NewProp_CollisionSectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CollisionSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CollisionSectionIndex, RuntimeMeshComponent_eventClearMeshCollisionSection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears the geometry for a collision only section"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection()
	{
		struct RuntimeMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearMeshSection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventClearMeshSection_Parms));
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventClearMeshSection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clear a section of the procedural mesh."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CookCollisionNow"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Runs any pending collision cook (Not required to call this. This is only if you need to make sure all changes are cooked before doing something)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint()
	{
		struct RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FRuntimeMeshTangent> Tangents;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FLinearColor> Colors;
			bool bCreateCollision;
			bool bCalculateNormalTangent;
			bool bGenerateTessellationTriangles;
			EUpdateFrequency UpdateFrequency;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateMeshSection_Blueprint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms));
			UProperty* NewProp_UpdateFrequency = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UpdateFrequency"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(UpdateFrequency, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000000000080, Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency());
			UProperty* NewProp_UpdateFrequency_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_UpdateFrequency, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGenerateTessellationTriangles, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, bool);
			UProperty* NewProp_bGenerateTessellationTriangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bGenerateTessellationTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGenerateTessellationTriangles, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bGenerateTessellationTriangles, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCalculateNormalTangent, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, bool);
			UProperty* NewProp_bCalculateNormalTangent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCalculateNormalTangent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCalculateNormalTangent, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCalculateNormalTangent, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCreateCollision, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, bool);
			UProperty* NewProp_bCreateCollision = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCreateCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCreateCollision, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCreateCollision, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), sizeof(bool), true);
			UProperty* NewProp_Colors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Colors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Colors, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Colors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Colors, TEXT("Colors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_UV1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UV1"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UV1, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_UV1_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UV1, TEXT("UV1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_UV0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UV0"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UV0, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_UV0_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UV0, TEXT("UV0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("Normals,Tangents,UV0,UV1,Colors"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_UpdateFrequency"), TEXT("Average"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Create Mesh Section"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Create/replace a section.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex (UV Channel 0). If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex (UV Channel 1). If supplied, must be same length as Vertices array.\n@param  Colors                          Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost.\n@param  bCalculateNormalTangent Indicates whether normal/tangent information should be calculated automatically. This can add significant cost.\n@param  bGenerateTessellationTriangles  Indicates whether tessellation supporting triangles should be calculated. This can add significant cost.\n@param  UpdateFrequency         Indicates how frequently the section will be updated. Allows the RMC to optimize itself to a particular use."));
			MetaData->SetValue(NewProp_Colors, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UV1, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UV0, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Tangents, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Normals, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Triangles, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Vertices, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist()
	{
		struct RuntimeMeshComponent_eventDoesSectionExist_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoesSectionExist"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventDoesSectionExist_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeMeshComponent_eventDoesSectionExist_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeMeshComponent_eventDoesSectionExist_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeMeshComponent_eventDoesSectionExist_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventDoesSectionExist_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a particular section currently exists"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndBatchUpdates"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Ends a batch of updates started with BeginBatchUpdates()"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex()
	{
		struct RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FirstAvailableMeshSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns first available section index"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex()
	{
		struct RuntimeMeshComponent_eventGetLastSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLastSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventGetLastSectionIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeMeshComponent_eventGetLastSectionIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the last in use section index"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections()
	{
		struct RuntimeMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumSections"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventGetNumSections_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeMeshComponent_eventGetNumSections_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns number of sections currently created for this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows()
	{
		struct RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMeshSectionCastingShadows"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a particular section is currently casting shadows"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled()
	{
		struct RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMeshSectionCollisionEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a particular section has collision"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible()
	{
		struct RuntimeMeshComponent_eventIsMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMeshSectionVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RuntimeMeshComponent_eventIsMeshSectionVisible_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionVisible_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionVisible_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeMeshComponent_eventIsMeshSectionVisible_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventIsMeshSectionVisible_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether a particular section is currently visible"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection()
	{
		struct RuntimeMeshComponent_eventSetMeshCollisionSection_Parms
		{
			int32 CollisionSectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMeshCollisionSection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(RuntimeMeshComponent_eventSetMeshCollisionSection_Parms));
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshComponent_eventSetMeshCollisionSection_Parms), 0x0010000008000182);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshComponent_eventSetMeshCollisionSection_Parms), 0x0010000008000182);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_CollisionSectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CollisionSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CollisionSectionIndex, RuntimeMeshComponent_eventSetMeshCollisionSection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the geometry for a collision only section"));
			MetaData->SetValue(NewProp_Triangles, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Vertices, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow()
	{
		struct RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms
		{
			int32 SectionIndex;
			bool bNewCastsShadow;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMeshSectionCastsShadow"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewCastsShadow, RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms, bool);
			UProperty* NewProp_bNewCastsShadow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewCastsShadow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewCastsShadow, RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewCastsShadow, RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Control whether a particular section casts a shadow"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled()
	{
		struct RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms
		{
			int32 SectionIndex;
			bool bNewCollisionEnabled;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMeshSectionCollisionEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewCollisionEnabled, RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms, bool);
			UProperty* NewProp_bNewCollisionEnabled = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewCollisionEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewCollisionEnabled, RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewCollisionEnabled, RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Control whether a particular section has collision"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible()
	{
		struct RuntimeMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMeshSectionVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeMeshComponent_eventSetMeshSectionVisible_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewVisibility, RuntimeMeshComponent_eventSetMeshSectionVisible_Parms, bool);
			UProperty* NewProp_bNewVisibility = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewVisibility"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewVisibility, RuntimeMeshComponent_eventSetMeshSectionVisible_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewVisibility, RuntimeMeshComponent_eventSetMeshSectionVisible_Parms), sizeof(bool), true);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventSetMeshSectionVisible_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Control visibility of a particular section"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles()
	{
		struct RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms
		{
			int32 SectionIndex;
			TArray<int32> TessellationTriangles;
			bool bShouldMoveArray;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSectionTessellationTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShouldMoveArray, RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms, bool);
			UProperty* NewProp_bShouldMoveArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bShouldMoveArray"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShouldMoveArray, RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bShouldMoveArray, RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), sizeof(bool), true);
			UProperty* NewProp_TessellationTriangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TessellationTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TessellationTriangles, RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), 0x0010000008000182);
			UProperty* NewProp_TessellationTriangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TessellationTriangles, TEXT("TessellationTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bShouldMoveArray"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the tessellation triangles needed to correctly support tessellation on a section."));
			MetaData->SetValue(NewProp_TessellationTriangles, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint()
	{
		struct RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FRuntimeMeshTangent> Tangents;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FLinearColor> Colors;
			bool bCalculateNormalTangent;
			bool bGenerateTessellationTriangles;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateMeshSection_Blueprint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGenerateTessellationTriangles, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, bool);
			UProperty* NewProp_bGenerateTessellationTriangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bGenerateTessellationTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGenerateTessellationTriangles, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bGenerateTessellationTriangles, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCalculateNormalTangent, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, bool);
			UProperty* NewProp_bCalculateNormalTangent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCalculateNormalTangent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCalculateNormalTangent, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCalculateNormalTangent, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), sizeof(bool), true);
			UProperty* NewProp_Colors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Colors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Colors, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Colors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Colors, TEXT("Colors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_UV1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UV1"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UV1, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_UV1_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UV1, TEXT("UV1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_UV0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UV0"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UV0, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_UV0_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UV0, TEXT("UV0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000008000182);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("Triangles,Normals,Tangents,UV0,UV1,Colors"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Update Mesh Section"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Updates a section. This is faster than CreateMeshSection. If you change the vertices count, you must update the other components.\n@param  SectionIndex            Index of the section to update.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex (UV Channel 0). If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex (UV Channel 1). If supplied, must be same length as Vertices array.\n@param  Colors          Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  bCalculateNormalTangent Indicates whether normal/tangent information should be calculated automatically. This can add significant cost.\n@param  bGenerateTessellationTriangles  Indicates whether tessellation supporting triangles should be calculated. This can add significant cost."));
			MetaData->SetValue(NewProp_Colors, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UV1, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UV0, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Tangents, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Normals, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Triangles, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Vertices, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMeshComponent();
			Z_Construct_UPackage__Script_RuntimeMeshComponent();
			OuterClass = URuntimeMeshComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PrePhysicsTick = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrePhysicsTick"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PrePhysicsTick, URuntimeMeshComponent), 0x0040000000002000, Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction());
				UProperty* NewProp_LocalBounds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LocalBounds"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LocalBounds, URuntimeMeshComponent), 0x0040000000002000, Z_Construct_UScriptStruct_FBoxSphereBounds());
				UProperty* NewProp_ConvexCollisionSections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ConvexCollisionSections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ConvexCollisionSections, URuntimeMeshComponent), 0x0040000000002000);
				UProperty* NewProp_ConvexCollisionSections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ConvexCollisionSections, TEXT("ConvexCollisionSections"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection());
				UProperty* NewProp_MeshCollisionSections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshCollisionSections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MeshCollisionSections, URuntimeMeshComponent), 0x0040000000002000);
				UProperty* NewProp_MeshCollisionSections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MeshCollisionSections, TEXT("MeshCollisionSections"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection());
				UProperty* NewProp_BodySetup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BodySetup"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BodySetup, URuntimeMeshComponent), 0x0012000000080008, Z_Construct_UClass_UBodySetup_NoRegister());
				UProperty* NewProp_CollisionMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CollisionMode, URuntimeMeshComponent), 0x0010000000000005, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode());
				UProperty* NewProp_CollisionMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CollisionMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShouldSerializeMeshData, URuntimeMeshComponent, bool);
				UProperty* NewProp_bShouldSerializeMeshData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShouldSerializeMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShouldSerializeMeshData, URuntimeMeshComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bShouldSerializeMeshData, URuntimeMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseComplexAsSimpleCollision, URuntimeMeshComponent, bool);
				UProperty* NewProp_bUseComplexAsSimpleCollision = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseComplexAsSimpleCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseComplexAsSimpleCollision, URuntimeMeshComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bUseComplexAsSimpleCollision, URuntimeMeshComponent), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh(), "AddCollisionConvexMesh"); // 1525101734
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates(), "BeginBatchUpdates"); // 480049716
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections(), "ClearAllMeshCollisionSections"); // 1214095321
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections(), "ClearAllMeshSections"); // 653777059
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes(), "ClearCollisionConvexMeshes"); // 2252983532
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection(), "ClearMeshCollisionSection"); // 2820760843
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection(), "ClearMeshSection"); // 4160054605
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow(), "CookCollisionNow"); // 3844904604
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint(), "CreateMeshSection_Blueprint"); // 3378772745
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist(), "DoesSectionExist"); // 121852000
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates(), "EndBatchUpdates"); // 2035923636
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex(), "FirstAvailableMeshSectionIndex"); // 2993831914
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex(), "GetLastSectionIndex"); // 4182664155
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections(), "GetNumSections"); // 1002987242
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows(), "IsMeshSectionCastingShadows"); // 2383001439
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled(), "IsMeshSectionCollisionEnabled"); // 966156817
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible(), "IsMeshSectionVisible"); // 396769507
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection(), "SetMeshCollisionSection"); // 2327203468
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow(), "SetMeshSectionCastsShadow"); // 1374281983
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled(), "SetMeshSectionCollisionEnabled"); // 1594362802
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible(), "SetMeshSectionVisible"); // 2485456612
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles(), "SetSectionTessellationTriangles"); // 546725891
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint(), "UpdateMeshSection_Blueprint"); // 1515087645
				static TCppClassTypeInfo<TCppClassTypeTraits<URuntimeMeshComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister(), VTABLE_OFFSET(URuntimeMeshComponent, IInterface_CollisionDataProvider), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object LOD Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeMeshComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Component that allows you to specify custom triangle mesh geometry for rendering and collision."));
				MetaData->SetValue(NewProp_PrePhysicsTick, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_PrePhysicsTick, TEXT("ToolTip"), TEXT("Tick function used to cook collision when needed"));
				MetaData->SetValue(NewProp_LocalBounds, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_LocalBounds, TEXT("ToolTip"), TEXT("Local space bounds of mesh"));
				MetaData->SetValue(NewProp_ConvexCollisionSections, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_ConvexCollisionSections, TEXT("ToolTip"), TEXT("Convex shapes used for simple collision"));
				MetaData->SetValue(NewProp_MeshCollisionSections, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_MeshCollisionSections, TEXT("ToolTip"), TEXT("Array of collision only mesh sections"));
				MetaData->SetValue(NewProp_BodySetup, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BodySetup, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_BodySetup, TEXT("ToolTip"), TEXT("Collision data"));
				MetaData->SetValue(NewProp_CollisionMode, TEXT("Category"), TEXT("RuntimeMesh"));
				MetaData->SetValue(NewProp_CollisionMode, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_CollisionMode, TEXT("ToolTip"), TEXT("*       The current mode of the collision cooker\n*       WARNING: This feature will only work in engine version 4.14 or above!"));
				MetaData->SetValue(NewProp_bShouldSerializeMeshData, TEXT("Category"), TEXT("RuntimeMesh"));
				MetaData->SetValue(NewProp_bShouldSerializeMeshData, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_bShouldSerializeMeshData, TEXT("ToolTip"), TEXT("Controls whether the mesh data should be serialized with the component."));
				MetaData->SetValue(NewProp_bUseComplexAsSimpleCollision, TEXT("Category"), TEXT("RuntimeMesh"));
				MetaData->SetValue(NewProp_bUseComplexAsSimpleCollision, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshComponent.h"));
				MetaData->SetValue(NewProp_bUseComplexAsSimpleCollision, TEXT("ToolTip"), TEXT("Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshComponent, 2614090086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshComponent(Z_Construct_UClass_URuntimeMeshComponent, &URuntimeMeshComponent::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponent);
	void URuntimeMeshLibrary::StaticRegisterNativesURuntimeMeshLibrary()
	{
		UClass* Class = URuntimeMeshLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateTangentsForMesh", (Native)&URuntimeMeshLibrary::execCalculateTangentsForMesh },
			{ "ConvertQuadToTriangles", (Native)&URuntimeMeshLibrary::execConvertQuadToTriangles },
			{ "CopyRuntimeMeshFromStaticMeshComponent", (Native)&URuntimeMeshLibrary::execCopyRuntimeMeshFromStaticMeshComponent },
			{ "CreateBoxMesh", (Native)&URuntimeMeshLibrary::execCreateBoxMesh },
			{ "CreateGridMeshTriangles", (Native)&URuntimeMeshLibrary::execCreateGridMeshTriangles },
			{ "GenerateTessellationIndexBuffer", (Native)&URuntimeMeshLibrary::execGenerateTessellationIndexBuffer },
			{ "GetSectionFromStaticMesh", (Native)&URuntimeMeshLibrary::execGetSectionFromStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 7);
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh()
	{
		struct RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector2D> UVs;
			TArray<FVector> Normals;
			TArray<FRuntimeMeshTangent> Tangents;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateTangentsForMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms));
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_UVs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UVs, RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), 0x0010000008000182);
			UProperty* NewProp_UVs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UVs, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), 0x0010000008000182);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), 0x0010000008000182);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("UVs"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Automatically generate normals and tangent vectors for a mesh\nUVs are required for correct tangent generation."));
			MetaData->SetValue(NewProp_UVs, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Triangles, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Vertices, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles()
	{
		struct RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms
		{
			TArray<int32> Triangles;
			int32 Vert0;
			int32 Vert1;
			int32 Vert2;
			int32 Vert3;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConvertQuadToTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms));
			UProperty* NewProp_Vert3 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vert3"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Vert3, RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_Vert2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vert2"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Vert2, RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_Vert1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vert1"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Vert1, RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_Vert0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vert0"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Vert0, RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), 0x0010000008000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add a quad, specified by four indices, to a triangle index buffer as two triangles."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent()
	{
		struct RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComp;
			int32 LODIndex;
			URuntimeMeshComponent* RuntimeMeshComp;
			bool bShouldCreateCollision;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CopyRuntimeMeshFromStaticMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShouldCreateCollision, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms, bool);
			UProperty* NewProp_bShouldCreateCollision = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bShouldCreateCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShouldCreateCollision, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bShouldCreateCollision, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), sizeof(bool), true);
			UProperty* NewProp_RuntimeMeshComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RuntimeMeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RuntimeMeshComp, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), 0x0010000000080080, Z_Construct_UClass_URuntimeMeshComponent_NoRegister());
			UProperty* NewProp_LODIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LODIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LODIndex, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), 0x0010000000000080);
			UProperty* NewProp_StaticMeshComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StaticMeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StaticMeshComp, RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), 0x0010000000080080, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Copies an entire Static Mesh to a Runtime Mesh. Includes all materials, and sections."));
			MetaData->SetValue(NewProp_RuntimeMeshComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_StaticMeshComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh()
	{
		struct RuntimeMeshLibrary_eventCreateBoxMesh_Parms
		{
			FVector BoxRadius;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FRuntimeMeshTangent> Tangents;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateBoxMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(RuntimeMeshLibrary_eventCreateBoxMesh_Parms));
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_UVs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UVs, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_UVs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UVs, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_BoxRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoxRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoxRadius, RuntimeMeshLibrary_eventCreateBoxMesh_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles()
	{
		struct RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms
		{
			int32 NumX;
			int32 NumY;
			bool bWinding;
			TArray<int32> Triangles;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateGridMeshTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms));
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), 0x0010000000000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWinding, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms, bool);
			UProperty* NewProp_bWinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bWinding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWinding, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bWinding, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), sizeof(bool), true);
			UProperty* NewProp_NumY = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NumY"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumY, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), 0x0010000000000080);
			UProperty* NewProp_NumX = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NumX"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumX, RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Generate an index buffer for a grid of quads.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@param  bWinding                Reverses winding of indices generated for each quad\n@out    Triangles               Output index buffer"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer()
	{
		struct RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector2D> UVs;
			TArray<FVector> Normals;
			TArray<FRuntimeMeshTangent> Tangents;
			TArray<int32> OutTessTriangles;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GenerateTessellationIndexBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms));
			UProperty* NewProp_OutTessTriangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutTessTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OutTessTriangles, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000000000180);
			UProperty* NewProp_OutTessTriangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OutTessTriangles, TEXT("OutTessTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000000000180);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000000000180);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_UVs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UVs, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000008000182);
			UProperty* NewProp_UVs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UVs, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000008000182);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), 0x0010000008000182);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("UVs"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Generates the tessellation indices needed to support tessellation in materials"));
			MetaData->SetValue(NewProp_UVs, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Triangles, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Vertices, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh()
	{
		struct RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms
		{
			UStaticMesh* InMesh;
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FRuntimeMeshTangent> Tangents;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSectionFromStaticMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms));
			UProperty* NewProp_Tangents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tangents, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Tangents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tangents, TEXT("Tangents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRuntimeMeshTangent());
			UProperty* NewProp_UVs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UVs, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_UVs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UVs, TEXT("UVs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Triangles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Triangles, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Triangles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Triangles, TEXT("Triangles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000180);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000080);
			UProperty* NewProp_LODIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LODIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LODIndex, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000080);
			UProperty* NewProp_InMesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InMesh, RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Grab geometry data from a StaticMesh asset."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister()
	{
		return URuntimeMeshLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_RuntimeMeshComponent();
			OuterClass = URuntimeMeshLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh(), "CalculateTangentsForMesh"); // 1852330068
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles(), "ConvertQuadToTriangles"); // 2670547915
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent(), "CopyRuntimeMeshFromStaticMeshComponent"); // 1566123263
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh(), "CreateBoxMesh"); // 1894769773
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles(), "CreateGridMeshTriangles"); // 917553486
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer(), "GenerateTessellationIndexBuffer"); // 3299327104
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh(), "GetSectionFromStaticMesh"); // 3465508305
				static TCppClassTypeInfo<TCppClassTypeTraits<URuntimeMeshLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeMeshLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshLibrary, 1347896014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshLibrary(Z_Construct_UClass_URuntimeMeshLibrary, &URuntimeMeshLibrary::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshLibrary);
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/RuntimeMeshComponent")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x073CA400;
			Guid.B = 0x83DFD63C;
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
