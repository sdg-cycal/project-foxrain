// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFormation_BlueprintBase() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_BlueprintBase_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSFormation_BlueprintBase();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMovementFormation();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup();
// End Cross Module References
	static FName NAME_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter = FName(TEXT("K2_GetLocationInFormationForCharacter"));
	FVector AUPSFormation_BlueprintBase::K2_GetLocationInFormationForCharacter(ACharacter* Character)
	{
		UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_InitFormation = FName(TEXT("K2_InitFormation"));
	void AUPSFormation_BlueprintBase::K2_InitFormation(ACharacter* InLeaderCharacter)
	{
		UPSFormation_BlueprintBase_eventK2_InitFormation_Parms Parms;
		Parms.InLeaderCharacter=InLeaderCharacter;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_InitFormation),&Parms);
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup = FName(TEXT("K2_OnAddCharacterInGroup"));
	void AUPSFormation_BlueprintBase::K2_OnAddCharacterInGroup(ACharacter* Character)
	{
		UPSFormation_BlueprintBase_eventK2_OnAddCharacterInGroup_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup),&Parms);
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement = FName(TEXT("K2_OnLeaderCompleteMovement"));
	void AUPSFormation_BlueprintBase::K2_OnLeaderCompleteMovement(EPathFollowingResult::Type Result)
	{
		UPSFormation_BlueprintBase_eventK2_OnLeaderCompleteMovement_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement),&Parms);
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor = FName(TEXT("K2_OnLeaderStartMovementToNewActor"));
	void AUPSFormation_BlueprintBase::K2_OnLeaderStartMovementToNewActor(AActor* NewActor)
	{
		UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewActor_Parms Parms;
		Parms.NewActor=NewActor;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor),&Parms);
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation = FName(TEXT("K2_OnLeaderStartMovementToNewLocation"));
	void AUPSFormation_BlueprintBase::K2_OnLeaderStartMovementToNewLocation(FVector NewLocation)
	{
		UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation),&Parms);
	}
	static FName NAME_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup = FName(TEXT("K2_OnRemoveCharacterFromGroup"));
	void AUPSFormation_BlueprintBase::K2_OnRemoveCharacterFromGroup(ACharacter* Character)
	{
		UPSFormation_BlueprintBase_eventK2_OnRemoveCharacterFromGroup_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup),&Parms);
	}
	void AUPSFormation_BlueprintBase::StaticRegisterNativesAUPSFormation_BlueprintBase()
	{
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "Get Location In Formation For Character" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_GetLocationInFormationForCharacter", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLeaderCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::NewProp_InLeaderCharacter = { "InLeaderCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_InitFormation_Parms, InLeaderCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::NewProp_InLeaderCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "Init Formation" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_InitFormation", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_InitFormation_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_OnAddCharacterInGroup_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "On Add Character In Group" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_OnAddCharacterInGroup", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_OnAddCharacterInGroup_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_OnLeaderCompleteMovement_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "On Leader Complete Movement" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_OnLeaderCompleteMovement", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_OnLeaderCompleteMovement_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewActor_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "On Leader Start Movement To New Actor" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_OnLeaderStartMovementToNewActor", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewActor_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "On Leader Start Movement To New Location" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_OnLeaderStartMovementToNewLocation", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewLocation_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFormation_BlueprintBase_eventK2_OnRemoveCharacterFromGroup_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSFormation" },
		{ "DisplayName", "On Remove Character From Group" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSFormation_BlueprintBase, nullptr, "K2_OnRemoveCharacterFromGroup", nullptr, nullptr, sizeof(UPSFormation_BlueprintBase_eventK2_OnRemoveCharacterFromGroup_Parms), Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSFormation_BlueprintBase_NoRegister()
	{
		return AUPSFormation_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPSGroupMovementFormation,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_GetLocationInFormationForCharacter, "K2_GetLocationInFormationForCharacter" }, // 1029215857
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_InitFormation, "K2_InitFormation" }, // 4035565911
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnAddCharacterInGroup, "K2_OnAddCharacterInGroup" }, // 3326029863
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderCompleteMovement, "K2_OnLeaderCompleteMovement" }, // 3557899978
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewActor, "K2_OnLeaderStartMovementToNewActor" }, // 2590727965
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnLeaderStartMovementToNewLocation, "K2_OnLeaderStartMovementToNewLocation" }, // 900308348
		{ &Z_Construct_UFunction_AUPSFormation_BlueprintBase_K2_OnRemoveCharacterFromGroup, "K2_OnRemoveCharacterFromGroup" }, // 1352193391
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nContains functions to create your own formation in blueprints\n*/" },
		{ "IncludePath", "GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/Formations/UPSFormation_BlueprintBase.h" },
		{ "ToolTip", "Contains functions to create your own formation in blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSFormation_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::ClassParams = {
		&AUPSFormation_BlueprintBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSFormation_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSFormation_BlueprintBase, 3408343841);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSFormation_BlueprintBase>()
	{
		return AUPSFormation_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSFormation_BlueprintBase(Z_Construct_UClass_AUPSFormation_BlueprintBase, &AUPSFormation_BlueprintBase::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSFormation_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSFormation_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
