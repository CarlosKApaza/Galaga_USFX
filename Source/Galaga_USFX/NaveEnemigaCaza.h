// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCaza.generated.h"

class UstaticMeshComponent;	// Forward declaration

UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemigaCaza;

private:
	float vida;
	float energia;
	float resistencia;
	float velocidad;
	float disparoContinuo;
	float danoProducido;
	FString nombre;
	float tiempoDisparo;
	float tiempoDisparoContinuo;
	float tiempoDisparoContinuoMax;
	float tiempoDisparoContinuoMin;
	FVector posicion;

public:
	//getters
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDisparoContinuo() const { return disparoContinuo; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetTiempoDisparoContinuo() const { return tiempoDisparoContinuo; }
	FORCEINLINE float GetTiempoDisparoContinuoMax() const { return tiempoDisparoContinuoMax; }
	FORCEINLINE float GetTiempoDisparoContinuoMin() const { return tiempoDisparoContinuoMin; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	//setters
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDisparoContinuo(float _disparoContinuo) { disparoContinuo = _disparoContinuo; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetTiempoDisparoContinuo(float _tiempoDisparoContinuo) { tiempoDisparoContinuo = _tiempoDisparoContinuo; }
	FORCEINLINE void SetTiempoDisparoContinuoMax(float _tiempoDisparoContinuoMax) { tiempoDisparoContinuoMax = _tiempoDisparoContinuoMax; }
	FORCEINLINE void SetTiempoDisparoContinuoMin(float _tiempoDisparoContinuoMin) { tiempoDisparoContinuoMin = _tiempoDisparoContinuoMin; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }


public:	
	// Sets default values for this actor's properties
	ANaveEnemigaCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
