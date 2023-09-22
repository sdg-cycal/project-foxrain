// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UUPSMoveToEnemyPointAction;
struct FAIRequestID;
struct FVector;
struct FUPSMoveParams;
#ifdef PATROLACTIONSYSTEM_UPSMoveToEnemyPointAction_generated_h
#error "UPSMoveToEnemyPointAction.generated.h already included, missing '#pragma once' in UPSMoveToEnemyPointAction.h"
#endif
#define PATROLACTIONSYSTEM_UPSMoveToEnemyPointAction_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUPSMoveParams_Statics; \
	PATROLACTIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<struct FUPSMoveParams>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_17_DELEGATE \
struct _Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms \
{ \
	ACharacter* Character; \
	UUPSMoveToEnemyPointAction* MoveTask; \
	TEnumAsByte<EPathFollowingResult::Type> Result; \
}; \
static inline void FOnMovetoEnemyPointActionFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMovetoEnemyPointActionFinished, ACharacter* Character, UUPSMoveToEnemyPointAction* MoveTask, EPathFollowingResult::Type Result) \
{ \
	_Script_PatrolActionSystem_eventOnMovetoEnemyPointActionFinished_Parms Parms; \
	Parms.Character=Character; \
	Parms.MoveTask=MoveTask; \
	Parms.Result=Result; \
	OnMovetoEnemyPointActionFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bEndTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(Z_Param_bEndTask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPSMoveToLocation) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FUPSMoveParams,Z_Param_Out_MoveParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSMoveToEnemyPointAction**)Z_Param__Result=UUPSMoveToEnemyPointAction::UPSMoveToLocation(Z_Param_Character,Z_Param_Location,Z_Param_Out_MoveParams); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bEndTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(Z_Param_bEndTask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPSMoveToLocation) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FUPSMoveParams,Z_Param_Out_MoveParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSMoveToEnemyPointAction**)Z_Param__Result=UUPSMoveToEnemyPointAction::UPSMoveToLocation(Z_Param_Character,Z_Param_Location,Z_Param_Out_MoveParams); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSMoveToEnemyPointAction(); \
	friend struct Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics; \
public: \
	DECLARE_CLASS(UUPSMoveToEnemyPointAction, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSMoveToEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUUPSMoveToEnemyPointAction(); \
	friend struct Z_Construct_UClass_UUPSMoveToEnemyPointAction_Statics; \
public: \
	DECLARE_CLASS(UUPSMoveToEnemyPointAction, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSMoveToEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSMoveToEnemyPointAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSMoveToEnemyPointAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSMoveToEnemyPointAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSMoveToEnemyPointAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSMoveToEnemyPointAction(UUPSMoveToEnemyPointAction&&); \
	NO_API UUPSMoveToEnemyPointAction(const UUPSMoveToEnemyPointAction&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSMoveToEnemyPointAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSMoveToEnemyPointAction(UUPSMoveToEnemyPointAction&&); \
	NO_API UUPSMoveToEnemyPointAction(const UUPSMoveToEnemyPointAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSMoveToEnemyPointAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSMoveToEnemyPointAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSMoveToEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveChracter() { return STRUCT_OFFSET(UUPSMoveToEnemyPointAction, MoveChracter); } \
	FORCEINLINE static uint32 __PPO__MoveParams() { return STRUCT_OFFSET(UUPSMoveToEnemyPointAction, MoveParams); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_46_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSMoveToEnemyPointAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMoveToEnemyPointAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
