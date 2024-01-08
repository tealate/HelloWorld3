// Fill out your copyright notice in the Description page of Project Settings.


#include "TameshiInstancedMesh.h"
#include "Async/Async.h"
#include "Kismet/KismetSystemLibrary.h"
#include <future>

#include "TameshiInstancedMesh.h"

UTameshiInstancedMesh::UTameshiInstancedMesh()
{
    PrimaryComponentTick.bCanEverTick = true;
    //SetInstAtArray();
    //AddInstances(Forms, false);
}

void UTameshiInstancedMesh::BeginPlay()
{
    /*MapPoint = MapMakerHub(FVector(0,0,0), 10000, 50, 100);
    MapPointVec = MapPointToVector(MapPoint, DrowCount, 100, FVector(0,0,0));
    //DebugMapDrawMan(MapPoint, FColor::Red, DrowCount, 1000/DrowCount);
    for(int i = 0;i < DrowCount; i++)
    {
        for( int j = 0; j < DrowCount; j++)
        {
            Setform.SetLocation(MapPointVec[i][j]);
            Forms.Add(Setform);
        }
    }
    AddInstances(Forms, false);*/
}

void UTameshiInstancedMesh::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    //DebugMapDrawMan(MapPoint, FColor::Red, DrowCount, 1000/DrowCount);
    /*static int delaycount = 0;
    static int delaycountatinst = 0;

    if(delaycount == 100) SetInstAtArray();
    if(delaycount == 200)
    {
        AddInstances(Forms, false);
    }

    delaycount++;
    delaycountatinst++;*/
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
void UTameshiInstancedMesh::CreateInstances(TArray<FTransform>& InstancesToCreate, int amount)
{
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            for(int l = 0; l < amount; l++)
            {
                SetLoc = FirstLoc + FVector(Distance * i, Distance * j, Distance * l);
                Setform.SetLocation(SetLoc);
                InstancesToCreate.Add(Setform);
            }
        }
    }
}
FMapPoint** UTameshiInstancedMesh::MapMakerHub(FVector FirstPoint, float MakeDistance, float DeltaMin, float DeltaMax)
{
    if(DrowCount % 2 == 0)DrowCount++;
    FMapPoint** VertPoint = new FMapPoint*[DrowCount];
    for(int i = 0; i < DrowCount; i++)
    {
        VertPoint[i] = new FMapPoint[DrowCount];
        for(int j = 0; j < DrowCount; j++)
        {
            VertPoint[i][j].IsNotNull = false;
        }
    }
    RandomMapMaker(VertPoint, FirstPoint, DrowCount, DeltaMin, DeltaMax);
    return VertPoint;
    //DebugMapDrawMan(VertPoint, FColor::Red, DrowCount, MakeDistance/DrowCount);
}
void UTameshiInstancedMesh::RandomMapMaker(FMapPoint**& VertPoint, const FVector& FirstPoint, int amount, float DeltaMin, float DeltaMax)
{
    //ダイアモンドスクエアアルゴリズムで地形生成
    if(true){//試作1
        //FVector** VertPoint = new FVector*[amount];
        /*for(int i = 0; i < amount; i++)
        {
            VertPoint[i] = new FVector[amount];
        }*/
        VertPoint[(amount-1)/2][(amount-1)/2].Point = FirstPoint.Z;
        VertPoint[(amount-1)/2][(amount-1)/2].IsNotNull = true;
        InductiveMapPartsGenerator(VertPoint, (amount-1)/2, (amount-1)/2, amount, DeltaMin, DeltaMax, FirstPoint);
    }
}
void UTameshiInstancedMesh::DebugMapDrawMan(FMapPoint**& VertPoint, FColor Color, int amount, float Scale)
{
    int centor = (amount-1)/2;
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            if(VertPoint[i][j].IsNotNull)
            {
                DrawDebugPoint(GetWorld(), FVector(Scale * i , Scale * j,  VertPoint[i][j].Point), 10, Color, false, 0.1);
                //UE_LOG(LogTemp, Display, TEXT("DrawPoint:%d,%d = %s"),i,j,*FVector(Scale * i , Scale * j,  VertPoint[i][j].Point).ToString());
            }
            if(i == amount - 1 && j == amount - 1)break;
            //if(j != amount-1)DrawDebugLine(GetWorld(), FVector(Scale * (i - centor) , Scale *(j - centor) ,  VertPoint[i][j].Point), FVector(Scale * (i - centor) , Scale *(j+1-centor) ,  VertPoint[i][j+1].Point), Color);
            //if(i != amount-1)DrawDebugLine(GetWorld(), FVector(Scale * (i - centor) , Scale *j ,  VertPoint[i][j].Point), FVector(Scale *(i+1-centor) , Scale *(j - centor) ,  VertPoint[i+1][j].Point), Color);
        }
    }
}

