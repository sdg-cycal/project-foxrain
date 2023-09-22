// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/AI/UPSGroupMovementAIC_Crowd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGroupMovementAIC_Crowd() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementAIC_Crowd();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementAIController();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
// End Cross Module References
	void AUPSGroupMovementAIC_Crowd::StaticRegisterNativesAUPSGroupMovementAIC_Crowd()
	{
	}
	UClass* Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_NoRegister()
	{
		return AUPSGroupMovementAIC_Crowd::StaticClass();
	}
	struct Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSGroupMovementAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/UPSGroupMovementAIC_Crowd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/UPSGroupMovementAIC_Crowd.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSGroupMovementAIC_Crowd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::ClassParams = {
		&AUPSGroupMovementAIC_Crowd::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSGroupMovementAIC_Crowd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSGroupMovementAIC_Crowd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSGroupMovementAIC_Crowd, 3331104636);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSGroupMovementAIC_Crowd>()
	{
		return AUPSGroupMovementAIC_Crowd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSGroupMovementAIC_Crowd(Z_Construct_UClass_AUPSGroupMovementAIC_Crowd, &AUPSGroupMovementAIC_Crowd::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSGroupMovementAIC_Crowd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSGroupMovementAIC_Crowd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
