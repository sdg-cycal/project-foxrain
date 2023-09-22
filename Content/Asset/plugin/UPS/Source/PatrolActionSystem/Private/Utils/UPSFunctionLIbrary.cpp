// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSFunctionLIbrary.h"
#include "Animation/AnimMontage.h"
#if WITH_EDITOR
#include "Editor.h"
#endif
#include "PatrolPointScripts/UPSPatrolPointScript.h"
#include "Logging/TokenizedMessage.h"
#include "GameFramework/Actor.h"
#include "Misc/UObjectToken.h"
#include "Logging/MessageLog.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "NavMesh/RecastNavMesh.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Templates/SharedPointer.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"

float UUPSFunctionLIbrary::GetMontageSectionLength(UAnimMontage* Montage, FName SectionName /*= NAME_None*/)
{
	float returnValue = 0.f;

	if (Montage != nullptr && SectionName != NAME_None)
	{
		returnValue = Montage->GetSectionLength(Montage->GetSectionIndex(SectionName));
	}

	return returnValue;
}

float UUPSFunctionLIbrary::GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index)
{
	float returnValue = 0.f;

	if (Montage != nullptr)
	{
		returnValue = Montage->GetSectionLength(Index);
	}

	return returnValue;
}

UUPSEnemyAction* UUPSFunctionLIbrary::GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector)
{
	UUPSEnemyAction* returnAction = nullptr;

	if (EnemyActionSelector.bUseInstancedEnemyActions)
	{
		returnAction = EnemyActionSelector.InstancedEnemyAction;
	}
	else
	{
		returnAction = EnemyActionSelector.DAEnemyAction;
	}

	return returnAction;
}

UUPSPatrolPointScript* UUPSFunctionLIbrary::CreatePatrolScriptIntance(FPatrolPointScript Script)
{
	if (Script.PatrolPointScript != nullptr)
	{
		auto newScript = DuplicateObject<UUPSPatrolPointScript>(Script.PatrolPointScript, Script.PatrolPointScript->GetOuter());
		return newScript;
	}

	return nullptr;
}

void UUPSFunctionLIbrary::JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex)
{
	if (Character != nullptr && Montage != nullptr)
	{
		Character->GetMesh()->GetAnimInstance()->Montage_JumpToSection(Montage->GetSectionName(SectionIndex), Montage);
	}
}