void UTameshiInstancedMesh::InductiveMapPartsGenerator(FMapPoint**& VertPoint, int MyX, int MyY, int amount, float DeltaMin, float DeltaMax, const FVector& FirstPoint)
{
    //DeltaMaxは高低差の最大値Deltamaxは高さの最大値、ややこしいね
    int Sidecount = 1;
    float sum = FirstPoint.Z;
    float Deltamax = DeltaMin;
    float Deltamin = -DeltaMin;
    float Delta = 0;
    bool SideCall[3][3];
    float MyDelta = 0;
    UE_LOG(LogTemp, Warning, TEXT("MyX:%d,MyY:%d,amount:%d"),MyX,MyY,amount);
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            SideCall[i+1][j+1] = (MyX + i >= 0 && MyX + i < amount && MyY + j >= 0 && MyY + j < amount);
        }
    }
    SideCall[1][1] = false;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1] && VertPoint[MyX + i][MyY + j].IsNotNull && !VertPoint[MyX + i][MyY + j].IsHoll)//自分の隣があるか、穴じゃないか
            {
                sum += VertPoint[MyX + i][MyY + j].Point;
                Sidecount++;
                SideCall[i+1][j+1] = false;
                if(MyY + i * 2 >= 0 && MyY + i * 2 < amount && MyX + j * 2 >= 0 && MyX + j * 2 < amount)//自分の2マス先があるか(実質nullチェック)
                {
                    if(VertPoint[MyX + i * 2][MyY + j * 2].IsNotNull && !VertPoint[MyX + i * 2][MyY + j * 2].IsHoll)//自分の2マス先が作られているか、穴じゃないか
                    {
                        MyDelta = VertPoint[MyX + i][MyY + j].Point - VertPoint[MyX + i*2][MyY + j*2].Point;//なんて言えばいいんだこれ、なんか積分みたいなやつ
                        //隣があった場合、そのさらに隣のマスの高さとの差を取る、これがデルタの最大値、最小値になる
                        if(Deltamax < MyDelta)Deltamax = MyDelta;
                        if(Deltamin > MyDelta)Deltamin = MyDelta;
                    }
                }
            }
        }
    }
    VertPoint[MyX][MyY].Point = sum / Sidecount;
    if(-DeltaMax > Deltamin)Deltamin = -DeltaMax;
    if(DeltaMax < Deltamax)Deltamax = DeltaMax;
    Delta = FMath::RandRange(Deltamin, Deltamax);
    VertPoint[MyX][MyY].Point += Delta;
    VertPoint[MyX][MyY].IsNotNull = true;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2;j++)
        {
            if(SideCall[i][j])
            {
                InductiveMapPartsGenerator(VertPoint, MyX + i - 1, MyY + j - 1, amount, DeltaMin, DeltaMax, FirstPoint);
            }
        }
    }
}

TArray<TArray<FVector>> UTameshiInstancedMesh::MapPointToVector(FMapPoint**& VertPoint, int amount, float Scale,const FVector& FirstPoint)
{
    TArray<TArray<FVector>> VertPointVec;
    TArray<FVector> VertPointVecRow;
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            VertPointVecRow.Add(FVector(Scale * i, Scale * j,  VertPoint[i][j].Point) + FirstPoint);
        }
        VertPointVec.Add(VertPointVecRow);
        VertPointVecRow.Empty();
    }
    return VertPointVec;
}

