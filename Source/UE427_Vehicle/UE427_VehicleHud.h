// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "UE427_VehicleHud.generated.h"


UCLASS(config = Game)
class AUE427_VehicleHud : public AHUD
{
	GENERATED_BODY()

public:
	AUE427_VehicleHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
