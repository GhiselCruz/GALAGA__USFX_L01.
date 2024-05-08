// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfaceBuilderNodrizaCompleja.h"
#include "NodrizaActorBuilder.generated.h"

UCLASS()
class GALAGA__USFX_L01_API ANodrizaActorBuilder : public AActor, public IInterfaceBuilderNodrizaCompleja
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ANodrizaActorBuilder();

	
	class AMyActorApariencia* Apariencia;
	class AMyActorProteccion* Proteccion;
	class AMyActorArmas* Armas;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SetNave(int x);
	void SetArmas(int y);
	void SetEscudo(int z);
	void SetForma(int w);

};
