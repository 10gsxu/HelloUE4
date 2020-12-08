// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "MyActor.generated.h"

UCLASS()
class HELLOUE4_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

USTRUCT(BlueprintType)
struct FTablePlayerData : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()
    
    UPROPERTY(BlueprintReadOnly, Category="PlayerTable")
    FString BuffName;
    
    UPROPERTY(BlueprintReadOnly, Category="PlayerTable")
    FString BuffDesc;
    
    UPROPERTY(BlueprintReadOnly, Category="PlayerTable")
    FString BuffType;
    
    UPROPERTY(BlueprintReadOnly, Category="PlayerTable")
    FString BuffUrl;
};
