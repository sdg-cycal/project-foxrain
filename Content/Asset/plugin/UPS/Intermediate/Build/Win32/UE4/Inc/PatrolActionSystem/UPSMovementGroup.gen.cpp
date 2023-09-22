// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/UPSMovementGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSMovementGroup() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSMovementGroup_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSMovementGroup();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSBasePatrolObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDelayedGroupMovement();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementAIController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMovementGroupMemberInfo();
// End Cross Module References
	static FName NAME_AUPSMovementGroup_K2_OnLeaderStartMovementToActor = FName(TEXT("K2_OnLeaderStartMovementToActor"));
	void AUPSMovementGroup::K2_OnLeaderStartMovementToActor(AActor* NewActor)
	{
		UPSMovementGroup_eventK2_OnLeaderStartMovementToActor_Parms Parms;
		Parms.NewActor=NewActor;
		ProcessEvent(FindFunctionChecked(NAME_AUPSMovementGroup_K2_OnLeaderStartMovementToActor),&Parms);
	}
	static FName NAME_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation = FName(TEXT("K2_OnLeaderStartMovementToLocation"));
	void AUPSMovementGroup::K2_OnLeaderStartMovementToLocation(FVector NewLocation)
	{
		UPSMovementGroup_eventK2_OnLeaderStartMovementToLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		ProcessEvent(FindFunctionChecked(NAME_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation),&Parms);
	}
	void AUPSMovementGroup::StaticRegisterNativesAUPSMovementGroup()
	{
		UClass* Class = AUPSMovementGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGroupMember", &AUPSMovementGroup::execAddGroupMember },
			{ "InitializeGroupMembers", &AUPSMovementGroup::execInitializeGroupMembers },
			{ "OnCharacterDestroyed", &AUPSMovementGroup::execOnCharacterDestroyed },
			{ "OnLeaderCompleteMovement", &AUPSMovementGroup::execOnLeaderCompleteMovement },
			{ "OnLeaderStartMovementToActor", &AUPSMovementGroup::execOnLeaderStartMovementToActor },
			{ "OnLeaderStartMovementToLocation", &AUPSMovementGroup::execOnLeaderStartMovementToLocation },
			{ "RemoveGroupMember", &AUPSMovementGroup::execRemoveGroupMember },
			{ "SetGroupLeader", &AUPSMovementGroup::execSetGroupLeader },
			{ "UpdateLocationInFormationForCharacter", &AUPSMovementGroup::execUpdateLocationInFormationForCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics
	{
		struct UPSMovementGroup_eventAddGroupMember_Parms
		{
			ACharacter* NewMember;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::NewProp_NewMember = { "NewMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventAddGroupMember_Parms, NewMember), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::NewProp_NewMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "AddGroupMember", nullptr, nullptr, sizeof(UPSMovementGroup_eventAddGroupMember_Parms), Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "InitializeGroupMembers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventK2_OnLeaderStartMovementToActor_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "DisplayName", "On Leader Start Movement To Actor" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "K2_OnLeaderStartMovementToActor", nullptr, nullptr, sizeof(UPSMovementGroup_eventK2_OnLeaderStartMovementToActor_Parms), Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventK2_OnLeaderStartMovementToLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "DisplayName", "On Leader Start Movement To Location" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "K2_OnLeaderStartMovementToLocation", nullptr, nullptr, sizeof(UPSMovementGroup_eventK2_OnLeaderStartMovementToLocation_Parms), Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics
	{
		struct UPSMovementGroup_eventOnCharacterDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventOnCharacterDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "OnCharacterDestroyed", nullptr, nullptr, sizeof(UPSMovementGroup_eventOnCharacterDestroyed_Parms), Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics
	{
		struct UPSMovementGroup_eventOnLeaderCompleteMovement_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventOnLeaderCompleteMovement_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventOnLeaderCompleteMovement_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "OnLeaderCompleteMovement", nullptr, nullptr, sizeof(UPSMovementGroup_eventOnLeaderCompleteMovement_Parms), Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics
	{
		struct UPSMovementGroup_eventOnLeaderStartMovementToActor_Parms
		{
			AActor* NewActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventOnLeaderStartMovementToActor_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "OnLeaderStartMovementToActor", nullptr, nullptr, sizeof(UPSMovementGroup_eventOnLeaderStartMovementToActor_Parms), Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics
	{
		struct UPSMovementGroup_eventOnLeaderStartMovementToLocation_Parms
		{
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventOnLeaderStartMovementToLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "OnLeaderStartMovementToLocation", nullptr, nullptr, sizeof(UPSMovementGroup_eventOnLeaderStartMovementToLocation_Parms), Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics
	{
		struct UPSMovementGroup_eventRemoveGroupMember_Parms
		{
			ACharacter* MemberToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemberToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::NewProp_MemberToRemove = { "MemberToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventRemoveGroupMember_Parms, MemberToRemove), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::NewProp_MemberToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "RemoveGroupMember", nullptr, nullptr, sizeof(UPSMovementGroup_eventRemoveGroupMember_Parms), Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics
	{
		struct UPSMovementGroup_eventSetGroupLeader_Parms
		{
			ACharacter* NewLeader;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::NewProp_NewLeader = { "NewLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventSetGroupLeader_Parms, NewLeader), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::NewProp_NewLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "Comment", "/*AActor end*/" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
		{ "ToolTip", "AActor end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "SetGroupLeader", nullptr, nullptr, sizeof(UPSMovementGroup_eventSetGroupLeader_Parms), Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics
	{
		struct UPSMovementGroup_eventUpdateLocationInFormationForCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSMovementGroup_eventUpdateLocationInFormationForCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSMovementGroup, nullptr, "UpdateLocationInFormationForCharacter", nullptr, nullptr, sizeof(UPSMovementGroup_eventUpdateLocationInFormationForCharacter_Parms), Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSMovementGroup_NoRegister()
	{
		return AUPSMovementGroup::StaticClass();
	}
	struct Z_Construct_UClass_AUPSMovementGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DelayedMovement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DelayedMovement_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayedMovement_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedFormation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedFormation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMovementLeaderAIC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupMovementLeaderAIC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MembersMovementReactionTimeRandomDiviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MembersMovementReactionTimeRandomDiviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MembersMovementReactionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MembersMovementReactionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Formation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Formation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateMovementPointsAroundLeader_MetaData[];
#endif
		static void NewProp_bRotateMovementPointsAroundLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateMovementPointsAroundLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementGroupMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MovementGroupMembers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementGroupMembers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementGroupMembers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupLeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSMovementGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSBasePatrolObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSMovementGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSMovementGroup_AddGroupMember, "AddGroupMember" }, // 717003750
		{ &Z_Construct_UFunction_AUPSMovementGroup_InitializeGroupMembers, "InitializeGroupMembers" }, // 998863057
		{ &Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToActor, "K2_OnLeaderStartMovementToActor" }, // 3978250644
		{ &Z_Construct_UFunction_AUPSMovementGroup_K2_OnLeaderStartMovementToLocation, "K2_OnLeaderStartMovementToLocation" }, // 1138166996
		{ &Z_Construct_UFunction_AUPSMovementGroup_OnCharacterDestroyed, "OnCharacterDestroyed" }, // 2792506418
		{ &Z_Construct_UFunction_AUPSMovementGroup_OnLeaderCompleteMovement, "OnLeaderCompleteMovement" }, // 3804471128
		{ &Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToActor, "OnLeaderStartMovementToActor" }, // 4233782189
		{ &Z_Construct_UFunction_AUPSMovementGroup_OnLeaderStartMovementToLocation, "OnLeaderStartMovementToLocation" }, // 2745905343
		{ &Z_Construct_UFunction_AUPSMovementGroup_RemoveGroupMember, "RemoveGroupMember" }, // 3994507002
		{ &Z_Construct_UFunction_AUPSMovementGroup_SetGroupLeader, "SetGroupLeader" }, // 2255683903
		{ &Z_Construct_UFunction_AUPSMovementGroup_UpdateLocationInFormationForCharacter, "UpdateLocationInFormationForCharacter" }, // 3666881484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nMovement group moves group members to a group leader position. For each member of the group created actor - AUPSGroupMemberMovementPoint \nand witten to blackboard to key with name UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName. By default movement takes place in behavior tree with special task\nIf AI dont have key with it name movement takes place with AIMoveTo function in ai controller\n\nYou can get movement group for character (if he is group leader) from group movement manager with function - UUPSGroupMovementManager::GetMovementGroup\n\nWith delayed movement, group members can start movement with a delay\n*/" },
		{ "IncludePath", "GroupMovement/UPSMovementGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
		{ "ToolTip", "Movement group moves group members to a group leader position. For each member of the group created actor - AUPSGroupMemberMovementPoint\nand witten to blackboard to key with name UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName. By default movement takes place in behavior tree with special task\nIf AI dont have key with it name movement takes place with AIMoveTo function in ai controller\n\nYou can get movement group for character (if he is group leader) from group movement manager with function - UUPSGroupMovementManager::GetMovementGroup\n\nWith delayed movement, group members can start movement with a delay" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement = { "DelayedMovement", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, DelayedMovement), METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_Key_KeyProp = { "DelayedMovement_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_ValueProp = { "DelayedMovement", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDelayedGroupMovement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_SpawnedFormation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_SpawnedFormation = { "SpawnedFormation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, SpawnedFormation), Z_Construct_UClass_AUPSGroupMovementFormation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_SpawnedFormation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_SpawnedFormation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupMovementLeaderAIC_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupMovementLeaderAIC = { "GroupMovementLeaderAIC", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, GroupMovementLeaderAIC), Z_Construct_UClass_AUPSGroupMovementAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupMovementLeaderAIC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupMovementLeaderAIC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTimeRandomDiviation_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTimeRandomDiviation = { "MembersMovementReactionTimeRandomDiviation", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, MembersMovementReactionTimeRandomDiviation), METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTimeRandomDiviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTimeRandomDiviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTime_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTime = { "MembersMovementReactionTime", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, MembersMovementReactionTime), METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_Formation_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_Formation = { "Formation", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, Formation), Z_Construct_UClass_AUPSGroupMovementFormation_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_Formation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_Formation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	void Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader_SetBit(void* Obj)
	{
		((AUPSMovementGroup*)Obj)->bRotateMovementPointsAroundLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader = { "bRotateMovementPointsAroundLeader", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUPSMovementGroup), &Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers = { "MovementGroupMembers", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, MovementGroupMembers), METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_Key_KeyProp = { "MovementGroupMembers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_ValueProp = { "MovementGroupMembers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovementGroupMemberInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupLeader_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSMovementGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupLeader = { "GroupLeader", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSMovementGroup, GroupLeader), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSMovementGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_DelayedMovement_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_SpawnedFormation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupMovementLeaderAIC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTimeRandomDiviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MembersMovementReactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_Formation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_bRotateMovementPointsAroundLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_MovementGroupMembers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSMovementGroup_Statics::NewProp_GroupLeader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSMovementGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSMovementGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSMovementGroup_Statics::ClassParams = {
		&AUPSMovementGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPSMovementGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSMovementGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSMovementGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSMovementGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSMovementGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSMovementGroup, 4038948552);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSMovementGroup>()
	{
		return AUPSMovementGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSMovementGroup(Z_Construct_UClass_AUPSMovementGroup, &AUPSMovementGroup::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSMovementGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSMovementGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
