// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
protected:
	//How close AI Tank can get close
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float AcceptanceRadius = 8000;
private:

	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;
	UFUNCTION()
		void OnPossedTankDeath();
};
