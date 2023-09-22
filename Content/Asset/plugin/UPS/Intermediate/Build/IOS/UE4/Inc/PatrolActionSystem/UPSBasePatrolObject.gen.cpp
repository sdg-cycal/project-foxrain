// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Actors/UPSBasePatrolObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSBasePatrolObject() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSBasePatrolObject_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSBasePatrolObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
// End Cross Module References
	void AUPSBasePatrolObject::StaticRegisterNativesAUPSBasePatrolObject()
	{
	}
	UClass* Z_Construct_UClass_AUPSBasePatrolObject_NoRegister()
	{
		return AUPSBasePatrolObject::StaticClass();
	}
	struct Z_Construct_UClass_AUPSBasePatrolObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSBasePatrolObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSBasePatrolObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nBase class for actors with snapping function\n*/" },
		{ "IncludePath", "Actors/UPSBasePatrolObject.h" },
		{ "ModuleRelativePath", "Public/Actors/UPSBasePatrolObject.h" },
		{ "ToolTip", "Base class for actors with snapping function" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSBasePatrolObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSBasePatrolObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSBasePatrolObject_Statics::ClassParams = {
		&AUPSBasePatrolObject::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSBasePatrolObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSBasePatrolObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSBasePatrolObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSBasePatrolObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSBasePatrolObject, 469021656);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSBasePatrolObject>()
	{
		return AUPSBasePatrolObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSBasePatrolObject(Z_Construct_UClass_AUPSBasePatrolObject, &AUPSBasePatrolObject::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSBasePatrolObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSBasePatrolObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
