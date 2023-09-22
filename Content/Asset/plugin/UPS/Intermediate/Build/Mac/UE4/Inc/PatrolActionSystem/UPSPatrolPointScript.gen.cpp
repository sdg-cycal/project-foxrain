// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/PatrolPointScripts/UPSPatrolPointScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolPointScript() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointScript_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint();
// End Cross Module References
	static FName NAME_UUPSPatrolPointScript_K2_AbortMovementToPoint = FName(TEXT("K2_AbortMovementToPoint"));
	void UUPSPatrolPointScript::K2_AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point)
	{
		UPSPatrolPointScript_eventK2_AbortMovementToPoint_Parms Parms;
		Parms.Character=Character;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_UUPSPatrolPointScript_K2_AbortMovementToPoint),&Parms);
	}
	static FName NAME_UUPSPatrolPointScript_K2_ReachPoint = FName(TEXT("K2_ReachPoint"));
	void UUPSPatrolPointScript::K2_ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point)
	{
		UPSPatrolPointScript_eventK2_ReachPoint_Parms Parms;
		Parms.Character=Character;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_UUPSPatrolPointScript_K2_ReachPoint),&Parms);
	}
	static FName NAME_UUPSPatrolPointScript_K2_StartMovementToPoint = FName(TEXT("K2_StartMovementToPoint"));
	void UUPSPatrolPointScript::K2_StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point)
	{
		UPSPatrolPointScript_eventK2_StartMovementToPoint_Parms Parms;
		Parms.Character=Character;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_UUPSPatrolPointScript_K2_StartMovementToPoint),&Parms);
	}
	void UUPSPatrolPointScript::StaticRegisterNativesUUPSPatrolPointScript()
	{
		UClass* Class = UUPSPatrolPointScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortMovementToPoint", &UUPSPatrolPointScript::execAbortMovementToPoint },
			{ "ReachPoint", &UUPSPatrolPointScript::execReachPoint },
			{ "StartMovementToPoint", &UUPSPatrolPointScript::execStartMovementToPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics
	{
		struct UPSPatrolPointScript_eventAbortMovementToPoint_Parms
		{
			ACharacter* Character;
			AUPSPatrolPoint* Point;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventAbortMovementToPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventAbortMovementToPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "AbortMovementToPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventAbortMovementToPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_AbortMovementToPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_AbortMovementToPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "DisplayName", "AbortMovementToPoint" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "K2_AbortMovementToPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventK2_AbortMovementToPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_ReachPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_ReachPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "DisplayName", "ReachPoint" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "K2_ReachPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventK2_ReachPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_StartMovementToPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventK2_StartMovementToPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "DisplayName", "StartMovementToPoint" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "K2_StartMovementToPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventK2_StartMovementToPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics
	{
		struct UPSPatrolPointScript_eventReachPoint_Parms
		{
			ACharacter* Character;
			AUPSPatrolPoint* Point;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventReachPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventReachPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "ReachPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventReachPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics
	{
		struct UPSPatrolPointScript_eventStartMovementToPoint_Parms
		{
			ACharacter* Character;
			AUPSPatrolPoint* Point;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventStartMovementToPoint_Parms, Point), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointScript_eventStartMovementToPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointScript, nullptr, "StartMovementToPoint", nullptr, nullptr, sizeof(UPSPatrolPointScript_eventStartMovementToPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSPatrolPointScript_NoRegister()
	{
		return UUPSPatrolPointScript::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolPointScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolPointScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSPatrolPointScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_AbortMovementToPoint, "AbortMovementToPoint" }, // 4258886575
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_K2_AbortMovementToPoint, "K2_AbortMovementToPoint" }, // 214698115
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_K2_ReachPoint, "K2_ReachPoint" }, // 657782150
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_K2_StartMovementToPoint, "K2_StartMovementToPoint" }, // 489715759
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_ReachPoint, "ReachPoint" }, // 727277133
		{ &Z_Construct_UFunction_UUPSPatrolPointScript_StartMovementToPoint, "StartMovementToPoint" }, // 2162705683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolPointScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nThis class need to realize some behavior when character started, reached or aborted movement to point\nTo create instance of this object use UUPSFunctionLIbrary::CreatePatrolScriptIntance function. \nYou can see realization example in BTTask_UPS_MoveToPatrolPoint\n*/" },
		{ "IncludePath", "PatrolPointScripts/UPSPatrolPointScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PatrolPointScripts/UPSPatrolPointScript.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "This class need to realize some behavior when character started, reached or aborted movement to point\nTo create instance of this object use UUPSFunctionLIbrary::CreatePatrolScriptIntance function.\nYou can see realization example in BTTask_UPS_MoveToPatrolPoint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolPointScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolPointScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolPointScript_Statics::ClassParams = {
		&UUPSPatrolPointScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolPointScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolPointScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolPointScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolPointScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolPointScript, 2843817940);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPatrolPointScript>()
	{
		return UUPSPatrolPointScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolPointScript(Z_Construct_UClass_UUPSPatrolPointScript, &UUPSPatrolPointScript::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPatrolPointScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolPointScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
