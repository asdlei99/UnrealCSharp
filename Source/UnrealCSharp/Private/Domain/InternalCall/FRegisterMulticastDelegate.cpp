﻿#include "Binding/Class/FClassBuilder.h"
#include "Environment/FCSharpEnvironment.h"
#include "Reflection/Delegate/FMulticastDelegateHelper.h"
#include "CoreMacro/NamespaceMacro.h"
#include "Async/Async.h"
#include "Registry/FCSharpBind.h"

namespace
{
	struct FRegisterMulticastDelegate
	{
		static void RegisterImplementation(MonoObject* InMonoObject)
		{
			FCSharpBind::Bind<FMulticastDelegateHelper>(InMonoObject);
		}

		static void UnRegisterImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle)
		{
			AsyncTask(ENamedThreads::GameThread, [InGarbageCollectionHandle]
			{
				(void)FCSharpEnvironment::GetEnvironment().RemoveDelegateReference<FMulticastDelegateHelper>(
					InGarbageCollectionHandle);
			});
		}

		static bool IsBoundImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				return MulticastDelegateHelper->IsBound();
			}

			return false;
		}

		static bool ContainsImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                   const FGarbageCollectionHandle InObject, MonoObject* InDelegate)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				if (const auto FoundObject = FCSharpEnvironment::GetEnvironment().GetObject(InObject))
				{
					return MulticastDelegateHelper->Contains(FoundObject,
					                                         FCSharpEnvironment::GetEnvironment().GetDomain()->
					                                         Delegate_Get_Method(InDelegate));
				}
			}

			return false;
		}

		static void AddImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                              const FGarbageCollectionHandle InObject, MonoObject* InDelegate)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				if (const auto FoundObject = FCSharpEnvironment::GetEnvironment().GetObject(InObject))
				{
					MulticastDelegateHelper->Add(FoundObject,
					                             FCSharpEnvironment::GetEnvironment().GetDomain()->
					                             Delegate_Get_Method(InDelegate));
				}
			}
		}

		static void AddUniqueImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                    const FGarbageCollectionHandle InObject, MonoObject* InDelegate)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				if (const auto FoundObject = FCSharpEnvironment::GetEnvironment().GetObject(InObject))
				{
					MulticastDelegateHelper->AddUnique(FoundObject,
					                                   FCSharpEnvironment::GetEnvironment().GetDomain()->
					                                   Delegate_Get_Method(InDelegate));
				}
			}
		}

		static void RemoveImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                 const FGarbageCollectionHandle InObject, MonoObject* InDelegate)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				if (const auto FoundObject = FCSharpEnvironment::GetEnvironment().GetObject(InObject))
				{
					MulticastDelegateHelper->Remove(FoundObject,
					                                FCSharpEnvironment::GetEnvironment().GetDomain()->
					                                Delegate_Get_Method(InDelegate));
				}
			}
		}

		static void RemoveAllImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                    const FGarbageCollectionHandle InObject)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				if (const auto FoundObject = FCSharpEnvironment::GetEnvironment().GetObject(InObject))
				{
					MulticastDelegateHelper->RemoveAll(FoundObject);
				}
			}
		}

		static void ClearImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				MulticastDelegateHelper->Clear();
			}
		}

		static MonoObject* BroadcastImplementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                           MonoObject** OutValue, MonoArray* InValue)
		{
			if (const auto MulticastDelegateHelper = FCSharpEnvironment::GetEnvironment().GetDelegate<
				FMulticastDelegateHelper>(InGarbageCollectionHandle))
			{
				return MulticastDelegateHelper->Broadcast(OutValue, InValue);
			}

			return nullptr;
		}

		static void Broadcast0Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle)
		{
			BroadcastImplementation(InGarbageCollectionHandle, nullptr, nullptr);
		}

		static MonoObject* Broadcast1Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle)
		{
			return BroadcastImplementation(InGarbageCollectionHandle, nullptr, nullptr);
		}

		static void Broadcast2Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                     MonoArray* InValue)
		{
			BroadcastImplementation(InGarbageCollectionHandle, nullptr, InValue);
		}

		static MonoObject* Broadcast3Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                            MonoArray* InValue)
		{
			return BroadcastImplementation(InGarbageCollectionHandle, nullptr, InValue);
		}

		static void Broadcast4Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                     MonoObject** OutValue)
		{
			BroadcastImplementation(InGarbageCollectionHandle, OutValue, nullptr);
		}

		static MonoObject* Broadcast5Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                            MonoObject** OutValue)
		{
			return BroadcastImplementation(InGarbageCollectionHandle, OutValue, nullptr);
		}

		static void Broadcast6Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                     MonoObject** OutValue, MonoArray* InValue)
		{
			BroadcastImplementation(InGarbageCollectionHandle, OutValue, InValue);
		}

		static MonoObject* Broadcast7Implementation(const FGarbageCollectionHandle InGarbageCollectionHandle,
		                                            MonoObject** OutValue, MonoArray* InValue)
		{
			return BroadcastImplementation(InGarbageCollectionHandle, OutValue, InValue);
		}

		FRegisterMulticastDelegate()
		{
			FClassBuilder(TEXT("FMulticastDelegate"), NAMESPACE_LIBRARY, true)
				.Function("Register", RegisterImplementation)
				.Function("UnRegister", UnRegisterImplementation)
				.Function("Contains", ContainsImplementation)
				.Function("IsBound", IsBoundImplementation)
				.Function("Contains", ContainsImplementation)
				.Function("Add", AddImplementation)
				.Function("AddUnique", AddUniqueImplementation)
				.Function("Remove", RemoveImplementation)
				.Function("RemoveAll", RemoveAllImplementation)
				.Function("Clear", ClearImplementation)
				.Function("Broadcast0", Broadcast0Implementation)
				.Function("Broadcast1", Broadcast1Implementation)
				.Function("Broadcast2", Broadcast2Implementation)
				.Function("Broadcast3", Broadcast3Implementation)
				.Function("Broadcast4", Broadcast4Implementation)
				.Function("Broadcast5", Broadcast5Implementation)
				.Function("Broadcast6", Broadcast6Implementation)
				.Function("Broadcast7", Broadcast7Implementation);
		}
	};

	FRegisterMulticastDelegate RegisterMulticastDelegate;
}
