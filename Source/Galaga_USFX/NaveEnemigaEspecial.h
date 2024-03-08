// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaEspecial.generated.h"

class UStaticMeshComponent;

UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspecial : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveEnemigaEspecialMesh;

private:
	float resistencia;
	float velocidadAtaque;
	float velocidadMovimiento;
	float dañoProducido;
	FString nombre;
	float tiempoDisparo;
	float poderEspecial;
	FVector posicion;

public:
	// Accediendo a los atributos privados 
	// Getters 
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidadAtaque() const { return velocidadAtaque; }
	FORCEINLINE float GetVelocidadMovimiento() const { return velocidadMovimiento; }
	FORCEINLINE float GetDañoProducido() const { return dañoProducido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetPoderEspecial() const { return poderEspecial; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	// Setters
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; }
	FORCEINLINE void SetVelocidadMovimiento(float _velocidadMovimiento) { velocidadMovimiento = _velocidadMovimiento; }
	FORCEINLINE void SetDañoProducido(float _dañoProducido) { dañoProducido = _dañoProducido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPoderEspecial(float _poderEspecial) { poderEspecial = _poderEspecial; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:	
	// Sets default values for this actor's properties
	ANaveEnemigaEspecial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
