﻿#pragma once

#include "FContainerHelper.h"
#include "Reflection/Property/FPropertyDescriptor.h"

class FSetHelper final : public FContainerHelper
{
public:
	explicit FSetHelper(FProperty* InProperty, void* InData = nullptr);

	~FSetHelper();

public:
	void Initialize();

	void Deinitialize();

public:
	void Empty(int32 InExpectedNumElements) const;

	int32 Num() const;

	void Add(void* InValue) const;

	int32 Remove(const void* InValue) const;

	bool Contains(const void* InValue) const;

	FPropertyDescriptor* GetElementPropertyDescriptor() const;

	FScriptSet* GetScriptSet() const;
	
	FORCEINLINE FScriptSetHelper CreateHelperFormInnerProperty() const
	{
		return FScriptSetHelper::CreateHelperFormElementProperty(ElementPropertyDescriptor->GetProperty(), ScriptSet);
	}

	bool IsValidIndex(int32 InIndex) const;

	void* GetEnumerator(int32 InIndex) const;

	void SetEnumerator(int32 Index,void* Value) const;
	
	int32 GetMaxIndex() const;

private:
	FPropertyDescriptor* ElementPropertyDescriptor;

	FScriptSet* ScriptSet;

	FScriptSetLayout ScriptSetLayout;

	bool bNeedFree;
};
