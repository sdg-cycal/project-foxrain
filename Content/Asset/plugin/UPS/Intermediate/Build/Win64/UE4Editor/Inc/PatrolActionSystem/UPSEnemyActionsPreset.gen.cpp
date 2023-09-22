// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyActions/UPSEnemyActionsPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEnemyActionsPreset() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionsPreset_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionsPreset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyActionSelector();
// End Cross Module References
	void UUPSEnemyActionsPreset::StaticRegisterNativesUUPSEnemyActionsPreset()
	{
	}
	UClass* Z_Construct_UClass_UUPSEnemyActionsPreset_NoRegister()
	{
		return UUPSEnemyActionsPreset::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEnemyActionsPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyActions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyActions/UPSEnemyActionsPreset.h" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyActionsPreset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyActionsPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions = { "EnemyActions", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyActionsPreset, EnemyActions), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions_Inner = { "EnemyActions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyActionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::NewProp_EnemyActions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEnemyActionsPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::ClassParams = {
		&UUPSEnemyActionsPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEnemyActionsPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEnemyActionsPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEnemyActionsPreset, 630829036);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSEnemyActionsPreset>()
	{
		return UUPSEnemyActionsPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEnemyActionsPreset(Z_Construct_UClass_UUPSEnemyActionsPreset, &UUPSEnemyActionsPreset::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSEnemyActionsPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEnemyActionsPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
