// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/AITasks/UPSAITask_ExecuteEnemyAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSAITask_ExecuteEnemyAction() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyAction_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished();
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature();
// End Cross Module References
	void UUPSAITask_ExecuteEnemyAction::StaticRegisterNativesUUPSAITask_ExecuteEnemyAction()
	{
		UClass* Class = UUPSAITask_ExecuteEnemyAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortAction", &UUPSAITask_ExecuteEnemyAction::execAbortAction },
			{ "ExecuteEnemyAction", &UUPSAITask_ExecuteEnemyAction::execExecuteEnemyAction },
			{ "OnActionFinished", &UUPSAITask_ExecuteEnemyAction::execOnActionFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction, nullptr, "AbortAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics
	{
		struct UPSAITask_ExecuteEnemyAction_eventExecuteEnemyAction_Parms
		{
			UUPSEnemyAction* EnemyActionToActivate;
			ACharacter* Character;
			UUPSAITask_ExecuteEnemyAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyActionToActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_ExecuteEnemyAction_eventExecuteEnemyAction_Parms, ReturnValue), Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_ExecuteEnemyAction_eventExecuteEnemyAction_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_EnemyActionToActivate = { "EnemyActionToActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_ExecuteEnemyAction_eventExecuteEnemyAction_Parms, EnemyActionToActivate), Z_Construct_UClass_UUPSEnemyAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::NewProp_EnemyActionToActivate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction, nullptr, "ExecuteEnemyAction", nullptr, nullptr, sizeof(UPSAITask_ExecuteEnemyAction_eventExecuteEnemyAction_Parms), Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics
	{
		struct UPSAITask_ExecuteEnemyAction_eventOnActionFinished_Parms
		{
			EEnemyActionFinishResult Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_ExecuteEnemyAction_eventOnActionFinished_Parms, Result), Z_Construct_UEnum_PatrolActionSystem_EEnemyActionFinishResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction, nullptr, "OnActionFinished", nullptr, nullptr, sizeof(UPSAITask_ExecuteEnemyAction_eventOnActionFinished_Parms), Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_NoRegister()
	{
		return UUPSAITask_ExecuteEnemyAction::StaticClass();
	}
	struct Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnemyActionFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyActionFinishedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_AbortAction, "AbortAction" }, // 4123862270
		{ &Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_ExecuteEnemyAction, "ExecuteEnemyAction" }, // 1777819488
		{ &Z_Construct_UFunction_UUPSAITask_ExecuteEnemyAction_OnActionFinished, "OnActionFinished" }, // 1508607611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09The gameplay is the task required to run EnemyAction's.\n\x09\x09 The delegate for the end of the task is OnEnemyActionFinishedDelegate, which returns the result of the task\n\n\x09\x09 Success - the action was completed by itself\n\x09\x09 Aborted - the action was completed by abortion\n\x09\x09 ConditionFailed - conditions for activating the action were not met\n*/" },
		{ "IncludePath", "AITasks/UPSAITask_ExecuteEnemyAction.h" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
		{ "ToolTip", "The gameplay is the task required to run EnemyAction's.\n         The delegate for the end of the task is OnEnemyActionFinishedDelegate, which returns the result of the task\n\n         Success - the action was completed by itself\n         Aborted - the action was completed by abortion\n         ConditionFailed - conditions for activating the action were not met" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_ExecuteEnemyAction, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_EnemyAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_EnemyAction = { "EnemyAction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_ExecuteEnemyAction, EnemyAction), Z_Construct_UClass_UUPSEnemyAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_EnemyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_EnemyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_OnEnemyActionFinishedDelegate_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_ExecuteEnemyAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_OnEnemyActionFinishedDelegate = { "OnEnemyActionFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_ExecuteEnemyAction, OnEnemyActionFinishedDelegate), Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_OnEnemyActionFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_OnEnemyActionFinishedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_EnemyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::NewProp_OnEnemyActionFinishedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSAITask_ExecuteEnemyAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::ClassParams = {
		&UUPSAITask_ExecuteEnemyAction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSAITask_ExecuteEnemyAction, 4016033246);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSAITask_ExecuteEnemyAction>()
	{
		return UUPSAITask_ExecuteEnemyAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSAITask_ExecuteEnemyAction(Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction, &UUPSAITask_ExecuteEnemyAction::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSAITask_ExecuteEnemyAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSAITask_ExecuteEnemyAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
