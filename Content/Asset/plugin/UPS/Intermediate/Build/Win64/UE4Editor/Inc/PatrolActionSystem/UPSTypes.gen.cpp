// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/UPSTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSTypes() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointLink();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointSettings();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyActionsPreset_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyActionSelector();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointScript();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyAction_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolPointScript_NoRegister();
// End Cross Module References
	static UEnum* EPatrolMovementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("EPatrolMovementType"));
		}
		return Singleton;
	}
	template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EPatrolMovementType>()
	{
		return EPatrolMovementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPatrolMovementType(EPatrolMovementType_StaticEnum, TEXT("/Script/PatrolActionSystem"), TEXT("EPatrolMovementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType_Hash() { return 1613932002U; }
	UEnum* Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPatrolMovementType"), 0, Get_Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPatrolMovementType::Clockwise", (int64)EPatrolMovementType::Clockwise },
				{ "EPatrolMovementType::CounterClockwise", (int64)EPatrolMovementType::CounterClockwise },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Clockwise.Name", "EPatrolMovementType::Clockwise" },
				{ "CounterClockwise.Name", "EPatrolMovementType::CounterClockwise" },
				{ "ModuleRelativePath", "Public/UPSTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem,
				nullptr,
				"EPatrolMovementType",
				"EPatrolMovementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnemyActionsExecutionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("EEnemyActionsExecutionType"));
		}
		return Singleton;
	}
	template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionsExecutionType>()
	{
		return EEnemyActionsExecutionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyActionsExecutionType(EEnemyActionsExecutionType_StaticEnum, TEXT("/Script/PatrolActionSystem"), TEXT("EEnemyActionsExecutionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType_Hash() { return 2634932247U; }
	UEnum* Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyActionsExecutionType"), 0, Get_Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyActionsExecutionType::RandomAction", (int64)EEnemyActionsExecutionType::RandomAction },
				{ "EEnemyActionsExecutionType::AllInTurn", (int64)EEnemyActionsExecutionType::AllInTurn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllInTurn.Name", "EEnemyActionsExecutionType::AllInTurn" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UPSTypes.h" },
				{ "RandomAction.Name", "EEnemyActionsExecutionType::RandomAction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PatrolActionSystem,
				nullptr,
				"EEnemyActionsExecutionType",
				"EEnemyActionsExecutionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPatrolPointLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FPatrolPointLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatrolPointLink, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("PatrolPointLink"), sizeof(FPatrolPointLink), Get_Z_Construct_UScriptStruct_FPatrolPointLink_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FPatrolPointLink>()
{
	return FPatrolPointLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatrolPointLink(FPatrolPointLink::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("PatrolPointLink"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointLink
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatrolPointLink")),new UScriptStruct::TCppStructOps<FPatrolPointLink>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointLink;
	struct Z_Construct_UScriptStruct_FPatrolPointLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatrolPointLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_LinkTag_MetaData[] = {
		{ "Category", "UPSPatrolPointLink" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_LinkTag = { "LinkTag", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointLink, LinkTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_LinkTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_LinkTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_PatrolPoint_MetaData[] = {
		{ "Category", "UPSPatrolPointLink" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_PatrolPoint = { "PatrolPoint", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointLink, PatrolPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_PatrolPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatrolPointLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_LinkTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointLink_Statics::NewProp_PatrolPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatrolPointLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"PatrolPointLink",
		sizeof(FPatrolPointLink),
		alignof(FPatrolPointLink),
		Z_Construct_UScriptStruct_FPatrolPointLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatrolPointLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatrolPointLink"), sizeof(FPatrolPointLink), Get_Z_Construct_UScriptStruct_FPatrolPointLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatrolPointLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatrolPointLink_Hash() { return 2082711448U; }
class UScriptStruct* FPatrolPointSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FPatrolPointSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatrolPointSettings, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("PatrolPointSettings"), sizeof(FPatrolPointSettings), Get_Z_Construct_UScriptStruct_FPatrolPointSettings_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FPatrolPointSettings>()
{
	return FPatrolPointSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatrolPointSettings(FPatrolPointSettings::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("PatrolPointSettings"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointSettings
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatrolPointSettings")),new UScriptStruct::TCppStructOps<FPatrolPointSettings>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointSettings;
	struct Z_Construct_UScriptStruct_FPatrolPointSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateOnPointAfterReach_MetaData[];
#endif
		static void NewProp_bRotateOnPointAfterReach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateOnPointAfterReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionsExecutionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyActionsExecutionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyActionsExecutionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionsPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyActionsPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEnemyActionsPreset_MetaData[];
#endif
		static void NewProp_bUseEnemyActionsPreset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEnemyActionsPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPointActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPointScripts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointScripts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatrolPointSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach_SetBit(void* Obj)
	{
		((FPatrolPointSettings*)Obj)->bRotateOnPointAfterReach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach = { "bRotateOnPointAfterReach", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPatrolPointSettings), &Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType = { "EnemyActionsExecutionType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointSettings, EnemyActionsExecutionType), Z_Construct_UEnum_PatrolActionSystem_EEnemyActionsExecutionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsPreset_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "EditCondition", "bUseEnemyActionsPreset" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsPreset = { "EnemyActionsPreset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointSettings, EnemyActionsPreset), Z_Construct_UClass_UUPSEnemyActionsPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset_SetBit(void* Obj)
	{
		((FPatrolPointSettings*)Obj)->bUseEnemyActionsPreset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset = { "bUseEnemyActionsPreset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPatrolPointSettings), &Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "Comment", "//One of the action executed after ai reach patrol point. \n" },
		{ "EditCondition", "!bUseEnemyActionsPreset" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
		{ "ToolTip", "One of the action executed after ai reach patrol point." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions = { "PatrolPointActions", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointSettings, PatrolPointActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions_Inner = { "PatrolPointActions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyActionSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts_MetaData[] = {
		{ "Category", "UPSPatrolPointSettings" },
		{ "Comment", "//Called start and stop functions in each action before AI start movement to point and after stop. \n" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
		{ "ToolTip", "Called start and stop functions in each action before AI start movement to point and after stop." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts = { "PatrolPointScripts", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointSettings, PatrolPointScripts), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts_Inner = { "PatrolPointScripts", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPointScript, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bRotateOnPointAfterReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsExecutionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_EnemyActionsPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_bUseEnemyActionsPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::NewProp_PatrolPointScripts_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"PatrolPointSettings",
		sizeof(FPatrolPointSettings),
		alignof(FPatrolPointSettings),
		Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatrolPointSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatrolPointSettings"), sizeof(FPatrolPointSettings), Get_Z_Construct_UScriptStruct_FPatrolPointSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatrolPointSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatrolPointSettings_Hash() { return 72543791U; }
class UScriptStruct* FEnemyActionSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEnemyActionSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyActionSelector, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("EnemyActionSelector"), sizeof(FEnemyActionSelector), Get_Z_Construct_UScriptStruct_FEnemyActionSelector_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FEnemyActionSelector>()
{
	return FEnemyActionSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyActionSelector(FEnemyActionSelector::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("EnemyActionSelector"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFEnemyActionSelector
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFEnemyActionSelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyActionSelector")),new UScriptStruct::TCppStructOps<FEnemyActionSelector>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFEnemyActionSelector;
	struct Z_Construct_UScriptStruct_FEnemyActionSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DAEnemyAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DAEnemyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedEnemyAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedEnemyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstancedEnemyActions_MetaData[];
#endif
		static void NewProp_bUseInstancedEnemyActions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstancedEnemyActions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyActionSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_DAEnemyAction_MetaData[] = {
		{ "Category", "UPSEnemyActionSelector" },
		{ "EditCondition", "!bUseInstancedEnemyActions" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_DAEnemyAction = { "DAEnemyAction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyActionSelector, DAEnemyAction), Z_Construct_UClass_UUPSEnemyAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_DAEnemyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_DAEnemyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_InstancedEnemyAction_MetaData[] = {
		{ "Category", "UPSEnemyActionSelector" },
		{ "EditCondition", "bUseInstancedEnemyActions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_InstancedEnemyAction = { "InstancedEnemyAction", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyActionSelector, InstancedEnemyAction), Z_Construct_UClass_UUPSEnemyAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_InstancedEnemyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_InstancedEnemyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions_MetaData[] = {
		{ "Category", "UPSEnemyActionSelector" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions_SetBit(void* Obj)
	{
		((FEnemyActionSelector*)Obj)->bUseInstancedEnemyActions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions = { "bUseInstancedEnemyActions", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnemyActionSelector), &Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_DAEnemyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_InstancedEnemyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::NewProp_bUseInstancedEnemyActions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"EnemyActionSelector",
		sizeof(FEnemyActionSelector),
		alignof(FEnemyActionSelector),
		Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyActionSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyActionSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyActionSelector"), sizeof(FEnemyActionSelector), Get_Z_Construct_UScriptStruct_FEnemyActionSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyActionSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyActionSelector_Hash() { return 702733191U; }
class UScriptStruct* FPatrolPointScript::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FPatrolPointScript_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatrolPointScript, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("PatrolPointScript"), sizeof(FPatrolPointScript), Get_Z_Construct_UScriptStruct_FPatrolPointScript_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FPatrolPointScript>()
{
	return FPatrolPointScript::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatrolPointScript(FPatrolPointScript::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("PatrolPointScript"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointScript
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointScript()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatrolPointScript")),new UScriptStruct::TCppStructOps<FPatrolPointScript>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFPatrolPointScript;
	struct Z_Construct_UScriptStruct_FPatrolPointScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPointScript;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointScript_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatrolPointScript>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewProp_PatrolPointScript_MetaData[] = {
		{ "Category", "UPSPatrolPointScript" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UPSTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewProp_PatrolPointScript = { "PatrolPointScript", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPointScript, PatrolPointScript), Z_Construct_UClass_UUPSPatrolPointScript_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewProp_PatrolPointScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewProp_PatrolPointScript_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatrolPointScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPointScript_Statics::NewProp_PatrolPointScript,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatrolPointScript_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"PatrolPointScript",
		sizeof(FPatrolPointScript),
		alignof(FPatrolPointScript),
		Z_Construct_UScriptStruct_FPatrolPointScript_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointScript_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPointScript_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPointScript_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatrolPointScript()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatrolPointScript_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatrolPointScript"), sizeof(FPatrolPointScript), Get_Z_Construct_UScriptStruct_FPatrolPointScript_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatrolPointScript_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatrolPointScript_Hash() { return 1865679209U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
