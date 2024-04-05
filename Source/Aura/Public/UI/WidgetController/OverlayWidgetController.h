// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FONHealthChangedSignature, float, NewHealth);		//Signature = delegate type
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FONMaxHealthChangedSignature, float, NewMaxHealth);
/**
 * 
 */
UCLASS(NotBlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FONHealthChangedSignature OnHealthChanged;		//delegate its self

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FONMaxHealthChangedSignature OnMaxHealthChanged;
};
