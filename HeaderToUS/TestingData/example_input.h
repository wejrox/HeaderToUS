#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
    
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.ObjectProvider
// 0x0080 (0x00BC - 0x003C)
class UObjectProvider : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;                     // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	TArray<class UObject*>                             Objects;                                                  // 0x0040(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToAdds;                                         // 0x004C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToRemoves;                                      // 0x0058(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToLists;                                        // 0x0064(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FArray_Mirror                               Injections;                                               // 0x0070(0x000C) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<struct FObjectProviderPendingCallback>      PendingCallbacks;                                         // 0x007C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bNeedsCleanup : 1;                                        // 0x0088(0x0004) (CPF_Const, CPF_Transient)
	struct FScriptDelegate                             __ObjectSubscriptionCallback__Delegate;                   // 0x008C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectListSubscriptionCallback__Delegate;               // 0x009C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectChangeCallback__Delegate;                         // 0x00AC(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProvider");
		return ptr;
	}


	void SetSingleton(class UClass* ObjClass, class UObject* Replacement);
	void AddAndRemoveObjects(TArray<class UObject*>* AddObjects, TArray<class UObject*>* RemoveObjects);
	void RemoveObjects(TArray<class UObject*>* InObjects);
	void RemoveObject(class UObject* Obj);
	void AddObjects(TArray<class UObject*>* InObjects);
	void AddObject(class UObject* Obj);
	class UObject* GetOrCreate(class UClass* ObjClass);
	class UObject* Get(class UClass* ObjClass);
	void AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj);
	void Inject(class UObject* Subscriber);
	void UnsubscribeAll(class UObject* Subscription);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void SubscribeList(class UClass* BaseClass, const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* BaseClass, const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove);
	void ObjectChangeCallback();
	void ObjectListSubscriptionCallback(class UObjectProvider* Provider);
	void ObjectSubscriptionCallback(class UObject* Obj);
};

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EEdition
enum class EEdition : uint8_t
{
	Edition_Default                = 0,
	Edition_China                  = 1,
	Edition_MAX                    = 2
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
	int                                                C;                                                        // 0x0008(0x0004)
	int                                                D;                                                        // 0x000C(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
