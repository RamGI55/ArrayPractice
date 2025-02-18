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
	/*InitializeArray();
	StringArray(); */
	HeapSorting(); 

	
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

void ATestActor::StringArray()
{
	StrArr.Add(TEXT("Hello"));
	StrArr.Emplace(TEXT("World!")); 

	FString StringContent;
	for (auto& Str : StrArr)
	{
		StringContent += Str; 
		StringContent += TEXT(" ");
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, StringContent);

}

// the function show how heap sorting works. 
void ATestActor::HeapSorting()
{
	for (int32 Val = 10; Val != 0; --Val)
	{
		HeapArr.Add(Val);
	}
	// Heap sorting the array. 
	HeapArr.Heapify();
	
	// Push the 5 on the tree 
	HeapArr.HeapPush(5);

	// Pop the Top Node of the tree 
	int32 TopNode;
	HeapArr.HeapPop(TopNode);
	HeapArr.HeapPopDiscard();


	HeapArr.HeapTop(); 
	// Print the sorting result to the debug print string. 
	FString ArrayCont;
	for (int32 Val : HeapArr)
	{
		ArrayCont += FString::FromInt(Val) + TEXT(" ");
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ArrayCont);
}






