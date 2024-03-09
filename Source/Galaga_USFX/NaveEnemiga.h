// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;	// Forward declaration

UCLASS()
class GALAGA_USFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemiga;

private:
	float energia;
	float vida;
	float resistencia;
	float velocidad;
	float danoProducido;
	FString nombre;
	float puntaje;
	float tiempoDisparo;
	FVector posicion;

public:
	// Getters 
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetPuntaje() const { return puntaje; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	// Setters
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
