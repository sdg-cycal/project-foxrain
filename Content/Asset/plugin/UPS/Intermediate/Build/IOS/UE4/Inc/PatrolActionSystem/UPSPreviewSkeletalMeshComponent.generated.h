// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
#ifdef PATROLACTIONSYSTEM_UPSPreviewSkeletalMeshComponent_generated_h
#error "UPSPreviewSkeletalMeshComponent.generated.h already included, missing '#pragma once' in UPSPreviewSkeletalMeshComponent.h"
#endif
#define PATROLACTIONSYSTEM_UPSPreviewSkeletalMeshComponent_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_RPC_WRAPPERS \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSPreviewSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSPreviewSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPreviewSkeletalMeshComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUPSPreviewSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSPreviewSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPreviewSkeletalMeshComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPreviewSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPreviewSkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPreviewSkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPreviewSkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPreviewSkeletalMeshComponent(UUPSPreviewSkeletalMeshComponent&&); \
	NO_API UUPSPreviewSkeletalMeshComponent(const UUPSPreviewSkeletalMeshComponent&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPreviewSkeletalMeshComponent(UUPSPreviewSkeletalMeshComponent&&); \
	NO_API UUPSPreviewSkeletalMeshComponent(const UUPSPreviewSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPreviewSkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPreviewSkeletalMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPSPreviewSkeletalMeshComponent)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_15_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSPreviewSkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPreviewSkeletalMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
