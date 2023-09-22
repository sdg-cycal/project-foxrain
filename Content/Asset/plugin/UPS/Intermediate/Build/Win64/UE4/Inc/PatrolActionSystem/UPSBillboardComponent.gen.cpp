// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Components/UPSBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSBillboardComponent() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSBillboardComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
// End Cross Module References
	void UUPSBillboardComponent::StaticRegisterNativesUUPSBillboardComponent()
	{
	}
	UClass* Z_Construct_UClass_UUPSBillboardComponent_NoRegister()
	{
		return UUPSBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPSBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Components/UPSBillboardComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/UPSBillboardComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSBillboardComponent_Statics::ClassParams = {
		&UUPSBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSBillboardComponent, 238483525);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSBillboardComponent>()
	{
		return UUPSBillboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSBillboardComponent(Z_Construct_UClass_UUPSBillboardComponent, &UUPSBillboardComponent::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
