// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem() :
	CreateSessionCompletedDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCretateSessionComplete)),
	FindSessionCompletedDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionComplete)),
	JoinSessionCompletedDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompletedDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionComplete)),
	StartSessionCompletedDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnStartSessionComplete))

{
	//#include "OnlineSubsystem.h"
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		SessionInterface = Subsystem->GetSessionInterface();
	}
}

void UMultiplayerSessionsSubsystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
}

void UMultiplayerSessionsSubsystem::FindSession(int32 MaxSearchResults)
{
}

void UMultiplayerSessionsSubsystem::JoinSession(const FOnlineSessionSearchResult& SessionResult)
{
}

void UMultiplayerSessionsSubsystem::DestroySession()
{
}

void UMultiplayerSessionsSubsystem::StartSession()
{
}

void UMultiplayerSessionsSubsystem::OnCretateSessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UMultiplayerSessionsSubsystem::OnFindSessionComplete(bool bWasSuccessful)
{
}

void UMultiplayerSessionsSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
}

void UMultiplayerSessionsSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UMultiplayerSessionsSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
