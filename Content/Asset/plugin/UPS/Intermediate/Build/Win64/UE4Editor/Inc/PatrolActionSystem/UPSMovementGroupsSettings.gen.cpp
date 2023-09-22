// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSMovementGroupsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSMovementGroupsSettings() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSMovementGroupsSettings_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSMovementGroupsSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UUPSMovementGroupsSettings::StaticRegisterNativesUUPSMovementGroupsSettings()
	{
	}
	UClass* Z_Construct_UClass_UUPSMovementGroupsSettings_NoRegister()
	{
		return UUPSMovementGroupsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUPSMovementGroupsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMovementPointBBName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupMovementPointBBName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBetweenGroupMemberAndLeaderThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineBetweenGroupMemberAndLeaderThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBetweenGroupLeaderAndGroupActorThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineBetweenGroupLeaderAndGroupActorThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBetweenGroupMemberAndLeaderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineBetweenGroupMemberAndLeaderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBetweenGroupLeaderAndGroupActorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineBetweenGroupLeaderAndGroupActorColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utils/UPSMovementGroupsSettings.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_GroupMovementPointBBName_MetaData[] = {
		{ "Category", "BT Settings" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_GroupMovementPointBBName = { "GroupMovementPointBBName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMovementGroupsSettings, GroupMovementPointBBName), METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_GroupMovementPointBBName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_GroupMovementPointBBName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderThickness_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderThickness = { "LineBetweenGroupMemberAndLeaderThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMovementGroupsSettings, LineBetweenGroupMemberAndLeaderThickness), METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorThickness_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorThickness = { "LineBetweenGroupLeaderAndGroupActorThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMovementGroupsSettings, LineBetweenGroupLeaderAndGroupActorThickness), METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderColor_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderColor = { "LineBetweenGroupMemberAndLeaderColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMovementGroupsSettings, LineBetweenGroupMemberAndLeaderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorColor_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/UPSMovementGroupsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorColor = { "LineBetweenGroupLeaderAndGroupActorColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSMovementGroupsSettings, LineBetweenGroupLeaderAndGroupActorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_GroupMovementPointBBName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupMemberAndLeaderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::NewProp_LineBetweenGroupLeaderAndGroupActorColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSMovementGroupsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::ClassParams = {
		&UUPSMovementGroupsSettings::StaticClass,
		"UPSMovementGroupsSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSMovementGroupsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSMovementGroupsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSMovementGroupsSettings, 3886206532);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSMovementGroupsSettings>()
	{
		return UUPSMovementGroupsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSMovementGroupsSettings(Z_Construct_UClass_UUPSMovementGroupsSettings, &UUPSMovementGroupsSettings::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSMovementGroupsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSMovementGroupsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
