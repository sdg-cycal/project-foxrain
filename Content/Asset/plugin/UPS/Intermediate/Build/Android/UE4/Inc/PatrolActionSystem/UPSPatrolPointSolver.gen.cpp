// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/PatrolPointSolver/UPSPatrolPointSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolPointSolver() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointSolver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointLink();
// End Cross Module References
	static FName NAME_UUPSPatrolPointSolver_SelectPatrolPoint = FName(TEXT("SelectPatrolPoint"));
	AUPSPatrolPoint* UUPSPatrolPointSolver::SelectPatrolPoint(TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character)
	{
		UPSPatrolPointSolver_eventSelectPatrolPoint_Parms Parms;
		Parms.PatrolPointLinks=PatrolPointLinks;
		Parms.ThisPatrolPoint=ThisPatrolPoint;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSPatrolPointSolver_SelectPatrolPoint),&Parms);
		PatrolPointLinks=Parms.PatrolPointLinks;
		return Parms.ReturnValue;
	}
	void UUPSPatrolPointSolver::StaticRegisterNativesUUPSPatrolPointSolver()
	{
		UClass* Class = UUPSPatrolPointSolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectPatrolPoint", &UUPSPatrolPointSolver::execSelectPatrolPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisPatrolPoint;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPointLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointLinks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointSolver_eventSelectPatrolPoint_Parms, ReturnValue), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointSolver_eventSelectPatrolPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_ThisPatrolPoint = { "ThisPatrolPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointSolver_eventSelectPatrolPoint_Parms, ThisPatrolPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_PatrolPointLinks = { "PatrolPointLinks", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolPointSolver_eventSelectPatrolPoint_Parms, PatrolPointLinks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_PatrolPointLinks_Inner = { "PatrolPointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_ThisPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_PatrolPointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::NewProp_PatrolPointLinks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolPointSolver" },
		{ "ModuleRelativePath", "Public/PatrolPointSolver/UPSPatrolPointSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolPointSolver, nullptr, "SelectPatrolPoint", nullptr, nullptr, sizeof(UPSPatrolPointSolver_eventSelectPatrolPoint_Parms), Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSPatrolPointSolver_NoRegister()
	{
		return UUPSPatrolPointSolver::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolPointSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolPointSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSPatrolPointSolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSPatrolPointSolver_SelectPatrolPoint, "SelectPatrolPoint" }, // 1891312620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolPointSolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09The class needed to determine the next patrol point after the current one. The default implementation of UUPSPatrolPointSolver_RandomPoint returns a random point\n???????? TArray <FPatrolPointLink> & PatrolPointLinks - depending on the Direction settings in the UUPS PatrolComponent, these are the patrol points ahead of them, or those that belong to this one.\n*/" },
		{ "IncludePath", "PatrolPointSolver/UPSPatrolPointSolver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PatrolPointSolver/UPSPatrolPointSolver.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "The class needed to determine the next patrol point after the current one. The default implementation of UUPSPatrolPointSolver_RandomPoint returns a random point\n???????? TArray <FPatrolPointLink> & PatrolPointLinks - depending on the Direction settings in the UUPS PatrolComponent, these are the patrol points ahead of them, or those that belong to this one." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolPointSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolPointSolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolPointSolver_Statics::ClassParams = {
		&UUPSPatrolPointSolver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolPointSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolPointSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolPointSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolPointSolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolPointSolver, 2140324544);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPatrolPointSolver>()
	{
		return UUPSPatrolPointSolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolPointSolver(Z_Construct_UClass_UUPSPatrolPointSolver, &UUPSPatrolPointSolver::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPatrolPointSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolPointSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
