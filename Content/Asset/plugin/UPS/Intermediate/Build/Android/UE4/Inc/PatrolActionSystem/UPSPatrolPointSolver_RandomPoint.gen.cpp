// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/PatrolPointSolver/UPSPatrolPointSolver_RandomPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolPointSolver_RandomPoint() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
// End Cross Module References
	void UUPSPatrolPointSolver_RandomPoint::StaticRegisterNativesUUPSPatrolPointSolver_RandomPoint()
	{
	}
	UClass* Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_NoRegister()
	{
		return UUPSPatrolPointSolver_RandomPoint::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUPSPatrolPointSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Returns a random point as the next one to patrol\n*/" },
		{ "IncludePath", "PatrolPointSolver/UPSPatrolPointSolver_RandomPoint.h" },
		{ "ModuleRelativePath", "Public/PatrolPointSolver/UPSPatrolPointSolver_RandomPoint.h" },
		{ "ToolTip", "Returns a random point as the next one to patrol" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolPointSolver_RandomPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::ClassParams = {
		&UUPSPatrolPointSolver_RandomPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolPointSolver_RandomPoint, 2767134686);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPatrolPointSolver_RandomPoint>()
	{
		return UUPSPatrolPointSolver_RandomPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolPointSolver_RandomPoint(Z_Construct_UClass_UUPSPatrolPointSolver_RandomPoint, &UUPSPatrolPointSolver_RandomPoint::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPatrolPointSolver_RandomPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolPointSolver_RandomPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
