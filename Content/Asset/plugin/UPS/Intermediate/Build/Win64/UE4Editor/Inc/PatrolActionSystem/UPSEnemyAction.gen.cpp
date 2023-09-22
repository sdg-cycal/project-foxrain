// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyActions/UPSEnemyAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEnemyAction() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult();
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionState();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyAction_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyAction();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_AbortAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_FinishAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyAction_StartAction();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSActionCondition_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionScript_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics
	{
		struct _Script_PatrolActionSystem_eventOnActionFinished_Parms
		{
			EEnemyActionFinishResult FinishResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FinishResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinishResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::NewProp_FinishResult = { "FinishResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnActionFinished_Parms, FinishResult), Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::NewProp_FinishResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::NewProp_FinishResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::NewProp_FinishResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem, nullptr, "OnActionFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_PatrolActionSystem_eventOnActionFinished_Parms), Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EEnemyActionFinishResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("EEnemyActionFinishResult"));
		}
		return Singleton;
	}
	template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionFinishResult>()
	{
		return EEnemyActionFinishResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyActionFinishResult(EEnemyActionFinishResult_StaticEnum, TEXT("/Script/PatrolActionSystem"), TEXT("EEnemyActionFinishResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult_Hash() { return 2303827797U; }
	UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyActionFinishResult"), 0, Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyActionFinishResult::Success", (int64)EEnemyActionFinishResult::Success },
				{ "EEnemyActionFinishResult::Aborted", (int64)EEnemyActionFinishResult::Aborted },
				{ "EEnemyActionFinishResult::ConditionFailed", (int64)EEnemyActionFinishResult::ConditionFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EEnemyActionFinishResult::Aborted" },
				{ "BlueprintType", "true" },
				{ "ConditionFailed.Name", "EEnemyActionFinishResult::ConditionFailed" },
				{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
				{ "Success.Name", "EEnemyActionFinishResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem,
				nullptr,
				"EEnemyActionFinishResult",
				"EEnemyActionFinishResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnemyActionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PatrolActionSystem_EEnemyActionState, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("EEnemyActionState"));
		}
		return Singleton;
	}
	template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionState>()
	{
		return EEnemyActionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyActionState(EEnemyActionState_StaticEnum, TEXT("/Script/PatrolActionSystem"), TEXT("EEnemyActionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionState_Hash() { return 3919009008U; }
	UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyActionState"), 0, Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyActionState::ReadyForActivation", (int64)EEnemyActionState::ReadyForActivation },
				{ "EEnemyActionState::Active", (int64)EEnemyActionState::Active },
				{ "EEnemyActionState::Aborting", (int64)EEnemyActionState::Aborting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborting.Name", "EEnemyActionState::Aborting" },
				{ "Active.Name", "EEnemyActionState::Active" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
				{ "ReadyForActivation.Name", "EEnemyActionState::ReadyForActivation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem,
				nullptr,
				"EEnemyActionState",
				"EEnemyActionState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UUPSEnemyAction_InternalAbortAction = FName(TEXT("InternalAbortAction"));
	void UUPSEnemyAction::InternalAbortAction(ACharacter* InCharacter)
	{
		UPSEnemyAction_eventInternalAbortAction_Parms Parms;
		Parms.InCharacter=InCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyAction_InternalAbortAction),&Parms);
	}
	static FName NAME_UUPSEnemyAction_InternalFinishAction = FName(TEXT("InternalFinishAction"));
	void UUPSEnemyAction::InternalFinishAction(ACharacter* InCharacter)
	{
		UPSEnemyAction_eventInternalFinishAction_Parms Parms;
		Parms.InCharacter=InCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyAction_InternalFinishAction),&Parms);
	}
	static FName NAME_UUPSEnemyAction_InternalStartAction = FName(TEXT("InternalStartAction"));
	void UUPSEnemyAction::InternalStartAction(ACharacter* InCharacter)
	{
		UPSEnemyAction_eventInternalStartAction_Parms Parms;
		Parms.InCharacter=InCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyAction_InternalStartAction),&Parms);
	}
	void UUPSEnemyAction::StaticRegisterNativesUUPSEnemyAction()
	{
		UClass* Class = UUPSEnemyAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortAction", &UUPSEnemyAction::execAbortAction },
			{ "FinishAction", &UUPSEnemyAction::execFinishAction },
			{ "InternalAbortAction", &UUPSEnemyAction::execInternalAbortAction },
			{ "InternalFinishAction", &UUPSEnemyAction::execInternalFinishAction },
			{ "InternalStartAction", &UUPSEnemyAction::execInternalStartAction },
			{ "StartAction", &UUPSEnemyAction::execStartAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "AbortAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_AbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_AbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "FinishAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_FinishAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_FinishAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyAction_eventInternalAbortAction_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "DisplayName", "OnActionAborted" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "InternalAbortAction", nullptr, nullptr, sizeof(UPSEnemyAction_eventInternalAbortAction_Parms), Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyAction_eventInternalFinishAction_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "DisplayName", "OnActionFinished" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "InternalFinishAction", nullptr, nullptr, sizeof(UPSEnemyAction_eventInternalFinishAction_Parms), Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyAction_eventInternalStartAction_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "DisplayName", "OnActionStarted" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "InternalStartAction", nullptr, nullptr, sizeof(UPSEnemyAction_eventInternalStartAction_Parms), Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics
	{
		struct UPSEnemyAction_eventStartAction_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyAction_eventStartAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyAction, nullptr, "StartAction", nullptr, nullptr, sizeof(UPSEnemyAction_eventStartAction_Parms), Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyAction_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyAction_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSEnemyAction_NoRegister()
	{
		return UUPSEnemyAction::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEnemyAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionConditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyActionScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyActionScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActionFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionFinishedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEnemyAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSEnemyAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSEnemyAction_AbortAction, "AbortAction" }, // 3530063045
		{ &Z_Construct_UFunction_UUPSEnemyAction_FinishAction, "FinishAction" }, // 3564348597
		{ &Z_Construct_UFunction_UUPSEnemyAction_InternalAbortAction, "InternalAbortAction" }, // 362944776
		{ &Z_Construct_UFunction_UUPSEnemyAction_InternalFinishAction, "InternalFinishAction" }, // 3421388783
		{ &Z_Construct_UFunction_UUPSEnemyAction_InternalStartAction, "InternalStartAction" }, // 1818213941
		{ &Z_Construct_UFunction_UUPSEnemyAction_StartAction, "StartAction" }, // 922327156
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnemyActions/UPSEnemyAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions = { "ActionConditions", nullptr, (EPropertyFlags)0x0020088000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyAction, ActionConditions), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_Inner_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_Inner = { "ActionConditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUPSActionCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts = { "EnemyActionScripts", nullptr, (EPropertyFlags)0x0020088000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyAction, EnemyActionScripts), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_Inner_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_Inner = { "EnemyActionScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUPSEnemyActionScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyAction, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_OnActionFinishedDelegate_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActions/UPSEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_OnActionFinishedDelegate = { "OnActionFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyAction, OnActionFinishedDelegate), Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_OnActionFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_OnActionFinishedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSEnemyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_ActionConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_EnemyActionScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyAction_Statics::NewProp_OnActionFinishedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEnemyAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEnemyAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEnemyAction_Statics::ClassParams = {
		&UUPSEnemyAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSEnemyAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEnemyAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEnemyAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEnemyAction, 2135476034);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSEnemyAction>()
	{
		return UUPSEnemyAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEnemyAction(Z_Construct_UClass_UUPSEnemyAction, &UUPSEnemyAction::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSEnemyAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEnemyAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
