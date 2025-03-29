// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CXGameStateBase.generated.h"


/**
 *
 */
UCLASS()
class BASEBALL_API ACXGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
    
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));

};