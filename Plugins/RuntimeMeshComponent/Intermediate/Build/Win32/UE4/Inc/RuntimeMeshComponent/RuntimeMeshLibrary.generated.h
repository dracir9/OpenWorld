// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class URuntimeMeshComponent;
class UStaticMesh;
struct FVector;
struct FVector2D;
struct FRuntimeMeshTangent;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshLibrary_generated_h
#error "RuntimeMeshLibrary.generated.h already included, missing '#pragma once' in RuntimeMeshLibrary.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshLibrary_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyRuntimeMeshFromStaticMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComp); \
		P_GET_UBOOL(Z_Param_bShouldCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyRuntimeMeshFromStaticMeshComponent(Z_Param_StaticMeshComp,Z_Param_LODIndex,Z_Param_RuntimeMeshComp,Z_Param_bShouldCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBuffer) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutTessTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GenerateTessellationIndexBuffer(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_OutTessTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CreateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyRuntimeMeshFromStaticMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComp); \
		P_GET_UBOOL(Z_Param_bShouldCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyRuntimeMeshFromStaticMeshComponent(Z_Param_StaticMeshComp,Z_Param_LODIndex,Z_Param_RuntimeMeshComp,Z_Param_bShouldCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBuffer) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutTessTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GenerateTessellationIndexBuffer(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_OutTessTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CreateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshLibrary(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary(); \
public: \
	DECLARE_CLASS(URuntimeMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshLibrary(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary(); \
public: \
	DECLARE_CLASS(URuntimeMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshLibrary(URuntimeMeshLibrary&&); \
	NO_API URuntimeMeshLibrary(const URuntimeMeshLibrary&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshLibrary(URuntimeMeshLibrary&&); \
	NO_API URuntimeMeshLibrary(const URuntimeMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshLibrary)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_11_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeMeshLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
