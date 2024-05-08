// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfaceBuilderNodriza.h"
#include "NemesisNodriza.generated.h"
UCLASS()
class GALAGA__USFX_L01_API ANemesisNodriza : public AActor, public IInterfaceBuilderNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANemesisNodriza();

	class ANodrizaActorBuilder* Nave2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void builNave() override;
	void builArmamento() override;
	void builEscudo() override;
	void builForma() override;

	class ANodrizaActorBuilder* GetNaveNodriza();
};
