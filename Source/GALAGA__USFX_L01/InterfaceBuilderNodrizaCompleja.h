// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfaceBuilderNodrizaCompleja.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfaceBuilderNodrizaCompleja : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA__USFX_L01_API IInterfaceBuilderNodrizaCompleja
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetNave(int x) = 0;
	virtual void SetArmas(int y) = 0;
	virtual void SetEscudo(int z) = 0;
	virtual void SetForma(int w) = 0;
};
