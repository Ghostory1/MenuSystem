// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MUTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnections = 4,FString TypeOfMatch = FString(TEXT("FreeForAll")));

protected:
	virtual bool Initialize() override;

	//이 레벨이 없어질때 호출되는 함수
	virtual void NativeDestruct() override;

private:
	//UPROPERTY(meta = (BindWidget))를 쓰려면 WBP_Menu에 버튼이름과 변수명하고 같아야함
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;
	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	//인풋 시스템 초기화
	void MenuTearDown();

	//메뉴에서 서브시스템 접근
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	//타입 저장
	int32 NumPublicConnections{ 4 };
	FString MatchType{ TEXT("FreeForAll") };
};
