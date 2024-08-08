// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	//Lines of code should be after Super::BeginPlay(); line
	Super::BeginPlay();

	//access the variables and update
	//MyInt = 9;

	//Setting the X of MyVector to MyX
	//MyVector.X = MyX;

	//set start location
	StartLocation = GetActorLocation();
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	//Lines of code should be after Super::Tick(DeltaTime); line
	Super::Tick(DeltaTime);

	//create a local variable
	//FVector LocalVector = FVector(2, 0, -0.5);




	//Move platform
		//Gets the current location of the actor
	FVector CurrentLocation = GetActorLocation();
		//change current location and multiply by DeltaTime to not make the game dependent on framerate
	CurrentLocation = CurrentLocation + VelocityVector * DeltaTime;
		//add vector to that location
	SetActorLocation(CurrentLocation);
	//Move platform back
		//Check how far we've moved
	float DistanceMoved = FVector::Dist(CurrentLocation, StartLocation);
		//Reverse direction
	if (DistanceMoved > MovedDistance)
	{
		
		//get the normal of the velocity vector
		FVector MoveDirection = VelocityVector.GetSafeNormal();
		//add the start location and the normal of the velocity vector
		StartLocation = StartLocation + MoveDirection * MovedDistance;
		//set the actor location to the start location
		SetActorLocation(StartLocation);
		//make the platform go the other way
		VelocityVector = -VelocityVector;
	}
	
	
	


	

		



}

