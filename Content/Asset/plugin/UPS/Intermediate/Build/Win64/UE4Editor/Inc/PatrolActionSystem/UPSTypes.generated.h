// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATROLACTIONSYSTEM_UPSTypes_generated_h
#error "UPSTypes.generated.h already included, missing '#pragma once' in UPSTypes.h"
#endif
#define PATROLACTIONSYSTEM_UPSTypes_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_UPSTypes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatrolPointLink_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<struct FPatrolPointLink>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_UPSTypes_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatrolPointSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<struct FPatrolPointSettings>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_UPSTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyActionSelector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<struct FEnemyActionSelector>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_UPSTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatrolPointScript_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<struct FPatrolPointScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_UPSTypes_h


#define FOREACH_ENUM_EPATROLMOVEMENTTYPE(op) \
	op(EPatrolMovementType::Clockwise) \
	op(EPatrolMovementType::CounterClockwise) 

enum class EPatrolMovementType : uint8;
template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EPatrolMovementType>();

#define FOREACH_ENUM_EENEMYACTIONSEXECUTIONTYPE(op) \
	op(EEnemyActionsExecutionType::RandomAction) \
	op(EEnemyActionsExecutionType::AllInTurn) 

enum class EEnemyActionsExecutionType : uint8;
template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionsExecutionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
