// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceEnemyOne.h"

// Sets default values
ASpaceEnemyOne::ASpaceEnemyOne()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceEnemyOne::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceEnemyOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpaceEnemyOne::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

