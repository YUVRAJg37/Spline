// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingSplineActor.h"

// Sets default values
AMovingSplineActor::AMovingSplineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingSplineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingSplineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

