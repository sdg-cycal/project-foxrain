// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSFunctionLIbrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSFunctionLIbrary() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSFunctionLIbrary_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSFunctionLIbrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointScript_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointScript();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyAction_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyActionSelector();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void UUPSFunctionLIbrary::StaticRegisterNativesUUPSFunctionLIbrary()
	{
		UClass* Class = UUPSFunctionLIbrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePatrolScriptIntance", &UUPSFunctionLIbrary::execCreatePatrolScriptIntance },
			{ "GetEnemyActionFromSelector", &UUPSFunctionLIbrary::execGetEnemyActionFromSelector },
			{ "GetMontageSectionIndexLength", &UUPSFunctionLIbrary::execGetMontageSectionIndexLength },
			{ "GetMontageSectionLength", &UUPSFunctionLIbrary::execGetMontageSectionLength },
			{ "JumpToMontageSectionByIndex", &UUPSFunctionLIbrary::execJumpToMontageSectionByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics
	{
		struct UPSFunctionLIbrary_eventCreatePatrolScriptIntance_Parms
		{
			FPatrolPointScript Script;
			UUPSPatrolPointScript* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Script;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventCreatePatrolScriptIntance_Parms, ReturnValue), Z_Construct_UClass_UUPSPatrolPointScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventCreatePatrolScriptIntance_Parms, Script), Z_Construct_UScriptStruct_FPatrolPointScript, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::NewProp_Script,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSFunctionLIbrary, nullptr, "CreatePatrolScriptIntance", nullptr, nullptr, sizeof(UPSFunctionLIbrary_eventCreatePatrolScriptIntance_Parms), Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics
	{
		struct UPSFunctionLIbrary_eventGetEnemyActionFromSelector_Parms
		{
			FEnemyActionSelector EnemyActionSelector;
			UUPSEnemyAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyActionSelector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetEnemyActionFromSelector_Parms, ReturnValue), Z_Construct_UClass_UUPSEnemyAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::NewProp_EnemyActionSelector = { "EnemyActionSelector", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetEnemyActionFromSelector_Parms, EnemyActionSelector), Z_Construct_UScriptStruct_FEnemyActionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::NewProp_EnemyActionSelector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSFunctionLIbrary, nullptr, "GetEnemyActionFromSelector", nullptr, nullptr, sizeof(UPSFunctionLIbrary_eventGetEnemyActionFromSelector_Parms), Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics
	{
		struct UPSFunctionLIbrary_eventGetMontageSectionIndexLength_Parms
		{
			UAnimMontage* Montage;
			int32 Index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionIndexLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionIndexLength_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionIndexLength_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSFunctionLIbrary, nullptr, "GetMontageSectionIndexLength", nullptr, nullptr, sizeof(UPSFunctionLIbrary_eventGetMontageSectionIndexLength_Parms), Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics
	{
		struct UPSFunctionLIbrary_eventGetMontageSectionLength_Parms
		{
			UAnimMontage* Montage;
			FName SectionName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionLength_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventGetMontageSectionLength_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "CPP_Default_SectionName", "None" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSFunctionLIbrary, nullptr, "GetMontageSectionLength", nullptr, nullptr, sizeof(UPSFunctionLIbrary_eventGetMontageSectionLength_Parms), Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics
	{
		struct UPSFunctionLIbrary_eventJumpToMontageSectionByIndex_Parms
		{
			ACharacter* Character;
			UAnimMontage* Montage;
			int32 SectionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventJumpToMontageSectionByIndex_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventJumpToMontageSectionByIndex_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSFunctionLIbrary_eventJumpToMontageSectionByIndex_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSFunctionLIbrary, nullptr, "JumpToMontageSectionByIndex", nullptr, nullptr, sizeof(UPSFunctionLIbrary_eventJumpToMontageSectionByIndex_Parms), Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSFunctionLIbrary_NoRegister()
	{
		return UUPSFunctionLIbrary::StaticClass();
	}
	struct Z_Construct_UClass_UUPSFunctionLIbrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSFunctionLIbrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSFunctionLIbrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSFunctionLIbrary_CreatePatrolScriptIntance, "CreatePatrolScriptIntance" }, // 51651906
		{ &Z_Construct_UFunction_UUPSFunctionLIbrary_GetEnemyActionFromSelector, "GetEnemyActionFromSelector" }, // 1157421531
		{ &Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionIndexLength, "GetMontageSectionIndexLength" }, // 3822364827
		{ &Z_Construct_UFunction_UUPSFunctionLIbrary_GetMontageSectionLength, "GetMontageSectionLength" }, // 2140765627
		{ &Z_Construct_UFunction_UUPSFunctionLIbrary_JumpToMontageSectionByIndex, "JumpToMontageSectionByIndex" }, // 3881236824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSFunctionLIbrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utils/UPSFunctionLIbrary.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSFunctionLIbrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSFunctionLIbrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSFunctionLIbrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSFunctionLIbrary_Statics::ClassParams = {
		&UUPSFunctionLIbrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSFunctionLIbrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSFunctionLIbrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSFunctionLIbrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSFunctionLIbrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSFunctionLIbrary, 126598842);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSFunctionLIbrary>()
	{
		return UUPSFunctionLIbrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSFunctionLIbrary(Z_Construct_UClass_UUPSFunctionLIbrary, &UUPSFunctionLIbrary::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSFunctionLIbrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSFunctionLIbrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
