// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspecial.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemigoEspecial::ANaveEnemigoEspecial()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	// Create the mesh component
	MallaNaveEnemigoEspecial = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveEnemigoEspecial->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemigoEspecial->SetupAttachment(RootComponent);
	RootComponent = MallaNaveEnemigoEspecial;
}

// Called when the game starts or when spawned
void ANaveEnemigoEspecial::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigoEspecial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

