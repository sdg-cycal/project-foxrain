// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSEnemyPointActionComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/ArrowComponent.h"
#include "Utils/UPSSettings.h"
#include "Materials/MaterialInterface.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "PatrolActionSystem.h"
#include "BlueprintNodeHelpers.h"

UUPSEnemyPointActionComponent::UUPSEnemyPointActionComponent()
{
	UClass* stopAtClass = UUPSEnemyPointActionComponent::StaticClass();
	bK2CanUsePointImplemented = BlueprintNodeHelpers::HasBlueprintFunction("K2_CanUsePointComponent", *this, *stopAtClass);
}

void UUPSEnemyPointActionComponent::OnRegister()
{
	Super::OnRegister();
	
	BillboardComponent = NewObject<UBillboardComponent>(GetOwner());
	BillboardComponent->RegisterComponent();
	BillboardComponent->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
	BillboardComponent->SetWorldScale3D(FVector(BillboardSize, BillboardSize, BillboardSize));
	BillboardComponent->SetSprite(bOverrideProjectSettingsSprite ? OverrideEnemyActionPointComponentBillboardSprite : UUPSSettings::Get()->EnemyActionPointComponentBillboardSprite.LoadSynchronous());
	BillboardComponent->SetHiddenInGame(true);

	ArrowComponent = NewObject<UArrowComponent>(GetOwner());
	ArrowComponent->RegisterComponent();
	ArrowComponent->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
	ArrowComponent->ArrowSize = ArrowSize;
	ArrowComponent->SetRelativeLocation(FVector(0.f, 0.f, ArrowOffset));
	ArrowComponent->SetHiddenInGame(true);

	SkeletalMeshComponent = NewObject<USkeletalMeshComponent>(GetOwner());
	SkeletalMeshComponent->RegisterComponent();
	SkeletalMeshComponent->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
	SkeletalMeshComponent->SetRelativeRotation(MeshRotationOffset);
	SkeletalMeshComponent->SetSkeletalMesh(bOverrideProjectSettingsMesh ? OverrideEnemyActionPointComponentMesh : UUPSSettings::Get()->EnemyActionPointComponentMesh.LoadSynchronous());
	SkeletalMeshComponent->SetHiddenInGame(true);

	if (SkeletalMeshComponent->SkeletalMesh != nullptr)
	{
		for (int32 materialIndex = 0; materialIndex < SkeletalMeshComponent->GetMaterials().Num(); ++materialIndex)
		{
			SkeletalMeshComponent->SetMaterial(materialIndex, bOverrideProjectSettingsMaterial ? OverrideEnemyActionPointComponentMeshMaterial : UUPSSettings::Get()->EnemyActionPointComponentMeshMaterial.LoadSynchronous());
		}
	}

	SetPreviewAnim(PreviewAnim, PreviewAnimStartTime);
}

void UUPSEnemyPointActionComponent::OnUnregister()
{
	Super::OnUnregister();

	SetVisibility(false, true);

	RemoveComponent(BillboardComponent);
	RemoveComponent(ArrowComponent);
	RemoveComponent(SkeletalMeshComponent);
}

void UUPSEnemyPointActionComponent::SetPreviewAnim(UAnimationAsset* Anim, float InitTime /*= 0.f*/)
{
	if (SkeletalMeshComponent != nullptr)
	{
		SkeletalMeshComponent->SetUpdateAnimationInEditor(true);
		SkeletalMeshComponent->OverrideAnimationData(Anim, false, false, InitTime, 0.f);
	}
}

ACharacter* UUPSEnemyPointActionComponent::GetCharacterOnPoint() const
{
	return CharacterOnPoint;
}

void UUPSEnemyPointActionComponent::SetCharacterOnPoint(ACharacter* Character)
{
	CharacterOnPoint = Character;
}

USkeletalMeshComponent* UUPSEnemyPointActionComponent::GetSkeletalMeshComponent() const
{
	if (SkeletalMeshComponent.IsValid())
	{
		return SkeletalMeshComponent.Get();
	}

	return nullptr;
}

bool UUPSEnemyPointActionComponent::CanUsePointComponent(ACharacter* Character)
{
	return CharacterOnPoint == nullptr && (!bK2CanUsePointImplemented || K2_CanUsePointComponent(Character));
}

void UUPSEnemyPointActionComponent::RemoveComponent(TWeakObjectPtr <USceneComponent> Component)
{
	if (!Component.IsValid())
	{
		return;
	}

	Component->DestroyComponent();
}
