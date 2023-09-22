// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSGroupMovementVisualizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGroupMovementVisualizer() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGroupVisualizationInfo();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSGroupMovementVisualizer_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSGroupMovementVisualizer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FGroupVisualizationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FGroupVisualizationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupVisualizationInfo, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("GroupVisualizationInfo"), sizeof(FGroupVisualizationInfo), Get_Z_Construct_UScriptStruct_FGroupVisualizationInfo_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FGroupVisualizationInfo>()
{
	return FGroupVisualizationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupVisualizationInfo(FGroupVisualizationInfo::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("GroupVisualizationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFGroupVisualizationInfo
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFGroupVisualizationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GroupVisualizationInfo")),new UScriptStruct::TCppStructOps<FGroupVisualizationInfo>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFGroupVisualizationInfo;
	struct Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nClass contains functions to check groups selection and visualization in editor\n*/" },
		{ "ModuleRelativePath", "Public/Utils/UPSGroupMovementVisualizer.h" },
		{ "ToolTip", "Class contains functions to check groups selection and visualization in editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupVisualizationInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"GroupVisualizationInfo",
		sizeof(FGroupVisualizationInfo),
		alignof(FGroupVisualizationInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupVisualizationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupVisualizationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupVisualizationInfo"), sizeof(FGroupVisualizationInfo), Get_Z_Construct_UScriptStruct_FGroupVisualizationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupVisualizationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupVisualizationInfo_Hash() { return 2220454602U; }
	void UUPSGroupMovementVisualizer::StaticRegisterNativesUUPSGroupMovementVisualizer()
	{
	}
	UClass* Z_Construct_UClass_UUPSGroupMovementVisualizer_NoRegister()
	{
		return UUPSGroupMovementVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/UPSGroupMovementVisualizer.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSGroupMovementVisualizer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSGroupMovementVisualizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::ClassParams = {
		&UUPSGroupMovementVisualizer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSGroupMovementVisualizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSGroupMovementVisualizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSGroupMovementVisualizer, 3179652380);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSGroupMovementVisualizer>()
	{
		return UUPSGroupMovementVisualizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSGroupMovementVisualizer(Z_Construct_UClass_UUPSGroupMovementVisualizer, &UUPSGroupMovementVisualizer::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSGroupMovementVisualizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSGroupMovementVisualizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
