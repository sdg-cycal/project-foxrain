// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSCheatManager.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSCheatManager() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSCheatManager_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSCheatManager();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug();
// End Cross Module References
	void UUPSCheatManager::StaticRegisterNativesUUPSCheatManager()
	{
		UClass* Class = UUPSCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UPS_DisableGroupMovementDebug", &UUPSCheatManager::execUPS_DisableGroupMovementDebug },
			{ "UPS_DisablePatrolVisualization", &UUPSCheatManager::execUPS_DisablePatrolVisualization },
			{ "UPS_DisablePointActionsDebug", &UUPSCheatManager::execUPS_DisablePointActionsDebug },
			{ "UPS_EnableGroupMovementDebug", &UUPSCheatManager::execUPS_EnableGroupMovementDebug },
			{ "UPS_EnablePatrolVisualization", &UUPSCheatManager::execUPS_EnablePatrolVisualization },
			{ "UPS_EnablePointActionsDebug", &UUPSCheatManager::execUPS_EnablePointActionsDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_DisableGroupMovementDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_DisablePatrolVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_DisablePointActionsDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_EnableGroupMovementDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_EnablePatrolVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSCheatManager, nullptr, "UPS_EnablePointActionsDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSCheatManager_NoRegister()
	{
		return UUPSCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UUPSCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_DisableGroupMovementDebug, "UPS_DisableGroupMovementDebug" }, // 2331480726
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePatrolVisualization, "UPS_DisablePatrolVisualization" }, // 1761676142
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_DisablePointActionsDebug, "UPS_DisablePointActionsDebug" }, // 1346419989
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_EnableGroupMovementDebug, "UPS_EnableGroupMovementDebug" }, // 2550132567
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePatrolVisualization, "UPS_EnablePatrolVisualization" }, // 2351212000
		{ &Z_Construct_UFunction_UUPSCheatManager_UPS_EnablePointActionsDebug, "UPS_EnablePointActionsDebug" }, // 615200349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSCheatManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nNeed to enable debug visualization in game mode from console commands\n*/" },
		{ "IncludePath", "Utils/UPSCheatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/UPSCheatManager.h" },
		{ "ToolTip", "Need to enable debug visualization in game mode from console commands" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSCheatManager_Statics::ClassParams = {
		&UUPSCheatManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUPSCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSCheatManager, 1018914130);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSCheatManager>()
	{
		return UUPSCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSCheatManager(Z_Construct_UClass_UUPSCheatManager, &UUPSCheatManager::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
