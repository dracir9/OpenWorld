// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRuntimeMeshTangent;
struct FVector2D;
struct FLinearColor;
enum class EUpdateFrequency : uint8;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h
#error "RuntimeMeshComponent.generated.h already included, missing '#pragma once' in RuntimeMeshComponent.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h

#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_60_GENERATED_BODY \
	friend RUNTIMEMESHCOMPONENT_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshComponentPrePhysicsTickFunction(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCookCollisionNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CookCollisionNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndBatchUpdates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndBatchUpdates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginBatchUpdates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginBatchUpdates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearCollisionConvexMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionConvexMesh) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddCollisionConvexMesh(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAllMeshCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMeshCollisionSection(Z_Param_CollisionSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshCollisionSection(Z_Param_CollisionSectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetLastSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFirstAvailableMeshSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->FirstAvailableMeshSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSectionExist) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DoesSectionExist(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionCollisionEnabled(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCollisionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionCollisionEnabled(Z_Param_SectionIndex,Z_Param_bNewCollisionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCastingShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionCastingShadows(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCastsShadow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCastsShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionCastsShadow(Z_Param_SectionIndex,Z_Param_bNewCastsShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSectionTessellationTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_TessellationTriangles); \
		P_GET_UBOOL(Z_Param_bShouldMoveArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSectionTessellationTriangles(Z_Param_SectionIndex,Z_Param_Out_TessellationTriangles,Z_Param_bShouldMoveArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCalculateNormalTangent,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency)); \
		P_NATIVE_END; \
	}


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCookCollisionNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CookCollisionNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndBatchUpdates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndBatchUpdates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginBatchUpdates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginBatchUpdates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearCollisionConvexMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionConvexMesh) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddCollisionConvexMesh(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAllMeshCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMeshCollisionSection(Z_Param_CollisionSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshCollisionSection(Z_Param_CollisionSectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetLastSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFirstAvailableMeshSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->FirstAvailableMeshSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSectionExist) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DoesSectionExist(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionCollisionEnabled(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCollisionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionCollisionEnabled(Z_Param_SectionIndex,Z_Param_bNewCollisionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCastingShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionCastingShadows(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCastsShadow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCastsShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionCastsShadow(Z_Param_SectionIndex,Z_Param_bNewCastsShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSectionTessellationTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_TessellationTriangles); \
		P_GET_UBOOL(Z_Param_bShouldMoveArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSectionTessellationTriangles(Z_Param_SectionIndex,Z_Param_Out_TessellationTriangles,Z_Param_bShouldMoveArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCalculateNormalTangent,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency)); \
		P_NATIVE_END; \
	}


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent(); \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMeshComponent*>(this); }


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent(); \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMeshComponent*>(this); }


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public:


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponent)


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshCollisionSections() { return STRUCT_OFFSET(URuntimeMeshComponent, MeshCollisionSections); } \
	FORCEINLINE static uint32 __PPO__ConvexCollisionSections() { return STRUCT_OFFSET(URuntimeMeshComponent, ConvexCollisionSections); } \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(URuntimeMeshComponent, LocalBounds); } \
	FORCEINLINE static uint32 __PPO__PrePhysicsTick() { return STRUCT_OFFSET(URuntimeMeshComponent, PrePhysicsTick); }


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_87_PROLOG
#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_RPC_WRAPPERS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_INCLASS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_PRIVATE_PROPERTY_OFFSET \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_INCLASS_NO_PURE_DECLS \
	OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorld_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
