// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ClimbingComponent.generated.h"

/**
 * 
 */
UCLASS()
class CLIMBINGSYSTEM_API UClimbingComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UClimbingComponent();
private:
#pragma region ClimbTarces
	TArray<FHitResult>DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape = true);
#pragma endregion 
	
};
