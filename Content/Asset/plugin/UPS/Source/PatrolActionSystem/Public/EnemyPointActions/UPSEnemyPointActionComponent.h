// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "UPSEnemyPointActionComponent.generated.h"

class UBillboardComponent;
class UArrowComponent;
class USkeletalMesh;
class UMaterialInterface;
class UTexture2D;
class USkeletalMeshComponent;
class UAnimationAsset;
class ACharacter;
class UAnimSequenceBase;

/*

	@see UUPSEnemyPointAction

	CanUsePointComponent() - Allows you to determine whether the character can use this point or not

*/


UCLASS(editinlinenew, meta = (BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSEnemyPointActionComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UUPSEnemyPointActionComponent();

	virtual void OnRegister() override;

	virtual void OnUnregister() override;

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	void SetPreviewAnim(UAnimationAsset* Anim, float InitTime = 0.f);

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	ACharacter* GetCharacterOnPoint() const;

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual void SetCharacterOnPoint(ACharacter* Character);

	USkeletalMeshComponent* GetSkeletalMeshComponent() const;

	virtual bool CanUsePointComponent(ACharacter* Character);

	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction")
	bool K2_CanUsePointComponent(ACharacter* Character);

protected:
	void RemoveComponent(TWeakObjectPtr <USceneComponent> Component);

protected:
	UPROPERTY()
	ACharacter* CharacterOnPoint;

	TWeakObjectPtr<UBillboardComponent> BillboardComponent;

	TWeakObjectPtr < UArrowComponent> ArrowComponent;

	TWeakObjectPtr < USkeletalMeshComponent> SkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSEnemyPointAction")
	FGameplayTag PointTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSEnemyPointAction")
	UAnimSequenceBase* PreviewAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f, UIMin = 0.f), Category = "UPSEnemyPointAction")
	float PreviewAnimStartTime = 0.f;;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0.1f, UIMin = 0.f), Category = "UPSEnemyPointAction")
	float ArrowSize = 1.f;
	
	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0.f, UIMin = 0.f), Category = "UPSEnemyPointAction")
	float ArrowOffset = 50.f;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0.1f, UIMin = 0.f), Category = "UPSEnemyPointAction")
	float BillboardSize = 2.f;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0.1f, UIMin = 0.f), Category = "UPSEnemyPointAction")
	FRotator MeshRotationOffset = FRotator(0.f, -90.f, 0.f);

	UPROPERTY(meta = (InlineEditConditionToggle))
	bool bOverrideProjectSettingsMesh = false;

	UPROPERTY(meta = (InlineEditConditionToggle))
	bool bOverrideProjectSettingsMaterial = false;

	UPROPERTY(meta = (InlineEditConditionToggle))
	bool bOverrideProjectSettingsSprite = false;

	//Override Value From UPSSettings in Project Settings
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "bOverrideProjectSettingsMesh"), Category = "UPSEnemyPointAction")
	USkeletalMesh* OverrideEnemyActionPointComponentMesh;

	//Override Value From UPSSettings in Project Settings
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "bOverrideProjectSettingsMaterial"), Category = "UPSEnemyPointAction")
	UMaterialInterface* OverrideEnemyActionPointComponentMeshMaterial;
	
	//Override Value From UPSSettings in Project Settings
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "bOverrideProjectSettingsSprite"), Category = "UPSEnemyPointAction")
	UTexture2D* OverrideEnemyActionPointComponentBillboardSprite;

private:
	bool bK2CanUsePointImplemented = false;
};
