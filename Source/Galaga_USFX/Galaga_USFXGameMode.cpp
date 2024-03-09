// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"


AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	NaveEnemiga01 = nullptr;
	NaveEnemigaCaza01 = nullptr;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave = FVector(-900.0f, 50.0f, 150.0f);
	FVector ubicacionNaveCaza = FVector(-900.0f, 400.0f, 150.0f);
	
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	FRotator rotacionNaveCaza = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza, rotacionNaveCaza);
	}

	NaveEnemiga01->SetPosicion(FVector());
	NaveEnemigaCaza01->SetPosicion(FVector());

	/*Note que no es necesario crear nuevas ubicaciones para la x, y y z,
	ya que estas se encuentran definidos en:
	FVector ubicacionNave = FVector(-900.0f, 50.0f, 150.0f);
	FVector ubicacionNaveCaza = FVector(-900.0f, 400.0f, 150.0f);
	*/

}


