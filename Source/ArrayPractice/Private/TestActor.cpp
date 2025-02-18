// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	InitializeArray(); 

	
}

void ATestActor::InitializeArray()
{
	IntArray.Init(10, 5);
	FString ArrayContent;
	for (int32 Num : IntArray)
	{
		ArrayContent += FString::FromInt(Num) + TEXT(" ");
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, ArrayContent);
}



