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
	
private:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override; // "override" checks there is indeed a method called "Tick(float DeltaTime)" in the parent class that we are overwriting here.

	// Start the tank moving the barrel so that a shot would hit where thhe crosshair intersects the world.
	void AimTowardsCrosshair();

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitlocation(FVector& OutHitlocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.3333;
};