void UTameshiInstancedMesh::CreateMapPointArray(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FMapPointArray& DefArray, FMapPointArray& MyArray, const FMapLocate MyPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList)
{
    MyArray.Size = DefArray.Size;
    if(DefArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray"));
        return;
    }
    MyArray.PointArray.SetNum(DefArray.Size);
    if(MyArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray2"));
        return;
    }
    //DefArray.PointArray.SetNum(DefArray.Size);
    for(int i = 0; i < DefArray.PointArray.Num(); i++)
    {
        MyArray.PointArray[i].SetNum(DefArray.Size);
        //DefArray.PointArray[i].SetNum(DefArray.Size);
        for(int j = 0; j < DefArray.Size; j++)
        {
            MyArray.PointArray[i][j] = DefArray.PointArray[i][j];
        }
    }
    if(MyArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray3"));
        return;
    }
    if(UWorld* World=GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSyncMapGenerator(LatentInfo, MyArray, MyPoint, DeltaMin, DeltaMax, FirstPoint, OrderList));
	}
}
void UTameshiInstancedMesh::SetFMapPointArray(FMapPointArray& SetArray, const FMapPointArray& DefArray)
{
    SetArray.Size = DefArray.Size;
    SetArray.PointArray.SetNum(DefArray.Size);
    for(int i = 0; i < DefArray.Size; i++)
    {
        SetArray.PointArray[i].SetNum(DefArray.Size);
        for(int j = 0; j < DefArray.Size; j++)
        {
            //SetArray.PointArray[i][j] = DefArray.PointArray[i][j];
            SetArray.PointArray[i][j].Point = 0;
        }
    }
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatSetFMapPointArray"));
    }
}

void UTameshiInstancedMesh::CreateMeshDataArray(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray,const FVector& FirstPoint,const FMapLocate& FirstDex, float Scale)
{
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMeshDataArray"));
        return;
    }
    for(int i = 0; i < SetArray.Size; i++)
    {
        for(int j = 0; j < SetArray.Size; j++)
        {
            ScaleArray.Add(FVector(1,1,SetArray.PointArray[i][j].Point));
            LocateArray.Add(FVector(FirstPoint.X + Scale * i, FirstPoint.Y + Scale * j,SetArray.PointArray[i][j].Point));
        }
    }

}

void UTameshiInstancedMesh::CreateMeshDataArrayOrder(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray, const FVector& FirstPoint, const FMapLocate& FirstDex, float Scale,const TArray<FMapLocate>& OrderList)
{
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMeshDataArray"));
        return;
    }
    for(int i = 0; i < OrderList.Num(); i++)
    {
        ScaleArray.Add(FVector(1,1,SetArray.PointArray[OrderList[i].x][OrderList[i].y].Point));
        LocateArray.Add(FVector(FirstPoint.X + Scale * OrderList[i].x, FirstPoint.Y + Scale * OrderList[i].y, SetArray.PointArray[OrderList[i].x][OrderList[i].y].Point));
    }
}

FSyncMapGenerator::FSyncMapGenerator(const FLatentActionInfo& LatentInfo, FMapPointArray& VertPoint , FMapLocate MyPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList) : m_LatentInfo(LatentInfo)
{
    *Complete = false;
    SyncMapGeneratorHub(VertPoint,MyPoint,DeltaMin,DeltaMax,FirstPoint,OrderList);
}

void FSyncMapGenerator::SyncMapGeneratorHub(FMapPointArray& VertPoint, FMapLocate MyPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList)
{
    TArray<FMapLocate> MyTaskList;
    MyTaskList.Add(MyPoint);
    TArray<FMapLocate> DefList;
    //すでに入っているやつを別で保存
    for(int i = 0; i < VertPoint.Size; i++)
    {
        for(int j = 0; j < VertPoint.Size; j++)
        {
            if(VertPoint.PointArray[i][j].IsNotNull && !VertPoint.PointArray[i][j].IsHoll)
            {
                DefList.Add(FMapLocate{i,j});
            }
        }
    }
    for(;MyTaskList.Num() > 0;)
    {
        if(VertPoint.PointArray[MyTaskList[0].x][MyTaskList[0].y].IsNotNull)
        {
            MyTaskList.RemoveAt(0);
        }
        else 
        {
            OrderList.Add(MyTaskList[0]);
            InductiveMapPartsGeneratorCircle(VertPoint, MyTaskList[0], DeltaMin, DeltaMax, FirstPoint, MyTaskList, DefList);
        }
    }
    *Complete = true;
}

