// Fill out your copyright notice in the Description page of Project Settings.


#include "NemesisNodriza.h"
#include "NodrizaActorBuilder.h"
// Sets default values
ANemesisNodriza::ANemesisNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANemesisNodriza::BeginPlay()
{
	Super::BeginPlay();
	
	Nave2 = GetWorld()->SpawnActor<ANodrizaActorBuilder>();
	Nave2->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ANemesisNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANemesisNodriza::builNave()
{
	Nave2->SetNave(1);
}

void ANemesisNodriza::builArmamento()
{
	Nave2->SetArmas(1);
}

void ANemesisNodriza::builEscudo()
{
	Nave2->SetEscudo(1);
}

void ANemesisNodriza::builForma()
{
	Nave2->SetForma(1);
}

ANodrizaActorBuilder* ANemesisNodriza::GetNaveNodriza()
{
	return Nave2;
}