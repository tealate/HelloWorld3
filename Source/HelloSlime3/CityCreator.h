// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Class.h"
#include "CityCreator.generated.h"

//町を生成するアクター、のつもりだった何か
//空間をチャンクで区切りをつけて管理することで処理速度と管理効率を上げる目的で作った
//WorldCreatorHubというアクターコンポーネントにしたやつがあるのでそっちを使うこと

UCLASS()
class HELLOSLIME3_API ACityCreator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACityCreator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UClass* InstanceTarget;
	struct Chank
	{
		TArray<Chank*> ChildChank;
		TArray<Chank*> ParentChank;
		FVector MyLocationStart;
		FVector MyLocationEnd;
		FVector MyScale;
		int8 MyFloorNumber;
	};
	struct ChankGroup
	{
		Chank**** ChankVecList;
		int Count;
		float Scale;
		float Distance;
		int Centor;
	};
private:
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<int> ChankCount;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	float FirstChankScale;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<int> Slice;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<FColor> ChankColor;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	bool DrawChank;
	AActor* Chactor;
	TArray<int> CallCount;
	TArray<float> ChankScale;

	int counter[5] = {0,0,0,0,0};

	void DebugAtBoxList(ChankGroup** MyBoxList);
	void DebugAtLineList(const TArray<FVector>& LineList);
	void CityShadowMaker();
	void SponeMan(UClass* Target, TArray<FTransform>& Basyo);
	void ChankCreateMan(const FVector PLocate, bool Draw);
	UFUNCTION(BlueprintCallable)
	int GetChankCount();
	UFUNCTION(BlueprintCallable)
	TArray<int> CallCountMan();
	TArray<FTransform> BoxList;
	TArray<FVector> LineList;
	//TArray<Chank> ChankList;//全部のチャンクのリスト
	ChankGroup* ChankGroupList;//全チャンクのサイズごとの配列,アドレス格納の四重配列
	Chank** ChankList;//全部のチャンクの配列のサイズごとの配列
	TArray<Chank*>* EmptMemList;//チャンク配列の空いたインデックスを保管するやつ
	Chank* FirstSetChank(int dex, int x, int y, int z, float Size, FVector CentorPoint);//チャンクを配列の空いた位置にぶち込み太郎
	void DelChank(Chank* ChankTarget);
	FVector GetPlayerActor();
	//Chank** Counter;
};
