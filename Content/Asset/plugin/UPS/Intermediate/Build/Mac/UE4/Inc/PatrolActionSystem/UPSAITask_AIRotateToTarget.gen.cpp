// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/AITasks/UPSAITask_AIRotateToTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSAITask_AIRotateToTarget() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSAITask_AIRotateToTarget();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics
	{
		struct _Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms
		{
			AAIController* AIC;
			UUPSAITask_AIRotateToTarget* FinishedTask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::NewProp_FinishedTask = { "FinishedTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms, FinishedTask), Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::NewProp_AIC = { "AIC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms, AIC), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::NewProp_FinishedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::NewProp_AIC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem, nullptr, "OnRotationTaskFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms), Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UUPSAITask_AIRotateToTarget::StaticRegisterNativesUUPSAITask_AIRotateToTarget()
	{
		UClass* Class = UUPSAITask_AIRotateToTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateAIToTargetActor", &UUPSAITask_AIRotateToTarget::execRotateAIToTargetActor },
			{ "RotateAIToTargetRotation", &UUPSAITask_AIRotateToTarget::execRotateAIToTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics
	{
		struct UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms
		{
			AAIController* AIController;
			AActor* RotationTarget;
			bool bUseCustomRotationSpeed;
			float CustomRotationSpeed;
			float ErrorTolerance;
			UUPSAITask_AIRotateToTarget* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomRotationSpeed;
		static void NewProp_bUseCustomRotationSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomRotationSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms, ReturnValue), Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms, ErrorTolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_CustomRotationSpeed = { "CustomRotationSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms, CustomRotationSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_bUseCustomRotationSpeed_SetBit(void* Obj)
	{
		((UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms*)Obj)->bUseCustomRotationSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_bUseCustomRotationSpeed = { "bUseCustomRotationSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms), &Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_bUseCustomRotationSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_RotationTarget = { "RotationTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms, RotationTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_ErrorTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_CustomRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_bUseCustomRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_RotationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::NewProp_AIController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUseCustomRotationSpeed, CustomRotationSpeed, ErrorTolerance" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "CPP_Default_bUseCustomRotationSpeed", "false" },
		{ "CPP_Default_CustomRotationSpeed", "0.000000" },
		{ "CPP_Default_ErrorTolerance", "1.000000" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSAITask_AIRotateToTarget, nullptr, "RotateAIToTargetActor", nullptr, nullptr, sizeof(UPSAITask_AIRotateToTarget_eventRotateAIToTargetActor_Parms), Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics
	{
		struct UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms
		{
			AAIController* AIController;
			FRotator TargetRotation;
			bool bUseCustomRotationSpeed;
			float CustomRotationSpeed;
			float ErrorTolerance;
			UUPSAITask_AIRotateToTarget* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomRotationSpeed;
		static void NewProp_bUseCustomRotationSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomRotationSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms, ReturnValue), Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms, ErrorTolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_CustomRotationSpeed = { "CustomRotationSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms, CustomRotationSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_bUseCustomRotationSpeed_SetBit(void* Obj)
	{
		((UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms*)Obj)->bUseCustomRotationSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_bUseCustomRotationSpeed = { "bUseCustomRotationSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms), &Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_bUseCustomRotationSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_ErrorTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_CustomRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_bUseCustomRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::NewProp_AIController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUseCustomRotationSpeed, CustomRotationSpeed, ErrorTolerance" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "CPP_Default_bUseCustomRotationSpeed", "false" },
		{ "CPP_Default_CustomRotationSpeed", "0.000000" },
		{ "CPP_Default_ErrorTolerance", "1.000000" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSAITask_AIRotateToTarget, nullptr, "RotateAIToTargetRotation", nullptr, nullptr, sizeof(UPSAITask_AIRotateToTarget_eventRotateAIToTargetRotation_Parms), Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister()
	{
		return UUPSAITask_AIRotateToTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRotationTaskFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotationTaskFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetActor, "RotateAIToTargetActor" }, // 3768645874
		{ &Z_Construct_UFunction_UUPSAITask_AIRotateToTarget_RotateAIToTargetRotation, "RotateAIToTargetRotation" }, // 3361697387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*Gameplay task need to rotate ai character to other actor or rotator. Work only on characters with character movement component*/" },
		{ "IncludePath", "AITasks/UPSAITask_AIRotateToTarget.h" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gameplay task need to rotate ai character to other actor or rotator. Work only on characters with character movement component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_AIC_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_AIC = { "AIC", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, AIC), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_AIC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_AIC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_OnRotationTaskFinished_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/AITasks/UPSAITask_AIRotateToTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_OnRotationTaskFinished = { "OnRotationTaskFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, OnRotationTaskFinished), Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_OnRotationTaskFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_OnRotationTaskFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_AIC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::NewProp_OnRotationTaskFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSAITask_AIRotateToTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::ClassParams = {
		&UUPSAITask_AIRotateToTarget::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSAITask_AIRotateToTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSAITask_AIRotateToTarget, 1092224396);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSAITask_AIRotateToTarget>()
	{
		return UUPSAITask_AIRotateToTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSAITask_AIRotateToTarget(Z_Construct_UClass_UUPSAITask_AIRotateToTarget, &UUPSAITask_AIRotateToTarget::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSAITask_AIRotateToTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSAITask_AIRotateToTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
