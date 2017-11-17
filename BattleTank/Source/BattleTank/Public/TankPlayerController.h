// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the  last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override; // "override" checks there is indeed a method called "Tick(float DeltaTime)" in the parent class that we are overwriting here.

	// Start the tank moving the barrel so that a shot would hit where thhe crosshair intersects the world.
	void AimTowardsCrosshair();
};
