// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorProteccion.generated.h"

UCLASS()
class GALAGA__USFX_L01_API AMyActorProteccion : public AActor
{
	GENERATED_BODY()

public:
	UStaticMeshComponent* mallaProteccion;
	
public:	
	// Sets default values for this actor's properties
	AMyActorProteccion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
