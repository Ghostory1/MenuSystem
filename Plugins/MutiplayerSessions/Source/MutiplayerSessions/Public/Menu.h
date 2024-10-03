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

	//�� ������ �������� ȣ��Ǵ� �Լ�
	virtual void NativeDestruct() override;

private:
	//UPROPERTY(meta = (BindWidget))�� ������ WBP_Menu�� ��ư�̸��� �������ϰ� ���ƾ���
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;
	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	//��ǲ �ý��� �ʱ�ȭ
	void MenuTearDown();

	//�޴����� ����ý��� ����
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	//Ÿ�� ����
	int32 NumPublicConnections{ 4 };
	FString MatchType{ TEXT("FreeForAll") };
};
