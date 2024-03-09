// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Create the mesh component
	MallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = MallaNaveEnemiga;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{		
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
