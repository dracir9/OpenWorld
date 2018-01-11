// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/RuntimeMeshComponentSlicerPrivatePCH.h"
#include "RuntimeMeshComponentSlicer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1RuntimeMeshComponentSlicer() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	RUNTIMEMESHCOMPONENTSLICER_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption();
	RUNTIMEMESHCOMPONENTSLICER_API class UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh();
	RUNTIMEMESHCOMPONENTSLICER_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister();
	RUNTIMEMESHCOMPONENTSLICER_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer();
	RUNTIMEMESHCOMPONENTSLICER_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer();
static UEnum* ERuntimeMeshSliceCapOption_StaticEnum()
{
	extern RUNTIMEMESHCOMPONENTSLICER_API class UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENTSLICER_API class UEnum* Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption();
		Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption, Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer(), TEXT("ERuntimeMeshSliceCapOption"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshSliceCapOption(ERuntimeMeshSliceCapOption_StaticEnum, TEXT("/Script/RuntimeMeshComponentSlicer"), TEXT("ERuntimeMeshSliceCapOption"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer();
		extern uint32 Get_Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshSliceCapOption"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ERuntimeMeshSliceCapOption"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ERuntimeMeshSliceCapOption::NoCap"), 0);
			EnumNames.Emplace(TEXT("ERuntimeMeshSliceCapOption::CreateNewSectionForCap"), 1);
			EnumNames.Emplace(TEXT("ERuntimeMeshSliceCapOption::UseLastSectionForCap"), 2);
			EnumNames.Emplace(TEXT("ERuntimeMeshSliceCapOption::ERuntimeMeshSliceCapOption_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ERuntimeMeshSliceCapOption");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("CreateNewSectionForCap.ToolTip"), TEXT("Add a new section to ProceduralMesh for cap"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshSlicer.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NoCap.ToolTip"), TEXT("Do not create cap geometry"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Options for creating cap geometry when slicing"));
			MetaData->SetValue(ReturnEnum, TEXT("UseLastSectionForCap.ToolTip"), TEXT("Add cap geometry to existing last section"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption_CRC() { return 1694626235U; }
	void URuntimeMeshSlicer::StaticRegisterNativesURuntimeMeshSlicer()
	{
		UClass* Class = URuntimeMeshSlicer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SliceRuntimeMesh", (Native)&URuntimeMeshSlicer::execSliceRuntimeMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh()
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms
		{
			URuntimeMeshComponent* InRuntimeMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			URuntimeMeshComponent* OutOtherHalfRuntimeMesh;
			ERuntimeMeshSliceCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeMeshSlicer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SliceRuntimeMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms));
			UProperty* NewProp_CapMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CapMaterial, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_CapOption = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapOption"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CapOption, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000000080, Z_Construct_UEnum_RuntimeMeshComponentSlicer_ERuntimeMeshSliceCapOption());
			UProperty* NewProp_CapOption_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CapOption, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_OutOtherHalfRuntimeMesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutOtherHalfRuntimeMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OutOtherHalfRuntimeMesh, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000080180, Z_Construct_UClass_URuntimeMeshComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCreateOtherHalf, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, bool);
			UProperty* NewProp_bCreateOtherHalf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCreateOtherHalf"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCreateOtherHalf, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCreateOtherHalf, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), sizeof(bool), true);
			UProperty* NewProp_PlaneNormal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlaneNormal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlaneNormal, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_PlanePosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlanePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlanePosition, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InRuntimeMesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InRuntimeMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InRuntimeMesh, RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), 0x0010000000080080, Z_Construct_UClass_URuntimeMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|RuntimeMesh"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshSlicer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n@param  InRuntimeMesh                           RuntimeMeshComponent to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  bCreateOtherHalf                If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry\n@param  OutOtherHalfRuntimeMesh If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  CapMaterial                             If creating a new section for the cap, assign this material to that section"));
			MetaData->SetValue(NewProp_OutOtherHalfRuntimeMesh, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_InRuntimeMesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshSlicer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer();
			OuterClass = URuntimeMeshSlicer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh(), "SliceRuntimeMesh"); // 175814350
				static TCppClassTypeInfo<TCppClassTypeTraits<URuntimeMeshSlicer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeMeshSlicer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeMeshSlicer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshSlicer, 3447443430);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshSlicer(Z_Construct_UClass_URuntimeMeshSlicer, &URuntimeMeshSlicer::StaticClass, TEXT("/Script/RuntimeMeshComponentSlicer"), TEXT("URuntimeMeshSlicer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshSlicer);
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponentSlicer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/RuntimeMeshComponentSlicer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF357A9F2;
			Guid.B = 0x2F460CDF;
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
