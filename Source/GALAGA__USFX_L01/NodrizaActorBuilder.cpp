// Fill out your copyright notice in the Description page of Project Settings.


#include "NodrizaActorBuilder.h"
#include "MyActorApariencia.h"
#include "MyActorProteccion.h"
#include "MyActorArmas.h"

// Sets default values
ANodrizaActorBuilder::ANodrizaActorBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANodrizaActorBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANodrizaActorBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANodrizaActorBuilder::SetNave(int x)
{
	FVector UbicacionApariencia = FVector(70.0f, 0.0f, 150.0f);
	FRotator RotacionApariencia = FRotator(0.0f, 180.0f, 0.0f);

	FVector UbicacionApariencia1 = FVector(-900.0f, -1200.0f, 150.0f);
	FRotator RotacionApariencia1 = FRotator(0.0f, 180.0f, 0.0f);

	FVector UbicacionApariencia2 = FVector(1500.0f, 180.0f, 150.0f);
	FRotator RotacionApariencia2 = FRotator(0.0f, 180.0f, 0.0f);

	switch (x)
	{
	case 1 :
		Apariencia = GetWorld()->SpawnActor<AMyActorApariencia>();
		
		Apariencia->SetActorLocation(UbicacionApariencia);
		Apariencia->SetActorRotation(RotacionApariencia);

		break;


	case 2:
		Apariencia = GetWorld()->SpawnActor<AMyActorApariencia>();

		Apariencia->SetActorLocation(UbicacionApariencia1);
		Apariencia->SetActorRotation(RotacionApariencia1);

		break;


	case 3:
		Apariencia = GetWorld()->SpawnActor<AMyActorApariencia>();

		Apariencia->SetActorLocation(UbicacionApariencia2);
		Apariencia->SetActorRotation(RotacionApariencia2);

		break;
	}
}

void ANodrizaActorBuilder::SetArmas(int y)
{
	FVector UbicacionArma = FVector(-450.0f, -50.0f, 150.0f);

	FVector UbicacionArma1 = FVector(-350.0f, 10.0f, 150.0f);


	switch (y)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			Armas = GetWorld()->SpawnActor<AMyActorArmas>();

			Armas->SetActorLocation(UbicacionArma);
			UbicacionArma.Y = UbicacionArma.Y + 100.0f;
			//UbicacionArma1.Y = UbicacionArma1.Y - 600.0f;
		}


	case 2:
		Armas = GetWorld()->SpawnActor<AMyActorArmas>();
		UbicacionArma = FVector(-1200.0f, -1200.0f, 150.0f);
		Armas->SetActorLocation(UbicacionArma);
		//UbicacionArma.Y = UbicacionArma.Y + 100.0f;
		break;

	case 3:
		break;
		
	default:
		break;

	}
}

void ANodrizaActorBuilder::SetEscudo(int z)
{
	FVector UbicacionProteccion = FVector(-250.0f, 0.0f, 150.0f);
	
	FVector UbicacionProteccion1 = FVector(1200.0f, 190.0f, 150.0f);

	switch (z)
	{
	case 1:
		Proteccion = GetWorld()->SpawnActor<AMyActorProteccion>();

		Proteccion->SetActorLocation(UbicacionProteccion);

		break;


	case 2:
		for (int i = 0; i < 3; i++)
		{
			Proteccion = GetWorld()->SpawnActor<AMyActorProteccion>();

			Proteccion->SetActorLocation(UbicacionProteccion1);
			//UbicacionProteccion1.Y = UbicacionProteccion.Y + 300.0f;
		}

		break;


	case 3:

		break;

	default:
		break;
	}
}

void ANodrizaActorBuilder::SetForma(int w)
{

}

