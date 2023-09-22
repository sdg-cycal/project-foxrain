// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyPointActions/UPSMoveToEnemyPointAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSMoveToEnemyPointAction() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUPSMoveParams();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSMoveToEnemyPointAction();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics
	{
		struct _Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_MoveTask = { "MoveTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms, MoveTask), Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_MoveTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem, nullptr, "OnMovetoEnemyPointActionFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms), Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FUPSMoveParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FUPSMoveParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPSMoveParams, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("UPSMoveParams"), sizeof(FUPSMoveParams), Get_Z_Construct_UScriptStruct_FUPSMoveParams_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FUPSMoveParams>()
{
	return FUPSMoveParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUPSMoveParams(FUPSMoveParams::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("UPSMoveParams"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSMoveParams
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSMoveParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UPSMoveParams")),new UScriptStruct::TCppStructOps<FUPSMoveParams>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSMoveParams;
	struct Z_Construct_UScriptStruct_FUPSMoveParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStrafe_MetaData[];
#endif
		static void NewProp_bCanStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[];
#endif
		static void NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesAgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptenceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptenceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[];
#endif
		static void NewProp_bProjectGoalLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[];
#endif
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[];
#endif
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPSMoveParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
	{
		((FUPSMoveParams*)Obj)->bCanStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSMoveParams), &Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj)
	{
		((FUPSMoveParams*)Obj)->bReachTestIncludesAgentRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius = { "bReachTestIncludesAgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSMoveParams), &Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_AcceptenceRadius_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_AcceptenceRadius = { "AcceptenceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSMoveParams, AcceptenceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_AcceptenceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_AcceptenceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_NavFilter_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_NavFilter = { "NavFilter", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSMoveParams, NavFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_NavFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_NavFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation_SetBit(void* Obj)
	{
		((FUPSMoveParams*)Obj)->bProjectGoalLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation = { "bProjectGoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSMoveParams), &Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((FUPSMoveParams*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSMoveParams), &Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((FUPSMoveParams*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSMoveParams), &Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPSMoveParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bCanStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bReachTestIncludesAgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_AcceptenceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_NavFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bProjectGoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSMoveParams_Statics::NewProp_bUsePathfinding,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPSMoveParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"UPSMoveParams",
		sizeof(FUPSMoveParams),
		alignof(FUPSMoveParams),
		Z_Construct_UScriptStruct_FUPSMoveParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSMoveParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUPSMoveParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUPSMoveParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UPSMoveParams"), sizeof(FUPSMoveParams), Get_Z_Construct_UScriptStruct_FUPSMoveParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUPSMoveParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUPSMoveParams_Hash() { return 2195015194U; }
	void UUPSMoveToEnemyPointAction::StaticRegisterNativesUUPSMoveToEnemyPointAction()
	{
		UClass* Class = UUPSMoveToEnemyPointAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMoveCompleted", &UUPSMoveToEnemyPointAction::execOnMoveCompleted },
			{ "StopMovement", &UUPSMoveToEnemyPointAction::execStopMovement },
			{ "UPSMoveToLocation", &UUPSMoveToEnemyPointAction::execUPSMoveToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics
	{
		struct UPSMoveToEnemyPointAction_eventOnMoveCompleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSMoveToEnemyPointAction, nullptr, "OnMoveCompleted", nullptr, nullptr, sizeof(UPSMoveToEnemyPointAction_eventOnMoveCompleted_Parms), Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics
	{
		struct UPSMoveToEnemyPointAction_eventStopMovement_Parms
		{
			bool bEndTask;
		};
		static void NewProp_bEndTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::NewProp_bEndTask_SetBit(void* Obj)
	{
		((UPSMoveToEnemyPointAction_eventStopMovement_Parms*)Obj)->bEndTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::NewProp_bEndTask = { "bEndTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSMoveToEnemyPointAction_eventStopMovement_Parms), &Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::NewProp_bEndTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::NewProp_bEndTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "CPP_Default_bEndTask", "false" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSMoveToEnemyPointAction, nullptr, "StopMovement", nullptr, nullptr, sizeof(UPSMoveToEnemyPointAction_eventStopMovement_Parms), Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics
	{
		struct UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms
		{
			ACharacter* Character;
			FVector Location;
			FUPSMoveParams MoveParams;
			UUPSMoveToEnemyPointAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveParams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms, ReturnValue), Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_MoveParams = { "MoveParams", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms, MoveParams), Z_Construct_UScriptStruct_FUPSMoveParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_MoveParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "UPSEnemyPointAction" },
		{ "DefaultToSelf", "PointToMove" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSMoveToEnemyPointAction, nullptr, "UPSMoveToLocation", nullptr, nullptr, sizeof(UPSMoveToEnemyPointAction_eventUPSMoveToLocation_Parms), Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSMoveToEnemyPointAction_NoRegister()
	{
		return UUPSMoveToEnemyPointAction::StaticClass();
	}
	struct Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveChracter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveChracter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoveToEnemyPointActionFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveToEnemyPointActionFinishedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSMoveToEnemyPointAction_OnMoveCompleted, "OnMoveCompleted" }, // 1581770591
		{ &Z_Construct_UFunction_UUPSMoveToEnemyPointAction_StopMovement, "StopMovement" }, // 907613981
		{ &Z_Construct_UFunction_UUPSMoveToEnemyPointAction_UPSMoveToLocation, "UPSMoveToLocation" }, // 356437633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyPointActions/UPSMoveToEnemyPointAction.h" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveParams = { "MoveParams", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMoveToEnemyPointAction, MoveParams), Z_Construct_UScriptStruct_FUPSMoveParams, METADATA_PARAMS(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveChracter_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveChracter = { "MoveChracter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMoveToEnemyPointAction, MoveChracter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveChracter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveChracter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_OnMoveToEnemyPointActionFinishedDelegate_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSMoveToEnemyPointAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_OnMoveToEnemyPointActionFinishedDelegate = { "OnMoveToEnemyPointActionFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMoveToEnemyPointAction, OnMoveToEnemyPointActionFinishedDelegate), Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_OnMoveToEnemyPointActionFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_OnMoveToEnemyPointActionFinishedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_MoveChracter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::NewProp_OnMoveToEnemyPointActionFinishedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSMoveToEnemyPointAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::ClassParams = {
		&UUPSMoveToEnemyPointAction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSMoveToEnemyPointAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSMoveToEnemyPointAction, 709619366);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSMoveToEnemyPointAction>()
	{
		return UUPSMoveToEnemyPointAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSMoveToEnemyPointAction(Z_Construct_UClass_UUPSMoveToEnemyPointAction, &UUPSMoveToEnemyPointAction::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSMoveToEnemyPointAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSMoveToEnemyPointAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
