// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimationAsset;
#ifdef PATROLACTIONSYSTEM_UPSEnemyPointActionComponent_generated_h
#error "UPSEnemyPointActionComponent.generated.h already included, missing '#pragma once' in UPSEnemyPointActionComponent.h"
#endif
#define PATROLACTIONSYSTEM_UPSEnemyPointActionComponent_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCharacterOnPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterOnPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOnPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOnPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewAnim) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewAnim(Z_Param_Anim,Z_Param_InitTime); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCharacterOnPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterOnPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOnPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOnPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewAnim) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewAnim(Z_Param_Anim,Z_Param_InitTime); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_EVENT_PARMS \
	struct UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms \
	{ \
		ACharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSEnemyPointActionComponent(); \
	friend struct Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyPointActionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyPointActionComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUUPSEnemyPointActionComponent(); \
	friend struct Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyPointActionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyPointActionComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSEnemyPointActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSEnemyPointActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyPointActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyPointActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyPointActionComponent(UUPSEnemyPointActionComponent&&); \
	NO_API UUPSEnemyPointActionComponent(const UUPSEnemyPointActionComponent&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyPointActionComponent(UUPSEnemyPointActionComponent&&); \
	NO_API UUPSEnemyPointActionComponent(const UUPSEnemyPointActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyPointActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyPointActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPSEnemyPointActionComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOnPoint() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, CharacterOnPoint); } \
	FORCEINLINE static uint32 __PPO__PointTag() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, PointTag); } \
	FORCEINLINE static uint32 __PPO__PreviewAnim() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, PreviewAnim); } \
	FORCEINLINE static uint32 __PPO__PreviewAnimStartTime() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, PreviewAnimStartTime); } \
	FORCEINLINE static uint32 __PPO__ArrowSize() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, ArrowSize); } \
	FORCEINLINE static uint32 __PPO__ArrowOffset() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, ArrowOffset); } \
	FORCEINLINE static uint32 __PPO__BillboardSize() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, BillboardSize); } \
	FORCEINLINE static uint32 __PPO__MeshRotationOffset() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, MeshRotationOffset); } \
	FORCEINLINE static uint32 __PPO__bOverrideProjectSettingsMesh() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, bOverrideProjectSettingsMesh); } \
	FORCEINLINE static uint32 __PPO__bOverrideProjectSettingsMaterial() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, bOverrideProjectSettingsMaterial); } \
	FORCEINLINE static uint32 __PPO__bOverrideProjectSettingsSprite() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, bOverrideProjectSettingsSprite); } \
	FORCEINLINE static uint32 __PPO__OverrideEnemyActionPointComponentMesh() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentMesh); } \
	FORCEINLINE static uint32 __PPO__OverrideEnemyActionPointComponentMeshMaterial() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentMeshMaterial); } \
	FORCEINLINE static uint32 __PPO__OverrideEnemyActionPointComponentBillboardSprite() { return STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentBillboardSprite); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_29_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSEnemyPointActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSEnemyPointActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
