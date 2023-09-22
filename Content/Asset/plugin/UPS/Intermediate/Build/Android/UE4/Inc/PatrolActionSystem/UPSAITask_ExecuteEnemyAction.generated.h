// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyActionFinishResult : uint8;
class UUPSEnemyAction;
class ACharacter;
class UUPSAITask_ExecuteEnemyAction;
#ifdef PATROLACTIONSYSTEM_UPSAITask_ExecuteEnemyAction_generated_h
#error "UPSAITask_ExecuteEnemyAction.generated.h already included, missing '#pragma once' in UPSAITask_ExecuteEnemyAction.h"
#endif
#define PATROLACTIONSYSTEM_UPSAITask_ExecuteEnemyAction_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActionFinished) \
	{ \
		P_GET_ENUM(EEnemyActionFinishResult,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFinished(EEnemyActionFinishResult(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteEnemyAction) \
	{ \
		P_GET_OBJECT(UUPSEnemyAction,Z_Param_EnemyActionToActivate); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_ExecuteEnemyAction**)Z_Param__Result=UUPSAITask_ExecuteEnemyAction::ExecuteEnemyAction(Z_Param_EnemyActionToActivate,Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionFinished) \
	{ \
		P_GET_ENUM(EEnemyActionFinishResult,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFinished(EEnemyActionFinishResult(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteEnemyAction) \
	{ \
		P_GET_OBJECT(UUPSEnemyAction,Z_Param_EnemyActionToActivate); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_ExecuteEnemyAction**)Z_Param__Result=UUPSAITask_ExecuteEnemyAction::ExecuteEnemyAction(Z_Param_EnemyActionToActivate,Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSAITask_ExecuteEnemyAction(); \
	friend struct Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics; \
public: \
	DECLARE_CLASS(UUPSAITask_ExecuteEnemyAction, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSAITask_ExecuteEnemyAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUPSAITask_ExecuteEnemyAction(); \
	friend struct Z_Construct_UClass_UUPSAITask_ExecuteEnemyAction_Statics; \
public: \
	DECLARE_CLASS(UUPSAITask_ExecuteEnemyAction, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSAITask_ExecuteEnemyAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSAITask_ExecuteEnemyAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSAITask_ExecuteEnemyAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSAITask_ExecuteEnemyAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSAITask_ExecuteEnemyAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSAITask_ExecuteEnemyAction(UUPSAITask_ExecuteEnemyAction&&); \
	NO_API UUPSAITask_ExecuteEnemyAction(const UUPSAITask_ExecuteEnemyAction&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSAITask_ExecuteEnemyAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSAITask_ExecuteEnemyAction(UUPSAITask_ExecuteEnemyAction&&); \
	NO_API UUPSAITask_ExecuteEnemyAction(const UUPSAITask_ExecuteEnemyAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSAITask_ExecuteEnemyAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSAITask_ExecuteEnemyAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSAITask_ExecuteEnemyAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnemyAction() { return STRUCT_OFFSET(UUPSAITask_ExecuteEnemyAction, EnemyAction); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UUPSAITask_ExecuteEnemyAction, Character); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_23_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSAITask_ExecuteEnemyAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_ExecuteEnemyAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
