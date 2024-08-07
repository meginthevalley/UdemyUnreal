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
	
	//Setting the Y of MyVector to MyY
	//MyVector.Y = MyY;

	//Setting the Y of MyVector to MyY
	//MyVector.Z = MyZ;

	//Add a new function for setting the location of the actor
	//SetActorLocation(MyVector);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	//Lines of code should be after Super::Tick(DeltaTime); line
	Super::Tick(DeltaTime);

	//create a local variable
	FVector LocalVector = FVector(2, 0, -0.1);

	//add the vectors
	//MyVector = MyVector + LocalVector;

	//Change Z location of MyVector
	//MyVector.Z = MyVector.Z + 1;

	//Change Y location of MyVector
	//MyVector.Y = MyVector.Y + 1;

	//Change Actor Location
	//SetActorLocation(MyVector);

	//Move platform
		//Gets the current location of the actor
	FVector CurrentLocation = GetActorLocation();
		//change current location
	CurrentLocation = CurrentLocation + LocalVector;
		//add vector to that location
	SetActorLocation(CurrentLocation);
	

		



}

