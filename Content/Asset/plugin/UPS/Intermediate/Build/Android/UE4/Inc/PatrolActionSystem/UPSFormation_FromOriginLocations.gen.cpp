// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/Formations/UPSFormation_FromOriginLocations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFormation_FromOriginLocations() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromOriginLocations_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_FromOriginLocations();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
// End Cross Module References
	void AUPSFormation_FromOriginLocations::StaticRegisterNativesAUPSFormation_FromOriginLocations()
	{
	}
	UClass* Z_Construct_UClass_AUPSFormation_FromOriginLocations_NoRegister()
	{
		return AUPSFormation_FromOriginLocations::StaticClass();
	}
	struct Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSGroupMovementFormation,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Use current world character location as location in formation\n*/" },
		{ "IncludePath", "GroupMovement/Formations/UPSFormation_FromOriginLocations.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_FromOriginLocations.h" },
		{ "ToolTip", "Use current world character location as location in formation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSFormation_FromOriginLocations>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::ClassParams = {
		&AUPSFormation_FromOriginLocations::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSFormation_FromOriginLocations()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSFormation_FromOriginLocations_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSFormation_FromOriginLocations, 3628279147);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSFormation_FromOriginLocations>()
	{
		return AUPSFormation_FromOriginLocations::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSFormation_FromOriginLocations(Z_Construct_UClass_AUPSFormation_FromOriginLocations, &AUPSFormation_FromOriginLocations::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSFormation_FromOriginLocations"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSFormation_FromOriginLocations);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
