// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystemEditor/Public/Utils/UPSPatrolBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolBuilder() {}
// Cross Module References
	PATROLACTIONSYSTEMEDITOR_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystemEditor();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UUPSPatrolBuilder_NoRegister();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UUPSPatrolBuilder();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	PATROLACTIONSYSTEMEDITOR_API UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding();
	PATROLACTIONSYSTEMEDITOR_API UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding();
	PATROLACTIONSYSTEMEDITOR_API UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_AUPSGameplayTaskProxyOwner_NoRegister();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystemEditor, nullptr, "OnPatrolBuildFailed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UUPSPatrolBuilder::StaticRegisterNativesUUPSPatrolBuilder()
	{
		UClass* Class = UUPSPatrolBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortBuilding", &UUPSPatrolBuilder::execAbortBuilding },
			{ "FinishBuilding", &UUPSPatrolBuilder::execFinishBuilding },
			{ "RunPatrolBuilder", &UUPSPatrolBuilder::execRunPatrolBuilder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem|Editor|PatrolBuilder" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolBuilder, nullptr, "AbortBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem|Editor|PatrolBuilder" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolBuilder, nullptr, "FinishBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics
	{
		struct UPSPatrolBuilder_eventRunPatrolBuilder_Parms
		{
			UEditorUtilityWidget* EditorUtilityWidget;
			UUPSPatrolBuilder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorUtilityWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorUtilityWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolBuilder_eventRunPatrolBuilder_Parms, ReturnValue), Z_Construct_UClass_UUPSPatrolBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_EditorUtilityWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_EditorUtilityWidget = { "EditorUtilityWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolBuilder_eventRunPatrolBuilder_Parms, EditorUtilityWidget), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_EditorUtilityWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_EditorUtilityWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::NewProp_EditorUtilityWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "UPSPatrolSystem|Editor|PatrolBuilder" },
		{ "DefaultToSelf", "EditorUtilityWidget" },
		{ "HidePin", "EditorUtilityWidget" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolBuilder, nullptr, "RunPatrolBuilder", nullptr, nullptr, sizeof(UPSPatrolBuilder_eventRunPatrolBuilder_Parms), Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSPatrolBuilder_NoRegister()
	{
		return UUPSPatrolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedPatrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPatrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyTaskOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProxyTaskOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolBuilderEditorExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolBuilderEditorExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPatrolBuildFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPatrolBuildFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystemEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSPatrolBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSPatrolBuilder_AbortBuilding, "AbortBuilding" }, // 2811820765
		{ &Z_Construct_UFunction_UUPSPatrolBuilder_FinishBuilding, "FinishBuilding" }, // 2049659349
		{ &Z_Construct_UFunction_UUPSPatrolBuilder_RunPatrolBuilder, "RunPatrolBuilder" }, // 75604657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/UPSPatrolBuilder.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints = { "SpawnedPatrolPoints", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolBuilder, SpawnedPatrolPoints), METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints_Inner = { "SpawnedPatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_ProxyTaskOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_ProxyTaskOwner = { "ProxyTaskOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolBuilder, ProxyTaskOwner), Z_Construct_UClass_AUPSGameplayTaskProxyOwner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_ProxyTaskOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_ProxyTaskOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_PatrolBuilderEditorExtension_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_PatrolBuilderEditorExtension = { "PatrolBuilderEditorExtension", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolBuilder, PatrolBuilderEditorExtension), Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_PatrolBuilderEditorExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_PatrolBuilderEditorExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_OnPatrolBuildFailed_MetaData[] = {
		{ "Category", "UPSPatrolSystem|Editor|PatrolBuilder" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_OnPatrolBuildFailed = { "OnPatrolBuildFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolBuilder, OnPatrolBuildFailed), Z_Construct_UDelegateFunction_PatrolActionSystemEditor_OnPatrolBuildFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_OnPatrolBuildFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_OnPatrolBuildFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSPatrolBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_SpawnedPatrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_ProxyTaskOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_PatrolBuilderEditorExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolBuilder_Statics::NewProp_OnPatrolBuildFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolBuilder_Statics::ClassParams = {
		&UUPSPatrolBuilder::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSPatrolBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolBuilder, 1049484569);
	template<> PATROLACTIONSYSTEMEDITOR_API UClass* StaticClass<UUPSPatrolBuilder>()
	{
		return UUPSPatrolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolBuilder(Z_Construct_UClass_UUPSPatrolBuilder, &UUPSPatrolBuilder::StaticClass, TEXT("/Script/PatrolActionSystemEditor"), TEXT("UUPSPatrolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
