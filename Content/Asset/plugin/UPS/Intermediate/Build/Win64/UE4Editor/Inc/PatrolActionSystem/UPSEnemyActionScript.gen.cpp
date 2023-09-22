// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyActionScripts/UPSEnemyActionScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEnemyActionScript() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionScript_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted();
// End Cross Module References
	static FName NAME_UUPSEnemyActionScript_OnActionAborted = FName(TEXT("OnActionAborted"));
	void UUPSEnemyActionScript::OnActionAborted(ACharacter* Character)
	{
		UPSEnemyActionScript_eventOnActionAborted_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyActionScript_OnActionAborted),&Parms);
	}
	static FName NAME_UUPSEnemyActionScript_OnActionFinished = FName(TEXT("OnActionFinished"));
	void UUPSEnemyActionScript::OnActionFinished(ACharacter* Character)
	{
		UPSEnemyActionScript_eventOnActionFinished_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyActionScript_OnActionFinished),&Parms);
	}
	static FName NAME_UUPSEnemyActionScript_OnActionStarted = FName(TEXT("OnActionStarted"));
	void UUPSEnemyActionScript::OnActionStarted(ACharacter* Character)
	{
		UPSEnemyActionScript_eventOnActionStarted_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyActionScript_OnActionStarted),&Parms);
	}
	void UUPSEnemyActionScript::StaticRegisterNativesUUPSEnemyActionScript()
	{
		UClass* Class = UUPSEnemyActionScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionAborted", &UUPSEnemyActionScript::execOnActionAborted },
			{ "OnActionFinished", &UUPSEnemyActionScript::execOnActionFinished },
			{ "OnActionStarted", &UUPSEnemyActionScript::execOnActionStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyActionScript_eventOnActionAborted_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActionScripts/UPSEnemyActionScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyActionScript, nullptr, "OnActionAborted", nullptr, nullptr, sizeof(UPSEnemyActionScript_eventOnActionAborted_Parms), Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyActionScript_eventOnActionFinished_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActionScripts/UPSEnemyActionScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyActionScript, nullptr, "OnActionFinished", nullptr, nullptr, sizeof(UPSEnemyActionScript_eventOnActionFinished_Parms), Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyActionScript_eventOnActionStarted_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActionScripts/UPSEnemyActionScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyActionScript, nullptr, "OnActionStarted", nullptr, nullptr, sizeof(UPSEnemyActionScript_eventOnActionStarted_Parms), Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSEnemyActionScript_NoRegister()
	{
		return UUPSEnemyActionScript::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEnemyActionScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEnemyActionScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSEnemyActionScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSEnemyActionScript_OnActionAborted, "OnActionAborted" }, // 3680366614
		{ &Z_Construct_UFunction_UUPSEnemyActionScript_OnActionFinished, "OnActionFinished" }, // 3224611366
		{ &Z_Construct_UFunction_UUPSEnemyActionScript_OnActionStarted, "OnActionStarted" }, // 16999840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyActionScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnemyActionScripts/UPSEnemyActionScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnemyActionScripts/UPSEnemyActionScript.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEnemyActionScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEnemyActionScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEnemyActionScript_Statics::ClassParams = {
		&UUPSEnemyActionScript::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyActionScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyActionScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEnemyActionScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEnemyActionScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEnemyActionScript, 3367552917);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSEnemyActionScript>()
	{
		return UUPSEnemyActionScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEnemyActionScript(Z_Construct_UClass_UUPSEnemyActionScript, &UUPSEnemyActionScript::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSEnemyActionScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEnemyActionScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
