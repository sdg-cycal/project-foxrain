// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidget;
class UUPSPatrolBuilder;
#ifdef PATROLACTIONSYSTEMEDITOR_UPSPatrolBuilder_generated_h
#error "UPSPatrolBuilder.generated.h already included, missing '#pragma once' in UPSPatrolBuilder.h"
#endif
#define PATROLACTIONSYSTEMEDITOR_UPSPatrolBuilder_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_21_DELEGATE \
static inline void FOnPatrolBuildFailed_DelegateWrapper(const FMulticastScriptDelegate& OnPatrolBuildFailed) \
{ \
	OnPatrolBuildFailed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbortBuilding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortBuilding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishBuilding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishBuilding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPatrolBuilder) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidget,Z_Param_EditorUtilityWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSPatrolBuilder**)Z_Param__Result=UUPSPatrolBuilder::RunPatrolBuilder(Z_Param_EditorUtilityWidget); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbortBuilding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortBuilding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishBuilding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishBuilding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPatrolBuilder) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidget,Z_Param_EditorUtilityWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSPatrolBuilder**)Z_Param__Result=UUPSPatrolBuilder::RunPatrolBuilder(Z_Param_EditorUtilityWidget); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSPatrolBuilder(); \
	friend struct Z_Construct_UClass_UUPSPatrolBuilder_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolBuilder, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolBuilder)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUPSPatrolBuilder(); \
	friend struct Z_Construct_UClass_UUPSPatrolBuilder_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolBuilder, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolBuilder)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolBuilder(UUPSPatrolBuilder&&); \
	NO_API UUPSPatrolBuilder(const UUPSPatrolBuilder&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolBuilder(UUPSPatrolBuilder&&); \
	NO_API UUPSPatrolBuilder(const UUPSPatrolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolBuilder)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatrolBuilderEditorExtension() { return STRUCT_OFFSET(UUPSPatrolBuilder, PatrolBuilderEditorExtension); } \
	FORCEINLINE static uint32 __PPO__ProxyTaskOwner() { return STRUCT_OFFSET(UUPSPatrolBuilder, ProxyTaskOwner); } \
	FORCEINLINE static uint32 __PPO__SpawnedPatrolPoints() { return STRUCT_OFFSET(UUPSPatrolBuilder, SpawnedPatrolPoints); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_23_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEMEDITOR_API UClass* StaticClass<class UUPSPatrolBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystemEditor_Public_Utils_UPSPatrolBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
