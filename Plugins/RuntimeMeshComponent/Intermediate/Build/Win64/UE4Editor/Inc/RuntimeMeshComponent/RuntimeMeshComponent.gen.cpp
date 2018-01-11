// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/RuntimeMeshComponentPluginPrivatePCH.h"
#include "Public/RuntimeMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshComponent() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UDelegateFunction_URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Delegate for when the collision was updated." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "RuntimeMeshCollisionUpdatedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRuntimeMeshComponentPrePhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshComponentPrePhysicsTickFunction"), sizeof(FRuntimeMeshComponentPrePhysicsTickFunction), Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "*      This tick function is used to drive the collision cooker. It is enabled for one frame when we need to update collision.\n*      This keeps from cooking on each individual create/update section as the original PMC did" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshComponentPrePhysicsTickFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				Z_Construct_UScriptStruct_FTickFunction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshComponentPrePhysicsTickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeMeshComponentPrePhysicsTickFunction),
				alignof(FRuntimeMeshComponentPrePhysicsTickFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction_CRC() { return 1424446679U; }
	void URuntimeMeshComponent::StaticRegisterNativesURuntimeMeshComponent()
	{
		UClass* Class = URuntimeMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh()
	{
		struct RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms
		{
			TArray<FVector> ConvexVerts;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts = { UE4CodeGen_Private::EPropertyClass::Array, "ConvexVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConvexVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexVerts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexVerts_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Add simple collision convex to this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "AddCollisionConvexMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventAddCollisionConvexMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Begins a batch of updates, delays updates until you call EndBatchUpdates()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "BeginBatchUpdates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Clears the geometry for ALL collision only sections" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "ClearAllMeshCollisionSections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Clear all mesh sections and reset to empty state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "ClearAllMeshSections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Add simple collision convex to this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "ClearCollisionConvexMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection()
	{
		struct RuntimeMeshComponent_eventClearMeshCollisionSection_Parms
		{
			int32 CollisionSectionIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionSectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CollisionSectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventClearMeshCollisionSection_Parms, CollisionSectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionSectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Clears the geometry for a collision only section" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "ClearMeshCollisionSection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventClearMeshCollisionSection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection()
	{
		struct RuntimeMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Clear a section of the procedural mesh." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "ClearMeshSection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventClearMeshSection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Runs any pending collision cook (Not required to call this. This is only if you need to make sure all changes are cooked before doing something)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "CookCollisionNow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency = { UE4CodeGen_Private::EPropertyClass::Enum, "UpdateFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, UpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateFrequency_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bGenerateTessellationTriangles_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms*)Obj)->bGenerateTessellationTriangles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateTessellationTriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateTessellationTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateTessellationTriangles_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCalculateNormalTangent_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms*)Obj)->bCalculateNormalTangent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateNormalTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculateNormalTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculateNormalTangent_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCreateCollision_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms*)Obj)->bCreateCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors = { UE4CodeGen_Private::EPropertyClass::Array, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, Colors), METADATA_PARAMS(NewProp_Colors_MetaData, ARRAY_COUNT(NewProp_Colors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1 = { UE4CodeGen_Private::EPropertyClass::Array, "UV1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, UV1), METADATA_PARAMS(NewProp_UV1_MetaData, ARRAY_COUNT(NewProp_UV1_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UV1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0 = { UE4CodeGen_Private::EPropertyClass::Array, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, UV0), METADATA_PARAMS(NewProp_UV0_MetaData, ARRAY_COUNT(NewProp_UV0_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, Tangents), METADATA_PARAMS(NewProp_Tangents_MetaData, ARRAY_COUNT(NewProp_Tangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateFrequency_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateTessellationTriangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculateNormalTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV1_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Normals,Tangents,UV0,UV1,Colors" },
				{ "Category", "Components|RuntimeMesh" },
				{ "CPP_Default_UpdateFrequency", "Average" },
				{ "DisplayName", "Create Mesh Section" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Create/replace a section.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex (UV Channel 0). If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex (UV Channel 1). If supplied, must be same length as Vertices array.\n@param  Colors                          Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost.\n@param  bCalculateNormalTangent Indicates whether normal/tangent information should be calculated automatically. This can add significant cost.\n@param  bGenerateTessellationTriangles  Indicates whether tessellation supporting triangles should be calculated. This can add significant cost.\n@param  UpdateFrequency         Indicates how frequently the section will be updated. Allows the RMC to optimize itself to a particular use." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "CreateMeshSection_Blueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(RuntimeMeshComponent_eventCreateMeshSection_Blueprint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventDoesSectionExist_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventDoesSectionExist_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventDoesSectionExist_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns whether a particular section currently exists" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "DoesSectionExist", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventDoesSectionExist_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Ends a batch of updates started with BeginBatchUpdates()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "EndBatchUpdates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex()
	{
		struct RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns first available section index" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "FirstAvailableMeshSectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventFirstAvailableMeshSectionIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex()
	{
		struct RuntimeMeshComponent_eventGetLastSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetLastSectionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns the last in use section index" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "GetLastSectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventGetLastSectionIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections()
	{
		struct RuntimeMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns number of sections currently created for this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "GetNumSections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventGetNumSections_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns whether a particular section is currently casting shadows" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "IsMeshSectionCastingShadows", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventIsMeshSectionCastingShadows_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns whether a particular section has collision" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "IsMeshSectionCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventIsMeshSectionCollisionEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventIsMeshSectionVisible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Returns whether a particular section is currently visible" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "IsMeshSectionVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RuntimeMeshComponent_eventIsMeshSectionVisible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshCollisionSection_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshCollisionSection_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionSectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CollisionSectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshCollisionSection_Parms, CollisionSectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionSectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Sets the geometry for a collision only section" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "SetMeshCollisionSection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(RuntimeMeshComponent_eventSetMeshCollisionSection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewCastsShadow_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms*)Obj)->bNewCastsShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewCastsShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewCastsShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewCastsShadow_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewCastsShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Control whether a particular section casts a shadow" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "SetMeshSectionCastsShadow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventSetMeshSectionCastsShadow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewCollisionEnabled_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms*)Obj)->bNewCollisionEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewCollisionEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewCollisionEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewCollisionEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Control whether a particular section has collision" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "SetMeshSectionCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventSetMeshSectionCollisionEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewVisibility_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventSetMeshSectionVisible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewVisibility_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Control visibility of a particular section" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "SetMeshSectionVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RuntimeMeshComponent_eventSetMeshSectionVisible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bShouldMoveArray_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms*)Obj)->bShouldMoveArray = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldMoveArray = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldMoveArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldMoveArray_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationTriangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TessellationTriangles = { UE4CodeGen_Private::EPropertyClass::Array, "TessellationTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms, TessellationTriangles), METADATA_PARAMS(NewProp_TessellationTriangles_MetaData, ARRAY_COUNT(NewProp_TessellationTriangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TessellationTriangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "TessellationTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldMoveArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TessellationTriangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TessellationTriangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "CPP_Default_bShouldMoveArray", "false" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Sets the tessellation triangles needed to correctly support tessellation on a section." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "SetSectionTessellationTriangles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(RuntimeMeshComponent_eventSetSectionTessellationTriangles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bGenerateTessellationTriangles_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms*)Obj)->bGenerateTessellationTriangles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateTessellationTriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateTessellationTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateTessellationTriangles_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCalculateNormalTangent_SetBit = [](void* Obj){ ((RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms*)Obj)->bCalculateNormalTangent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateNormalTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculateNormalTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculateNormalTangent_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors = { UE4CodeGen_Private::EPropertyClass::Array, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, Colors), METADATA_PARAMS(NewProp_Colors_MetaData, ARRAY_COUNT(NewProp_Colors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1 = { UE4CodeGen_Private::EPropertyClass::Array, "UV1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, UV1), METADATA_PARAMS(NewProp_UV1_MetaData, ARRAY_COUNT(NewProp_UV1_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UV1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0 = { UE4CodeGen_Private::EPropertyClass::Array, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, UV0), METADATA_PARAMS(NewProp_UV0_MetaData, ARRAY_COUNT(NewProp_UV0_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, Tangents), METADATA_PARAMS(NewProp_Tangents_MetaData, ARRAY_COUNT(NewProp_Tangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateTessellationTriangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculateNormalTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV1_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Triangles,Normals,Tangents,UV0,UV1,Colors" },
				{ "Category", "Components|RuntimeMesh" },
				{ "DisplayName", "Update Mesh Section" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Updates a section. This is faster than CreateMeshSection. If you change the vertices count, you must update the other components.\n@param  SectionIndex            Index of the section to update.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex (UV Channel 0). If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex (UV Channel 1). If supplied, must be same length as Vertices array.\n@param  Colors          Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  bCalculateNormalTangent Indicates whether normal/tangent information should be calculated automatically. This can add significant cost.\n@param  bGenerateTessellationTriangles  Indicates whether tessellation supporting triangles should be calculated. This can add significant cost." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, "UpdateMeshSection_Blueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(RuntimeMeshComponent_eventUpdateMeshSection_Blueprint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URuntimeMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 288469531
				{ &Z_Construct_UFunction_URuntimeMeshComponent_BeginBatchUpdates, "BeginBatchUpdates" }, // 1500813611
				{ &Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshCollisionSections, "ClearAllMeshCollisionSections" }, // 1407317922
				{ &Z_Construct_UFunction_URuntimeMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 1926362009
				{ &Z_Construct_UFunction_URuntimeMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 2675227027
				{ &Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshCollisionSection, "ClearMeshCollisionSection" }, // 3563125744
				{ &Z_Construct_UFunction_URuntimeMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 1399026818
				{ &Z_Construct_UFunction_URuntimeMeshComponent_CookCollisionNow, "CookCollisionNow" }, // 3114807752
				{ &Z_Construct_UFunction_URuntimeMeshComponent_CreateMeshSection_Blueprint, "CreateMeshSection_Blueprint" }, // 3020001477
				{ &Z_Construct_UFunction_URuntimeMeshComponent_DoesSectionExist, "DoesSectionExist" }, // 1036452315
				{ &Z_Construct_UFunction_URuntimeMeshComponent_EndBatchUpdates, "EndBatchUpdates" }, // 3633080476
				{ &Z_Construct_UFunction_URuntimeMeshComponent_FirstAvailableMeshSectionIndex, "FirstAvailableMeshSectionIndex" }, // 516144423
				{ &Z_Construct_UFunction_URuntimeMeshComponent_GetLastSectionIndex, "GetLastSectionIndex" }, // 686639581
				{ &Z_Construct_UFunction_URuntimeMeshComponent_GetNumSections, "GetNumSections" }, // 1678917989
				{ &Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCastingShadows, "IsMeshSectionCastingShadows" }, // 2713705512
				{ &Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionCollisionEnabled, "IsMeshSectionCollisionEnabled" }, // 1288199628
				{ &Z_Construct_UFunction_URuntimeMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 2934295452
				{ &Z_Construct_UDelegateFunction_URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature, "RuntimeMeshCollisionUpdatedDelegate__DelegateSignature" }, // 4086987909
				{ &Z_Construct_UFunction_URuntimeMeshComponent_SetMeshCollisionSection, "SetMeshCollisionSection" }, // 2410135380
				{ &Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCastsShadow, "SetMeshSectionCastsShadow" }, // 2832194622
				{ &Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionCollisionEnabled, "SetMeshSectionCollisionEnabled" }, // 1823117186
				{ &Z_Construct_UFunction_URuntimeMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 1812327005
				{ &Z_Construct_UFunction_URuntimeMeshComponent_SetSectionTessellationTriangles, "SetSectionTessellationTriangles" }, // 2617151312
				{ &Z_Construct_UFunction_URuntimeMeshComponent_UpdateMeshSection_Blueprint, "UpdateMeshSection_Blueprint" }, // 2636362660
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "HideCategories", "Object LOD Mobility Trigger" },
				{ "IncludePath", "RuntimeMeshComponent.h" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry for rendering and collision." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Queue for async body setups that are being cooked" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue = { UE4CodeGen_Private::EPropertyClass::Array, "AsyncBodySetupQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, AsyncBodySetupQueue), METADATA_PARAMS(NewProp_AsyncBodySetupQueue_MetaData, ARRAY_COUNT(NewProp_AsyncBodySetupQueue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsyncBodySetupQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AsyncBodySetupQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePhysicsTick_MetaData[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Tick function used to cook collision when needed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrePhysicsTick = { UE4CodeGen_Private::EPropertyClass::Struct, "PrePhysicsTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, PrePhysicsTick), Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction, METADATA_PARAMS(NewProp_PrePhysicsTick_MetaData, ARRAY_COUNT(NewProp_PrePhysicsTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Local space bounds of mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_LocalBounds_MetaData, ARRAY_COUNT(NewProp_LocalBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvexCollisionSections_MetaData[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Convex shapes used for simple collision" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConvexCollisionSections = { UE4CodeGen_Private::EPropertyClass::Array, "ConvexCollisionSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, ConvexCollisionSections), METADATA_PARAMS(NewProp_ConvexCollisionSections_MetaData, ARRAY_COUNT(NewProp_ConvexCollisionSections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvexCollisionSections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConvexCollisionSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeConvexCollisionSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCollisionSections_MetaData[] = {
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Array of collision only mesh sections" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshCollisionSections = { UE4CodeGen_Private::EPropertyClass::Array, "MeshCollisionSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, MeshCollisionSections), METADATA_PARAMS(NewProp_MeshCollisionSections_MetaData, ARRAY_COUNT(NewProp_MeshCollisionSections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshCollisionSections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshCollisionSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Collision data" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080008, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[] = {
				{ "Category", "RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "*       The current mode of the collision cooker\n*       WARNING: This feature will only work in engine version 4.14 or above!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CollisionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, CollisionMode), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, METADATA_PARAMS(NewProp_CollisionMode_MetaData, ARRAY_COUNT(NewProp_CollisionMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSerializeMeshData_MetaData[] = {
				{ "Category", "RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Controls whether the mesh data should be serialized with the component." },
			};
#endif
			auto NewProp_bShouldSerializeMeshData_SetBit = [](void* Obj){ ((URuntimeMeshComponent*)Obj)->bShouldSerializeMeshData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSerializeMeshData = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldSerializeMeshData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URuntimeMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldSerializeMeshData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldSerializeMeshData_MetaData, ARRAY_COUNT(NewProp_bShouldSerializeMeshData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[] = {
				{ "Category", "RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Controls whether the physics cooking is done in parallel. This will increase throughput in\nmultiple RMC scenarios, and keep from blocking the game thread, but when the collision becomes queryable\nis non-deterministic. See callback event for notification on collision updated." },
			};
#endif
			auto NewProp_bUseAsyncCooking_SetBit = [](void* Obj){ ((URuntimeMeshComponent*)Obj)->bUseAsyncCooking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsyncCooking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URuntimeMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAsyncCooking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAsyncCooking_MetaData, ARRAY_COUNT(NewProp_bUseAsyncCooking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
				{ "Category", "RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
			};
#endif
			auto NewProp_bUseComplexAsSimpleCollision_SetBit = [](void* Obj){ ((URuntimeMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseComplexAsSimpleCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URuntimeMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseComplexAsSimpleCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseComplexAsSimpleCollision_MetaData, ARRAY_COUNT(NewProp_bUseComplexAsSimpleCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionUpdated_MetaData[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
				{ "ToolTip", "Event called when the colliison has finished updated, this works both with standard following frame synchronous updates, as well as async updates" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CollisionUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "CollisionUpdated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, CollisionUpdated), Z_Construct_UDelegateFunction_URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(NewProp_CollisionUpdated_MetaData, ARRAY_COUNT(NewProp_CollisionUpdated_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncBodySetupQueue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncBodySetupQueue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrePhysicsTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexCollisionSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexCollisionSections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshCollisionSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshCollisionSections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldSerializeMeshData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAsyncCooking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseComplexAsSimpleCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionUpdated,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(URuntimeMeshComponent, IInterface_CollisionDataProvider), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URuntimeMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URuntimeMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshComponent, 1667543062);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshComponent(Z_Construct_UClass_URuntimeMeshComponent, &URuntimeMeshComponent::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
