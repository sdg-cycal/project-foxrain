// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyPointActions/UPSEnemyPointActionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEnemyPointActionComponent() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FName NAME_UUPSEnemyPointActionComponent_K2_CanUsePointComponent = FName(TEXT("K2_CanUsePointComponent"));
	bool UUPSEnemyPointActionComponent::K2_CanUsePointComponent(ACharacter* Character)
	{
		UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UUPSEnemyPointActionComponent_K2_CanUsePointComponent),&Parms);
		return !!Parms.ReturnValue;
	}
	void UUPSEnemyPointActionComponent::StaticRegisterNativesUUPSEnemyPointActionComponent()
	{
		UClass* Class = UUPSEnemyPointActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterOnPoint", &UUPSEnemyPointActionComponent::execGetCharacterOnPoint },
			{ "SetCharacterOnPoint", &UUPSEnemyPointActionComponent::execSetCharacterOnPoint },
			{ "SetPreviewAnim", &UUPSEnemyPointActionComponent::execSetPreviewAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics
	{
		struct UPSEnemyPointActionComponent_eventGetCharacterOnPoint_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointActionComponent_eventGetCharacterOnPoint_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyPointActionComponent, nullptr, "GetCharacterOnPoint", nullptr, nullptr, sizeof(UPSEnemyPointActionComponent_eventGetCharacterOnPoint_Parms), Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms), &Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyPointActionComponent, nullptr, "K2_CanUsePointComponent", nullptr, nullptr, sizeof(UPSEnemyPointActionComponent_eventK2_CanUsePointComponent_Parms), Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics
	{
		struct UPSEnemyPointActionComponent_eventSetCharacterOnPoint_Parms
		{
			ACharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointActionComponent_eventSetCharacterOnPoint_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyPointActionComponent, nullptr, "SetCharacterOnPoint", nullptr, nullptr, sizeof(UPSEnemyPointActionComponent_eventSetCharacterOnPoint_Parms), Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics
	{
		struct UPSEnemyPointActionComponent_eventSetPreviewAnim_Parms
		{
			UAnimationAsset* Anim;
			float InitTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::NewProp_InitTime = { "InitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointActionComponent_eventSetPreviewAnim_Parms, InitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSEnemyPointActionComponent_eventSetPreviewAnim_Parms, Anim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::NewProp_InitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "CPP_Default_InitTime", "0.000000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSEnemyPointActionComponent, nullptr, "SetPreviewAnim", nullptr, nullptr, sizeof(UPSEnemyPointActionComponent_eventSetPreviewAnim_Parms), Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister()
	{
		return UUPSEnemyPointActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEnemyActionPointComponentBillboardSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideEnemyActionPointComponentBillboardSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEnemyActionPointComponentMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideEnemyActionPointComponentMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEnemyActionPointComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideEnemyActionPointComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideProjectSettingsSprite_MetaData[];
#endif
		static void NewProp_bOverrideProjectSettingsSprite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideProjectSettingsSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideProjectSettingsMaterial_MetaData[];
#endif
		static void NewProp_bOverrideProjectSettingsMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideProjectSettingsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideProjectSettingsMesh_MetaData[];
#endif
		static void NewProp_bOverrideProjectSettingsMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideProjectSettingsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BillboardSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewAnimStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSEnemyPointActionComponent_GetCharacterOnPoint, "GetCharacterOnPoint" }, // 3077262820
		{ &Z_Construct_UFunction_UUPSEnemyPointActionComponent_K2_CanUsePointComponent, "K2_CanUsePointComponent" }, // 894552675
		{ &Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetCharacterOnPoint, "SetCharacterOnPoint" }, // 1239192243
		{ &Z_Construct_UFunction_UUPSEnemyPointActionComponent_SetPreviewAnim, "SetPreviewAnim" }, // 4230272012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/*\n\n\x09@see UUPSEnemyPointAction\n\n\x09""CanUsePointComponent() - Allows you to determine whether the character can use this point or not\n\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "ToolTip", "@see UUPSEnemyPointAction\n\nCanUsePointComponent() - Allows you to determine whether the character can use this point or not" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentBillboardSprite_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "Comment", "//Override Value From UPSSettings in Project Settings\n" },
		{ "EditCondition", "bOverrideProjectSettingsSprite" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "ToolTip", "Override Value From UPSSettings in Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentBillboardSprite = { "OverrideEnemyActionPointComponentBillboardSprite", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentBillboardSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentBillboardSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentBillboardSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMeshMaterial_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "Comment", "//Override Value From UPSSettings in Project Settings\n" },
		{ "EditCondition", "bOverrideProjectSettingsMaterial" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "ToolTip", "Override Value From UPSSettings in Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMeshMaterial = { "OverrideEnemyActionPointComponentMeshMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMesh_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "Comment", "//Override Value From UPSSettings in Project Settings\n" },
		{ "EditCondition", "bOverrideProjectSettingsMesh" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "ToolTip", "Override Value From UPSSettings in Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMesh = { "OverrideEnemyActionPointComponentMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, OverrideEnemyActionPointComponentMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite_MetaData[] = {
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite_SetBit(void* Obj)
	{
		((UUPSEnemyPointActionComponent*)Obj)->bOverrideProjectSettingsSprite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite = { "bOverrideProjectSettingsSprite", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUPSEnemyPointActionComponent), &Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial_MetaData[] = {
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial_SetBit(void* Obj)
	{
		((UUPSEnemyPointActionComponent*)Obj)->bOverrideProjectSettingsMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial = { "bOverrideProjectSettingsMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUPSEnemyPointActionComponent), &Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh_MetaData[] = {
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh_SetBit(void* Obj)
	{
		((UUPSEnemyPointActionComponent*)Obj)->bOverrideProjectSettingsMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh = { "bOverrideProjectSettingsMesh", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUPSEnemyPointActionComponent), &Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_MeshRotationOffset_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_MeshRotationOffset = { "MeshRotationOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, MeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_MeshRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_MeshRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_BillboardSize_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_BillboardSize = { "BillboardSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, BillboardSize), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_BillboardSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_BillboardSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowOffset_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowOffset = { "ArrowOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, ArrowOffset), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowSize_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, ArrowSize), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnimStartTime_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnimStartTime = { "PreviewAnimStartTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, PreviewAnimStartTime), METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnimStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnimStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnim_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnim = { "PreviewAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, PreviewAnim), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PointTag_MetaData[] = {
		{ "Category", "UPSEnemyPointAction" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PointTag = { "PointTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, PointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PointTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_CharacterOnPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSEnemyPointActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_CharacterOnPoint = { "CharacterOnPoint", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSEnemyPointActionComponent, CharacterOnPoint), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_CharacterOnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_CharacterOnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentBillboardSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_OverrideEnemyActionPointComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_bOverrideProjectSettingsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_MeshRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_BillboardSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_ArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnimStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PreviewAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_PointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::NewProp_CharacterOnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEnemyPointActionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::ClassParams = {
		&UUPSEnemyPointActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEnemyPointActionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEnemyPointActionComponent, 541900138);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSEnemyPointActionComponent>()
	{
		return UUPSEnemyPointActionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEnemyPointActionComponent(Z_Construct_UClass_UUPSEnemyPointActionComponent, &UUPSEnemyPointActionComponent::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSEnemyPointActionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEnemyPointActionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
