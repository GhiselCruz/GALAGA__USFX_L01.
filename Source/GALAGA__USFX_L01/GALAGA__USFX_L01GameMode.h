// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "InterfaceBuilderNodriza.h"
#include "DirectorNaveNodriza.h"
#include "GALAGA__USFX_L01GameMode.generated.h"
class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaCazaG1;
class ANaveEnemigaCazaG2;
class ANaveEnemigaEspia;
class ANaveEnemigaEspiaG1;
class ANaveEnemigaEspiaG2;
class ANaveEnemigaNodriza;
class ANaveEnemigaNodrizaG1;
class ANaveEnemigaNodrizaG2;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaReabastecimientoG1;
class ANaveEnemigaReabastecimientoG2;
class ANaveEnemigaTransporte;
class ANaveEnemigaTransporteG1;
class AnaveEnemigaTransporteG2;


UCLASS(MinimalAPI)
class AGALAGA__USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA__USFX_L01GameMode();

	//Patron de dise�o builder
	IInterfaceBuilderNodriza* Builder1;
	IInterfaceBuilderNodriza* Builder2;
	IInterfaceBuilderNodriza* Builder3;

	class ADirectorNaveNodriza* Director;

public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCazaG1* NaveEnemigaCazaG101;
	ANaveEnemigaCazaG2* NaveEnemigaCazaG201;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaEspiaG1* NaveEnemigaEspiaG101;
	ANaveEnemigaEspiaG2* NaveEnemigaEspiaG201;
	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaNodrizaG1* NaveEnemigaNodrizaG101;
	ANaveEnemigaNodrizaG2* NaveEnemigaNodrizaG201;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveEnemigaReabastecimientoG1* NaveEnemigaReabastecimientoG101;
	ANaveEnemigaReabastecimientoG2* NaveEnemigaReabastecimientoG201;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaTransporteG1* NaveEnemigaTransporteG101;
	//ANaveEnemigaTransporteG2* NaveEnemigaTransporteG201;

protected:
	//called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TNavesEnemigas;
	TArray<ANaveEnemigaCaza*> TNavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TNavesEnemigasTransporte;

public:
	virtual void Tick(float DeltaTime) override;

};



