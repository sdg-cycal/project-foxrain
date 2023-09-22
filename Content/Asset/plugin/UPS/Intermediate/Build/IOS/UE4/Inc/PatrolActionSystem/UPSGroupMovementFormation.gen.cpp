// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/UPSGroupMovementFormation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGroupMovementFormation() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void AUPSGroupMovementFormation::StaticRegisterNativesAUPSGroupMovementFormation()
	{
	}
	UClass* Z_Construct_UClass_AUPSGroupMovementFormation_NoRegister()
	{
		return AUPSGroupMovementFormation::StaticClass();
	}
	struct Z_Construct_UClass_AUPSGroupMovementFormation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersInFormation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CharactersInFormation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersInFormation_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootArrowComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSGroupMovementFormation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMovementFormation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nBase class of formation for group movement. Need to receive relative to leader character location in formation\nContains pointers to all characters in formation and pointer to leader character.\n*/" },
		{ "IncludePath", "GroupMovement/UPSGroupMovementFormation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementFormation.h" },
		{ "ToolTip", "Base class of formation for group movement. Need to receive relative to leader character location in formation\nContains pointers to all characters in formation and pointer to leader character." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_LeaderCharacter_MetaData[] = {
		{ "Category", "UPSGroupMovementFormation" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementFormation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_LeaderCharacter = { "LeaderCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSGroupMovementFormation, LeaderCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_LeaderCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_LeaderCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation_MetaData[] = {
		{ "Category", "UPSGroupMovementFormation" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementFormation.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation = { "CharactersInFormation", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSGroupMovementFormation, CharactersInFormation), METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation_ElementProp = { "CharactersInFormation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_RootArrowComponent_MetaData[] = {
		{ "Category", "UPSGroupMovementFormation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementFormation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_RootArrowComponent = { "RootArrowComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSGroupMovementFormation, RootArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_RootArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_RootArrowComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSGroupMovementFormation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_LeaderCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_CharactersInFormation_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGroupMovementFormation_Statics::NewProp_RootArrowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSGroupMovementFormation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSGroupMovementFormation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSGroupMovementFormation_Statics::ClassParams = {
		&AUPSGroupMovementFormation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPSGroupMovementFormation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementFormation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSGroupMovementFormation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSGroupMovementFormation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSGroupMovementFormation, 2783132060);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSGroupMovementFormation>()
	{
		return AUPSGroupMovementFormation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSGroupMovementFormation(Z_Construct_UClass_AUPSGroupMovementFormation, &AUPSGroupMovementFormation::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSGroupMovementFormation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSGroupMovementFormation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
