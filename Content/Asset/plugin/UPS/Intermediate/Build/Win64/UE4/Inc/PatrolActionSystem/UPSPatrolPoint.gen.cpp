// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Actors/UPSPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolPoint() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSBasePatrolObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointLink();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointSettings();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AUPSPatrolPoint::StaticRegisterNativesAUPSPatrolPoint()
	{
		UClass* Class = AUPSPatrolPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackwardPatrolPointLinks", &AUPSPatrolPoint::execGetBackwardPatrolPointLinks },
			{ "GetNextPatrolPoint", &AUPSPatrolPoint::execGetNextPatrolPoint },
			{ "GetNextPatrolPointLinks", &AUPSPatrolPoint::execGetNextPatrolPointLinks },
			{ "GetPatrolPointSettings", &AUPSPatrolPoint::execGetPatrolPointSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics
	{
		struct UPSPatrolPoint_eventGetBackwardPatrolPointLinks_Parms
		{
			TArray<FPatrolPointLink> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPoint_eventGetBackwardPatrolPointLinks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPatrolPoint, nullptr, "GetBackwardPatrolPointLinks", nullptr, nullptr, sizeof(UPSPatrolPoint_eventGetBackwardPatrolPointLinks_Parms), Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics
	{
		struct UPSPatrolPoint_eventGetNextPatrolPoint_Parms
		{
			ACharacter* Character;
			AUPSPatrolPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPoint_eventGetNextPatrolPoint_Parms, ReturnValue), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPoint_eventGetNextPatrolPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPatrolPoint, nullptr, "GetNextPatrolPoint", nullptr, nullptr, sizeof(UPSPatrolPoint_eventGetNextPatrolPoint_Parms), Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics
	{
		struct UPSPatrolPoint_eventGetNextPatrolPointLinks_Parms
		{
			TArray<FPatrolPointLink> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPoint_eventGetNextPatrolPointLinks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPatrolPoint, nullptr, "GetNextPatrolPointLinks", nullptr, nullptr, sizeof(UPSPatrolPoint_eventGetNextPatrolPointLinks_Parms), Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics
	{
		struct UPSPatrolPoint_eventGetPatrolPointSettings_Parms
		{
			FPatrolPointSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPoint_eventGetPatrolPointSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FPatrolPointSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "Comment", "/*AActor end*/" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
		{ "ToolTip", "AActor end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPatrolPoint, nullptr, "GetPatrolPointSettings", nullptr, nullptr, sizeof(UPSPatrolPoint_eventGetPatrolPointSettings_Parms), Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister()
	{
		return AUPSPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_AUPSPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPatrolPointLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedPatrolPointLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPatrolPointLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardPatrolPointLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackwardPatrolPointLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackwardPatrolPointLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPatrolPointSolver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextPatrolPointSolver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPointLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSBasePatrolObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSPatrolPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSPatrolPoint_GetBackwardPatrolPointLinks, "GetBackwardPatrolPointLinks" }, // 3479050935
		{ &Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPoint, "GetNextPatrolPoint" }, // 3562828522
		{ &Z_Construct_UFunction_AUPSPatrolPoint_GetNextPatrolPointLinks, "GetNextPatrolPointLinks" }, // 3679331860
		{ &Z_Construct_UFunction_AUPSPatrolPoint_GetPatrolPointSettings, "GetPatrolPointSettings" }, // 664995137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "PatrolSystem" },
		{ "Comment", "/*\n\x09""Contains links to the following points, and the points included in the current, as well as the settings for the point:\n\n\x09\x09 - PatrolPointScripts - actions that are performed when a point begins to move\n\n\x09\x09 - PatrolPointActions - actions that are performed after arrival at the point.\n\n\x09\x09 - EnemyActionsExecutionType - type of execution of actions, one of random or all from the list\n\n\x09\x09 - bRotateOnPointAfterReach - whether to turn to a point after arrival\n*/" },
		{ "IncludePath", "Actors/UPSPatrolPoint.h" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
		{ "ToolTip", "Contains links to the following points, and the points included in the current, as well as the settings for the point:\n\n         - PatrolPointScripts - actions that are performed when a point begins to move\n\n         - PatrolPointActions - actions that are performed after arrival at the point.\n\n         - EnemyActionsExecutionType - type of execution of actions, one of random or all from the list\n\n         - bRotateOnPointAfterReach - whether to turn to a point after arrival" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks = { "CachedPatrolPointLinks", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, CachedPatrolPointLinks), METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks_Inner = { "CachedPatrolPointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks = { "BackwardPatrolPointLinks", nullptr, (EPropertyFlags)0x0020080000020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, BackwardPatrolPointLinks), METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks_Inner = { "BackwardPatrolPointLinks", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_NextPatrolPointSolver_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_NextPatrolPointSolver = { "NextPatrolPointSolver", nullptr, (EPropertyFlags)0x0022080000080809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, NextPatrolPointSolver), Z_Construct_UClass_UUPSPatrolPointSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_NextPatrolPointSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_NextPatrolPointSolver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks = { "PatrolPointLinks", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, PatrolPointLinks), METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks_Inner = { "PatrolPointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointSettings_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointSettings = { "PatrolPointSettings", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, PatrolPointSettings), Z_Construct_UScriptStruct_FPatrolPointSettings, METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/UPSPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPatrolPoint, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BillboardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_CachedPatrolPointLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BackwardPatrolPointLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_NextPatrolPointSolver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_PatrolPointSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPatrolPoint_Statics::NewProp_BillboardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSPatrolPoint_Statics::ClassParams = {
		&AUPSPatrolPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPSPatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSPatrolPoint, 3514169222);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSPatrolPoint>()
	{
		return AUPSPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSPatrolPoint(Z_Construct_UClass_AUPSPatrolPoint, &AUPSPatrolPoint::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
