// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystemEditor/Public/Utils/UPSGameplayTaskProxyOwner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGameplayTaskProxyOwner() {}
// Cross Module References
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_AUPSGameplayTaskProxyOwner_NoRegister();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_AUPSGameplayTaskProxyOwner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystemEditor();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	void AUPSGameplayTaskProxyOwner::StaticRegisterNativesAUPSGameplayTaskProxyOwner()
	{
	}
	UClass* Z_Construct_UClass_AUPSGameplayTaskProxyOwner_NoRegister()
	{
		return AUPSGameplayTaskProxyOwner::StaticClass();
	}
	struct Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayTaskComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Class created in UPSPatrolBuilder that we can create GameplayTask in editor\n" },
		{ "IncludePath", "Utils/UPSGameplayTaskProxyOwner.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSGameplayTaskProxyOwner.h" },
		{ "notplaceable", "" },
		{ "ToolTip", "Class created in UPSPatrolBuilder that we can create GameplayTask in editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::NewProp_GameplayTaskComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utils/UPSGameplayTaskProxyOwner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::NewProp_GameplayTaskComponent = { "GameplayTaskComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSGameplayTaskProxyOwner, GameplayTaskComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::NewProp_GameplayTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::NewProp_GameplayTaskComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::NewProp_GameplayTaskComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(AUPSGameplayTaskProxyOwner, IGameplayTaskOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSGameplayTaskProxyOwner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::ClassParams = {
		&AUPSGameplayTaskProxyOwner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSGameplayTaskProxyOwner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSGameplayTaskProxyOwner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSGameplayTaskProxyOwner, 442811275);
	template<> PATROLACTIONSYSTEMEDITOR_API UClass* StaticClass<AUPSGameplayTaskProxyOwner>()
	{
		return AUPSGameplayTaskProxyOwner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSGameplayTaskProxyOwner(Z_Construct_UClass_AUPSGameplayTaskProxyOwner, &AUPSGameplayTaskProxyOwner::StaticClass, TEXT("/Script/PatrolActionSystemEditor"), TEXT("AUPSGameplayTaskProxyOwner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSGameplayTaskProxyOwner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
