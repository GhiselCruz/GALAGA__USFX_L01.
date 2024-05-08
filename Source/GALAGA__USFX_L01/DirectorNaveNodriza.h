// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfaceBuilderNodriza.h"
#include "DirectorNaveNodriza.generated.h"
UCLASS()
class GALAGA__USFX_L01_API ADirectorNaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNaveNodriza();

	IInterfaceBuilderNodriza* Builder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/*void OrdenarBuilder(AActor* builder);
	void builNaveNodriza();
	void builNaveDestructora();
	void builNaveProtectora();*/
	
	class ANodrizaActorBuilder* GetNave(IInterfaceBuilderNodriza* builder);
};


