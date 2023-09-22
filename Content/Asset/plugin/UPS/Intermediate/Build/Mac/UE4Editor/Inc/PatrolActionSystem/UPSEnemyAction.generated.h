// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyActionFinishResult : uint8;
class ACharacter;
#ifdef PATROLACTIONSYSTEM_UPSEnemyAction_generated_h
#error "UPSEnemyAction.generated.h already included, missing '#pragma once' in UPSEnemyAction.h"
#endif
#define PATROLACTIONSYSTEM_UPSEnemyAction_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_49_DELEGATE \
struct _Script_PatrolActionSystem_eventOnActionFinished_Parms \
{ \
	EEnemyActionFinishResult FinishResult; \
}; \
static inline void FOnActionFinished_DelegateWrapper(const FMulticastScriptDelegate& OnActionFinished, EEnemyActionFinishResult FinishResult) \
{ \
	_Script_PatrolActionSystem_eventOnActionFinished_Parms Parms; \
	Parms.FinishResult=FinishResult; \
	OnActionFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_RPC_WRAPPERS \
	virtual void InternalFinishAction_Implementation(ACharacter* InCharacter); \
	virtual void InternalAbortAction_Implementation(ACharacter* InCharacter); \
	virtual void InternalStartAction_Implementation(ACharacter* InCharacter); \
 \
	DECLARE_FUNCTION(execInternalFinishAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalFinishAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternalAbortAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalAbortAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternalStartAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalStartAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction(); \
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
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InternalFinishAction_Implementation(ACharacter* InCharacter); \
	virtual void InternalAbortAction_Implementation(ACharacter* InCharacter); \
	virtual void InternalStartAction_Implementation(ACharacter* InCharacter); \
 \
	DECLARE_FUNCTION(execInternalFinishAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalFinishAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternalAbortAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalAbortAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInternalStartAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InternalStartAction_Implementation(Z_Param_InCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction(); \
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
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_EVENT_PARMS \
	struct UPSEnemyAction_eventInternalAbortAction_Parms \
	{ \
		ACharacter* InCharacter; \
	}; \
	struct UPSEnemyAction_eventInternalFinishAction_Parms \
	{ \
		ACharacter* InCharacter; \
	}; \
	struct UPSEnemyAction_eventInternalStartAction_Parms \
	{ \
		ACharacter* InCharacter; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSEnemyAction(); \
	friend struct Z_Construct_UClass_UUPSEnemyAction_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyAction, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyAction)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUUPSEnemyAction(); \
	friend struct Z_Construct_UClass_UUPSEnemyAction_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyAction, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyAction)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSEnemyAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSEnemyAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyAction(UUPSEnemyAction&&); \
	NO_API UUPSEnemyAction(const UUPSEnemyAction&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyAction(UUPSEnemyAction&&); \
	NO_API UUPSEnemyAction(const UUPSEnemyAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPSEnemyAction)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UUPSEnemyAction, Character); } \
	FORCEINLINE static uint32 __PPO__EnemyActionScripts() { return STRUCT_OFFSET(UUPSEnemyAction, EnemyActionScripts); } \
	FORCEINLINE static uint32 __PPO__ActionConditions() { return STRUCT_OFFSET(UUPSEnemyAction, ActionConditions); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_50_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSEnemyAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActions_UPSEnemyAction_h


#define FOREACH_ENUM_EENEMYACTIONFINISHRESULT(op) \
	op(EEnemyActionFinishResult::Success) \
	op(EEnemyActionFinishResult::Aborted) \
	op(EEnemyActionFinishResult::ConditionFailed) 

enum class EEnemyActionFinishResult : uint8;
template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionFinishResult>();

#define FOREACH_ENUM_EENEMYACTIONSTATE(op) \
	op(EEnemyActionState::ReadyForActivation) \
	op(EEnemyActionState::Active) \
	op(EEnemyActionState::Aborting) 

enum class EEnemyActionState : uint8;
template<> PATROLACTIONSYSTEM_API UEnum* StaticEnum<EEnemyActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
