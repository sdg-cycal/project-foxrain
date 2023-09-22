// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/GroupMovementTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupMovementTypes() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDelayedGroupMovement();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFormationPointsGenerationSettings();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMovementGroupMemberInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSGroupMemberMovementPoint_NoRegister();
// End Cross Module References
class UScriptStruct* FDelayedGroupMovement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDelayedGroupMovement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelayedGroupMovement, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("DelayedGroupMovement"), sizeof(FDelayedGroupMovement), Get_Z_Construct_UScriptStruct_FDelayedGroupMovement_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FDelayedGroupMovement>()
{
	return FDelayedGroupMovement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelayedGroupMovement(FDelayedGroupMovement::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("DelayedGroupMovement"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFDelayedGroupMovement
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFDelayedGroupMovement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelayedGroupMovement")),new UScriptStruct::TCppStructOps<FDelayedGroupMovement>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFDelayedGroupMovement;
	struct Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementTargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelayedGroupMovement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewProp_MovementTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewProp_MovementTargetActor = { "MovementTargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelayedGroupMovement, MovementTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewProp_MovementTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewProp_MovementTargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::NewProp_MovementTargetActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"DelayedGroupMovement",
		sizeof(FDelayedGroupMovement),
		alignof(FDelayedGroupMovement),
		Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelayedGroupMovement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelayedGroupMovement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelayedGroupMovement"), sizeof(FDelayedGroupMovement), Get_Z_Construct_UScriptStruct_FDelayedGroupMovement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelayedGroupMovement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelayedGroupMovement_Hash() { return 3439761987U; }
class UScriptStruct* FFormationPointsGenerationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("FormationPointsGenerationSettings"), sizeof(FFormationPointsGenerationSettings), Get_Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FFormationPointsGenerationSettings>()
{
	return FFormationPointsGenerationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFormationPointsGenerationSettings(FFormationPointsGenerationSettings::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("FormationPointsGenerationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFFormationPointsGenerationSettings
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFFormationPointsGenerationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FormationPointsGenerationSettings")),new UScriptStruct::TCppStructOps<FFormationPointsGenerationSettings>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFFormationPointsGenerationSettings;
	struct Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFormationPointsGenerationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_DistanceBetweenPoints_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ClampMin", "10.000000" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_DistanceBetweenPoints = { "DistanceBetweenPoints", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationPointsGenerationSettings, DistanceBetweenPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_DistanceBetweenPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_DistanceBetweenPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationPointsGenerationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationPointsGenerationSettings, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_DistanceBetweenPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::NewProp_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"FormationPointsGenerationSettings",
		sizeof(FFormationPointsGenerationSettings),
		alignof(FFormationPointsGenerationSettings),
		Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFormationPointsGenerationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FormationPointsGenerationSettings"), sizeof(FFormationPointsGenerationSettings), Get_Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFormationPointsGenerationSettings_Hash() { return 2322655828U; }
class UScriptStruct* FMovementGroupMemberInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementGroupMemberInfo, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("MovementGroupMemberInfo"), sizeof(FMovementGroupMemberInfo), Get_Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FMovementGroupMemberInfo>()
{
	return FMovementGroupMemberInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovementGroupMemberInfo(FMovementGroupMemberInfo::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("MovementGroupMemberInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFMovementGroupMemberInfo
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFMovementGroupMemberInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovementGroupMemberInfo")),new UScriptStruct::TCppStructOps<FMovementGroupMemberInfo>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFMovementGroupMemberInfo;
	struct Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMemberLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupMemberLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMemberMovementPointActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupMemberMovementPointActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementGroupMemberInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberLocation_MetaData[] = {
		{ "Comment", "//relative to group leader\n" },
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
		{ "ToolTip", "relative to group leader" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberLocation = { "GroupMemberLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementGroupMemberInfo, GroupMemberLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberMovementPointActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroupMovement/GroupMovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberMovementPointActor = { "GroupMemberMovementPointActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementGroupMemberInfo, GroupMemberMovementPointActor), Z_Construct_UClass_AUPSGroupMemberMovementPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberMovementPointActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberMovementPointActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::NewProp_GroupMemberMovementPointActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"MovementGroupMemberInfo",
		sizeof(FMovementGroupMemberInfo),
		alignof(FMovementGroupMemberInfo),
		Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovementGroupMemberInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovementGroupMemberInfo"), sizeof(FMovementGroupMemberInfo), Get_Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovementGroupMemberInfo_Hash() { return 3398745001U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
