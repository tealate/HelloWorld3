// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "TameshiInstancedMesh.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class HELLOSLIME3_API UTameshiInstancedMesh : public UInstancedStaticMeshComponent
{
	GENERATED_BODY()
public:
	UTameshiInstancedMesh();
	UPROPERTY(Editanywhere)
	int InstCount = 10;

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	FTransform Setform;
	UPROPERTY(EditAnywhere)
	FVector FirstLoc;
	FVector SetLoc;
	UPROPERTY(EditAnywhere)
	int Distance = 500;
	UPROPERTY(EditAnywhere)
	int callcount = 100;
	TArray<FTransform> Forms;

	void DiamondSquare();
	void SetInst();
	void SetInstAtArray();
	//UPROPERTY(BluePrintCallable)
};
