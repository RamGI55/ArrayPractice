#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class ARRAYPRACTICE_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();
	TArray<int32> IntArray;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private: 
	// Initialize the array in the constructor
	void InitializeArray();
};