void FSyncMapGenerator::InductiveMapPartsGeneratorCircle(FMapPointArray& VertPoint, FMapLocate MyPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& MyTaskList, const TArray<FMapLocate>& DefList)
{
    //DeltaMaxは高低差の最大値Deltamaxは高さの最大値、ややこしいね
    UE_LOG(LogTemp, Display, TEXT("InductiveMapPartsGeneratorCircle"));
    int amount = VertPoint.PointArray.Num();
    int Sidecount = 1;
    float sum = FirstPoint.Z;
    float Deltamax = DeltaMin;
    float Deltamin = -DeltaMin;
    float Delta = 0;
    bool SideCall[3][3];
    float MyDelta = 0;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            SideCall[i+1][j+1] = (MyPoint.x + i >= 0 && MyPoint.x + i < amount && MyPoint.y + j >= 0 && MyPoint.y + j < amount);
        }
    }
    SideCall[1][1] = false;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1] && VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].IsNotNull && !VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].IsHoll)//自分の隣があるか、穴じゃないか
            {
                sum += VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].Point;
                Sidecount++;
                SideCall[i+1][j+1] = false;
                if(MyPoint.x + i * 2 >= 0 && MyPoint.x + i * 2 < amount && MyPoint.y + j * 2 >= 0 && MyPoint.y + j * 2 < amount)//自分の2マス先があるか(実質nullチェック)
                {
                    if(VertPoint.PointArray[MyPoint.x + i * 2][MyPoint.y + j * 2].IsNotNull && !VertPoint.PointArray[MyPoint.x + i * 2][MyPoint.y + j * 2].IsHoll)//自分の2マス先が作られているか、穴じゃないか
                    {
                        MyDelta = VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].Point - VertPoint.PointArray[MyPoint.x + i*2][MyPoint.y + j*2].Point;//なんて言えばいいんだこれ、なんか積分みたいなやつ
                        //隣があった場合、そのさらに隣のマスの高さとの差を取る、これがデルタの最大値、最小値になる
                        if(Deltamax < MyDelta)Deltamax = MyDelta;
                        if(Deltamin > MyDelta)Deltamin = MyDelta;
                    }
                }
            }
        }
    }
    if(sum != 0)VertPoint.PointArray[MyPoint.x][MyPoint.y].Point = sum / Sidecount;
    else VertPoint.PointArray[MyPoint.x][MyPoint.y].Point = 0;
    if(-DeltaMax > Deltamin)Deltamin = -DeltaMax;
    if(DeltaMax < Deltamax)Deltamax = DeltaMax;
    Delta = FMath::RandRange(Deltamin, Deltamax);
    UE_LOG(LogTemp, Display, TEXT("DeltaMin:%f,DeltaMax:%f,Delta:%f"),Deltamin,Deltamax,Delta);
    VertPoint.PointArray[MyPoint.x][MyPoint.y].Point += Delta;
    VertPoint.PointArray[MyPoint.x][MyPoint.y].IsNotNull = true;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            UE_LOG(LogTemp, Display, TEXT("SideCall:%d,%d = %d"),i,j,SideCall[i+1][j+1]);
        }
    }
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1])
            {
                MyTaskList.Add(FMapLocate{MyPoint.x + i, MyPoint.y + j});
                UE_LOG(LogTemp, Display, TEXT("MyTaskListAdd:%d,%d"),MyPoint.x + i, MyPoint.y + j);
            }
        }
    }
}

void FSyncMapGenerator::UpdateOperation(FLatentResponse& Response)
{
    Response.FinishAndTriggerIf(*Complete, m_LatentInfo.ExecutionFunction, m_LatentInfo.Linkage, m_LatentInfo.CallbackTarget);
}