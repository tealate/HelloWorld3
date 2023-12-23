// Fill out your copyright notice in the Description page of Project Settings.


#include "TameshiInstancedMesh.h"
#include "Kismet/KismetSystemLibrary.h"

UTameshiInstancedMesh::UTameshiInstancedMesh()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTameshiInstancedMesh::BeginPlay()
{
    /*for(int i = 0;i < InstCount; i++)
    {
        SetLoc = SetLoc + FVector(1000,0,0);
        Setform.SetLocation(SetLoc);
        AddInstance(Setform);
    }*/
}

void UTameshiInstancedMesh::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    static int delaycount = 0;
    static int delaycountatinst = 0;
    if(delaycount == 100)SetInstAtArray();
    if(delaycount == 200)AddInstances(Forms,false);
    /*if(counterx < InstCount){
        for(int i = 0;i < 3; i++)
        {
            SetLoc = SetLoc + FVector(1000,0,0);
            Setform.SetLocation(SetLoc);
            AddInstance(Setform);
        }
    }*/
    delaycount++;
    delaycountatinst++;
}
void UTameshiInstancedMesh::SetInst()
{
    static int counterx = 0;
    static int countery = 0;
    static int counterz = 0;
    static int countman = 0;
    static bool kasu = false;
    countman++;
    if(countman < 100)return;
    for(int i = 0; i < callcount; i++)
    {
        if(kasu)break;
        if(counterx < InstCount)
        {
            counterx++;
        }
        else
        {
            counterx = 0;
            if(countery < InstCount)
            {
                countery++;
            }
            else
            {
                countery = 0;
                if(counterz < InstCount)
                {
                    counterz++;
                }
                else
                {
                    kasu = true;
                    break;
                }
            }
        }
        SetLoc = FirstLoc + FVector(Distance * counterx, Distance * countery, Distance * counterz);
        Setform.SetLocation(SetLoc);
        AddInstance(Setform);
    }
}
void UTameshiInstancedMesh::SetInstAtArray()
{
    for(int i = 0; i < InstCount; i++)
    {
        for(int j = 0; j < InstCount; j++)
        {
            for(int l = 0; l < InstCount; l++)
            {
                SetLoc = FirstLoc + FVector(Distance * i, Distance * j, Distance * l);
                Setform.SetLocation(SetLoc);
                Forms.Add(Setform);
            }
        }
    }
}