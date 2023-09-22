// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/Formations/UPSFormation_FromFormationPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFormation_FromFormationPoints() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromFormationPoints_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromFormationPoints();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSFormationPointComponent_NoRegister();
// End Cross Module References
	void AUPSFormation_FromFormationPoints::StaticRegisterNativesAUPSFormation_FromFormationPoints()
	{
	}
	UClass* Z_Construct_UClass_AUPSFormation_FromFormationPoints_NoRegister()
	{
		return AUPSFormation_FromFormationPoints::StaticClass();
	}
	struct Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormationPointComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormationPointComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FormationPointComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSGroupMovementFormation,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Get one of UUPSFormationPointComponent component from this actor and use as character location in formation\n*/" },
		{ "IncludePath", "GroupMovement/Formations/UPSFormation_FromFormationPoints.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_FromFormationPoints.h" },
		{ "ToolTip", "Get one of UUPSFormationPointComponent component from this actor and use as character location in formation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_FromFormationPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents = { "FormationPointComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSFormation_FromFormationPoints, FormationPointComponents), METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents_Inner = { "FormationPointComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUPSFormationPointComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::NewProp_FormationPointComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSFormation_FromFormationPoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::ClassParams = {
		&AUPSFormation_FromFormationPoints::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSFormation_FromFormationPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSFormation_FromFormationPoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSFormation_FromFormationPoints, 3921923566);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSFormation_FromFormationPoints>()
	{
		return AUPSFormation_FromFormationPoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSFormation_FromFormationPoints(Z_Construct_UClass_AUPSFormation_FromFormationPoints, &AUPSFormation_FromFormationPoints::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSFormation_FromFormationPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSFormation_FromFormationPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
