// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyActionConditions/UPSActionCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSActionCondition() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSActionCondition_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSActionCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	static FName NAME_UUPSActionCondition_InternalCheckCondition = FName(TEXT("InternalCheckCondition"));
	bool UUPSActionCondition::InternalCheckCondition(ACharacter* Character)
	{
		UPSActionCondition_eventInternalCheckCondition_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSActionCondition_InternalCheckCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UUPSActionCondition::StaticRegisterNativesUUPSActionCondition()
	{
		UClass* Class = UUPSActionCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InternalCheckCondition", &UUPSActionCondition::execInternalCheckCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSActionCondition_eventInternalCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSActionCondition_eventInternalCheckCondition_Parms), &Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSActionCondition_eventInternalCheckCondition_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "DisplayName", "CheckCondition" },
		{ "ModuleRelativePath", "Public/EnemyActionConditions/UPSActionCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSActionCondition, nullptr, "InternalCheckCondition", nullptr, nullptr, sizeof(UPSActionCondition_eventInternalCheckCondition_Parms), Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSActionCondition_NoRegister()
	{
		return UUPSActionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UUPSActionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverseCondition_MetaData[];
#endif
		static void NewProp_bInverseCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverseCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSActionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSActionCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSActionCondition_InternalCheckCondition, "InternalCheckCondition" }, // 2919187148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSActionCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nChecks the condition necessary to run EnemyAction.\n  bInverseCondition - inverts the result of the condition\n*/" },
		{ "IncludePath", "EnemyActionConditions/UPSActionCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnemyActionConditions/UPSActionCondition.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Checks the condition necessary to run EnemyAction.\n  bInverseCondition - inverts the result of the condition" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition_MetaData[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/EnemyActionConditions/UPSActionCondition.h" },
	};
#endif
	void Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition_SetBit(void* Obj)
	{
		((UUPSActionCondition*)Obj)->bInverseCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition = { "bInverseCondition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUPSActionCondition), &Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSActionCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSActionCondition_Statics::NewProp_bInverseCondition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSActionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSActionCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSActionCondition_Statics::ClassParams = {
		&UUPSActionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSActionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSActionCondition_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSActionCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSActionCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSActionCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSActionCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSActionCondition, 3303618651);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSActionCondition>()
	{
		return UUPSActionCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSActionCondition(Z_Construct_UClass_UUPSActionCondition, &UUPSActionCondition::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSActionCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSActionCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
