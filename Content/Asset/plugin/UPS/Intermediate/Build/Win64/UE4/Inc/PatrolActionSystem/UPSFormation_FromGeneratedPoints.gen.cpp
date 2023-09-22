// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/Formations/UPSFormation_FromGeneratedPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFormation_FromGeneratedPoints() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromGeneratedPoints();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFormationPointsGenerationSettings();
// End Cross Module References
	void AUPSFormation_FromGeneratedPoints::StaticRegisterNativesAUPSFormation_FromGeneratedPoints()
	{
	}
	UClass* Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_NoRegister()
	{
		return AUPSFormation_FromGeneratedPoints::StaticClass();
	}
	struct Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsGenerationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointsGenerationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSGroupMovementFormation,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nGenerate points from params and get one of this for character location in formation\n*/" },
		{ "IncludePath", "GroupMovement/Formations/UPSFormation_FromGeneratedPoints.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_FromGeneratedPoints.h" },
		{ "ToolTip", "Generate points from params and get one of this for character location in formation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::NewProp_PointsGenerationSettings_MetaData[] = {
		{ "Category", "UPSFormation" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_FromGeneratedPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::NewProp_PointsGenerationSettings = { "PointsGenerationSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSFormation_FromGeneratedPoints, PointsGenerationSettings), Z_Construct_UScriptStruct_FFormationPointsGenerationSettings, METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::NewProp_PointsGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::NewProp_PointsGenerationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::NewProp_PointsGenerationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSFormation_FromGeneratedPoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::ClassParams = {
		&AUPSFormation_FromGeneratedPoints::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSFormation_FromGeneratedPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSFormation_FromGeneratedPoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSFormation_FromGeneratedPoints, 769846147);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSFormation_FromGeneratedPoints>()
	{
		return AUPSFormation_FromGeneratedPoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSFormation_FromGeneratedPoints(Z_Construct_UClass_AUPSFormation_FromGeneratedPoints, &AUPSFormation_FromGeneratedPoints::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSFormation_FromGeneratedPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSFormation_FromGeneratedPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
