// Fill out your copyright notice in the Description page of Project Settings.


#include "EspectroNodriza.h"
#include "NodrizaACtorBuilder.h"


// Sets default values
AEspectroNodriza::AEspectroNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEspectroNodriza::BeginPlay()
{
	Super::BeginPlay();
	
	Nave3 = GetWorld()->SpawnActor<ANodrizaActorBuilder>();
	Nave3->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AEspectroNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEspectroNodriza::builNave()
{
	Nave3->SetNave(3);
}

void AEspectroNodriza::builArmamento()
{
	Nave3->SetArmas(3);
}

void AEspectroNodriza::builEscudo()
{
	Nave3->SetEscudo(3);
}

void AEspectroNodriza::builForma()
{
	Nave3->SetForma(3);
}

ANodrizaActorBuilder* AEspectroNodriza::GetNaveNodriza()
{
	return Nave3;
}

