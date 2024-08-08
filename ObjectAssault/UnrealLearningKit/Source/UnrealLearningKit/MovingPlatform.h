// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()

//MovingPlatform is prefixed with an A signifying it is an Actor
class UNREALLEARNINGKIT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//to be able to see and edit in editor
	UPROPERTY(EditAnywhere)
	//add an integer variable
	int32 MyInt = 99;

	//to be able to see and edit in editor. Also, creates a category in the editor
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	//declaring a struct vector
	FVector VelocityVector = FVector(100, 0, -10);

	//to be able to see and edit in editor. Also, creates a category in the editor
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	//create a float for the moved distance
	float MovedDistance = 500;


	//variable for start location
	FVector StartLocation;

};
