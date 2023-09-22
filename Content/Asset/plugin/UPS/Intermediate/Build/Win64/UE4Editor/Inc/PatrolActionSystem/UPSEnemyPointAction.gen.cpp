// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyPointActions/UPSEnemyPointAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEnemyPointAction() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSEnemyPointAction_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSEnemyPointAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPointActionMovementHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics
	{
		struct _Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms
		{
			AUPSEnemyPointAction* EnemyPointAction;
			ACharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyPointAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::NewProp_EnemyPointAction = { "EnemyPointAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms, EnemyPointAction), Z_Construct_UClass_AUPSEnemyPointAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::NewProp_EnemyPointAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem, nullptr, "OnEnemyPointActionFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms), Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AUPSEnemyPointAction_K2_AbortEnemyPointAction = FName(TEXT("K2_AbortEnemyPointAction"));
	void AUPSEnemyPointAction::K2_AbortEnemyPointAction(ACharacter* Character)
	{
		UPSEnemyPointAction_eventK2_AbortEnemyPointAction_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_AbortEnemyPointAction),&Parms);
	}
	static FName NAME_AUPSEnemyPointAction_K2_AllCharactersReachPoints = FName(TEXT("K2_AllCharactersReachPoints"));
	void AUPSEnemyPointAction::K2_AllCharactersReachPoints()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_AllCharactersReachPoints),NULL);
	}
	static FName NAME_AUPSEnemyPointAction_K2_CanStartPointAction = FName(TEXT("K2_CanStartPointAction"));
	bool AUPSEnemyPointAction::K2_CanStartPointAction(ACharacter* Character)
	{
		UPSEnemyPointAction_eventK2_CanStartPointAction_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_CanStartPointAction),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AUPSEnemyPointAction_K2_ClearPointActionForCharacter = FName(TEXT("K2_ClearPointActionForCharacter"));
	void AUPSEnemyPointAction::K2_ClearPointActionForCharacter(ACharacter* Character)
	{
		UPSEnemyPointAction_eventK2_ClearPointActionForCharacter_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_ClearPointActionForCharacter),&Parms);
	}
	static FName NAME_AUPSEnemyPointAction_K2_FinishPointAction = FName(TEXT("K2_FinishPointAction"));
	void AUPSEnemyPointAction::K2_FinishPointAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_FinishPointAction),NULL);
	}
	static FName NAME_AUPSEnemyPointAction_K2_OnCharacterReachPoint = FName(TEXT("K2_OnCharacterReachPoint"));
	void AUPSEnemyPointAction::K2_OnCharacterReachPoint(ACharacter* Character, bool bSuccess)
	{
		UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms Parms;
		Parms.Character=Character;
		Parms.bSuccess=bSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_OnCharacterReachPoint),&Parms);
	}
	static FName NAME_AUPSEnemyPointAction_K2_StartEnemyPointAction = FName(TEXT("K2_StartEnemyPointAction"));
	void AUPSEnemyPointAction::K2_StartEnemyPointAction(ACharacter* Character)
	{
		UPSEnemyPointAction_eventK2_StartEnemyPointAction_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSEnemyPointAction_K2_StartEnemyPointAction),&Parms);
	}
	void AUPSEnemyPointAction::StaticRegisterNativesAUPSEnemyPointAction()
	{
		UClass* Class = AUPSEnemyPointAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortEnemyPointAction", &AUPSEnemyPointAction::execAbortEnemyPointAction },
			{ "AllCharactersReachPoints", &AUPSEnemyPointAction::execAllCharactersReachPoints },
			{ "CanStartPointAction", &AUPSEnemyPointAction::execCanStartPointAction },
			{ "ClearPointActionForCharacter", &AUPSEnemyPointAction::execClearPointActionForCharacter },
			{ "EnableVisualization", &AUPSEnemyPointAction::execEnableVisualization },
			{ "FinishPointAction", &AUPSEnemyPointAction::execFinishPointAction },
			{ "GetCharacterPoint", &AUPSEnemyPointAction::execGetCharacterPoint },
			{ "GetCharactersGoingToPoint", &AUPSEnemyPointAction::execGetCharactersGoingToPoint },
			{ "GetCharactersReachedPoints", &AUPSEnemyPointAction::execGetCharactersReachedPoints },
			{ "GetCharactersStartedPointAction", &AUPSEnemyPointAction::execGetCharactersStartedPointAction },
			{ "GetEnemyActionPointComponents", &AUPSEnemyPointAction::execGetEnemyActionPointComponents },
			{ "GetFreeEnemyActionPointComponent", &AUPSEnemyPointAction::execGetFreeEnemyActionPointComponent },
			{ "HasFreePointComponent", &AUPSEnemyPointAction::execHasFreePointComponent },
			{ "OnCharacterReachPoint", &AUPSEnemyPointAction::execOnCharacterReachPoint },
			{ "StartEnemyPointAction", &AUPSEnemyPointAction::execStartEnemyPointAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics
	{
		struct UPSEnemyPointAction_eventAbortEnemyPointAction_Parms
		{
			ACharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventAbortEnemyPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "AbortEnemyPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventAbortEnemyPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "AllCharactersReachPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics
	{
		struct UPSEnemyPointAction_eventCanStartPointAction_Parms
		{
			ACharacter* Character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventCanStartPointAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventCanStartPointAction_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventCanStartPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "CanStartPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventCanStartPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics
	{
		struct UPSEnemyPointAction_eventClearPointActionForCharacter_Parms
		{
			ACharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventClearPointActionForCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "ClearPointActionForCharacter", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventClearPointActionForCharacter_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics
	{
		struct UPSEnemyPointAction_eventEnableVisualization_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventEnableVisualization_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventEnableVisualization_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "EnableVisualization", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventEnableVisualization_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "FinishPointAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics
	{
		struct UPSEnemyPointAction_eventGetCharacterPoint_Parms
		{
			ACharacter* Character;
			UUPSEnemyPointActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetCharacterPoint_Parms, ReturnValue), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetCharacterPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetCharacterPoint", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetCharacterPoint_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics
	{
		struct UPSEnemyPointAction_eventGetCharactersGoingToPoint_Parms
		{
			TArray<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetCharactersGoingToPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetCharactersGoingToPoint", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetCharactersGoingToPoint_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics
	{
		struct UPSEnemyPointAction_eventGetCharactersReachedPoints_Parms
		{
			TArray<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetCharactersReachedPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetCharactersReachedPoints", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetCharactersReachedPoints_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics
	{
		struct UPSEnemyPointAction_eventGetCharactersStartedPointAction_Parms
		{
			TArray<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetCharactersStartedPointAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetCharactersStartedPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetCharactersStartedPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics
	{
		struct UPSEnemyPointAction_eventGetEnemyActionPointComponents_Parms
		{
			TArray<UUPSEnemyPointActionComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetEnemyActionPointComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetEnemyActionPointComponents", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetEnemyActionPointComponents_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics
	{
		struct UPSEnemyPointAction_eventGetFreeEnemyActionPointComponent_Parms
		{
			ACharacter* Character;
			UUPSEnemyPointActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetFreeEnemyActionPointComponent_Parms, ReturnValue), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventGetFreeEnemyActionPointComponent_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "GetFreeEnemyActionPointComponent", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventGetFreeEnemyActionPointComponent_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics
	{
		struct UPSEnemyPointAction_eventHasFreePointComponent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventHasFreePointComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventHasFreePointComponent_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "HasFreePointComponent", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventHasFreePointComponent_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventK2_AbortEnemyPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On Point Action Aborted By Character" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_AbortEnemyPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventK2_AbortEnemyPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On All Characters Reach Points" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_AllCharactersReachPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventK2_CanStartPointAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventK2_CanStartPointAction_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventK2_CanStartPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "Can Start Point Action" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_CanStartPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventK2_CanStartPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventK2_ClearPointActionForCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On Clear Point Action For Character" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_ClearPointActionForCharacter", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventK2_ClearPointActionForCharacter_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On Point Action Finished" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_FinishPointAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics
	{
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On Character Reach Point" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_OnCharacterReachPoint", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventK2_StartEnemyPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "DisplayName", "On Point Started By Character" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "K2_StartEnemyPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventK2_StartEnemyPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics
	{
		struct UPSEnemyPointAction_eventOnCharacterReachPoint_Parms
		{
			ACharacter* Character;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventOnCharacterReachPoint_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventOnCharacterReachPoint_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventOnCharacterReachPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "OnCharacterReachPoint", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventOnCharacterReachPoint_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics
	{
		struct UPSEnemyPointAction_eventStartEnemyPointAction_Parms
		{
			FScriptDelegate OnPointActionFinishedCallback;
			ACharacter* Character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPointActionFinishedCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSEnemyPointAction_eventStartEnemyPointAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointAction_eventStartEnemyPointAction_Parms), &Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventStartEnemyPointAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_OnPointActionFinishedCallback = { "OnPointActionFinishedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointAction_eventStartEnemyPointAction_Parms, OnPointActionFinishedCallback), Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::NewProp_OnPointActionFinishedCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "Comment", "/*AActor End*/" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
		{ "ToolTip", "AActor End" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSEnemyPointAction, nullptr, "StartEnemyPointAction", nullptr, nullptr, sizeof(UPSEnemyPointAction_eventStartEnemyPointAction_Parms), Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSEnemyPointAction_NoRegister()
	{
		return AUPSEnemyPointAction::StaticClass();
	}
	struct Z_Construct_UClass_AUPSEnemyPointAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinishActionAfterCharacterAbort_MetaData[];
#endif
		static void NewProp_bFinishActionAfterCharacterAbort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinishActionAfterCharacterAbort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementHandlerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MovementHandlerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersStartedPointAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CharactersStartedPointAction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersStartedPointAction_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementHandlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterMovementHandlers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementHandlers_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementHandlers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersReachedPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CharactersReachedPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersReachedPoint_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionPointComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyActionPointComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyActionPointComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEnemyPointActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultEnemyPointActionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSEnemyPointAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSEnemyPointAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_AbortEnemyPointAction, "AbortEnemyPointAction" }, // 4408252
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_AllCharactersReachPoints, "AllCharactersReachPoints" }, // 1028196319
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_CanStartPointAction, "CanStartPointAction" }, // 2383743778
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_ClearPointActionForCharacter, "ClearPointActionForCharacter" }, // 2835526924
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_EnableVisualization, "EnableVisualization" }, // 4096287541
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_FinishPointAction, "FinishPointAction" }, // 220896221
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetCharacterPoint, "GetCharacterPoint" }, // 1270043908
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersGoingToPoint, "GetCharactersGoingToPoint" }, // 4126379528
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersReachedPoints, "GetCharactersReachedPoints" }, // 2999269418
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetCharactersStartedPointAction, "GetCharactersStartedPointAction" }, // 1193909661
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetEnemyActionPointComponents, "GetEnemyActionPointComponents" }, // 630551641
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_GetFreeEnemyActionPointComponent, "GetFreeEnemyActionPointComponent" }, // 3565158699
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_HasFreePointComponent, "HasFreePointComponent" }, // 154367427
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_AbortEnemyPointAction, "K2_AbortEnemyPointAction" }, // 2398037273
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_AllCharactersReachPoints, "K2_AllCharactersReachPoints" }, // 2103663736
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_CanStartPointAction, "K2_CanStartPointAction" }, // 458426904
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_ClearPointActionForCharacter, "K2_ClearPointActionForCharacter" }, // 257426636
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_FinishPointAction, "K2_FinishPointAction" }, // 2103289993
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_OnCharacterReachPoint, "K2_OnCharacterReachPoint" }, // 1358008829
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_K2_StartEnemyPointAction, "K2_StartEnemyPointAction" }, // 2157967122
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_OnCharacterReachPoint, "OnCharacterReachPoint" }, // 1762301835
		{ &Z_Construct_UFunction_AUPSEnemyPointAction_StartEnemyPointAction, "StartEnemyPointAction" }, // 3714558682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnemyPointActions/UPSEnemyPointAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "Comment", "//Finish action if one of characters call AbortEnemyPointAction \n" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
		{ "ToolTip", "Finish action if one of characters call AbortEnemyPointAction" },
	};
#endif
	void Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort_SetBit(void* Obj)
	{
		((AUPSEnemyPointAction*)Obj)->bFinishActionAfterCharacterAbort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort = { "bFinishActionAfterCharacterAbort", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUPSEnemyPointAction), &Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_PointTag_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_PointTag = { "PointTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, PointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_PointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_PointTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_MovementHandlerClass_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_MovementHandlerClass = { "MovementHandlerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, MovementHandlerClass), Z_Construct_UClass_AUPSPointActionMovementHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_MovementHandlerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_MovementHandlerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction = { "CharactersStartedPointAction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, CharactersStartedPointAction), METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction_ElementProp = { "CharactersStartedPointAction", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers = { "CharacterMovementHandlers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, CharacterMovementHandlers), METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_Key_KeyProp = { "CharacterMovementHandlers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_ValueProp = { "CharacterMovementHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AUPSPointActionMovementHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint = { "CharactersReachedPoint", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, CharactersReachedPoint), METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint_ElementProp = { "CharactersReachedPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents = { "EnemyActionPointComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, EnemyActionPointComponents), METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents_Inner = { "EnemyActionPointComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_DefaultEnemyPointActionComponent_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_DefaultEnemyPointActionComponent = { "DefaultEnemyPointActionComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSEnemyPointAction, DefaultEnemyPointActionComponent), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_DefaultEnemyPointActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_DefaultEnemyPointActionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_bFinishActionAfterCharacterAbort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_PointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_MovementHandlerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersStartedPointAction_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharacterMovementHandlers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_CharactersReachedPoint_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_EnemyActionPointComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSEnemyPointAction_Statics::NewProp_DefaultEnemyPointActionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSEnemyPointAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSEnemyPointAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSEnemyPointAction_Statics::ClassParams = {
		&AUPSEnemyPointAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPSEnemyPointAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSEnemyPointAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSEnemyPointAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSEnemyPointAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSEnemyPointAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSEnemyPointAction, 3432937156);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSEnemyPointAction>()
	{
		return AUPSEnemyPointAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSEnemyPointAction(Z_Construct_UClass_AUPSEnemyPointAction, &AUPSEnemyPointAction::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSEnemyPointAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSEnemyPointAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
