// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/UPSGroupMemberMovementPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGroupMemberMovementPoint() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMemberMovementPoint_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMemberMovementPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AUPSGroupMemberMovementPoint::StaticRegisterNativesAUPSGroupMemberMovementPoint()
	{
	}
	UClass* Z_Construct_UClass_AUPSGroupMemberMovementPoint_NoRegister()
	{
		return AUPSGroupMemberMovementPoint::StaticClass();
	}
	struct Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09It is used as an actor for AI movement in group movement.\n*/" },
		{ "IncludePath", "GroupMovement/UPSGroupMemberMovementPoint.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMemberMovementPoint.h" },
		{ "ToolTip", "It is used as an actor for AI movement in group movement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMemberMovementPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSGroupMemberMovementPoint, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::NewProp_BillboardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::NewProp_BillboardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSGroupMemberMovementPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::ClassParams = {
		&AUPSGroupMemberMovementPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSGroupMemberMovementPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSGroupMemberMovementPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSGroupMemberMovementPoint, 3467193308);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSGroupMemberMovementPoint>()
	{
		return AUPSGroupMemberMovementPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSGroupMemberMovementPoint(Z_Construct_UClass_AUPSGroupMemberMovementPoint, &AUPSGroupMemberMovementPoint::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSGroupMemberMovementPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSGroupMemberMovementPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
