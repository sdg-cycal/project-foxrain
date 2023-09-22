// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIRequestID;
struct FVector;
class ACharacter;
#ifdef PATROLACTIONSYSTEM_UPSMovementGroup_generated_h
#error "UPSMovementGroup.generated.h already included, missing '#pragma once' in UPSMovementGroup.h"
#endif
#define PATROLACTIONSYSTEM_UPSMovementGroup_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCharacterDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterDestroyed(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderCompleteMovement) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderCompleteMovement(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderStartMovementToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderStartMovementToActor(Z_Param_NewActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderStartMovementToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderStartMovementToLocation(Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeGroupMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeGroupMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLocationInFormationForCharacter) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLocationInFormationForCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGroupMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_MemberToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGroupMember(Z_Param_MemberToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGroupMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_NewMember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGroupMember(Z_Param_NewMember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupLeader) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_NewLeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupLeader(Z_Param_NewLeader); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharacterDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterDestroyed(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderCompleteMovement) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderCompleteMovement(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderStartMovementToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderStartMovementToActor(Z_Param_NewActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeaderStartMovementToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLeaderStartMovementToLocation(Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeGroupMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeGroupMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLocationInFormationForCharacter) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLocationInFormationForCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGroupMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_MemberToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGroupMember(Z_Param_MemberToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGroupMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_NewMember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGroupMember(Z_Param_NewMember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupLeader) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_NewLeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupLeader(Z_Param_NewLeader); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_EVENT_PARMS \
	struct UPSMovementGroup_eventK2_OnLeaderStartMovementToActor_Parms \
	{ \
		AActor* NewActor; \
	}; \
	struct UPSMovementGroup_eventK2_OnLeaderStartMovementToLocation_Parms \
	{ \
		FVector NewLocation; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSMovementGroup(); \
	friend struct Z_Construct_UClass_AUPSMovementGroup_Statics; \
public: \
	DECLARE_CLASS(AUPSMovementGroup, AUPSBasePatrolObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSMovementGroup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAUPSMovementGroup(); \
	friend struct Z_Construct_UClass_AUPSMovementGroup_Statics; \
public: \
	DECLARE_CLASS(AUPSMovementGroup, AUPSBasePatrolObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSMovementGroup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSMovementGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSMovementGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSMovementGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSMovementGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSMovementGroup(AUPSMovementGroup&&); \
	NO_API AUPSMovementGroup(const AUPSMovementGroup&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSMovementGroup(AUPSMovementGroup&&); \
	NO_API AUPSMovementGroup(const AUPSMovementGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSMovementGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSMovementGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSMovementGroup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GroupLeader() { return STRUCT_OFFSET(AUPSMovementGroup, GroupLeader); } \
	FORCEINLINE static uint32 __PPO__MovementGroupMembers() { return STRUCT_OFFSET(AUPSMovementGroup, MovementGroupMembers); } \
	FORCEINLINE static uint32 __PPO__bRotateMovementPointsAroundLeader() { return STRUCT_OFFSET(AUPSMovementGroup, bRotateMovementPointsAroundLeader); } \
	FORCEINLINE static uint32 __PPO__Formation() { return STRUCT_OFFSET(AUPSMovementGroup, Formation); } \
	FORCEINLINE static uint32 __PPO__MembersMovementReactionTime() { return STRUCT_OFFSET(AUPSMovementGroup, MembersMovementReactionTime); } \
	FORCEINLINE static uint32 __PPO__MembersMovementReactionTimeRandomDiviation() { return STRUCT_OFFSET(AUPSMovementGroup, MembersMovementReactionTimeRandomDiviation); } \
	FORCEINLINE static uint32 __PPO__GroupMovementLeaderAIC() { return STRUCT_OFFSET(AUPSMovementGroup, GroupMovementLeaderAIC); } \
	FORCEINLINE static uint32 __PPO__BillboardComponent() { return STRUCT_OFFSET(AUPSMovementGroup, BillboardComponent); } \
	FORCEINLINE static uint32 __PPO__SpawnedFormation() { return STRUCT_OFFSET(AUPSMovementGroup, SpawnedFormation); } \
	FORCEINLINE static uint32 __PPO__DelayedMovement() { return STRUCT_OFFSET(AUPSMovementGroup, DelayedMovement); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_27_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSMovementGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSMovementGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
