// Fill out your copyright notice in the Description page of Project Settings.


#include "My_PlayerTest.h"

// Sets default values
AMy_PlayerTest::AMy_PlayerTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMy_PlayerTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy_PlayerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMy_PlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

