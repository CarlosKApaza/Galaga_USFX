// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	// Create the mesh component
	MallaNaveEnemigaTransporte = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveEnemigaTransporte->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemigaTransporte->SetupAttachment(RootComponent);
	RootComponent = MallaNaveEnemigaTransporte;
}

// Called when the game starts or when spawned
void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

