// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "UObject/ConstructorHelpers.h"

ABloqueLadrillo::ABloqueLadrillo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	// Load the static mesh for the brick block
	Tipo = ETipoBloque::Ladrillo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}
}
void ABloqueLadrillo::ComportamientoIndividual()
{
	// Implement the behavior for the brick block when it is hit by a bomb
	// For example, you might want to destroy the block or change its appearance
	UE_LOG(LogTemp, Warning, TEXT("BloqueLadrillo::ComportamientoIndividual called!"));
	SetActorScale3D(FVector(1.2f, 1.3f, 1.0f)); // anchura
}
void ABloqueLadrillo::ComportamientoGrupal()
{
	// Implement the behavior for the brick block when it is destroyed
	// For example, you might want to spawn a power-up or play a sound effect
	UE_LOG(LogTemp, Warning, TEXT("BloqueLadrillo::ComportamientoGrupal called!"));
	AddActorWorldOffset(FVector(0,50,0)); // moviminento al costado

}

