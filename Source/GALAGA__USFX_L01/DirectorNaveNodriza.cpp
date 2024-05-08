// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNaveNodriza.h"

// Sets default values
ADirectorNaveNodriza::ADirectorNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//
//void ADirectorNaveNodriza::OrdenarBuilder(AActor* builder)
//{
//	Builder =  Cast<IInterfaceBuilderNodriza>(builder);
//}
//
//void ADirectorNaveNodriza::builNaveNodriza()
//{
//	Builder->builNave(1);
//	Builder->builEscudo(1);
//	Builder->builArmamento(1);
//	Builder->builForma(1);
//}
//
//void ADirectorNaveNodriza::builNaveDestructora()
//{
//	Builder->builForma(2);
//	Builder->builEscudo(2);
//	Builder->builArmamento(2);
//}
//
//void ADirectorNaveNodriza::builNaveProtectora()
//{
//	Builder->builForma(3);
//	Builder->builEscudo(3);
//}

ANodrizaActorBuilder* ADirectorNaveNodriza::GetNave(IInterfaceBuilderNodriza* builder)
{
	Builder = Cast<IInterfaceBuilderNodriza>(builder);
	if(Builder)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Director"));
		Builder->builNave();
		Builder->builForma();
		Builder->builEscudo();
		Builder->builArmamento();
		return Builder->GetNaveNodriza();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("No hay director"));
		return nullptr;
	}
}


