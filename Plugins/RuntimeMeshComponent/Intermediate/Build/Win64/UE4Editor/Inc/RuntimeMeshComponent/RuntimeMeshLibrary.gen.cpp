// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/RuntimeMeshComponentPluginPrivatePCH.h"
#include "Public/RuntimeMeshLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshLibrary() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void URuntimeMeshLibrary::StaticRegisterNativesURuntimeMeshLibrary()
	{
		UClass* Class = URuntimeMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTangentsForMesh", (Native)&URuntimeMeshLibrary::execCalculateTangentsForMesh },
			{ "ConvertQuadToTriangles", (Native)&URuntimeMeshLibrary::execConvertQuadToTriangles },
			{ "CopyRuntimeMeshFromStaticMeshComponent", (Native)&URuntimeMeshLibrary::execCopyRuntimeMeshFromStaticMeshComponent },
			{ "CreateBoxMesh", (Native)&URuntimeMeshLibrary::execCreateBoxMesh },
			{ "CreateGridMeshTriangles", (Native)&URuntimeMeshLibrary::execCreateGridMeshTriangles },
			{ "GenerateTessellationIndexBuffer", (Native)&URuntimeMeshLibrary::execGenerateTessellationIndexBuffer },
			{ "GetSectionFromStaticMesh", (Native)&URuntimeMeshLibrary::execGetSectionFromStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "UVs" },
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Automatically generate normals and tangent vectors for a mesh\nUVs are required for correct tangent generation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CalculateTangentsForMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert3 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms, Vert3), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert2 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms, Vert2), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert1 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms, Vert1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert0 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms, Vert0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Add a quad, specified by four indices, to a triangle index buffer as two triangles." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "ConvertQuadToTriangles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventConvertQuadToTriangles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bShouldCreateCollision_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms*)Obj)->bShouldCreateCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldCreateCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldCreateCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "RuntimeMeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms, RuntimeMeshComp), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RuntimeMeshComp_MetaData, ARRAY_COUNT(NewProp_RuntimeMeshComp_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComp_MetaData, ARRAY_COUNT(NewProp_StaticMeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldCreateCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeMeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Copies an entire Static Mesh to a Runtime Mesh. Includes all materials, and sections." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CopyRuntimeMeshFromStaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(RuntimeMeshLibrary_eventCopyRuntimeMeshFromStaticMeshComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateBoxMesh_Parms, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CreateBoxMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(RuntimeMeshLibrary_eventCreateBoxMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bWinding_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms*)Obj)->bWinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bWinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumY = { UE4CodeGen_Private::EPropertyClass::Int, "NumY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumX = { UE4CodeGen_Private::EPropertyClass::Int, "NumX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumX,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Generate an index buffer for a grid of quads.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@param  bWinding                Reverses winding of indices generated for each quad\n@out    Triangles               Output index buffer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CreateGridMeshTriangles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventCreateGridMeshTriangles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTessTriangles = { UE4CodeGen_Private::EPropertyClass::Array, "OutTessTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, OutTessTriangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTessTriangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OutTessTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTessTriangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTessTriangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "UVs" },
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Generates the tessellation indices needed to support tessellation in materials" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GenerateTessellationIndexBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh = { UE4CodeGen_Private::EPropertyClass::Object, "InMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Grab geometry data from a StaticMesh asset." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GetSectionFromStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGetSectionFromStaticMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister()
	{
		return URuntimeMeshLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh, "CalculateTangentsForMesh" }, // 2028537427
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_ConvertQuadToTriangles, "ConvertQuadToTriangles" }, // 654053484
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent, "CopyRuntimeMeshFromStaticMeshComponent" }, // 663431702
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CreateBoxMesh, "CreateBoxMesh" }, // 4135027365
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CreateGridMeshTriangles, "CreateGridMeshTriangles" }, // 416615249
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer, "GenerateTessellationIndexBuffer" }, // 4271371193
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GetSectionFromStaticMesh, "GetSectionFromStaticMesh" }, // 3210236606
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RuntimeMeshLibrary.h" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URuntimeMeshLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URuntimeMeshLibrary::StaticClass,
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
	IMPLEMENT_CLASS(URuntimeMeshLibrary, 3802546507);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshLibrary(Z_Construct_UClass_URuntimeMeshLibrary, &URuntimeMeshLibrary::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
