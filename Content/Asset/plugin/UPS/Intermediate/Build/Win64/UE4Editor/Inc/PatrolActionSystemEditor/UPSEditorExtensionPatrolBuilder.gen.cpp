// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystemEditor/Public/Utils/UPSEditorExtensionPatrolBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEditorExtensionPatrolBuilder() {}
// Cross Module References
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_NoRegister();
	PATROLACTIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystemEditor();
// End Cross Module References
	void UUPSEditorExtensionPatrolBuilder::StaticRegisterNativesUUPSEditorExtensionPatrolBuilder()
	{
	}
	UClass* Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_NoRegister()
	{
		return UUPSEditorExtensionPatrolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWorldExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/UPSEditorExtensionPatrolBuilder.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSEditorExtensionPatrolBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEditorExtensionPatrolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::ClassParams = {
		&UUPSEditorExtensionPatrolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEditorExtensionPatrolBuilder, 1534387718);
	template<> PATROLACTIONSYSTEMEDITOR_API UClass* StaticClass<UUPSEditorExtensionPatrolBuilder>()
	{
		return UUPSEditorExtensionPatrolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEditorExtensionPatrolBuilder(Z_Construct_UClass_UUPSEditorExtensionPatrolBuilder, &UUPSEditorExtensionPatrolBuilder::StaticClass, TEXT("/Script/PatrolActionSystemEditor"), TEXT("UUPSEditorExtensionPatrolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEditorExtensionPatrolBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
