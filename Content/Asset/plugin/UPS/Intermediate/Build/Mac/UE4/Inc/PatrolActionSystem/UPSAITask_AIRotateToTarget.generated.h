// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UUPSAITask_AIRotateToTarget;
struct FRotator;
class AActor;
#ifdef PATROLACTIONSYSTEM_UPSAITask_AIRotateToTarget_generated_h
#error "UPSAITask_AIRotateToTarget.generated.h already included, missing '#pragma once' in UPSAITask_AIRotateToTarget.h"
#endif
#define PATROLACTIONSYSTEM_UPSAITask_AIRotateToTarget_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_13_DELEGATE \
struct _Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms \
{ \
	AAIController* AIC; \
	UUPSAITask_AIRotateToTarget* FinishedTask; \
}; \
static inline void FOnRotationTaskFinished_DelegateWrapper(const FMulticastScriptDelegate& OnRotationTaskFinished, AAIController* AIC, UUPSAITask_AIRotateToTarget* FinishedTask) \
{ \
	_Script_PatrolActionSystem_eventOnRotationTaskFinished_Parms Parms; \
	Parms.AIC=AIC; \
	Parms.FinishedTask=FinishedTask; \
	OnRotationTaskFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateAIToTargetRotation) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_STRUCT(FRotator,Z_Param_TargetRotation); \
		P_GET_UBOOL(Z_Param_bUseCustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_AIRotateToTarget**)Z_Param__Result=UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(Z_Param_AIController,Z_Param_TargetRotation,Z_Param_bUseCustomRotationSpeed,Z_Param_CustomRotationSpeed,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAIToTargetActor) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_OBJECT(AActor,Z_Param_RotationTarget); \
		P_GET_UBOOL(Z_Param_bUseCustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_AIRotateToTarget**)Z_Param__Result=UUPSAITask_AIRotateToTarget::RotateAIToTargetActor(Z_Param_AIController,Z_Param_RotationTarget,Z_Param_bUseCustomRotationSpeed,Z_Param_CustomRotationSpeed,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateAIToTargetRotation) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_STRUCT(FRotator,Z_Param_TargetRotation); \
		P_GET_UBOOL(Z_Param_bUseCustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_AIRotateToTarget**)Z_Param__Result=UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(Z_Param_AIController,Z_Param_TargetRotation,Z_Param_bUseCustomRotationSpeed,Z_Param_CustomRotationSpeed,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAIToTargetActor) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_OBJECT(AActor,Z_Param_RotationTarget); \
		P_GET_UBOOL(Z_Param_bUseCustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomRotationSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSAITask_AIRotateToTarget**)Z_Param__Result=UUPSAITask_AIRotateToTarget::RotateAIToTargetActor(Z_Param_AIController,Z_Param_RotationTarget,Z_Param_bUseCustomRotationSpeed,Z_Param_CustomRotationSpeed,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSAITask_AIRotateToTarget(); \
	friend struct Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics; \
public: \
	DECLARE_CLASS(UUPSAITask_AIRotateToTarget, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSAITask_AIRotateToTarget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUPSAITask_AIRotateToTarget(); \
	friend struct Z_Construct_UClass_UUPSAITask_AIRotateToTarget_Statics; \
public: \
	DECLARE_CLASS(UUPSAITask_AIRotateToTarget, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSAITask_AIRotateToTarget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSAITask_AIRotateToTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSAITask_AIRotateToTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSAITask_AIRotateToTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSAITask_AIRotateToTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSAITask_AIRotateToTarget(UUPSAITask_AIRotateToTarget&&); \
	NO_API UUPSAITask_AIRotateToTarget(const UUPSAITask_AIRotateToTarget&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSAITask_AIRotateToTarget(UUPSAITask_AIRotateToTarget&&); \
	NO_API UUPSAITask_AIRotateToTarget(const UUPSAITask_AIRotateToTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSAITask_AIRotateToTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSAITask_AIRotateToTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSAITask_AIRotateToTarget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIC() { return STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, AIC); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, Character); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UUPSAITask_AIRotateToTarget, TargetActor); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_17_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSAITask_AIRotateToTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AITasks_UPSAITask_AIRotateToTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
