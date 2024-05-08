// Fill out your copyright notice in the Description page of Project Settings.


#include "InfernoNodriza.h"
#include "NodrizaActorBuilder.h"
#include "MyActorArmas.h"
#include "MyActorProteccion.h"
#include "MyActorApariencia.h"

// Sets default values
AInfernoNodriza::AInfernoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called when the game starts or when spawned
void AInfernoNodriza::BeginPlay()
{
	Super::BeginPlay();
	Nave1 = GetWorld()->SpawnActor<ANodrizaActorBuilder>();

	Nave1->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AInfernoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInfernoNodriza::builNave()
{
	Nave1->SetNave(2);
}

void AInfernoNodriza::builArmamento()
{
	//Nave1->SetArmas(2);
}

void AInfernoNodriza::builEscudo()
{
	Nave1->SetEscudo(2);
	
}

void AInfernoNodriza::builForma()
{
	Nave1->SetForma(2);
}

ANodrizaActorBuilder* AInfernoNodriza::GetNaveNodriza()
{
	return Nave1;

}




