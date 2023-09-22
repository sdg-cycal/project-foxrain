// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolActionSystem_init() {}
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnAIStartMovementToLocation__DelegateSignature();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnAIStartMovementToActor__DelegateSignature();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnAIStartMovementToLocation__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnAIStartMovementToActor__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnRotationTaskFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnActionFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnMovetoEnemyPointActionFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PatrolActionSystem_OnEnemyPointActionFinished__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PatrolActionSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x75C7E451,
				0xD4695B02,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
