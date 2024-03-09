// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	// Create the mesh component
	MallaNaveEnemigaCaza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveEnemigaCaza->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemigaCaza->SetupAttachment(RootComponent);
	RootComponent = MallaNaveEnemigaCaza;
}

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

