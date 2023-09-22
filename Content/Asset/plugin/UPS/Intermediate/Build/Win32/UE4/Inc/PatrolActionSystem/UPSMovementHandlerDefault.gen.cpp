// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyPointActions/UPSMovementHandlerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSMovementHandlerDefault() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSMovementHandlerDefault_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSMovementHandlerDefault();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPointActionMovementHandler();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUPSMoveParams();
// End Cross Module References
	void AUPSMovementHandlerDefault::StaticRegisterNativesAUPSMovementHandlerDefault()
	{
		UClass* Class = AUPSMovementHandlerDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterReachPoint", &AUPSMovementHandlerDefault::execOnCharacterReachPoint },
			{ "OnCharacterRotatedToPoint", &AUPSMovementHandlerDefault::execOnCharacterRotatedToPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics
	{
		struct UPSMovementHandlerDefault_eventOnCharacterReachPoint_Parms
		{
			ACharacter* Character;
			UUPSMoveToEnemyPointAction* MoveTask;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementHandlerDefault_eventOnCharacterReachPoint_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_MoveTask = { "MoveTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementHandlerDefault_eventOnCharacterReachPoint_Parms, MoveTask), Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementHandlerDefault_eventOnCharacterReachPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_MoveTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementHandlerDefault, nullptr, "OnCharacterReachPoint", nullptr, nullptr, sizeof(UPSMovementHandlerDefault_eventOnCharacterReachPoint_Parms), Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics
	{
		struct UPSMovementHandlerDefault_eventOnCharacterRotatedToPoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::NewProp_FinishedTask = { "FinishedTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementHandlerDefault_eventOnCharacterRotatedToPoint_Parms, FinishedTask), Z_Construct_UClass_UUPSAITask_AIRotateToTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::NewProp_AIC = { "AIC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementHandlerDefault_eventOnCharacterRotatedToPoint_Parms, AIC), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::NewProp_FinishedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::NewProp_AIC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementHandlerDefault, nullptr, "OnCharacterRotatedToPoint", nullptr, nullptr, sizeof(UPSMovementHandlerDefault_eventOnCharacterRotatedToPoint_Parms), Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSMovementHandlerDefault_NoRegister()
	{
		return AUPSMovementHandlerDefault::StaticClass();
	}
	struct Z_Construct_UClass_AUPSMovementHandlerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveGameplayTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateOnPoint_MetaData[];
#endif
		static void NewProp_bRotateOnPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateOnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSPointActionMovementHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterReachPoint, "OnCharacterReachPoint" }, // 2768177751
		{ &Z_Construct_UFunction_AUPSMovementHandlerDefault_OnCharacterRotatedToPoint, "OnCharacterRotatedToPoint" }, // 2258452242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyPointActions/UPSMovementHandlerDefault.h" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_ActiveGameplayTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_ActiveGameplayTask = { "ActiveGameplayTask", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementHandlerDefault, ActiveGameplayTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_ActiveGameplayTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_ActiveGameplayTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
	void Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint_SetBit(void* Obj)
	{
		((AUPSMovementHandlerDefault*)Obj)->bRotateOnPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint = { "bRotateOnPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUPSMovementHandlerDefault), &Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_MoveParams_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMovementHandlerDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_MoveParams = { "MoveParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementHandlerDefault, MoveParams), Z_Construct_UScriptStruct_FUPSMoveParams, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_MoveParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_MoveParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_ActiveGameplayTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_bRotateOnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::NewProp_MoveParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSMovementHandlerDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::ClassParams = {
		&AUPSMovementHandlerDefault::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSMovementHandlerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSMovementHandlerDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSMovementHandlerDefault, 1077643397);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSMovementHandlerDefault>()
	{
		return AUPSMovementHandlerDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSMovementHandlerDefault(Z_Construct_UClass_AUPSMovementHandlerDefault, &AUPSMovementHandlerDefault::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSMovementHandlerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSMovementHandlerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
