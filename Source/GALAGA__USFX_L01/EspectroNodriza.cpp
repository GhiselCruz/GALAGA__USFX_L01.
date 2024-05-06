// Fill out your copyright notice in the Description page of Project Settings.


#include "EspectroNodriza.h"
#include "MyActorArmas.h"
#include "MyActorProteccion.h"
#include "MyActorApariencia.h"

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
	
}

// Called every frame
void AEspectroNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEspectroNodriza::builArmamento()
{

}

void AEspectroNodriza::builProteccion()
{

}

void AEspectroNodriza::builApariencia()
{
	FVector UbicacionApariencia = FVector(-900.0f, -1200.0f, 150.0f);
	FRotator RotacionApariencia = FRotator(0.0f, 180.0f, 0.0f);
	AMyActorApariencia* apariencia = GetWorld()->SpawnActor<AMyActorApariencia>(UbicacionApariencia, RotacionApariencia);
}

void AEspectroNodriza::builMovimiento()
{

}

ANodrizaActorBuilder* AEspectroNodriza::GetNodrizaActorBuilder()
{
	return nave3;

}

