// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUPSEnemyPointAction;
class ACharacter;
class UUPSEnemyPointActionComponent;
#ifdef PATROLACTIONSYSTEM_UPSEnemyPointAction_generated_h
#error "UPSEnemyPointAction.generated.h already included, missing '#pragma once' in UPSEnemyPointAction.h"
#endif
#define PATROLACTIONSYSTEM_UPSEnemyPointAction_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_55_DELEGATE \
struct _Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms \
{ \
	AUPSEnemyPointAction* EnemyPointAction; \
	ACharacter* Character; \
}; \
static inline void FOnEnemyPointActionFinished_DelegateWrapper(const FScriptDelegate& OnEnemyPointActionFinished, AUPSEnemyPointAction* EnemyPointAction, ACharacter* Character) \
{ \
	_Script_PatrolActionSystem_eventOnEnemyPointActionFinished_Parms Parms; \
	Parms.EnemyPointAction=EnemyPointAction; \
	Parms.Character=Character; \
	OnEnemyPointActionFinished.ProcessDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStartPointAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartPointAction(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterReachPoint(Z_Param_Character,Z_Param_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyPointActionComponent**)Z_Param__Result=P_THIS->GetCharacterPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreeEnemyActionPointComponent) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyPointActionComponent**)Z_Param__Result=P_THIS->GetFreeEnemyActionPointComponent(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFreePointComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFreePointComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyActionPointComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UUPSEnemyPointActionComponent*>*)Z_Param__Result=P_THIS->GetEnemyActionPointComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPointActionForCharacter) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPointActionForCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllCharactersReachPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllCharactersReachPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishPointAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishPointAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVisualization) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableVisualization(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersStartedPointAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersStartedPointAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersGoingToPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersGoingToPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersReachedPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersReachedPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortEnemyPointAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortEnemyPointAction(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEnemyPointAction) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnPointActionFinishedCallback); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartEnemyPointAction(FOnEnemyPointActionFinished(Z_Param_OnPointActionFinishedCallback),Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStartPointAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartPointAction(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterReachPoint(Z_Param_Character,Z_Param_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyPointActionComponent**)Z_Param__Result=P_THIS->GetCharacterPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFreeEnemyActionPointComponent) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyPointActionComponent**)Z_Param__Result=P_THIS->GetFreeEnemyActionPointComponent(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFreePointComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFreePointComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyActionPointComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UUPSEnemyPointActionComponent*>*)Z_Param__Result=P_THIS->GetEnemyActionPointComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPointActionForCharacter) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPointActionForCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllCharactersReachPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllCharactersReachPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishPointAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishPointAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVisualization) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableVisualization(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersStartedPointAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersStartedPointAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersGoingToPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersGoingToPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharactersReachedPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetCharactersReachedPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortEnemyPointAction) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortEnemyPointAction(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEnemyPointAction) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnPointActionFinishedCallback); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartEnemyPointAction(FOnEnemyPointActionFinished(Z_Param_OnPointActionFinishedCallback),Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_EVENT_PARMS \
	struct UPSEnemyPointAction_eventK2_AbortEnemyPointAction_Parms \
	{ \
		ACharacter* Character; \
	}; \
	struct UPSEnemyPointAction_eventK2_CanStartPointAction_Parms \
	{ \
		ACharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UPSEnemyPointAction_eventK2_CanStartPointAction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UPSEnemyPointAction_eventK2_ClearPointActionForCharacter_Parms \
	{ \
		ACharacter* Character; \
	}; \
	struct UPSEnemyPointAction_eventK2_OnCharacterReachPoint_Parms \
	{ \
		ACharacter* Character; \
		bool bSuccess; \
	}; \
	struct UPSEnemyPointAction_eventK2_StartEnemyPointAction_Parms \
	{ \
		ACharacter* Character; \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSEnemyPointAction(); \
	friend struct Z_Construct_UClass_AUPSEnemyPointAction_Statics; \
public: \
	DECLARE_CLASS(AUPSEnemyPointAction, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_INCLASS \
private: \
	static void StaticRegisterNativesAUPSEnemyPointAction(); \
	friend struct Z_Construct_UClass_AUPSEnemyPointAction_Statics; \
public: \
	DECLARE_CLASS(AUPSEnemyPointAction, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSEnemyPointAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSEnemyPointAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSEnemyPointAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSEnemyPointAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSEnemyPointAction(AUPSEnemyPointAction&&); \
	NO_API AUPSEnemyPointAction(const AUPSEnemyPointAction&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSEnemyPointAction(AUPSEnemyPointAction&&); \
	NO_API AUPSEnemyPointAction(const AUPSEnemyPointAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSEnemyPointAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSEnemyPointAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSEnemyPointAction)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultEnemyPointActionComponent() { return STRUCT_OFFSET(AUPSEnemyPointAction, DefaultEnemyPointActionComponent); } \
	FORCEINLINE static uint32 __PPO__RootSceneComponent() { return STRUCT_OFFSET(AUPSEnemyPointAction, RootSceneComponent); } \
	FORCEINLINE static uint32 __PPO__EnemyActionPointComponents() { return STRUCT_OFFSET(AUPSEnemyPointAction, EnemyActionPointComponents); } \
	FORCEINLINE static uint32 __PPO__CharactersReachedPoint() { return STRUCT_OFFSET(AUPSEnemyPointAction, CharactersReachedPoint); } \
	FORCEINLINE static uint32 __PPO__CharacterMovementHandlers() { return STRUCT_OFFSET(AUPSEnemyPointAction, CharacterMovementHandlers); } \
	FORCEINLINE static uint32 __PPO__CharactersStartedPointAction() { return STRUCT_OFFSET(AUPSEnemyPointAction, CharactersStartedPointAction); } \
	FORCEINLINE static uint32 __PPO__MovementHandlerClass() { return STRUCT_OFFSET(AUPSEnemyPointAction, MovementHandlerClass); } \
	FORCEINLINE static uint32 __PPO__PointTag() { return STRUCT_OFFSET(AUPSEnemyPointAction, PointTag); } \
	FORCEINLINE static uint32 __PPO__bFinishActionAfterCharacterAbort() { return STRUCT_OFFSET(AUPSEnemyPointAction, bFinishActionAfterCharacterAbort); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_57_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSEnemyPointAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
