// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SkywalkerSceneSubsystem.generated.h"

/**
 *
 */
UCLASS()
class SKYWALKERSCENE_API USkywalkerSceneSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = SkywalkerScene)
	bool LoadLevel(const FName &InLevelName);

	UFUNCTION(BlueprintCallable, Category = SkywalkerScene)
	bool UnLoadLevel(const FName &InLevelName);
};
