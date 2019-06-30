# Header to US
This project aims to create a executable which can be used to transform code from a C/C++ header file into a compile-ready UDK3 package.  

## Usage
Drag the header files onto the executable (or add the paths as arguments to the command line execution).

## Input
A file located within `TestingData/` provides an example of what the input to this application would look like.  
The contents of that file were generated using [UE3SDKGen](https://www.youtube.com/watch?v=yNe4jz1v0R4) and I would recommend that you use the tool as the output is formatted automatically.

## Output
The contents of the header files will be parsed based on the definitions provided.  
EXAMPLE:
```C
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
```
will be generated and placed into the file path:
```
Core/ObjectProvider.uc
```
### Incomplete output
If the provided enum or struct definitions do not also have a class definition provided alongside, they will be placed into the correct package but with `_INVALID` appended to the package name.  
EXAMPLE: 
```
Core/ObjectProvider.uc
Core_INVALID/StaticMesh.uc
```
If this occurs, you will need to manually find the class it is supposed to be within (if possible) and add it yourself. This is due to the transpiler only having access to the classes provided to it and not looking within a UDK directory.

## Credit
This application was fully developed by myself, using dummy input available publicly from the [RLForge](https://github.com/TaylorSasser/RLForge) repository. Special thanks to Taylor for leaving the code available publicly!