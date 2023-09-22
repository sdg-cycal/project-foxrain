// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Components/UPSPreviewSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPreviewSkeletalMeshComponent() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void UUPSPreviewSkeletalMeshComponent::StaticRegisterNativesUUPSPreviewSkeletalMeshComponent()
	{
		UClass* Class = UUPSPreviewSkeletalMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPreviewAnim", &UUPSPreviewSkeletalMeshComponent::execSetPreviewAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics
	{
		struct UPSPreviewSkeletalMeshComponent_eventSetPreviewAnim_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::NewProp_InitTime = { "InitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPreviewSkeletalMeshComponent_eventSetPreviewAnim_Parms, InitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPreviewSkeletalMeshComponent_eventSetPreviewAnim_Parms, Anim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::NewProp_InitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "CPP_Default_InitTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Components/UPSPreviewSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent, nullptr, "SetPreviewAnim", nullptr, nullptr, sizeof(UPSPreviewSkeletalMeshComponent_eventSetPreviewAnim_Parms), Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_NoRegister()
	{
		return UUPSPreviewSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSPreviewSkeletalMeshComponent_SetPreviewAnim, "SetPreviewAnim" }, // 2381210060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/*\nHas SetPreviewAnim function with update in editor\n*/" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "Components/UPSPreviewSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UPSPreviewSkeletalMeshComponent.h" },
		{ "ToolTip", "Has SetPreviewAnim function with update in editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPreviewSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::ClassParams = {
		&UUPSPreviewSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPreviewSkeletalMeshComponent, 1529567759);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPreviewSkeletalMeshComponent>()
	{
		return UUPSPreviewSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPreviewSkeletalMeshComponent(Z_Construct_UClass_UUPSPreviewSkeletalMeshComponent, &UUPSPreviewSkeletalMeshComponent::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPreviewSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPreviewSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
