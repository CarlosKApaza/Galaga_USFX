// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigoEspecial.generated.h"

class UstaticMeshComponent; // Forward declaration

UCLASS()
class GALAGA_USFX_API ANaveEnemigoEspecial : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemigoEspecial;

private:

	float vida;
	float energia;
	float resistencia;
	float velocidad;
	float danoExplocion;
	float tiempoExplocion;
	float tiempoExplocionMax;
	float tiempoExplocionMin;
	FVector posicion;

public:

	//getters
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoExplocion() const { return danoExplocion; }
	FORCEINLINE float GetTiempoExplocion() const { return tiempoExplocion; }
	FORCEINLINE float GetTiempoExplocionMax() const { return tiempoExplocionMax; }
	FORCEINLINE float GetTiempoExplocionMin() const { return tiempoExplocionMin; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	//setters
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoExplocion(float _danoExplocion) { danoExplocion = _danoExplocion; }
	FORCEINLINE void SetTiempoExplocion(float _tiempoExplocion) { tiempoExplocion = _tiempoExplocion; }
	FORCEINLINE void SetTiempoExplocionMax(float _tiempoExplocionMax) { tiempoExplocionMax = _tiempoExplocionMax; }
	FORCEINLINE void SetTiempoExplocionMin(float _tiempoExplocionMin) { tiempoExplocionMin = _tiempoExplocionMin; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:	
	// Sets default values for this actor's properties
	ANaveEnemigoEspecial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
