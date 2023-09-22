// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSEditorDrawer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSEditorDrawer() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDrawerItemInfo();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEditorDrawer_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEditorDrawer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FDrawerItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDrawerItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawerItemInfo, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("DrawerItemInfo"), sizeof(FDrawerItemInfo), Get_Z_Construct_UScriptStruct_FDrawerItemInfo_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FDrawerItemInfo>()
{
	return FDrawerItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDrawerItemInfo(FDrawerItemInfo::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("DrawerItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFDrawerItemInfo
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFDrawerItemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DrawerItemInfo")),new UScriptStruct::TCppStructOps<FDrawerItemInfo>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFDrawerItemInfo;
	struct Z_Construct_UScriptStruct_FDrawerItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nNeed to draw some text in editor. To get drawer use UUPSEditorDrawer* Get() function\n*/" },
		{ "ModuleRelativePath", "Public/Utils/UPSEditorDrawer.h" },
		{ "ToolTip", "Need to draw some text in editor. To get drawer use UUPSEditorDrawer* Get() function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawerItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSEditorDrawer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDrawerItemInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::NewProp_World,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"DrawerItemInfo",
		sizeof(FDrawerItemInfo),
		alignof(FDrawerItemInfo),
		Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDrawerItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDrawerItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DrawerItemInfo"), sizeof(FDrawerItemInfo), Get_Z_Construct_UScriptStruct_FDrawerItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDrawerItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDrawerItemInfo_Hash() { return 1060124378U; }
	void UUPSEditorDrawer::StaticRegisterNativesUUPSEditorDrawer()
	{
	}
	UClass* Z_Construct_UClass_UUPSEditorDrawer_NoRegister()
	{
		return UUPSEditorDrawer::StaticClass();
	}
	struct Z_Construct_UClass_UUPSEditorDrawer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSEditorDrawer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSEditorDrawer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/UPSEditorDrawer.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSEditorDrawer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSEditorDrawer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSEditorDrawer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSEditorDrawer_Statics::ClassParams = {
		&UUPSEditorDrawer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUPSEditorDrawer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSEditorDrawer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSEditorDrawer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSEditorDrawer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSEditorDrawer, 3803290328);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSEditorDrawer>()
	{
		return UUPSEditorDrawer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSEditorDrawer(Z_Construct_UClass_UUPSEditorDrawer, &UUPSEditorDrawer::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSEditorDrawer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSEditorDrawer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
