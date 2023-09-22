// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/UPSFormationPointComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFormationPointComponent() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSFormationPointComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSFormationPointComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void UUPSFormationPointComponent::StaticRegisterNativesUUPSFormationPointComponent()
	{
	}
	UClass* Z_Construct_UClass_UUPSFormationPointComponent_NoRegister()
	{
		return UUPSFormationPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPSFormationPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSFormationPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSFormationPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nUse to determine character location in formation.\nSee AUPSFormation_FromFormationPoints\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "GroupMovement/UPSFormationPointComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSFormationPointComponent.h" },
		{ "ToolTip", "Use to determine character location in formation.\nSee AUPSFormation_FromFormationPoints" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSFormationPointComponent_Statics::NewProp_CharacterOnPoint_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSFormationPointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSFormationPointComponent_Statics::NewProp_CharacterOnPoint = { "CharacterOnPoint", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSFormationPointComponent, CharacterOnPoint), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSFormationPointComponent_Statics::NewProp_CharacterOnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSFormationPointComponent_Statics::NewProp_CharacterOnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSFormationPointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSFormationPointComponent_Statics::NewProp_CharacterOnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSFormationPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSFormationPointComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSFormationPointComponent_Statics::ClassParams = {
		&UUPSFormationPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPSFormationPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSFormationPointComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSFormationPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSFormationPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSFormationPointComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSFormationPointComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSFormationPointComponent, 2066256674);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSFormationPointComponent>()
	{
		return UUPSFormationPointComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSFormationPointComponent(Z_Construct_UClass_UUPSFormationPointComponent, &UUPSFormationPointComponent::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSFormationPointComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSFormationPointComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
