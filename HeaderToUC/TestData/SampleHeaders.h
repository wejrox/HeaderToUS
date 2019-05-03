#pragma once
#include "..\SdkConstants.h"
/*
#############################################################################################
# Rocket League (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ProjectX_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_InMatchmakingID                                    -2
#define CONST_MAX_CONTROLLER_IDS                                 4
#define CONST_NumFriendsPerRequest                               100
#define CONST_MaxPing                                            1.0f
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"
#define CONST_QueueMax                                           100
#define CONST_HttpContentType                                    "plain/text"
#define CONST_XpTitleID                                          'XP'

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum ProjectX._Types_X.EJoinMatchType
enum U_Types_X_EJoinMatchType
{
	EJoinMatchType_JMT_Public                                         = 0,
	EJoinMatchType_JMT_Private                                        = 1,
	EJoinMatchType_JMT_LanHost                                        = 2,
	EJoinMatchType_JMT_LanGuest                                       = 3,
	EJoinMatchType_JMT_MAX                                            = 4
};

// Enum ProjectX._Types_X.EAuthResult
enum U_Types_X_EAuthResult
{
	EAuthResult_AuthResult_OK                                      = 0,
	EAuthResult_AuthResult_Unauthorized                            = 1,
	EAuthResult_AuthResult_MAX                                     = 2
};

// Enum ProjectX._Types_X.EWebRequestAuthorization
enum U_Types_X_EWebRequestAuthorization
{
	EWebRequestAuthorization_WRA_Offline                                        = 0,
	EWebRequestAuthorization_WRA_Authorizing                                    = 1,
	EWebRequestAuthorization_WRA_Authorized                                     = 2,
	EWebRequestAuthorization_WRA_Banned                                         = 3,
	EWebRequestAuthorization_WRA_MAX                                            = 4
};

// Enum ProjectX._Types_X.EBanType
enum U_Types_X_EBanType
{
	EBanType_BanType_Auth                                       = 0,
	EBanType_BanType_Parental                                   = 1,
	EBanType_BanType_MAX                                        = 2
};

// Enum ProjectX._Types_X.EConsoleQualityMode
enum U_Types_X_EConsoleQualityMode
{
	EConsoleQualityMode_ConsoleQualityMode_Performance                     = 0,
	EConsoleQualityMode_ConsoleQualityMode_Quality                         = 1,
	EConsoleQualityMode_ConsoleQualityMode_MAX                             = 2
};

// Enum ProjectX._Types_X.EPlayerAuthState
enum U_Types_X_EPlayerAuthState
{
	EPlayerAuthState_EPlayerAuthState_None                              = 0,
	EPlayerAuthState_EPlayerAuthState_NewUserFlow                       = 1,
	EPlayerAuthState_EPlayerAuthState_HighlightReel                     = 2,
	EPlayerAuthState_EPlayerAuthState_SetName                           = 3,
	EPlayerAuthState_EPlayerAuthState_RequestingInitialLoadout          = 4,
	EPlayerAuthState_EPlayerAuthState_InitialLoadoutFailed              = 5,
	EPlayerAuthState_EPlayerAuthState_CarSelect                         = 6,
	EPlayerAuthState_EPlayerAuthState_CarSelected                       = 7,
	EPlayerAuthState_EPlayerAuthState_MAX                               = 8
};

// Enum ProjectX._Types_X.EReservationStatus
enum U_Types_X_EReservationStatus
{
	EReservationStatus_ReservationStatus_None                             = 0,
	EReservationStatus_ReservationStatus_Reserved                         = 1,
	EReservationStatus_ReservationStatus_Joining                          = 2,
	EReservationStatus_ReservationStatus_InGame                           = 3,
	EReservationStatus_ReservationStatus_MAX                              = 4
};

// Enum ProjectX._Types_X.EDatabaseEnvironment
enum U_Types_X_EDatabaseEnvironment
{
	EDatabaseEnvironment_DBE_DevLocal                                       = 0,
	EDatabaseEnvironment_DBE_Dev                                            = 1,
	EDatabaseEnvironment_DBE_Test                                           = 2,
	EDatabaseEnvironment_DBE_Production                                     = 3,
	EDatabaseEnvironment_DBE_MAX                                            = 4
};

// Enum ProjectX._Types_X.EAxisSign
enum U_Types_X_EAxisSign
{
	EAxisSign_AxisSign_None                                      = 0,
	EAxisSign_AxisSign_Positive                                  = 1,
	EAxisSign_AxisSign_Negative                                  = 2,
	EAxisSign_AxisSign_MAX                                       = 3
};

// Enum ProjectX._Types_X.EButtonPressType
enum U_Types_X_EButtonPressType
{
	EButtonPressType_BPT_Normal                                         = 0,
	EButtonPressType_BPT_Tap                                            = 1,
	EButtonPressType_BPT_Hold                                           = 2,
	EButtonPressType_BPT_DoubleTap                                      = 3,
	EButtonPressType_BPT_Toggle                                         = 4,
	EButtonPressType_BPT_MAX                                            = 5
};

// Enum ProjectX._Types_X.ERemappable
enum U_Types_X_ERemappable
{
	ERemappable_Remappable_All                                     = 0,
	ERemappable_Remappable_Key                                     = 1,
	ERemappable_Remappable_Axis                                    = 2,
	ERemappable_Remappable_KeyTriggerAxis                          = 3,
	ERemappable_Remappable_None                                    = 4,
	ERemappable_Remappable_MAX                                     = 5
};

// Enum ProjectX._Types_X.EUINavigationMode
enum U_Types_X_EUINavigationMode
{
	EUINavigationMode_UINavigationMode_Keyboard                          = 0,
	EUINavigationMode_UINavigationMode_Gamepad                           = 1,
	EUINavigationMode_UINavigationMode_Cursor                            = 2,
	EUINavigationMode_UINavigationMode_MAX                               = 3
};

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum U_Types_X_EPartyMatchmakingRestriction
{
	EPartyMatchmakingRestriction_PMR_NotOriginalAppOwner                            = 0,
	EPartyMatchmakingRestriction_PMR_PendingLicenseAgreement                        = 1,
	EPartyMatchmakingRestriction_PMR_InMainMenu                                     = 2,
	EPartyMatchmakingRestriction_PMR_NotLoggedInPsyNet                              = 3,
	EPartyMatchmakingRestriction_PMR_MAX                                            = 4
};

// Enum ProjectX._Types_X.EBlogTileType
enum U_Types_X_EBlogTileType
{
	EBlogTileType_EBlogTileType_Carousel                             = 0,
	EBlogTileType_EBlogTileType_RLCS                                 = 1,
	EBlogTileType_EBlogTileType_Community                            = 2,
	EBlogTileType_EBlogTileType_MAX                                  = 3
};

// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum U_Types_X_EOnlinePlayerPermission
{
	EOnlinePlayerPermission_OPP_PrivateMatchAdmin                              = 0,
	EOnlinePlayerPermission_OPP_SuperPrivateMatchAdmin                         = 1,
	EOnlinePlayerPermission_OPP_MAX                                            = 2
};

// Enum ProjectX._Types_X.EOnlinePlayerRole
enum U_Types_X_EOnlinePlayerRole
{
	EOnlinePlayerRole_OPR_PrivateMatchAdmin                              = 0,
	EOnlinePlayerRole_OPR_SuperPrivateMatchAdmin                         = 1,
	EOnlinePlayerRole_OPR_MAX                                            = 2
};

// Enum ProjectX._Types_X.EPsyNetTransportType
enum U_Types_X_EPsyNetTransportType
{
	EPsyNetTransportType_PsyNetTransport_HTTP                               = 0,
	EPsyNetTransportType_PsyNetTransport_WebSocket                          = 1,
	EPsyNetTransportType_PsyNetTransport_MAX                                = 2
};

// TODO
// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum UAnimNodeSeries_X_EAnimNodeSeriesChild
{
	EAnimNodeSeriesChild_AnimNodeSeries_Idle                                = 0,
	EAnimNodeSeriesChild_AnimNodeSeries_Intro                               = 1,
	EAnimNodeSeriesChild_AnimNodeSeries_Loop                                = 2,
	EAnimNodeSeriesChild_AnimNodeSeries_Outro                               = 3,
	EAnimNodeSeriesChild_AnimNodeSeries_MAX                                 = 4
};

// Enum ProjectX.BugReport_X.EFileTruncateType
enum UBugReport_X_EFileTruncateType
{
	EFileTruncateType_FileTruncate_None                                  = 0,
	EFileTruncateType_FileTruncate_KeepStart                             = 1,
	EFileTruncateType_FileTruncate_KeepEnd                               = 2,
	EFileTruncateType_FileTruncate_MAX                                   = 3
};

// Enum ProjectX.FXActor_X.EFXComponentTarget
enum AFXActor_X_EFXComponentTarget
{
	EFXComponentTarget_FXComponentTarget_All                              = 0,
	EFXComponentTarget_FXComponentTarget_Local                            = 1,
	EFXComponentTarget_FXComponentTarget_NonLocal                         = 2,
	EFXComponentTarget_FXComponentTarget_MAX                              = 3
};

// Enum ProjectX.FXActor_X.EFXComponentState
enum AFXActor_X_EFXComponentState
{
	EFXComponentState_FXComponentState_Detached                          = 0,
	EFXComponentState_FXComponentState_Attached                          = 1,
	EFXComponentState_FXComponentState_PendingDetach                     = 2,
	EFXComponentState_FXComponentState_MAX                               = 3
};

// TODO
// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum UGFxDataCallback_X_EDataCallbackType
{
	EDataCallbackType_DataCallbackType_All                               = 0,
	EDataCallbackType_DataCallbackType_Table                             = 1,
	EDataCallbackType_DataCallbackType_Row                               = 2,
	EDataCallbackType_DataCallbackType_Value                             = 3,
	EDataCallbackType_DataCallbackType_MAX                               = 4
};

// TODO
// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum UMaterialEffect_X_EMaterialEffectStage
{
	EMaterialEffectStage_EFFECT_INACTIVE                                    = 0,
	EMaterialEffectStage_EFFECT_FADE_IN                                     = 1,
	EMaterialEffectStage_EFFECT_ACTIVE                                      = 2,
	EMaterialEffectStage_EFFECT_FADE_OUT                                    = 3,
	EMaterialEffectStage_EFFECT_MAX                                         = 4
};

// TODO
// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum UOnlineGameDLC_X_DLCOwnershipState
{
	DLCOwnershipState_DLCOwnershipState_Unknown                          = 0,
	DLCOwnershipState_DLCOwnershipState_Owned                            = 1,
	DLCOwnershipState_DLCOwnershipState_NotOwned                         = 2,
	DLCOwnershipState_DLCOwnershipState_Error                            = 3,
	DLCOwnershipState_DLCOwnershipState_MAX                              = 4
};

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum UOnlineGameParty_X_PartyProcessingStatus
{
	PartyProcessingStatus_PPS_None                                           = 0,
	PartyProcessingStatus_PPS_Create                                         = 1,
	PartyProcessingStatus_PPS_Join                                           = 2,
	PartyProcessingStatus_PPS_MAX                                            = 3
};

// TODO
// Enum ProjectX.OnlineGameRegions_X.RegionPingResult
enum UOnlineGameRegions_X_RegionPingResult
{
	RegionPingResult_PingResult_NotUsable                               = 0,
	RegionPingResult_PingResult_UsingCache                              = 1,
	RegionPingResult_PingResult_UsingSuccessfulPing                     = 2,
	RegionPingResult_PingResult_MAX                                     = 3
};

// TODO
// Enum ProjectX.WordFilterTypes_X.EWordFilterUsage
enum UWordFilterTypes_X_EWordFilterUsage
{
	EWordFilterUsage_WordFilterUsage_PlayerName                         = 0,
	EWordFilterUsage_WordFilterUsage_TrainingName                       = 1,
	EWordFilterUsage_WordFilterUsage_LanServerName                      = 2,
	EWordFilterUsage_WordFilterUsage_CustomTeamName                     = 3,
	EWordFilterUsage_WordFilterUsage_TourName                           = 4,
	EWordFilterUsage_WordFilterUsage_TourTeamName                       = 5,
	EWordFilterUsage_WordFilterUsage_ClubName                           = 6,
	EWordFilterUsage_WordFilterUsage_ClubTag                            = 7,
	EWordFilterUsage_WordFilterUsage_ClubMotD                           = 8,
	EWordFilterUsage_WordFilterUsage_ClubTagPlayerName                  = 9,
	EWordFilterUsage_WordFilterUsage_MatchChat                          = 10,
	EWordFilterUsage_WordFilterUsage_PartyChat                          = 11,
	EWordFilterUsage_WordFilterUsage_MAX                                = 12
};

// TODO
// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum UReservationsPasswordMessage_X_EPasswordFailureReason
{
	EPasswordFailureReason_PFR_Empty                                          = 0,
	EPasswordFailureReason_PFR_Mismatch                                       = 1,
	EPasswordFailureReason_PFR_MAX                                            = 2
};

// TODO
// Enum ProjectX.RPC_X.ERPCPriority
enum URPC_X_ERPCPriority
{
	ERPCPriority_RPC_Low                                            = 0,
	ERPCPriority_RPC_Medium                                         = 1,
	ERPCPriority_RPC_High                                           = 2,
	ERPCPriority_RPC_MAX                                            = 3
};

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum UShakeComponent_X_EShakeReceiver
{
	EShakeReceiver_ShakeReceiver_All                                  = 0,
	EShakeReceiver_ShakeReceiver_Local                                = 1,
	EShakeReceiver_ShakeReceiver_NonLocal                             = 2,
	EShakeReceiver_ShakeReceiver_MAX                                  = 3
};

// TODO
// Enum ProjectX.TcpConnection.EWebSocketState
enum UTcpConnection_EWebSocketState
{
	EWebSocketState_WebSocketState_NotRequired                         = 0,
	EWebSocketState_WebSocketState_NeedsHandshake                      = 1,
	EWebSocketState_WebSocketState_Connected                           = 2,
	EWebSocketState_WebSocketState_MAX                                 = 3
};

// TODO
// Enum ProjectX.TcpConnection.ETcpConnectionState
enum UTcpConnection_ETcpConnectionState
{
	ETcpConnectionState_TcpConnectionState_Invalid                         = 0,
	ETcpConnectionState_TcpConnectionState_Connecting                      = 1,
	ETcpConnectionState_TcpConnectionState_Connected                       = 2,
	ETcpConnectionState_TcpConnectionState_Disconnected                    = 3,
	ETcpConnectionState_TcpConnectionState_MAX                             = 4
};

// Enum ProjectX.WebRequest_X.EWebRequestState
enum UWebRequest_X_EWebRequestState
{
	EWebRequestState_WebRequestState_PendingSend                        = 0,
	EWebRequestState_WebRequestState_PendingResponse                    = 1,
	EWebRequestState_WebRequestState_Success                            = 2,
	EWebRequestState_WebRequestState_Error                              = 3,
	EWebRequestState_WebRequestState_MAX                                = 4
};

// TODO
// Enum ProjectX.FakeData_X.FakeDataEnum
enum UFakeData_X_FakeDataEnum
{
	FakeDataEnum_FakeData                                           = 0,
	FakeDataEnum_FakeData01                                         = 1,
	FakeDataEnum_FakeData02                                         = 2,
	FakeDataEnum_FakeData_Count                                     = 3,
	FakeDataEnum_FakeData_MAX                                       = 4
};

// TODO
// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum UClanforgeReservation_X_EReserveState
{
	EReserveState_ReserveState_Unitialized                           = 0,
	EReserveState_ReserveState_Unreserved                            = 1,
	EReserveState_ReserveState_Reserved                              = 2,
	EReserveState_ReserveState_MAX                                   = 3
};

// TODO
// Enum ProjectX.PerCon_X.EPerConStatus
enum UPerCon_X_EPerConStatus
{
	EPerConStatus_PerConStatus_Disabled                              = 0,
	EPerConStatus_PerConStatus_Enabled                               = 1,
	EPerConStatus_PerConStatus_Broken                                = 2,
	EPerConStatus_PerConStatus_MAX                                   = 3
};

// TODO
// Enum ProjectX.DynamicValue_X.EDynamicValueModType
enum UDynamicValue_X_EDynamicValueModType
{
	EDynamicValueModType_ModType_Add                                        = 0,
	EDynamicValueModType_ModType_Multiply                                   = 1,
	EDynamicValueModType_ModType_MultiplyAdd                                = 2,
	EDynamicValueModType_ModType_Set                                        = 3,
	EDynamicValueModType_ModType_MAX                                        = 4
};

// TODO
// Enum ProjectX.ClubUtil_X.EClubColorChange
enum UClubUtil_X_EClubColorChange
{
	EClubColorChange_ClubColorChange_None                               = 0,
	EClubColorChange_ClubColorChange_SwapTeams                          = 1,
	EClubColorChange_ClubColorChange_SwapPrimaryAccent0                 = 2,
	EClubColorChange_ClubColorChange_SwapPrimaryAccent1                 = 3,
	EClubColorChange_ClubColorChange_SwapPrimaryAccent                  = 4,
	EClubColorChange_ClubColorChange_WhiteVsBlack                       = 5,
	EClubColorChange_ClubColorChange_Gray1                              = 6,
	EClubColorChange_ClubColorChange_MAX                                = 7
};

// TODO
// Enum ProjectX.OnlinePlayerRegionRestrictions_X.ERegionRestriction
enum UOnlinePlayerRegionRestrictions_X_ERegionRestriction
{
	ERegionRestriction_RegionRestriction_Unknown                          = 0,
	ERegionRestriction_RegionRestriction_KeyCrate                         = 1,
	ERegionRestriction_RegionRestriction_Trade                            = 2,
	ERegionRestriction_RegionRestriction_KeyRocketPassTier                = 3,
	ERegionRestriction_RegionRestriction_MAX                              = 4
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class ProjectX._SharedHelpers
// 0x0000 (0x003C - 0x003C)
class U_SharedHelpers : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS__SHAREDHELPERS ];

		return pClassPointer;
	};

	int ScoreDeltaFromDefault (class UObject* Object );
	int FindNetId (struct FUniqueNetId& FindId, TArray< struct FUniqueNetId >* List );
	void DrawShadowedText (class UCanvas* Canvas, struct FString& Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha );
	bool IsInTransientPackage (class UObject* Obj );
	class APlayerController* GetAPlayerController (class UClass* PlayerControllerClass );
	class UObject* GetDefaultObject (class UClass* ObjClass );
	void DumpUnreferencedAnims ( );
	struct FString GetLanguageExtension ( );
};

// Class ProjectX._Types_X
// 0x0040 (0x007C - 0x003C)
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __KeyPressDelegate__Delegate;                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                  		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;             		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTimer__Delegate;                              		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS__TYPES_X ];

		return pClassPointer;
	};

	void OnTimer ( );
	struct FCheckReservationData GetReservationData ( struct FCheckReservationResponse* Response );
	void ServiceExecutionDelegate (class UPsyNetClientService_X* Service );
	struct FIntVector3 ToIntVector3 (struct FVector& V );
	void OnPriviledgeChecked (class UPrivilegeCheck_X* PrivilegeCheck );
	bool KeyPressDelegate ( );
};

// Class ProjectX.ActorComponent_X
// 0x0007 (0x006C - 0x0065)
class UActorComponent_X : public UActorComponent
{
public:
	unsigned long                                      bTick : 1;                                        		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreScriptAttach : 1;                          		// 0x0068 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ACTORCOMPONENT_X ];

		return pClassPointer;
	};

	void Reattach ( );
	void eventTick (float DeltaTime );
	void eventDetached ( );
	void eventAttached ( );
	void eventBeginPlay ( );
};

// Class ProjectX.ExplosionComponent_X
// 0x0034 (0x00A0 - 0x006C)
class UExplosionComponent_X : public UActorComponent_X
{
public:
	float                                              RBVelocityChange;                                 		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartRadius;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndRadius;                                        		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Falloff;                                          		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPassThroughWorldGeometry : 1;                    		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x0080 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x0080 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FVector                                     MomentumOffset;                                   		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AActor* >                            DamagedActors;                                    		// 0x0094 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EXPLOSIONCOMPONENT_X ];

		return pClassPointer;
	};

	void eventProcessHit (class AActor* Victim, struct FVector& HitLocation, struct FTraceHitInfo& ExtraHitInfo, float DamageScale );
	void eventDetached ( );
};

// Class ProjectX.MICParamDispenserComponent_X
// 0x0014 (0x0080 - 0x006C)
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MaterialIndex;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttachedComponentName;                            		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMeshComponent*                              MeshComp;                                         		// 0x007C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MICPARAMDISPENSERCOMPONENT_X ];

		return pClassPointer;
	};

	bool __MICParamDispenserComponent_X__Attached (struct FFXAttachment& A );
	void eventAttached ( );
	void SetActorParameter (struct FName& Key, class AActor* Value );
	void SetLinearColorParameter (struct FName& Key, struct FLinearColor& Value );
	void SetVectorParameter (struct FName& Key, struct FVector& Value );
	void SetFloatParameter (struct FName& Key, float Value );
	void SetNameParameter (struct FName& Key, struct FName& Value );
};

// Class ProjectX.ShakeComponent_X
// 0x00D8 (0x0144 - 0x006C)
class UShakeComponent_X : public UActorComponent_X
{
public:
	float                                              InnerRadius;                                      		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Falloff;                                          		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoDetach : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAttenuate : 1;                                   		// 0x0078 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bPlaying : 1;                                     		// 0x0078 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bStopping : 1;                                    		// 0x0078 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned char                                      Receiver;                                         		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadiusScale;                                      		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                ShakeParams;                                      		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       AmplitudeScale;                                   		// 0x0090 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       FrequencyScale;                                   		// 0x00AC (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       DurationScale;                                    		// 0x00C8 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              CurrentAmplitudeScale;                            		// 0x00E4 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              CurrentFrequencyScale;                            		// 0x00E8 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceFeedbackScale;                               		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceFeedbackBalance;                             		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FParticleSysParam >                 InstanceParameters;                               		// 0x00F8 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	float                                              PlayTime;                                         		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StopTime;                                         		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ShakeLocTimeOffset;                               		// 0x010C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ShakeRotTimeOffset;                               		// 0x0118 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ShakeFOVTimeOffset;                               		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraShakeDuration;                              		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ForceFeedbackDuration;                            		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ForceFeedbackSamplesTime;                         		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      PrevOwner;                                        		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FShakeReceiver >                    Receivers;                                        		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SHAKECOMPONENT_X ];

		return pClassPointer;
	};

	bool GetColorParameter (struct FName& InName, struct FColor* OutColor );
	bool GetVectorParameter (struct FName& InName, struct FVector* OutVector );
	bool GetFloatParameter (struct FName& InName, float* OutFloat );
	void SetColorParameter (struct FName& ParameterName, struct FColor& Param );
	void SetVectorRandParameter (struct FName& ParameterName, struct FVector* Param, struct FVector* ParamLow );
	void SetVectorParameter (struct FName& ParameterName, struct FVector& Param );
	void SetFloatRandParameter (struct FName& ParameterName, float Param, float ParamLow );
	void SetFloatParameter (struct FName& ParameterName, float Param );
	bool IsPlaying ( );
	void eventStopShake (float InBlendOutTime );
	void InitParams ( );
	void eventPlayShake ( );
	void eventDetached ( );
	void eventAttached ( );
};

// Class ProjectX.AdHocBeacon_X
// 0x0008 (0x0044 - 0x003C)
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    pAdHoc;                                           		// 0x0040 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADHOCBEACON_X ];

		return pClassPointer;
	};

	int GetNodeCountMax ( );
	void AdHocJoinMatch ( );
	void AdHocCreateMatch ( );
	bool AdHocIsActive ( );
	void AdHocDisconnectFromAccessPoint ( );
	void AdHocConnectToAccessPoint (int ScanResultIndex );
	void AdHocRevertToInitialized ( );
	void AdHocScanForAccessPoints ( );
	void AdHocBecomeStation ( );
	void AdHocRejectStation (int NetworkNodeIndex );
	void AdHocBecomeAccessPoint ( );
	void AdHocSetAdvertiseData (struct FString& AdvertiseData );
	void AdHocDestroy ( );
	void AdHocCreate ( );
	void AdHocCreateWithUsername (struct FString& UserName );
	void eventConstruct ( );
};

// Class ProjectX.FXActor_X
// 0x0064 (0x024C - 0x01E8)
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                       		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UFXActorEvent_X*                             ActivationState;                                  		// 0x01EC (0x0004) [0x0000000000000000]              
	TArray< struct FFXAttachment >                     Attachments;                                      		// 0x01F0 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       SocketOrBoneName;                                 		// 0x01FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;                		// 0x0204 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowShadowCasting : 1;                          		// 0x0204 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAutoActivate : 1;                                		// 0x0204 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bRenderInactive : 1;                              		// 0x0204 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0204 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bHadOwner : 1;                                    		// 0x0204 (0x0004) [0x0000000000002002] [0x00000020] ( CPF_Const | CPF_Transient )
	class AFXActor_X*                                  Parent;                                           		// 0x0208 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      AttachmentActor;                                  		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UFXActorEvent_X* >                   FXStates;                                         		// 0x0210 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              DestroyWaitTime;                                  		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DestroyTime;                                      		// 0x0220 (0x0004) [0x0000000000000000]              
	class UParameterDispenser_X*                       Parameters;                                       		// 0x0224 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                EditID;                                           		// 0x0228 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                   		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0230 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                   		// 0x023C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0240 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_FXACTOR_X ];

		return pClassPointer;
	};

	void eventDumpDebugInfo ( );
	class UFXAttachmentTraitBase_X* GetTrait (class UClass* TraitClass, int AttachmentIdx );
	void eventDestroyed ( );
	void SetStateEnabled (class UFXActorEvent_X* State, unsigned long bEnable );
	void OnToggle (class USeqAct_Toggle* Action );
	void OnTriggerFXActor_X (class USeqAct_TriggerFXActor_X* SeqAct );
	void Inherit (class AFXActor_X* Other );
	void ResetParticles ( );
	void StopAllEffects ( );
	void eventDeactivateAndDestroy ( );
	void eventOnDetached (class UActorComponent* AC );
	void eventDeactivateFXComponent (class UActorComponent* AC );
	void eventActivateFXComponent (class UActorComponent* AC );
	void eventOnAttached (class UActorComponent* AC );
	void UpdateFXStates ( );
	bool IsLocallyControlled ( );
	class AController* GetControllerOwner ( );
	void ToggleState (class UFXActorEvent_X* NewState );
	bool RemoveState (class UFXActorEvent_X* OldState );
	void AddState (class UFXActorEvent_X* NewState );
	bool IsStateActive (class UFXActorEvent_X* InState );
	void Deactivate ( );
	void Activate ( );
	void HandleParentStatePopped (class AFXActor_X* P, class UFXActorEvent_X* Event );
	void HandleParentStatePushed (class AFXActor_X* P, class UFXActorEvent_X* Event );
	void BindTo (class AFXActor_X* ParentFXActor );
	void SetAttachmentActor (class AActor* AttachToActor );
	void PostBeginPlay ( );
	void AllAttachments (class UClass* ComponentClass, class UActorComponent** OutComponent, int* OutAttachmentIdx );
	class UActorComponent* GetComponentByName (class UClass* ComponentClass, struct FName& ComponentName );
	void EventFXStatePopped (class AFXActor_X* FXActor, class UFXActorEvent_X* Event );
	void EventFXStatePushed (class AFXActor_X* FXActor, class UFXActorEvent_X* Event );
};

// Class ProjectX.AnimateParametersComponent_X
// 0x0033 (0x0098 - 0x0065)
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	TArray< struct FAnimatedFloatParam >               FloatParameters;                                  		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimatedVectorParam >              VectorParameters;                                 		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimatedLinearColorParam >         ColorParameters;                                  		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bResetMaterialsOnComplete : 1;                    		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              AnimTime;                                         		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndTime;                                          		// 0x0094 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMATEPARAMETERSCOMPONENT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ArchetypePrefab_X
// 0x0018 (0x0200 - 0x01E8)
class AArchetypePrefab_X : public AActor
{
public:
	TArray< class AActor* >                            PrefabArchetypes;                                 		// 0x01E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AActor* >                            ArchetypeInstances;                               		// 0x01F4 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ARCHETYPEPREFAB_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0044 (0x022C - 0x01E8)
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;             		// 0x01E8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     ArchetypePath;                                    		// 0x01EC (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bSeedNavMesh : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSpawnOnLevelStart : 1;                           		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnlyAllowOneInstance : 1;                        		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class AActor*                                      ActorArchetype;                                   		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            PlacementSprite;                                  		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                            		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                              		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class AActor* >                            SpawnedActors;                                    		// 0x020C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class AActor*                                      SpawnedActor;                                     		// 0x0218 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x021C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0220 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ARCHETYPESPAWNPOINT_X ];

		return pClassPointer;
	};

	void OnSpawned (class AActor* Spawned );
	class AActor* DoSpawn ( );
	void OnToggle (class USeqAct_Toggle* Action );
	void OnDestroy (class USeqAct_Destroy* Action );
	void eventPostBeginPlay ( );
	void EventSpawned (class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned );
};

// Class ProjectX.Aws4Signature_X
// 0x0000 (0x003C - 0x003C)
class UAws4Signature_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_AWS4SIGNATURE_X ];

		return pClassPointer;
	};

	void SignRequest (class UHttpRequestInterface* HTTPRequest );
};

// Class ProjectX.TcpBeacon
// 0x004C (0x0094 - 0x0048)
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MaxConnections;                                   		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultListenPort;                                		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ConnectionClassName;                              		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ConnectionClass;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FPointer                                    ListenSocket;                                     		// 0x0064 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< class UTcpConnection* >                    Connections;                                      		// 0x0068 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TCPBEACON ];

		return pClassPointer;
	};

	void ReceivedBunch (class UTcpConnection* Connection );
	void OnDisconnected (class UTcpConnection* Connection );
	void OnConnected (class UTcpConnection* Connection );
	void eventOnConnectionRemoved (class UTcpConnection* Connection );
	void eventOnConnectionAdded (class UTcpConnection* Connection );
	class UTcpConnection* GetConnection (struct FString& Address );
	void Close ( );
	struct FString GetExternalHostAddress ( );
	struct FString GetLocalHostAddress ( );
	int GetListenPort ( );
	bool BeginListen ( );
	class UTcpConnection* BeginConnect (struct FString& Address );
	void EventDisconnected (class UTcpBeacon* Beacon, class UTcpConnection* Connection );
	void EventConnected (class UTcpBeacon* Beacon, class UTcpConnection* Connection );
};

// Class ProjectX.TcpMessageBeacon
// 0x0020 (0x00B4 - 0x0094)
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0094 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FTcpMessageHandler >                MessageHandlers;                                  		// 0x0098 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TCPMESSAGEBEACON ];

		return pClassPointer;
	};

	void BroadcastMessage (class UObject* Message );
	void SendMessage (class UTcpConnection* Connection, class UObject* Message );
	class UBeaconMessage_X* CreateMessage (class UClass* MessageClass );
	void RemoveMessageHandler (struct FScriptDelegate& Callback );
	void AddMessageHandler (class UClass* MessageClass, struct FScriptDelegate& Callback );
	void MessageReceivedDelegate (class UTcpConnection* Connection, class UObject* Message );
};

// Class ProjectX.BeaconMessage_X
// 0x0000 (0x003C - 0x003C)
class UBeaconMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_BEACONMESSAGE_X ];

		return pClassPointer;
	};

	class UBeaconMessage_X* Broadcast ( );
	class UBeaconMessage_X* Send (class UTcpConnection* Connection );
};

// Class ProjectX.BugReport_X
// 0x00FC (0x0138 - 0x003C)
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     BugReportClassName;                               		// 0x0040 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxFileSizeMegabytes;                             		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BugID;                                            		// 0x005C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportSubmitterData                     SubmitterData;                                    		// 0x0068 (0x0028) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportSystemData                        SystemData;                                       		// 0x0090 (0x0028) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportPathData                          PathData;                                         		// 0x00B8 (0x0030) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportDescriptionData                   DescriptionData;                                  		// 0x00E8 (0x003C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FPointer                                    LogFile;                                          		// 0x0124 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FFileUploadData >                   FileUploads;                                      		// 0x0128 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bUploadNextFile : 1;                              		// 0x0134 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	unsigned long                                      bSubmitted : 1;                                   		// 0x0134 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_BUGREPORT_X ];

		return pClassPointer;
	};

	void HandleHttpRequestComplete (class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed );
	void LogText (struct FString& Str );
	void eventPDIReport ( );
	void CancelBugReport ( );
	void SubmitBugReport (struct FString& Title, struct FString& Description, struct FString& Email );
	void StartBugReport ( );
	void StaticSubmitBugReport (struct FString& Title );
	class UBugReport_X* CreateBugReport ( );
};

// Class ProjectX.CachedWebData_X
// 0x0034 (0x0070 - 0x003C)
class UCachedWebData_X : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                DataCRC;                                          		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ETag;                                             		// 0x004C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ContentType;                                      		// 0x0058 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UError*                                      LoadError;                                        		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UError*                                      DownloadError;                                    		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bNewData : 1;                                     		// 0x006C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CACHEDWEBDATA_X ];

		return pClassPointer;
	};

	struct FString GetText ( );
	void SetData (TArray< unsigned char > NewData, struct FString& NewETag, struct FString& NewContentType );
};

// Class ProjectX.Camera_X
// 0x00F4 (0x05B8 - 0x04C4)
class ACamera_X : public ACamera
{
public:
	TArray< class UCameraState_X* >                    States;                                           		// 0x04C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    PCDeltaRotation;                                  		// 0x04D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    OldControllerRotation;                            		// 0x04DC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     PCDeltaLocation;                                  		// 0x04E8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     OldControllerLocation;                            		// 0x04F4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          PreProcessPOV;                                    		// 0x0500 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          PostProcessPOV;                                   		// 0x052C (0x002C) [0x0000000000002000]              ( CPF_Transient )
	class UCameraStateBlender_X*                       Blender;                                          		// 0x0558 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     ShakeLocationOffset;                              		// 0x055C (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FRotator                                    ShakeRotationOffset;                              		// 0x0568 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              ShakeFOVOffset;                                   		// 0x0574 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FColor                                      StartFadeColor;                                   		// 0x0578 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      EndFadeColor;                                     		// 0x057C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ClipOffset;                                       		// 0x0580 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FLocationCameraKnock >              LocationKnocks;                                   		// 0x058C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRotationCameraKnock >              RotationKnocks;                                   		// 0x0598 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDisableCameraShake : 1;                          		// 0x05A4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSnapNextTransition : 1;                          		// 0x05A4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;              		// 0x05A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x05AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERA_X ];

		return pClassPointer;
	};

	void eventOnViewTargetChanged ( );
	void SetViewTarget (class AActor* NewViewTarget, struct FViewTargetTransitionParams& TransitionParams );
	bool IsTransitioning ( );
	void HandleBlenderStateChanged (class UCameraStateBlender_X* CameraBlender );
	void SnapTransition ( );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void ApplyCameraModifiers (float DeltaTime, struct FTPOV* OutPOV );
	bool CameraTrace (struct FVector& End, struct FVector& Start, struct FVector& Extent, struct FVector* HitLoc, class AActor** HitActor );
	class UCameraState_X* InstanceCameraState (class UCameraState_X* Archetype );
	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void ProcessViewRotation (float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot );
	void PostProcessCameraState (float DeltaTime, struct FCameraOrientation* OutPOV );
	void ProcessCameraState (float DeltaTime, struct FCameraOrientation* OutPOV );
	void CheckViewTarget ( struct FTViewTarget* VT );
	void CopyFade (class ACamera_X* Other );
	void SetCameraFade (unsigned long bNewEnableFading, struct FColor& NewFadeColor, struct FVector2D& NewFadeAlpha, float NewFadeTime, unsigned long bNewFadeAudio );
	void UpdateFade (float DeltaTime );
	void eventUpdateCamera (float DeltaTime );
	void ClampPOV ( struct FCameraOrientation* OutPOV );
	struct FRotator RemoveRoll (struct FRotator& InRot );
	class UCameraState_X* GetCameraState ( );
	class UCameraState_X* SelectCameraState ( );
	void UpdateCameraState ( );
	void UpdateCameraKnocks (float DeltaTime, struct FCameraOrientation* OutPOV );
	void AddRotationKnock (struct FRotationCameraKnock& Knock, float Scale );
	void AddLocationKnock (struct FLocationCameraKnock& Knock, float Scale, struct FRotator& Transform );
	void InstanceCameraStates ( );
	void InitializeFor (class APlayerController* PC );
	void ModifyCameraShakeScale (class UCameraShake* Shake, float NewScale );
	void OnLoadingMovieClosesd ( );
	void eventPostBeginPlay ( );
	struct FVector InterpVector (struct FVector& OldValue, struct FVector& NewValue, struct FVectorInterpRate& Rate, struct FRotator& Orientation, float DeltaTime );
	void FinalizeOrientation ( struct FCameraOrientation* OutPOV );
	struct FCameraOrientation BlendCameraOrientations (float Alpha, struct FCameraOrientation* A, struct FCameraOrientation* B );
	void EventCameraStateChanged (class ACamera_X* Camera, class UCameraState_X* CameraState );
};

// Class ProjectX.CameraAttachmentComponent_X
// 0x0013 (0x0078 - 0x0065)
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	TArray< class UActorComponent* >                   Attachments;                                      		// 0x0068 (0x000C) [0x0000000004480009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bDirtyTransform : 1;                              		// 0x0074 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERAATTACHMENTCOMPONENT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.CanvasTexture_X
// 0x0010 (0x0144 - 0x0134)
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                 		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0138 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CANVASTEXTURE_X ];

		return pClassPointer;
	};

	void Draw (class UCanvas* C );
};

// Class ProjectX.CanvasTextureComponent_X
// 0x0017 (0x007C - 0x0065)
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	class UMeshComponent*                              Mesh;                                             		// 0x0068 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaterialIndex;                                    		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       MaterialParamName;                                		// 0x0070 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCanvasTexture_X*                            Texture;                                          		// 0x0078 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CANVASTEXTURECOMPONENT_X ];

		return pClassPointer;
	};

	void OnDraw (class UCanvas* C );
};

// Class ProjectX.PlayerController_X
// 0x0068 (0x0624 - 0x05BC)
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                  		// 0x05BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AHUD*                                        HUDArchetype;                                     		// 0x05C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       OldPawnReference;                                 		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      LockedDebugActor;                                 		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bPausedForExternalUI : 1;                         		// 0x05CC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UNetConnection*                              NetConnection;                                    		// 0x05D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                     		// 0x05D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x05D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPawnChange__Delegate;                      		// 0x05E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x05E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                  		// 0x05F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x05F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x0604 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0608 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;              		// 0x0614 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0618 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PLAYERCONTROLLER_X ];

		return pClassPointer;
	};

	void ToggleDebugCamera ( );
	void DebugCrosshair ( );
	void DebugKill ( );
	void DebugKillAllExcept ( );
	bool GetAutoAimTarget ( class AActor** HitActor, struct FVector* HitLoc );
	void __PlayerController_X__ReceivedPlayer (class UObject* _ );
	void ClientSetSeasonReward (struct FPlayerSeasonRewardProgress& Reward );
	void ServerUpdateCustomMatchSettings (struct FCustomMatchSettings& Settings );
	void ServerSetParty (struct FUniqueNetId& MemberId, struct FUniqueNetId& NewPartyID );
	void DisconnectSplitScreenPlayer (class UPlayer* P );
	void ServerDestroy ( );
	void KickPlayerForReason (struct FString& Reason, struct FString& Title );
	void ClientNetLag (float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike );
	void ServerNetLag (float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike );
	void Pause ( );
	void RemoveOptionFromLastURL (struct FString& OptName );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void eventClearOnlineDelegates ( );
	void RegisterOnlineDelegates ( );
	void eventClientPlayForceFeedbackWaveform (class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator );
	void ClientCommand (struct FString& Command );
	void ServerCommand (struct FString& Command );
	void eventUnPossess ( );
	void eventPossess (class APawn* aPawn );
	void OnPawnChange (class APawn* OldPawn, class APawn* NewPawn );
	void PawnReferenceUpdated ( );
	void ClientRestart (class APawn* NewPawn );
	void GivePawn (class APawn* NewPawn );
	void eventInitInputSystem ( );
	class ACamera* GetCameraArchetype ( );
	void eventSpawnPlayerCamera ( );
	void SetPlayerCamera (class ACamera* NewCamera );
	void AddCheats (unsigned long bForce );
	class UOnlineGameAccount_X* GetOnlineAccount ( );
	class UOnlinePlayer_X* GetOnlinePlayer ( );
	void OnReceivedPlayerAndPRI ( );
	void InitPlayerReplicationInfo ( );
	void eventDestroyed ( );
	void OnExternalUIChanged (unsigned long bIsOpening );
	void SetPaused (unsigned long bPaused );
	void eventReceivedPlayer ( );
	class UOnlineGame_X* GetOnlineGame ( );
	class UIOnlineGameHost_X* GetOnlineGameHost ( );
	class UOnlineGameLanServer_X* GetOnlineGameLanServer ( );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer ( );
	void SpawnDefaultHUD ( );
	void SetPRI (class APlayerReplicationInfo* PRI );
	void eventReplicatedEvent (struct FName& VarName );
	void EventPlayerCameraChange (class APlayerController_X* PC );
	void EventDestroyed (class APlayerController_X* PC );
	void EventReceivedPlayer (class APlayerController_X* PC );
	void EventPawnChange (class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn );
	void EventReceivedPRI (class APlayerController_X* PC );
};

// Class ProjectX.CheatManager_X
// 0x0010 (0x0064 - 0x0054)
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                    		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CHEATMANAGER_X ];

		return pClassPointer;
	};

	void HandleImageDownloaded (struct FOnlineImageDownload& Image );
	void DownloadImage (struct FString& URL, TArray< struct FString >* ArrayInitializer_E66F1C6E424F6C427C6ABBB2FDB2711C );
	void RandomSleep (float MinDelay, float MaxDelay, float MinSleep, float MaxSleep );
	void Sleep (float Seconds );
	void LoadKismetLevel (struct FName& LeveFileName );
	void DrawBulletContacts (float Lifetime );
	void PrintReproPhysics (struct FString& Command, class AActor* A );
	void ReproPhysics (class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ, float AX, float AY, float AZ );
	void DisableCCD ( );
	void SimulateInputKey (struct FName& KeyName );
	void SetNetServerMaxTickRate (float Rate );
	void ScreenShotDir (struct FString& Directory );
	void ListVisiblePrimitives ( );
	void HideVisiblePrimitives (struct FString& NameMatch, struct FString& NameIgnore );
	void ToggleReplicateVoiceToSelf ( );
	void ToggleReplicateVoiceToSender ( );
	void ShutdownCheatManager ( );
	void InitCheatManager ( );
	void EventDelegateTest ( );
};

// Class ProjectX.CheatObject_X
// 0x0000 (0x003C - 0x003C)
class UCheatObject_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CHEATOBJECT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ColorPalette_X
// 0x0018 (0x0054 - 0x003C)
class UColorPalette_X : public UObject
{
public:
	int                                                DefaultId;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HueCount;                                         		// 0x0040 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                ValueCount;                                       		// 0x0044 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< struct FLinearColor >                      Colors;                                           		// 0x0048 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_COLORPALETTE_X ];

		return pClassPointer;
	};

	int IntColorToID (int ColorInt );
	int IdToColorInt (int ColorID );
	struct FColorPosition GetColorPosition (int ColorID );
	struct FLinearColor GetValidColor (struct FLinearColor& InColor );
	int GetClosestID (struct FLinearColor& InColor );
	struct FLinearColor GetColor (int ColorID );
};

// Class ProjectX.Compression_X
// 0x0000 (0x003C - 0x003C)
class UCompression_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_COMPRESSION_X ];

		return pClassPointer;
	};

	bool Uncompress ( TArray< unsigned char >* Compressed, TArray< unsigned char >* Uncompressed );
	bool Compress ( TArray< unsigned char >* Uncompressed, TArray< unsigned char >* Compressed );
};

// Class ProjectX.ControlPreset_X
// 0x0028 (0x0064 - 0x003C)
class UControlPreset_X : public UObject
{
public:
	TArray< struct FPlayerBinding >                    PCBindings;                                       		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerBinding >                    GamepadBindings;                                  		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bRemovedPCOverrides : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRemovedGamepadOverrides : 1;                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FPlayerBinding >                    SteamInputBindings;                               		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CONTROLPRESET_X ];

		return pClassPointer;
	};

	TArray< struct FPlayerBinding > GetGamepadBindings ( );
	TArray< struct FPlayerBinding > GetPCBindings ( );
};

// Class ProjectX.CrashReport_X
// 0x0000 (0x003C - 0x003C)
class UCrashReport_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CRASHREPORT_X ];

		return pClassPointer;
	};

	void eventHandleHttpRequestComplete (class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bSuccess );
};

// Class ProjectX.CRC_X
// 0x0000 (0x003C - 0x003C)
class UCRC_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CRC_X ];

		return pClassPointer;
	};

	int CrcBytes ( TArray< unsigned char >* Bytes );
	int CrcString (struct FString& Text );
};

// Class ProjectX.CycleLog_X
// 0x0014 (0x005C - 0x0048)
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           Logs;                                             		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LogIndex;                                         		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CYCLELOG_X ];

		return pClassPointer;
	};

	void AllLogs ( struct FString* S );
};

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0003 (0x0070 - 0x006D)
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DISTRIBUTIONFLOATSHAKEPARAMETER_X ];

		return pClassPointer;
	};

};

// Class ProjectX.EffectsMap_X
// 0x000C (0x0048 - 0x003C)
class UEffectsMap_X : public UObject
{
public:
	TArray< struct FEffectsMapping >                   Effects;                                          		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EFFECTSMAP_X ];

		return pClassPointer;
	};

	struct FEffectsMapping GetEffects (class UPhysicalMaterial* PhysMat );
};

// Class ProjectX.EngineShare_X
// 0x00C0 (0x00FC - 0x003C)
class UEngineShare_X : public UEngineShare
{
public:
	class UOnlineGame_Base_X*                          OnlineGame;                                       		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ULocalCache_X*                               LocalCache;                                       		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ArchetypeString_OnlineGame;                       		// 0x0044 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;        		// 0x0050 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ArchetypeString_OnlineGameLanServer;              		// 0x005C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bDisableSaving : 1;                               		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsShowingLoadmapMovie : 1;                       		// 0x0068 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bUndocked : 1;                                    		// 0x0068 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	struct FScriptDelegate                             __EventPreExit__Delegate;                         		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;              		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;              		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;             		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;           		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                      		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                     		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCrashed__Delegate;                         		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x00E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventUndockedChanged__Delegate;                 		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x00F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ENGINESHARE_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool IsRequestingExit ( );
	struct FString GetUserAgentHeader ( );
	struct FString GetRegionString ( );
	struct FString GetPlatformString ( );
	bool ConfigGetString (struct FString& SectionName, struct FString& KeyName, struct FString* OutValue );
	bool ParseCommandlineString (struct FString& Param, struct FString* OutValue );
	bool ParseCommandlineQWORD (struct FString& Param, unsigned long long* OutValue );
	bool ParseCommandlineFloat (struct FString& Param, float* OutValue );
	bool ParseCommandlineInt (struct FString& Param, int* OutValue );
	bool ParseCommandlineParam (struct FString& Param );
	void InitOnlineGame (class UOnlineSubsystem* NewOnlineSubsystem );
	bool IsUsingNullRHI ( );
	bool IsLanServer ( );
	bool IsDedicatedServer ( );
	void EventUndockedChanged ( );
	void EventCrashed ( );
	void EventPostLoadMap ( );
	void EventPreLoadMap (struct FString& MapName );
	void EventOnlineGameInitialized ( );
	void EventPostScriptsReloaded ( );
	void EventPreScriptsReloaded ( );
	void EventLoadingMovieClosed ( );
	void EventPreExit ( );
};

// Class ProjectX.EpochTimers_X
// 0x0018 (0x0054 - 0x003C)
class UEpochTimers_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FEpochTimer >                       Timers;                                           		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 EpochNow;                                         		// 0x004C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EPOCHTIMERS_X ];

		return pClassPointer;
	};

	bool IsActive (struct FScriptDelegate& Callback );
	void ClearAll (class UObject* Obj );
	void Clear (struct FScriptDelegate& Callback, struct FScriptDelegate& Callback2 );
	void SetWindow (struct FScriptDelegate& StartCallback, unsigned long long EpochStartTime, struct FScriptDelegate& EndCallback, unsigned long long EpochEndTime );
	void SetTime (struct FScriptDelegate& Callback, unsigned long long EpochTime );
	void Set (struct FScriptDelegate& Callback, unsigned long long DelaySeconds );
	void eventConstruct ( );
};

// Class ProjectX.Errors_X
// 0x0140 (0x0194 - 0x0054)
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                     		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetErrorType_X*                          RequestError;                                     		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  HTTPError;                                        		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  SessionNotActive;                                 		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_NotConnected;                                		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_Connected;                                   		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ConnectionDropped;                           		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_NoNetworkConnection;                         		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ServiceUnavailable;                          		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_UpdateRequired;                              		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ServersTooBusy;                              		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                      		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_InvalidUser;                                 		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_InvalidResponse;                             		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ConnectionStatusErrors[ 0xB ];                    		// 0x008C (0x002C) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  VersionMismatch;                                  		// 0x00B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NoServers;                                        		// 0x00BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileDoesNotExist;                                 		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileLoadFail;                                     		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileLoadCorrupt;                                  		// 0x00C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileMountCorrupt;                                 		// 0x00CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileSaveFail;                                     		// 0x00D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileSaveNoSpace;                                  		// 0x00D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileSaveCorrupt;                                  		// 0x00D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserBanned;                                       		// 0x00DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NotLoggedInToPsynet;                              		// 0x00E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FriendsList;                                      		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  AuthenticationFailed;                             		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NoExportCountry;                                  		// 0x00EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UnauthorizedAccess;                               		// 0x00F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ServiceNotFound;                                  		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FeatureDisabled;                                  		// 0x00F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MatchmakingDisabled;                              		// 0x00FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlaylistNotAvailable;                             		// 0x0100 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameNotSet;                                 		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameAlreadyTaken;                           		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameTooShort;                               		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameTooLong;                                		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameInappropriate;                          		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameInvalidCharacter;                       		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameFailed;                                 		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NotAuthorized;                                    		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  SessionAlreadyActive;                             		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  GameServerPending;                                		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CacheError;                                       		// 0x012C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterEvil;                                   		// 0x0130 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterPlatformError;                          		// 0x0134 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterPlatformChatError;                      		// 0x0138 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidSettings;                                  		// 0x013C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  Maintenance;                                      		// 0x0140 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlatformAuthError;                                		// 0x0144 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MicrotransactionAuthExpired;                      		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotFriendSelf;                                 		// 0x014C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidPlayer;                                    		// 0x0150 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  AlreadyFriends;                                   		// 0x0154 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FriendLimitReached;                               		// 0x0158 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  LocalFriendLimitReached;                          		// 0x015C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  RemoteFriendLimitReached;                         		// 0x0160 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  LocalHostConnectionError;                         		// 0x0164 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UGCRestricted;                                    		// 0x0168 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetErrorType_X*                          PerConBroken;                                     		// 0x016C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MicrotransactionServiceMaintenance;               		// 0x0170 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  GenericStorageOutOfSync;                          		// 0x0174 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  GenericStorageSync_SignatureMismatch;             		// 0x0178 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  GenericStorageSync_RequestNotFound;               		// 0x017C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidPlatform;                                  		// 0x0180 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidPlatformForCodeRedemption;                 		// 0x0184 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidParameters;                                		// 0x0188 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetErrorType_X*                          NotMatchmaking;                                   		// 0x018C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  AccessDenied;                                     		// 0x0190 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ERRORS_X ];

		return pClassPointer;
	};

	bool DisplayPlatformError (class UErrorType* InErrorType );
};

// Class ProjectX.EventRecorder_X
// 0x004C (0x0094 - 0x0048)
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UEventRecorderConfig_X*                      Config;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MaxQueuedEvents;                                  		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxQueuedMinutes;                                 		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMetricsEvent >                     QueuedEvents;                                     		// 0x0058 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FGuid                                       AppSessionID;                                     		// 0x0064 (0x0010) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FGuid                                       LevelSessionID;                                   		// 0x0074 (0x0010) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              NextSendTime;                                     		// 0x0084 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              FloodPreventionTimeSeconds;                       		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFullSendTime;                                 		// 0x008C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                AppEventCount;                                    		// 0x0090 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EVENTRECORDER_X ];

		return pClassPointer;
	};

	void eventMetricsNotSent (int Count );
	void eventMetricsFlood (struct FString& LastEventName );
	void SetLevelSessionID (struct FGuid& Id );
	bool Send ( );
	void RecordEvent (struct FString& Category, struct FName& Event, struct FUniqueNetId& PlayerID, struct FString* Data );
	void RecordFunction (struct FString& Category );
};

// Class ProjectX.MetricsSystem_X
// 0x0000 (0x0094 - 0x0094)
class UMetricsSystem_X : public UEventRecorder_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_METRICSSYSTEM_X ];

		return pClassPointer;
	};

};

// Class ProjectX.EventRecorderGroup_X
// 0x000C (0x0054 - 0x0048)
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                         		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EVENTRECORDERGROUP_X ];

		return pClassPointer;
	};

	struct FString VectorToString (struct FVector& V );
	void RecordFunction ( );
	class UEventRecorder_X* GetEventRecorder ( );
};

// Class ProjectX.MetricsGroup_X
// 0x0000 (0x0054 - 0x0054)
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_METRICSGROUP_X ];

		return pClassPointer;
	};

	class UEventRecorder_X* GetEventRecorder ( );
};

// Class ProjectX.NetworkNextMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UNetworkNextMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTMETRICS_X ];

		return pClassPointer;
	};

	void eventClientInitFail ( );
	void eventServerInitFail ( );
	void eventClientError (int State );
	void eventInvalidPackets (int Type, int Count );
	void eventRouteUsed (unsigned long long SessionId, float DeltaRTT, float DeltaJitter, float DeltaLoss );
	void eventRouteEstablished (unsigned long long SessionId );
	void eventUseDirect ( );
};

// Class ProjectX.FakeData_X
// 0x0298 (0x02D4 - 0x003C)
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FFakeData1                                  Data1;                                            		// 0x0040 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData2                                  Data2;                                            		// 0x0070 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData3                                  Data3;                                            		// 0x00E8 (0x00FC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData4                                  Data4;                                            		// 0x01E4 (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_FAKEDATA_X ];

		return pClassPointer;
	};

	int RandomizeValues (class UObject* Target, int InRandomSeed );
	class UFakeData_X* RandomizeFakeData (class UFakeData_X* FakeData, int InRandomSeed );
	class UFakeData_X* GenerateFakeData (int InRandomSeed );
};

// Class ProjectX.FXActorEvent_X
// 0x0000 (0x003C - 0x003C)
class UFXActorEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_FXACTOREVENT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.FXAttachmentTraitBase_X
// 0x0000 (0x003C - 0x003C)
class UFXAttachmentTraitBase_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_FXATTACHMENTTRAITBASE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GameEngine_X
// 0x0000 (0x07FC - 0x07FC)
class UGameEngine_X : public UGameEngine
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMEENGINE_X ];

		return pClassPointer;
	};

	void __GameEngine_X__Construct (struct FString& InURL );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void eventOnlineSubsystemInitialized ( );
	void eventConstruct ( );
};

// Class ProjectX.GameInfo_X
// 0x0038 (0x0394 - 0x035C)
class AGameInfo_X : public AGameInfo
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                     		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerController*                           PlayerControllerArchetype;                        		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       PawnArchetype;                                    		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPauserData >                       PCPausers;                                        		// 0x0368 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0378 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInit__Delegate;                            		// 0x0384 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0388 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMEINFO_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void eventClientMapLoadFail (struct FUniqueNetId& PlayerID, struct FString& MapName );
	void RemovePauser (class APlayerController* PC, unsigned long bForceRemove );
	void AddPauser (class APlayerController* PC );
	void SetPaused (class APlayerController* PC, unsigned long bPause );
	void TogglePause (class APlayerController* PC );
	bool IsPaused (class APlayerController* PC );
	class UIOnlineGameHost_X* GetOnlineGameHost ( );
	class UOnlineGameLanServer_X* GetOnlineGameLanServer ( );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer ( );
	class UOnlineGame_Base_X* GetOnlineGame ( );
	void EndOnlineGame ( );
	void Logout (class AController* Exiting );
	void GenericPlayerInitialization (class AController* C );
	void DisconnectExistingPlayer ( struct FUniqueNetId* PlayerID );
	class APlayerController* eventLogin (struct FString& Portal, struct FString& Options, struct FUniqueNetId& UniqueId, struct FString* ErrorMessage );
	void eventPreLogin (struct FString& Options, struct FString& Address, struct FUniqueNetId& UniqueId, unsigned long bSupportsAuth, struct FString* ErrorMessage );
	void UpdateGameSettingsCounts ( );
	void PostBeginPlay ( );
	bool ProcessServerLogin ( );
	void RegisterServer ( );
	class APawn* SpawnDefaultPawnFor (class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void eventPreBeginPlay ( );
	class APlayerController* SpawnPlayerController (struct FVector& SpawnLocation, struct FRotator& SpawnRotation );
	class UClass* eventSetGameType (struct FString& MapName, struct FString& Options, struct FString& Portal );
	struct FString eventGetDefaultGameClassPath (struct FString& MapName, struct FString& Options, struct FString& Portal );
	void PDI (class UClass* ActorClass, unsigned long bOnlybDebug );
	void eventInitGame (struct FString& Options, struct FString* ErrorMessage );
	void EventInit (class AGameInfo_X* G, struct FString& Options );
	void EventSpawned (class AGameInfo_X* G );
};

// Class ProjectX.GameSetting_X
// 0x0004 (0x0040 - 0x003C)
class UGameSetting_X : public UObject
{
public:
	unsigned long                                      bHidden : 1;                                      		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMESETTING_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool IsSetting (struct FName& SettingName );
	void AddGameSettingToList (class UOnlineGameSettings_X* OnlineGameSettings, TArray< class UGameSetting_X* >* GameSettingsArray );
};

// Class ProjectX.GameSettingCategory_X
// 0x001C (0x0058 - 0x003C)
class UGameSettingCategory_X : public UObject
{
public:
	TArray< struct FName >                             SelectedNames;                                    		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHidden : 1;                                      		// 0x0048 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< class UGameSetting_X* >                    GameSettings;                                     		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMESETTINGCATEGORY_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	int GetGameSettingIndex (struct FName& SettingName );
	bool eventHasSetting (struct FName& SettingName );
	void GetSelectedGameSettings ( TArray< class UGameSetting_X* >* SelectedGameSettings );
	class UGameSetting_X* GetFirstSelectedGameSetting ( );
	void ClearSelected ( );
	void AddSelectedSetting (struct FName& NewSelectedName );
	void SetGameSettings (TArray< class UGameSetting_X* > NewGameSettings );
};

// Class ProjectX.GameViewportClient_X
// 0x0048 (0x01DC - 0x0194)
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                                  		// 0x0194 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                MaxSplitScreenPlayers;                            		// 0x0198 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                 		// 0x019C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x01B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;           		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x01C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;             		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x01D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMEVIEWPORTCLIENT_X ];

		return pClassPointer;
	};

	void OnPrimaryPlayerSwitch (class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer );
	bool ForceRemovePlayer (class ULocalPlayer* ExPlayer );
	bool eventRemovePlayer (class ULocalPlayer* ExPlayer );
	bool RemovePlayerByID (int ControllerId );
	void eventSetHardwareMouseCursorVisibility (unsigned long bIsVisible );
	void NotifyConnectionError (unsigned char MessageType, struct FString& Message, struct FString& Title );
	void eventSetProgressMessage (unsigned char MessageType, struct FString& Message, struct FString& Title, unsigned long bIgnoreFutureNetworkMessages );
	class ULocalPlayer* eventCreatePlayer (int ControllerId, unsigned long bSpawnActor, struct FString* OutError );
	void NotifyPlayerRemoved (int PlayerIndex, class ULocalPlayer* RemovedPlayer );
	void NotifyPlayerAdded (int PlayerIndex, class ULocalPlayer* AddedPlayer );
	bool IsGameRecordingEnabled ( );
	float GetDefaultSafeZone ( );
	void FlashWindow ( );
	void SaveCurrentWindowState ( );
	void SaveWindowState (int ResX, int ResY, unsigned long bFullScreen, unsigned long bBorderless, unsigned long bVsync );
	bool GetAvailableResolutions ( TArray< struct FIntPoint >* Resolutions );
	bool GetAvailableResolutionsStr ( TArray< struct FString >* Resolutions );
	bool IsBorderlessViewport ( );
	struct FIntPoint GetViewportSizePoint ( );
	struct FString GetViewportSizeStr ( );
	class UGameViewportClient_X* GetInstance ( );
	void EventPrimaryPlayerChange (class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer );
	void EventNotifyConnectionError (unsigned char MessageType, struct FString& Title, struct FString& Message );
	void EventLocalPlayerLeave (class ULocalPlayer* OldPlayer );
	void EventLocalPlayerJoin (class ULocalPlayer* NewPlayer );
};

// Class ProjectX.GFxDataRow_X
// 0x0024 (0x0060 - 0x003C)
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                        		// 0x003C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       PrimaryKeyName;                                   		// 0x0044 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      ProxyClass;                                       		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bLevelTransitionPersistent : 1;                   		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UObject*                                     ProxyObject;                                      		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UGFxShell_X*                                 Shell;                                            		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                RowIndex;                                         		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXDATAROW_X ];

		return pClassPointer;
	};

	class UGFxObject* FlashEventObject ( );
	struct FString FlashEventString ( );
	float FlashEventFloat ( );
	int FlashEventInt ( );
	void FlashEventVoid ( );
	void SetProxy (class UObject* InProxyObject );
	void eventOnRemoved ( );
	void eventOnShellSet ( );
};

// Class ProjectX.GFxDataSingleton_X
// 0x0000 (0x0060 - 0x0060)
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXDATASINGLETON_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GFxShell_X
// 0x0060 (0x00C0 - 0x0060)
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULocalPlayer_X*                              Player;                                           		// 0x0064 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bGamePaused : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      bWasFullscreen : 1;                               		// 0x0068 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	float                                              LeftX;                                            		// 0x006C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              LeftY;                                            		// 0x0070 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              RightX;                                           		// 0x0074 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              RightY;                                           		// 0x0078 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	TArray< class UGFxMoviePlayer_X* >                 Movies;                                           		// 0x007C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UGFxDataStore_X*                             DataStore;                                        		// 0x0088 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      NavigationMode;                                   		// 0x008C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      InputType;                                        		// 0x008D (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                   		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXSHELL_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void SetMouseKeyPressed (struct FName& Key, unsigned long bPressed );
	void SetAllowAnyPlayerInput (unsigned long bAllow );
	void HandlePauseChanged ( );
	void OnShowKeyboardCanceled ( );
	void OnShowKeyboardComplete (struct FString& NewText );
	void HandleShowKeyboardComplete (struct FString& NewText, unsigned long bCanceled );
	struct FString PasteFromClipboard ( );
	void CopyToClipboard (struct FString& ClipboardText );
	void HideKeyboard ( );
	bool ShowKeyboard (struct FString& TitleText, struct FString& DescriptionText, unsigned long bIsPassword, struct FString& DefaultText, int MaxLength );
	void SetGamePaused (unsigned long bPaused );
	void ExitToMainMenu ( );
	void ExitGame ( );
	void HandleMovieInputCaptureChanged (class UGFxMoviePlayer_X* MoviePlayer );
	void TriggerDataCallbacks ( );
	void eventTick (float DeltaTime );
	void eventOnMovieClosed (class UGFxMoviePlayer_X* Movie );
	void eventOnMovieStarted (class UGFxMoviePlayer_X* Movie );
	void StopMovie (class UGFxMoviePlayer_X* Movie );
	void StartMovie (class UGFxMoviePlayer_X* Movie );
	void eventStop ( );
	void eventOnStart ( );
	void eventStart (class ULocalPlayer_X* InPlayer );
	void EventReceivedInput (class UGFxShell_X* InShell );
	void EventInputTypeChanged (class UGFxShell_X* InShell );
	void EventInputCaptureChanged (class UGFxShell_X* InShell );
};

// Class ProjectX.GFxDataStore_X
// 0x0058 (0x00A0 - 0x0048)
class UGFxDataStore_X : public UComponent
{
public:
	TArray< struct FGFxDataStoreTable >                Tables;                                           		// 0x0048 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGFxDirtyTable >                    DirtyTables;                                      		// 0x0054 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FMap_Mirror                                 ObjectNameToTable;                                		// 0x0060 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bDebugGetValue : 1;                               		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXDATASTORE_X ];

		return pClassPointer;
	};

	void ExportFakeData (struct FName& TableName );
	void PrintData (struct FName& TableName );
	int GetObjectRow (class UGFxDataRow_X* O );
	void AllObjects (class UClass* ObjClass, class UGFxDataRow_X** OutObject, int* Row );
	class UGFxDataRow_X* GetObjectByPrimaryKey (class UClass* ObjClass, struct FString& Value );
	class UGFxDataRow_X* GetObject (class UClass* ObjClass, int Row );
	void RemoveObject (class UGFxDataRow_X* O );
	void BindObject (class UGFxDataRow_X* Object, int Row );
	class UGFxDataRow_X* CreateObject (class UClass* ObjClass, int Row, int* PlacedRow );
	void RemoveAllObjects (class UClass* ObjClass );
	void SetObjectCount (class UClass* ObjClass, int Count );
	int GetObjectCount (class UClass* ObjClass );
	void EmptyTables ( );
	void EmptyTable (struct FName& Table );
	void RemoveRow (struct FName& Table, int Row );
	void SetRowCount (struct FName& Table, int Count );
	int GetRowCount (struct FName& Table );
	struct FASValue GetValue (struct FName& Table, int Row, struct FName& Column );
	int GetObjectIndex (class UGFxDataRow_X* TargetObject );
	void SetASValue (struct FName& Table, int Row, struct FName& Column, struct FASValue* Value );
	void SetTextureValue (struct FName& Table, int Row, struct FName& Column, class UTexture* Value );
	void SetStringValue (struct FName& Table, int Row, struct FName& Column, struct FString& Value );
	void SetQWordValue (struct FName& Table, int Row, struct FName& Column, unsigned long long Value );
	void SetFloatValue (struct FName& Table, int Row, struct FName& Column, float Value );
	void SetIntValue (struct FName& Table, int Row, struct FName& Column, int Value );
	void SetBoolValue (struct FName& Table, int Row, struct FName& Column, unsigned long Value );
	void SetDirty (struct FName& TableName, int RowNum, struct FName& Value );
};

// Class ProjectX.GFxEngine_X
// 0x0054 (0x0110 - 0x00BC)
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                   		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< class UGFxShell_X* >                       Shells;                                           		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FDirtyObject >                      DirtyObjects;                                     		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bAnyShellHasInput : 1;                            		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      AvailableGamepadType;                             		// 0x00DC (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventShellCreated__Delegate;                    		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;     		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0104 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXENGINE_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void eventOnGameSessionEnded ( );
	void GetFlashKey (struct FName& UnrealKey, int* KeyCode, int* MouseButton );
	void UpdateHardwareMouseCursorVisibility ( );
	void HandleShellInputTypeChanged (class UGFxShell_X* InShell );
	void HandleGFxEnabledChanged (class UGameViewportClient* GVC );
	void HandleShellInputCaptureChanged (class UGFxShell_X* InShell );
	void FlushDirtyObjects ( );
	void eventTick (float DeltaTime );
	class UGFxShell_X* FindShell (class ULocalPlayer_X* ForPlayer );
	void OnShellDestroyed (class UGFxShell_X* Shell );
	void DestroyShell (class ULocalPlayer* ForPlayer );
	class UGFxShell_X* eventCreateShell ( );
	class UGFxShell_X* GetShell (class ULocalPlayer_X* ForPlayer );
	void SetShellArchetype (class UGFxShell_X* InShellArchetype );
	class UGFxEngine_X* GetInstance (class UClass* Type );
	void EventGameSessionEnded ( );
	void EventAvailableGamepadTypeChanged (class UGFxEngine_X* Engine );
	void EventShellCreated (class UGFxEngine_X* Engine, class UGFxShell_X* Shell );
};

// Class ProjectX.GFxMoviePlayer_X
// 0x00D0 (0x023C - 0x016C)
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                            		// 0x016C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UGFxDataStore_X*                             DataStore;                                        		// 0x0170 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UGFxDataCallback_X* >                DataCallbacks;                                    		// 0x0174 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< class UGFxObjectReference_X* >             ActionScriptClasses;                              		// 0x0180 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FMap_Mirror                                 ActionScriptClassMap;                             		// 0x018C (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FString >                           CursorScenes;                                     		// 0x01C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           InputScenes;                                      		// 0x01D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           CaptureScenes;                                    		// 0x01E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       DebugTableCallback;                               		// 0x01EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DebugColumnCallback;                              		// 0x01F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxObjectReference_X*                       ShellHooksClass;                                  		// 0x01FC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UGFxSoundPack_X* >                   LoadedSoundPacks;                                 		// 0x0200 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStarted__Delegate;                         		// 0x020C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0210 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x021C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0220 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0230 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXMOVIEPLAYER_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void SetAllowAnyPlayerInput (unsigned long bAllow );
	bool PopString (struct FString& Value, TArray< struct FString >* Items );
	void SetGlobalRTCP (struct FName& Key, float Value );
	void eventStopAllSounds (class UGFxSoundPack_X* SoundPack );
	void StopSound (struct FName& EventName );
	void PlaySound (struct FName& EventName );
	void eventPlaySoundFromTheme (struct FName& EventName, struct FName& SoundThemeName );
	class AActor* GetSoundSource ( );
	void UpdateCursorVisibility ( );
	void eventSetCaptureAllInput (unsigned long bNewCaptureInput, struct FString& SceneName );
	void eventSetReceiveInput (unsigned long bNewReceiveInput, struct FString& SceneName );
	void eventSetCursorVisible (unsigned long bVisible, struct FString& SceneName );
	void InitShellHooks ( );
	void InitDataHooks ( );
	void eventOnClose ( );
	bool eventStart (unsigned long StartPaused );
	void EventInputCaptureChanged (class UGFxMoviePlayer_X* Player );
	void EventClosed (class UGFxMoviePlayer_X* Player );
	void EventStarted (class UGFxMoviePlayer_X* Player );
};

// Class ProjectX.GFxObjectReference_X
// 0x0030 (0x006C - 0x003C)
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x003C (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXOBJECTREFERENCE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GFxDataCallback_X
// 0x0015 (0x0081 - 0x006C)
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                            		// 0x006C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                Row;                                              		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       Column;                                           		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Type;                                             		// 0x0080 (0x0001) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXDATACALLBACK_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GFxSoundPack_X
// 0x001C (0x0058 - 0x003C)
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                  		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSoundPackSoundRef >                Sounds;                                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bHasSubtitles : 1;                                		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXSOUNDPACK_X ];

		return pClassPointer;
	};

	bool ToggleSound (int Idx, class AActor* Target, unsigned long bPlay );
	void StopAll (class AActor* Target );
	bool StopSound (struct FName& SoundName, class AActor* Target );
	bool PlaySound (struct FName& SoundName, class AActor* Target );
};

// Class ProjectX.InterpComponent_X
// 0x00DF (0x0144 - 0x0065)
class UInterpComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[ 0xB ];                             		// 0x0065 (0x000B) MISSED OFFSET
	struct FMatrix                                     InterpStart;                                      		// 0x0070 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FMatrix                                     InterpEnd;                                        		// 0x00B0 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FMatrix                                     InterpLocalToWorld;                               		// 0x00F0 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              InterpStartTime;                                  		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InterpEndTime;                                    		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FAttachment >                       Attachments;                                      		// 0x0138 (0x000C) [0x0000000000680002]              ( CPF_Const | CPF_Component | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_INTERPCOMPONENT_X ];

		return pClassPointer;
	};

	void DetachComponent (class UActorComponent* Component );
	void AttachComponent (class UActorComponent* Component, struct FVector& RelativeLocation, struct FRotator& RelativeRotation, struct FVector& RelativeScale );
};

// Class ProjectX.JsonTests_X
// 0x0000 (0x003C - 0x003C)
class UJsonTests_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_JSONTESTS_X ];

		return pClassPointer;
	};

	bool ToJsonAndBack (class UObject* Target );
	void RunJsonTests (int RandomSeed );
};

// Class ProjectX.LanBeacon_X
// 0x0020 (0x0068 - 0x0048)
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    LanBeacon;                                        		// 0x004C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                LanAnnouncePort;                                  		// 0x0050 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned long long                                 QueryNonce;                                       		// 0x0054 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      BeaconState;                                      		// 0x005C (0x0001) [0x0000000000000002]              ( CPF_Const )
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0060 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaxPacketSize;                                    		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANBEACON_X ];

		return pClassPointer;
	};

	bool BroadcastMessage (class UObject* Message );
	bool BroadcastData ( TArray< unsigned char >* Data );
	void Stop ( );
	bool Start (unsigned char InitialState );
};

// Class ProjectX.LensFlareComponent_X
// 0x005C (0x02A0 - 0x0244)
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0244 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FRawDistributionFloat                       AlphaOverTime;                                    		// 0x0248 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      ColorOverTime;                                    		// 0x0264 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FLensFlareFloatParamCurve >         MaterialFloatParamValuesOverTime;                 		// 0x0280 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       SourceColorParamName;                             		// 0x028C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SourceColorAlphaParamName;                        		// 0x0294 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AttachTime;                                       		// 0x029C (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LENSFLARECOMPONENT_X ];

		return pClassPointer;
	};

	void SetActorParameter (struct FName& Key, class AActor* Value );
	void SetLinearColorParameter (struct FName& Key, struct FLinearColor& Value );
	void SetVectorParameter (struct FName& Key, struct FVector& Value );
	void SetFloatParameter (struct FName& Key, float Value );
	void SetNameParameter (struct FName& Key, struct FName& Value );
};

// Class ProjectX.LocalCache_X
// 0x0058 (0x0094 - 0x003C)
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FPointer >                          ImportTasks;                                      		// 0x0040 (0x000C) [0x0000000000103000]              ( CPF_Native | CPF_Transient )
	TArray< struct FCacheImportCallbackData >          ImportCallbacks;                                  		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPointer >                          ExportTasks;                                      		// 0x0058 (0x000C) [0x0000000000103000]              ( CPF_Native | CPF_Transient )
	TArray< struct FCacheExportCallbackData >          ExportCallbacks;                                  		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDebug : 1;                                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FScriptDelegate                             __EventImportFinished__Delegate;                  		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventExportFinished__Delegate;                  		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LOCALCACHE_X ];

		return pClassPointer;
	};

	void Flush (float TimeoutSeconds );
	bool HasActiveTasks ( );
	void ExportObjectAsync (class UObject* CacheObject, struct FString& Path, struct FScriptDelegate& Callback );
	void ImportObjectAsync (class UObject* CacheObject, struct FString& Path, struct FScriptDelegate& Callback );
	class UError* ImportObject (class UObject* CacheObject, struct FString& Path );
	void EventExportFinished (class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void EventImportFinished (class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
};

// Class ProjectX.LocalPlayer_X
// 0x0004 (0x03E4 - 0x03E0)
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                     		// 0x03E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LOCALPLAYER_X ];

		return pClassPointer;
	};

	bool SpawnPlayActor (struct FString& URL, struct FString* OutError );
	void eventNotifyServerConnectionOpen ( );
	void OnRemoved ( );
	void OnCreated ( );
};

// Class ProjectX.MapFlythroughProfiler_X
// 0x004C (0x0234 - 0x01E8)
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                            		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnRate;                                         		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProfileTime;                                      		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinishTime;                                       		// 0x01F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Speed;                                            		// 0x01F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRenderProfile                              Profile;                                          		// 0x01FC (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0228 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MAPFLYTHROUGHPROFILER_X ];

		return pClassPointer;
	};

	void SetupPlayers ( );
	void eventPostBeginPlay ( );
	void EventFinished (class AMapFlythroughProfiler_X* Profiler );
};

// Class ProjectX.NetworkNextClient_X
// 0x0000 (0x003C - 0x003C)
class UNetworkNextClient_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTCLIENT_X ];

		return pClassPointer;
	};

	void CloseSession ( );
	void OpenSession (struct FString& RouteData );
	bool GetClientData ( struct FString* Data );
};

// Class ProjectX.NetworkNextServer_X
// 0x0000 (0x003C - 0x003C)
class UNetworkNextServer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTSERVER_X ];

		return pClassPointer;
	};

	void HandleWebRequestComplete (class UWebRequest_X* Request, class UTAsyncResult__String* Task );
	class UWebRequest_X* CreateRouteRequest (struct FUniqueNetId& PlayerID, struct FString& ClientDataBase64 );
	class UTAsyncResult__String* RequestRoute (struct FUniqueNetId& PlayerID, struct FString& ClientDataBase64 );
	bool IsRoutingEnabled ( );
	bool IsDriverEnabled ( );
};

// Class ProjectX.OnlineConfig_X
// 0x0010 (0x004C - 0x003C)
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FModifierSubscription >             AllSubscriptions;                                 		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECONFIG_X ];

		return pClassPointer;
	};

	void UnsubscribeModifiers ( );
	void ModifyObjects (class UClass* ObjClass, struct FScriptDelegate& ApplyCallback, struct FScriptDelegate& ResetCallback );
	void Undo ( );
	void Apply ( );
};

// Class ProjectX.CrossplayConfig_X
// 0x000C (0x0058 - 0x004C)
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray< struct FCrossplayGroup >                   Groups;                                           		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CROSSPLAYCONFIG_X ];

		return pClassPointer;
	};

	bool PlatformsShareGroup (unsigned char Platform1, unsigned char Platform2 );
};

// Class ProjectX.EventRecorderConfig_X
// 0x0014 (0x0060 - 0x004C)
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSeparatePlayerIDs : 1;                           		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bExcludePlayerIDs : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< struct FName >                             DisabledEvents;                                   		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      EventRecorderClass;                               		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EVENTRECORDERCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.NetworkNextConfig_X
// 0x0034 (0x0080 - 0x004C)
class UNetworkNextConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnableDriver : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableRouting : 1;                               		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              RouteRequestTimeoutSeconds;                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                KbpsUp;                                           		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                KbpsDown;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MaxPricePerGig;                                   		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AcceptableLatency;                                		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SteamUserRoutingChance;                           		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           SteamUserCountryCodes;                            		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ServerEnableChance;                               		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTCONFIG_X ];

		return pClassPointer;
	};

	void Undo ( );
	void Apply ( );
};

// Class ProjectX.PsyNetConfig_X
// 0x0020 (0x006C - 0x004C)
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowPsyNetParty : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSendPingMessage : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUploadServerBugReports : 1;                      		// 0x004C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowServerBacktraceUploads : 1;                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowServerBacktraceLogUploads : 1;              		// 0x004C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bAllowClientBacktraceUploads : 1;                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bAllowClientBacktraceLogUploads : 1;              		// 0x004C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bUseMatchmakingPolling : 1;                       		// 0x004C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bUseMatchmakingNotifications : 1;                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bAllowPlayerCancelMatch : 1;                      		// 0x004C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	int                                                PerConMaxInvalidMessages;                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PerConMaxDisconnects;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PerConMaxErrors;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConErrorWindow;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConTimeout;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConPingInterval;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FreshConnectionWindow;                            		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPCConfig_X
// 0x0018 (0x0064 - 0x004C)
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray< class UClass* >                            DisabledClasses;                                  		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           DisabledServices;                                 		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPCCONFIG_X ];

		return pClassPointer;
	};

	bool IsRPCDisabled (class URPC_X* RPC );
};

// Class ProjectX.ServerConfig_X
// 0x0014 (0x0060 - 0x004C)
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                                 		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bUploadLogFiles : 1;                              		// 0x0050 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUploadReplays : 1;                               		// 0x0050 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	int                                                MaxUploadLogFileSize;                             		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              NetServerMaxTickRate;                             		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              IdleNetServerMaxTickRate;                         		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SERVERCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlineFriendMap_X
// 0x003C (0x0084 - 0x0048)
class UOnlineFriendMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                        		// 0x0048 (0x003C) [0x0000000000001000]              ( CPF_Native )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEFRIENDMAP_X ];

		return pClassPointer;
	};

	void ValueArray ( TArray< struct FOnlineFriend >* OutArray );
	void AppendArray ( TArray< struct FOnlineFriend >* InArray );
	void CopyArray ( TArray< struct FOnlineFriend >* InArray );
	bool Contains ( struct FUniqueNetId* Key );
	void Clear (int ExpectedElements );
	void Remove ( struct FUniqueNetId* Key );
	bool TryGet ( struct FUniqueNetId* Key, struct FOnlineFriend* OutValue );
	void Set ( struct FUniqueNetId* Key, struct FOnlineFriend* Value );
	int Count ( );
	void AllValues (int StartIndex, int MaxValues, struct FOnlineFriend* OutFriend );
};

// Class ProjectX.OnlineGameSearch_X
// 0x0030 (0x0124 - 0x00F4)
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	TArray< struct FString >                           InclusiveGameTagsArray;                           		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           ExclusiveGameTagsArray;                           		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     GameTagsDelimiter;                                		// 0x0118 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESEARCH_X ];

		return pClassPointer;
	};

	bool GetStringProperty (int PropertyId, struct FString* Value );
	struct FString eventGetExclusiveGameTags ( );
	struct FString eventGetInclusiveGameTags ( );
	void SetMap (struct FString& inMapName );
	void SetExclusiveGameTags (TArray< struct FString > inGameTagsArray );
	void SetInclusiveGameTags (TArray< struct FString > inGameTagsArray );
};

// Class ProjectX.OnlineGameSettings_X
// 0x0038 (0x00A4 - 0x006C)
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                             		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                NumOpenPublicConnections;                         		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< class UGameSettingCategory_X* >            GameSettingCategories;                            		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bOffline : 1;                                     		// 0x0080 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                MinimumPlayersRequired;                           		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                NumSecondsWaitingForPlayers;                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                SearchScore;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              LogTime;                                          		// 0x0090 (0x0004) [0x0000000040002000]              ( CPF_Transient | CPF_EditInlineNotify )
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;               		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESETTINGS_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool Equals (class UOnlineGameSettings_X* OtherGameSettings );
	void CalculateMinAndMaxNumPlayers ( );
	void CopyFrom (class UOnlineGameSettings_X* OtherGameSettings );
	class UGameSettingPlaylist_X* GetPlaylist ( );
	bool IsValid ( );
	void RemoveMismatchedTags (class UOnlineGameSettings_X* OtherGameSettings );
	class UGameSettingCategory_X* GetGameSettingCategoryByName (struct FName& CategoryName );
	void SetIntProperty (int PropertyId, int Value );
	void SetGameTag (struct FName& NewGameTag );
	void UpdateFromURL (class AGameInfo* Game, struct FString* URL );
	bool HasSetting (struct FName& SettingName );
	void GetActiveGameSettings ( TArray< class UGameSetting_X* >* GameSettings );
	class UGameSetting_X* GetGameSetting (struct FString& SettingName, class UGameSettingCategory_X** Category );
	struct FString GetGameTags ( );
	bool GetStringProperty (int PropertyId, struct FString* Value );
	void Init ( );
	void EventNumPlayersUpdated (class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired );
};

// Class ProjectX.OnlineLegalText_X
// 0x0020 (0x0068 - 0x0048)
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                           		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UCachedWebData_X*                            CachedData;                                       		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventNewText__Delegate;                         		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINELEGALTEXT_X ];

		return pClassPointer;
	};

	void __OnlineLegalText_X__Sync (class UUrlConfig_X* UrlConfig );
	void HandleWebText (class UCachedWebData_X* InCachedData );
	struct FString GetWebUrl (class UUrlConfig_X* UrlConfig );
	struct FString GetPlatformString ( );
	struct FString GetRelativeUrl ( );
	struct FString eventGetFileSystemUrl ( );
	struct FString GetText ( );
	void Sync ( );
	void EventNewText (class UOnlineLegalText_X* Text );
};

// Class ProjectX.OnlineMessage_X
// 0x0000 (0x003C - 0x003C)
class UOnlineMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlineMessageComponent_X
// 0x0024 (0x006C - 0x0048)
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCompression_X*                              Compressor;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FOnlineMessageHandler >             MessageHandlers;                                  		// 0x0050 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEMESSAGECOMPONENT_X ];

		return pClassPointer;
	};

	class UOnlineMessageComponent_X* EnableCompression (unsigned long bEnabled );
	class UOnlineMessageComponent_X* SetSerializer (class USerializer_X* InSerializer );
	void InvokeHandlers (class UObject* Message );
	class UObject* DeserializeMessage (class UObject* MessageOuter, TArray< unsigned char >* Data );
	bool SerializeMessage (class UObject* Message, TArray< unsigned char >* OutData );
	class UOnlineMessage_X* CreateMessage (class UClass* MessageClass, class UObject* MessageOuter );
	void RemoveMessageHandler (struct FScriptDelegate& Callback );
	void AddMessageHandler (class UClass* MessageClass, struct FScriptDelegate& Callback );
	void MessageReceivedDelegate (class UOnlineMessageComponent_X* Component, class UObject* Message );
};

// Class ProjectX.ParameterDispenser_X
// 0x004C (0x0094 - 0x0048)
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FNameParamPair >                    NameParams;                                       		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFloatParamPair >                   FloatParams;                                      		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorParamPair >                  VectorParams;                                     		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FColorParamPair >                   ColorParams;                                      		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FActorParamPair >                   ActorParams;                                      		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UISetParameter* >                    AllComponents;                                    		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARAMETERDISPENSER_X ];

		return pClassPointer;
	};

	void Inherit (class UParameterDispenser_X* Other );
	void ResetMaterials ( );
	void ApplyAllParameters (class UISetParameter* ActorComp );
	class AActor* GetActorParameter (struct FName& Key );
	void SetActorParameter (struct FName& Key, class AActor* Value );
	void SetLinearColorParameter (struct FName& Key, struct FLinearColor& Value );
	void SetVectorParameter (struct FName& Key, struct FVector& Value );
	void SetFloatParameter (struct FName& Key, float Value );
	void SetNameParameter (struct FName& Key, struct FName& Value );
	void RemoveComponent (class UISetParameter* ActorComp );
	void AddComponent (class UISetParameter* ActorComp );
};

// Class ProjectX.ParticleModuleLocationBoneSocket_X
// 0x0000 (0x0078 - 0x0078)
class UParticleModuleLocationBoneSocket_X : public UParticleModuleLocationBoneSocket
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTICLEMODULELOCATIONBONESOCKET_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ParticleModuleLocationSkelVertSurface_X
// 0x0000 (0x0094 - 0x0094)
class UParticleModuleLocationSkelVertSurface_X : public UParticleModuleLocationSkelVertSurface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTICLEMODULELOCATIONSKELVERTSURFACE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0024 (0x0070 - 0x004C)
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	struct FName                                       MeshActorParamName;                               		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       VelocityMultiplier;                               		// 0x0054 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTICLEMODULEVELOCITYSURFACENORMAL_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (0x0070 - 0x0070)
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTICLEMODULEVELOCITYSURFACENORMALSTATIC_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ParticleModuleWind_X
// 0x0038 (0x0080 - 0x0048)
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                            		// 0x0048 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       AccelerationOverLife;                             		// 0x0064 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTICLEMODULEWIND_X ];

		return pClassPointer;
	};

};

// Class ProjectX.Pawn_X
// 0x0028 (0x0418 - 0x03F0)
class APawn_X : public APawn
{
public:
	float                                              GravityScale;                                     		// 0x03F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 PreviousController;                               		// 0x03F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x03F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x03FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                         		// 0x0408 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x040C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PAWN_X ];

		return pClassPointer;
	};

	bool eventIsSameTeam (class APawn* Other );
	void eventDestroyed ( );
	float GetGravityZ ( );
	void eventOnAnimEnd (class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void OnControllerChanged ( );
	void PossessedBy (class AController* C );
	void UpdateControllerRef ( );
	void eventReplicatedEvent (struct FName& VarName );
	void EventAnimEnd (class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode );
	void EventDestroyed (class APawn_X* Pawn );
};

// Class ProjectX.PerCon_X
// 0x0030 (0x006C - 0x003C)
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     URL;                                              		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Status;                                           		// 0x004C (0x0001) [0x0000000000000000]              
	struct FString                                     BrokenReason;                                     		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                   		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PERCON_X ];

		return pClassPointer;
	};

	void HandleConfigChanged ( );
	void SetStatus (unsigned char InStatus );
	void SetBroken (struct FString& Reason );
	void SetEnabled (unsigned long bEnable );
	void EventStatusChanged (class UPerCon_X* PerCon );
};

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (0x0044 - 0x003C)
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                      		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PHYSICALMATERIALPROPERTY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PlayerInput_X
// 0x0118 (0x0394 - 0x027C)
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                  		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FGamepadDeadzoneSettings >          GamepadDeadzones;                                 		// 0x0280 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              KeyboardAxisBlendTime;                            		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FKeyboardAxisBlendSettings >        KeyboardAxisBlendTimes;                           		// 0x0290 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       CurrentKey;                                       		// 0x029C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       ActiveDPadButton;                                 		// 0x02A4 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       LastDoubleTapKey;                                 		// 0x02AC (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FName >                             DisabledActions;                                  		// 0x02B4 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             DisabledActionsUntilNextUse;                      		// 0x02C0 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBindingAction >                    Actions;                                          		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UControlPreset_X*                            ControlPreset;                                    		// 0x02D8 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerBinding >                    PCBindings;                                       		// 0x02DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerBinding >                    GamepadBindings;                                  		// 0x02E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerBinding >                    SteamInputBindings;                               		// 0x02F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              TapTime;                                          		// 0x0300 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoubleTapTime;                                    		// 0x0304 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPointer >                          HeldBindings;                                     		// 0x0308 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bDebugInput : 1;                                  		// 0x0314 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                       		// 0x0314 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0318 (0x003C) UNKNOWN PROPERTY: MapProperty ProjectX.PlayerInput_X.RawAxisValues
	struct FScriptDelegate                             __EventActionToggled__Delegate;                   		// 0x0354 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0358 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;                 		// 0x0364 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0368 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;       		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0378 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x0384 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0388 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PLAYERINPUT_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	struct FName GetKeyForActionArray (struct FName& Action, TArray< struct FPlayerBinding >* PlayerBindings );
	void AbsorbCurrentKeyPress ( );
	void SetBindings ( TArray< struct FPlayerBinding >* PC, TArray< struct FPlayerBinding >* Gamepad );
	void ClearDisableActionUntilNextUseList ( );
	void DisableActionUntilNextUse (struct FName& ActionName );
	void ClearDisabledActions ( );
	void RemoveFromDisabledActions (struct FName& ActionName );
	void AddToDisabledActions (struct FName& ActionName );
	void ReleaseKey (struct FName& Key, unsigned long bTriggerEvents );
	struct FString GetUIKey (struct FName& KeyName );
	void ShutdownInputSystem ( );
	void InitInputSystem ( );
	void ResetInput ( );
	float GetRawSplitAxisValue (struct FName& AxisNegative, struct FName& AxisPositive );
	float GetRawAxisValue (struct FName& AxisName );
	void SetControlPreset (struct FName& PresetName );
	void ResetActiveBindingsToProfileBindings ( );
	void ResetBindingsToDefault ( );
	void EventInitialized (class UPlayerInput_X* PlayerInput );
	void EventSetBindingsToUserBindings (class UPlayerInput_X* PlayerInput );
	void EventBindingsChanged (class UPlayerInput_X* PlayerInput );
	void EventActionToggled (class UPlayerInput_X* PlayerInput, struct FName& ActionName, unsigned long bEnabled );
};

// Class ProjectX.PointLightComponent_X
// 0x0008 (0x0214 - 0x020C)
class UPointLightComponent_X : public UPointLightComponent
{
public:
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                               		// 0x020C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              AttachTime;                                       		// 0x0210 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_POINTLIGHTCOMPONENT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNet_X
// 0x0090 (0x00CC - 0x003C)
class UPsyNet_X : public UObject
{
public:
	unsigned char                                      Environment;                                      		// 0x003C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     EnvironmentName;                                  		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPsyNetKeys                                 Keys;                                             		// 0x004C (0x0024) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UStringMap*                                  Headers;                                          		// 0x0070 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetServiceSubscriptions_X*               Services;                                         		// 0x0074 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetConnection_X*                         PrimaryEnabledConnection;                         		// 0x0078 (0x0004) [0x0000000000000000]              
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                          		// 0x007C (0x0004) [0x0000000000000000]              
	class UPsyNetConnection_X*                         AnonymousConnection;                              		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              LastReportCheaterTime;                            		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsePsynetEnvironment : 1;                        		// 0x0088 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	struct FScriptDelegate                             __EventPrimaryConnectionEnabled__Delegate;        		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryConnectionDisabled__Delegate;       		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;           		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;          		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNET_X ];

		return pClassPointer;
	};

	void ReportCheater (struct FUniqueNetId& Id, struct FString& Reason );
	struct FString AssignQWordToString (unsigned long long Q );
	unsigned long long AssignStringToQWord (struct FString& S );
	float GetRetryDelay (int Failures, TArray< float > Delays );
	void eventConnectionChangedIP (struct FUniqueNetId& PlayerID );
	void eventNetworkError (struct FUniqueNetId& PlayerID, struct FString& Reason );
	void InitHeaders ( );
	void NotifyWhenLoggedIn (struct FScriptDelegate& LoginCallback, struct FScriptDelegate& LogoutCallback );
	void NotifyWhenPrimaryConnectionEnabled (struct FScriptDelegate& EnabledCallback, struct FScriptDelegate& DisabledCallback );
	void SetPrimaryAuthedConnection (class UPsyNetConnection_X* Connection );
	void SetPrimaryEnabledConnection (class UPsyNetConnection_X* Connection );
	void HandleConnectionChanged (class UPsyNetConnection_X* Connection );
	class UPsyNetConnection_X* GetPrimaryConnection ( );
	void HandleServiceExecuted (class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service );
	void eventInit ( );
	void Flush (float TimeoutSeconds );
	class URPC_X* QueueRPC (class URPC_X* RPC );
	class URPC_X* RPC (class UClass* RPCClass );
	class UPsyNet_X* GetInstance ( );
	void EventPrimaryPlayerLoggedOut ( );
	void EventPrimaryPlayerLoggedIn ( );
	void EventPrimaryConnectionDisabled ( );
	void EventPrimaryConnectionEnabled ( );
};

// Class ProjectX.PsyNetClientService_X
// 0x0020 (0x005C - 0x003C)
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Version;                                          		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UError*                                      Error;                                            		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetConnection_X*                         Connection;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long long                                 Expiration;                                       		// 0x0054 (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETCLIENTSERVICE_X ];

		return pClassPointer;
	};

	void Execute ( );
	void SetError (class UError* InError );
};

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x000C (0x0048 - 0x003C)
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray< class UPsyNetClientService_X* >            ServiceArchetypes;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETCLIENTSERVICECOLLECTION_X ];

		return pClassPointer;
	};

	class UPsyNetClientService_X* GetServiceArchetype (struct FString& ServiceName, int Version );
	void CollectServiceArchetypes ( );
	void eventConstruct ( );
};

// Class ProjectX.PsyNetConnection_X
// 0x00C4 (0x0100 - 0x003C)
class UPsyNetConnection_X : public UObject
{
public:
	float                                              MaintenanceTime;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	class UPsyNetConfig_X*                             Config;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	class UStringMap*                                  Headers;                                          		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetRequestQue_X*                         RequestQue;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	class URPCQueue_X*                                 RPCQueue;                                         		// 0x0054 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	class UPsyNetMessenger_X*                          Messenger;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	class UPerCon_X*                                   PerCon;                                           		// 0x0060 (0x0004) [0x0000000000000000]              
	class UPerConMonitor_X*                            PerConMonitor;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	class UPerConMetrics_X*                            PerConMetrics;                                    		// 0x0068 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bAuthorized : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bConnected : 1;                                   		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFreshConnection : 1;                             		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPerConConnected : 1;                             		// 0x006C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMonitorPerCon : 1;                               		// 0x006C (0x0004) [0x0000000000004002] [0x00000010] ( CPF_Const | CPF_Config )
	float                                              ConnectedChangeTime;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	class UError*                                      DisabledError;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	TArray< class UError* >                            DisabledErrorStack;                               		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UError*                                      MaintenanceError;                                 		// 0x0084 (0x0004) [0x0000000000000000]              
	class UError*                                      DuplicateLoginError;                              		// 0x0088 (0x0004) [0x0000000000000000]              
	class UError*                                      NoInternetError;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConnectFailed__Delegate;                   		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                 		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;              		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventEnabled__Delegate;                         		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisabled__Delegate;                        		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETCONNECTION_X ];

		return pClassPointer;
	};

	void eventSendPingMessage ( );
	void WatchPerConConnection (struct FScriptDelegate& OnConnected, struct FScriptDelegate& OnDisconnected );
	void StopWatchConnection (struct FScriptDelegate& OnConnected, struct FScriptDelegate& OnDisconnected );
	void WatchConnection (struct FScriptDelegate& OnConnected, struct FScriptDelegate& OnDisconnected );
	void WatchEnabled (struct FScriptDelegate& OnEnabled, struct FScriptDelegate& OnDisabled );
	void eventDispose ( );
	void UpdateLinkConnection (unsigned long bHasConnection );
	void ClearDuplicateLoginError ( );
	void OnDuplicateLogin ( );
	void HandleDuplicateLoginMessage (class UPsyNetClientService_X* Service );
	void HandleWebSocketDisconnect (class UPsyNetMessengerWebSocket_X* WS, int Code, struct FString& Reason );
	void HandleWebSocketConnect (class UPsyNetMessengerWebSocket_X* WS );
	void HandleWebSocketStartConnectFail (class UPsyNetMessengerWebSocket_X* WS );
	bool HasWebSocketConnection ( );
	void UpdateConnectionState ( );
	void ClearMaintenance ( );
	void HandleErrorRPC (class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error );
	bool IsEnabled ( );
	class UError* UpdateDisabledError (class UError* Error, class UErrorType* Type, unsigned long bIsError );
	void eventAddDisabledError (class UError* Error );
	void RemoveDisabledError (class UError* Error );
	void Flush (float TimeoutSeconds );
	class URPC_X* QueueRPC (class URPC_X* RPC );
	class URPC_X* RPC (class UClass* RPCClass );
	bool ProcessServiceCall (class UPsyNetMessage_X* Message );
	void ProcessMessage (class UPsyNetMessage_X* Message );
	void ReceiveMessage (class UPsyNetMessage_X* Message );
	class UTAsyncResult__PsyNetMessage_X* SendRequest (class UPsyNetMessage_X* Request );
	class UAsyncTask* SendMessage (class UPsyNetMessage_X* Message );
	void RemoveHeader (struct FString& Key );
	void SetHeader (struct FString& Key, struct FString& Value );
	void SetAuthorized (unsigned long bAuth );
	class UStringMap* BuildHandshakeHeaders ( );
	class UPsyNetMessenger_X* CreateWebSocketMessenger ( );
	class UPsyNetMessenger_X* CreateHttpMessenger ( );
	unsigned char GetTransportType ( );
	void KillMessenger ( );
	void InitMessenger ( );
	void InitServiceProvider ( );
	void HandlePerConStatusChanged (class UPerCon_X* P );
	void InitPerCon ( );
	void InitRPCQueue ( );
	void InitRequestQue ( );
	void InitHeaders ( );
	void eventConstruct ( );
	void EventDisabled (class UPsyNetConnection_X* Connection );
	void EventEnabled (class UPsyNetConnection_X* Connection );
	void EventPerConDisconnected (class UPsyNetConnection_X* Connection );
	void EventPerConConnected (class UPsyNetConnection_X* Connection );
	void EventConnectFailed (class UPsyNetConnection_X* Connection );
	void EventDisconnected (class UPsyNetConnection_X* Connection );
	void EventConnected (class UPsyNetConnection_X* Connection );
};

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (0x0048 - 0x0048)
class UPsyNetErrorType_X : public UErrorType
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETERRORTYPE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetLocator_X
// 0x0028 (0x0064 - 0x003C)
class UPsyNetLocator_X : public UObject
{
public:
	struct FString                                     DevLocalURL;                                      		// 0x003C (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TestURL;                                          		// 0x0048 (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProductionURL;                                    		// 0x0054 (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bUseEnvironmentURL : 1;                           		// 0x0060 (0x0004) [0x0000000000004003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETLOCATOR_X ];

		return pClassPointer;
	};

	struct FString GetURL (unsigned char Environment );
};

// Class ProjectX.PsyNetLocatorHttp_X
// 0x0000 (0x0064 - 0x0064)
class UPsyNetLocatorHttp_X : public UPsyNetLocator_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETLOCATORHTTP_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetMessage_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                          		// 0x003C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< unsigned char >                            Body;                                             		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETMESSAGE_X ];

		return pClassPointer;
	};

	struct FString GetBodyText ( );
	void SetBodyText (struct FString& Value );
	void SetBody ( TArray< unsigned char >* Value );
};

// Class ProjectX.PsyNetMessenger_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                 		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETMESSENGER_X ];

		return pClassPointer;
	};

	void eventDispose ( );
	void EventMessageReceived (class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessage (class UPsyNetMessage_X* Message );
	void Connect ( );
};

// Class ProjectX.PsyNetMessengerHttp_X
// 0x000C (0x0058 - 0x004C)
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                              		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETMESSENGERHTTP_X ];

		return pClassPointer;
	};

	void CopyHeadersToMessage (class UWebRequest_X* From, class UPsyNetMessage_X* To );
	void CopyHeadersToRequest (class UPsyNetMessage_X* From, class UWebRequest_X* To );
	void HandleWebRequestComplete (struct FString& PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task );
	class UAsyncTask* SendMessage (class UPsyNetMessage_X* Message );
	void Init (unsigned char Environment );
};

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x0078 (0x00C4 - 0x004C)
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                               		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStringMap*                                  HandshakeHeaders;                                 		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     URL;                                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebSocketConnection_X*                      Connection;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FQueuedPsyNetMessage >              QueuedMessages;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetConfig_X*                             PsyNetConfig;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventStartConnect__Delegate;                    		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;          		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETMESSENGERWEBSOCKET_X ];

		return pClassPointer;
	};

	void __PsyNetMessengerWebSocket_X__SendQueuedMessages (struct FQueuedPsyNetMessage& QueuedMessage );
	void eventDispose ( );
	void HandleReceivedBunch (class UTcpConnection* C );
	void SerializeMessage (class UPsyNetMessage_X* Message );
	void FailQueuedMessages (class UError* Error );
	void TimeoutQueuedMessages ( );
	void SendMessageWithTask (class UPsyNetMessage_X* Message, class UAsyncTask* Task );
	void SendQueuedMessages ( );
	void QueueMessage (class UPsyNetMessage_X* Message, class UAsyncTask* Task );
	void StripHandshakeHeaders (class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessage (class UPsyNetMessage_X* Message );
	void HandleDisconnected (class UWebSocketConnection_X* InConnection );
	void HandleConnected (class UWebSocketConnection_X* InConnection );
	void Disconnect ( );
	void Connect ( );
	bool IsConnected ( );
	void Init (struct FString& InURL, class UStringMap* InHandshakeHeaders );
	void EventInvalidMessageReceived (class UPsyNetMessengerWebSocket_X* Messenger, struct FString& MessageSubstring );
	void EventDisconnected (class UPsyNetMessengerWebSocket_X* Messenger, int Code, struct FString& Reason );
	void EventConnected (class UPsyNetMessengerWebSocket_X* Messenger );
	void EventStartConnectFail (class UPsyNetMessengerWebSocket_X* Messenger );
	void EventStartConnect (class UPsyNetMessengerWebSocket_X* Messenger );
};

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (0x003C - 0x003C)
class UPsyNetServiceSerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICESERIALIZER_X ];

		return pClassPointer;
	};

	struct FString SerializeResponse (class UPsyNetClientService_X* Service );
	void DeserializeRequest (struct FString& JSON, class UPsyNetClientService_X* Service );
};

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x000C (0x0054 - 0x0048)
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray< struct FServiceSubscription >              Subscriptions;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICESUBSCRIPTIONS_X ];

		return pClassPointer;
	};

	void NotifyServiceExecuted (class UPsyNetClientService_X* Service );
	void UnsubscribeAll (class UObject* Listener );
	void Unsubscribe (struct FScriptDelegate& Callback );
	void Subscribe (class UClass* ServiceClass, struct FScriptDelegate& Callback );
};

// Class ProjectX.PsyNetStaticData_X
// 0x0048 (0x0090 - 0x0048)
class UPsyNetStaticData_X : public UComponent
{
public:
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	class UWebConfig_X*                                WebConfig;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebug : 1;                                       		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPaused : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoaded : 1;                                      		// 0x0050 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UCacheTimer_X*                               CacheTimer;                                       		// 0x0054 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineResource_X*                           WebData;                                          		// 0x0058 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UObject* >                           DefaultObjects;                                   		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           DownloadedObjects;                                		// 0x0068 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UObject* >                           RegisteredObjects;                                		// 0x0074 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventLoaded__Delegate;                          		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSTATICDATA_X ];

		return pClassPointer;
	};

	void UpdateRegisteredObjects ( );
	bool LoadFromUTF8 ( TArray< unsigned char >* SignedData );
	bool LoadFromSignedUTF8 ( TArray< unsigned char >* SignedData );
	void InstantiateObjects ( );
	void HandleDataChanged (class UOnlineResource_X* Resource );
	void HandleGetURLFail (class URPC_X* RPC );
	void HandleGetURL (class URPC_GetStaticDataURL_X* RPC );
	class URPC_GetStaticDataURL_X* CreateRPC ( );
	void SyncURL ( );
	void Sync ( );
	void HandleCacheExpired (class UCacheTimer_X* Timer );
	void SetPaused (unsigned long bShouldPause );
	void UpdateCacheTimerEnabled ( );
	void HandlePsyNetDisabled (class UPsyNetConnection_X* C );
	void HandlePsyNetEnabled (class UPsyNetConnection_X* C );
	void HandleWebConfigChanged ( );
	void eventInit ( );
	void EventLoaded (class UPsyNetStaticData_X* Data );
};

// Class ProjectX.RadialBlurComponent_X
// 0x0008 (0x00D8 - 0x00D0)
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                         		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeFalloff;                                      		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RADIALBLURCOMPONENT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RandomStream_X
// 0x0008 (0x0044 - 0x003C)
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                           		// 0x003C (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                CurrentSeed;                                      		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RANDOMSTREAM_X ];

		return pClassPointer;
	};

	void SetCurrentSeed (int NewSeed );
	float GetNextValue ( );
};

// Class ProjectX.RenderProfiler_X
// 0x002C (0x0214 - 0x01E8)
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                 		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPrimitiveComponentProfile >        PrimitiveProfiles;                                		// 0x01EC (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x01F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInclusive : 1;                                   		// 0x01FC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              PrimitiveTime;                                    		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0208 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RENDERPROFILER_X ];

		return pClassPointer;
	};

	void SetupPlayers ( );
	void eventPostBeginPlay ( );
	void EventFinished (class ARenderProfiler_X* Profiler );
};

// Class ProjectX.RPC_X
// 0x006C (0x00A8 - 0x003C)
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Version;                                          		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< float >                                    RetryDelays;                                      		// 0x004C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bRetry : 1;                                       		// 0x0058 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bAllowBatching : 1;                               		// 0x0058 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRequiresAuth : 1;                                		// 0x0058 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDisposed : 1;                                    		// 0x0058 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	float                                              ServiceFailRetryDelay;                            		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Priority;                                         		// 0x0060 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FKeyValuePair >                     Headers;                                          		// 0x0064 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UError*                                      Error;                                            		// 0x0070 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAsyncTask*                                  Task;                                             		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventSuccess__Delegate;                         		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFail__Delegate;                            		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventComplete__Delegate;                        		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_X ];

		return pClassPointer;
	};

	void SetRetry (unsigned long bShouldRetry );
	void NotifySuccess ( );
	void NotifyError (class UError* InError );
	bool eventShouldResendOnFail (class UError* InError );
	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	void eventOnComplete ( );
	void eventOnFail ( );
	void eventOnSuccess ( );
	void eventDispose ( );
	class UAsyncTask* CreateTask (struct FScriptDelegate& InCallback );
	class URPC_X* NotifyOnComplete (struct FScriptDelegate& Callback );
	class URPC_X* NotifyOnFail (struct FScriptDelegate& Callback );
	class URPC_X* NotifyOnSuccess (struct FScriptDelegate& Callback );
	class UObject* eventGetResponseObject ( );
	void EventComplete (class URPC_X* RPC );
	void EventFail (class URPC_X* RPC );
	void EventSuccess (class URPC_X* RPC );
};

// Class ProjectX.RPC_CrashReport_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_CrashReport_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CRASHREPORT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_RecordMetrics_X
// 0x0034 (0x00DC - 0x00A8)
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                     		// 0x00A8 (0x0010) [0x0000000000000000]              
	struct FGuid                                       LevelSessionID;                                   		// 0x00B8 (0x0010) [0x0000000000000000]              
	float                                              CurrentTimeSeconds;                               		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                FirstEventIndex;                                  		// 0x00CC (0x0004) [0x0000000000000000]              
	TArray< struct FMetricsEvent >                     Events;                                           		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_RECORDMETRICS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPCBatch_X
// 0x0040 (0x007C - 0x003C)
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FPendingRPC >                       Requests;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRPCResponse >                      Responses;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRPCError                                   Error;                                            		// 0x0058 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetMessage_X*                            RequestMessage;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	class UPsyNetMessage_X*                            ResponseMessage;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	class UError*                                      ResponseError;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPCBATCH_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPCQueue_X
// 0x0098 (0x00E0 - 0x0048)
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              AuthTimeoutSeconds;                               		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxRPCsPerBatch;                                  		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URPCConfig_X*                                RPCConfig;                                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingRPC >                       PendingRPCs;                                      		// 0x0058 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class URPCBatch_X* >                       PendingBatches;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                         		// 0x0070 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bAuthorized : 1;                                  		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __EventRPCError__Delegate;                        		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBatchError__Delegate;                      		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                  		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPCQUEUE_X ];

		return pClassPointer;
	};

	void eventOnError (class URPC_X* RPC, class UError* Error );
	class UPsyNetMetrics_X* GetPsyNetMetrics ( );
	void RecordBatchMetrics (class URPCBatch_X* Batch );
	void HandleBatchComplete (class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error );
	void eventCreateBatch (class UPsyNetMessage_X* Message, TArray< struct FPendingRPC >* BatchRPCs );
	void eventSignatureMismatch (int ServiceID );
	void FailAllPending (class UError* Error );
	void FailPending (class URPC_X* RPC, class UError* Error );
	void TickReceive ( );
	void TickSend ( );
	void QueueRPC (class URPC_X* RPC );
	class UTAsyncResult__PsyNetMessage_X* SendRequestDelegate (class UPsyNetMessage_X* Message );
	void EventBatchError (class URPCQueue_X* RPCQueue, class UError* Error );
	void EventRPCError (class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error );
};

// Class ProjectX.RuntimeParameterBase_X
// 0x0008 (0x0044 - 0x003C)
class URuntimeParameterBase_X : public UObject
{
public:
	struct FName                                       ParameterName;                                    		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RUNTIMEPARAMETERBASE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RuntimeParameter_Speed_X
// 0x0000 (0x0044 - 0x0044)
class URuntimeParameter_Speed_X : public URuntimeParameterBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RUNTIMEPARAMETER_SPEED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RuntimeParameters_X
// 0x0000 (0x003C - 0x003C)
class URuntimeParameters_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RUNTIMEPARAMETERS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SEQACT_NONNATIVEUPDATE_X ];

		return pClassPointer;
	};

	bool eventUpdate (float dt );
};

// Class ProjectX.SequenceCondition_X
// 0x0000 (0x00E4 - 0x00E4)
class USequenceCondition_X : public USequenceCondition
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SEQUENCECONDITION_X ];

		return pClassPointer;
	};

	void eventActivated ( );
};

// Class ProjectX.Serializer_X
// 0x0000 (0x003C - 0x003C)
class USerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SERIALIZER_X ];

		return pClassPointer;
	};

	void DeserializeObject (class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject (class UObject* Target, TArray< unsigned char >* OutData );
};

// Class ProjectX.JSONSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_JSONSERIALIZER_X ];

		return pClassPointer;
	};

	struct FString func ( );
	void DecodeObject (class UObject* Target, struct FString* Stream );
	void EncodeObject (class UObject* Target, struct FString* Stream );
	void DeserializeObject (class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject (class UObject* Target, TArray< unsigned char >* OutData );
};

// Class ProjectX.ObjectSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_OBJECTSERIALIZER_X ];

		return pClassPointer;
	};

	void DeserializeObject (class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject (class UObject* Target, TArray< unsigned char >* OutData );
};

// Class ProjectX.StateObject_X
// 0x0004 (0x0040 - 0x003C)
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_STATEOBJECT_X ];

		return pClassPointer;
	};

	void InitExecution ( );
	void eventDestroyed ( );
	void Destroy ( );
};

// Class ProjectX.Online_X
// 0x0008 (0x0048 - 0x0040)
class UOnline_X : public UStateObject_X
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINE_X ];

		return pClassPointer;
	};

	struct FString BuildAddress (struct FString& Host, int Port, struct FString& IP );
	bool IsInOnlineGame ( );
	bool IsInMainMenu ( );
	class AGRI_X* GetGRI ( );
	class AWorldInfo* GetWorldInfo ( );
	struct FUniqueNetId CreateUniqueNetID (unsigned char Platform, struct FString& PlatformName, unsigned long long PlatformUID );
	bool UniqueLobbyIDIsSet (struct FUniqueLobbyId& InID );
	struct FUniqueLobbyId StringToUniqueLobbyId (struct FString& InID );
	struct FString UniqueLobbyIdToString (struct FUniqueLobbyId& InID );
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID (struct FUniqueNetId& Id );
	struct FUniqueNetId GetPrimaryIDForGuest (struct FUniqueNetId& InGuestID );
	bool UniqueNetIDIsGuest (struct FUniqueNetId& InID );
	bool UniqueNetIDIsValid (struct FUniqueNetId& InID );
	struct FUniqueNetId StringToUniqueNetId (struct FString& InID );
	struct FString UniqueNetIdToString (struct FUniqueNetId& InID );
	struct FUniqueNetId CleanUniqueNetID (struct FUniqueNetId& InID );
	int FindUniqueNetID ( TArray< struct FUniqueNetId >* List, struct FUniqueNetId* Search );
	class UError* GetConnectionStatusError (int ErrorCode, class UError* FallbackError );
	void OnExit ( );
	void OnNewGame ( );
	void OnMainMenuOpened ( );
	void HandleGRISpawned (class AGRI_X* GRI );
	void OnInit ( );
	void Init (class UOnlineSubsystem* NewOnlineSubsystem );
};

// Class ProjectX.OnlineGame_Base_X
// 0x0090 (0x00D8 - 0x0048)
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                     		// 0x0048 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     OnlineSubGameInterfaceName;                       		// 0x0054 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameSettings_X*                       DefaultGameSettings;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	class UOnlineGameSettings_X*                       GameSettings;                                     		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGamePlaylists_X*                      Playlists;                                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	class UOnlineGameDLC_X*                            DLC;                                              		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameSkill_X*                          Skill;                                            		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StartServerCommand;                               		// 0x007C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UWebCache_X*                                 WebCache;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	class UWebImageCache_X*                            WebImageCache;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                 		// 0x0090 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bLockGameSettings : 1;                            		// 0x0094 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUseEnvironmentZone : 1;                          		// 0x0094 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned char                                      CurrentConnectionStatus;                          		// 0x0098 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerName;                                       		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     CachedOptions;                                    		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                           		// 0x00B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameWordFilter_X*                     WordFilter;                                       		// 0x00B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UOnline_X* >                         OnlineComponents;                                 		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;       		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAME_BASE_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool HasInternetConnection ( );
	int GetPort ( );
	struct FString GetExternalHostAddress (unsigned long bWithPort );
	struct FString GetLocalHostAddress (unsigned long bWithPort );
	void HandleInternetConnectionChanged (unsigned long bConnected );
	void HandleConnectionStatusChanged (unsigned char ConnectionStatus );
	void SetDefaultSearchType (class UClass* OnlineSearchClass );
	void KickAllPlayers (struct FString& Reason );
	void DelayedShutdownServer ( );
	void OnExit ( );
	int GetPlaylistPlayerCount (class UGameSettingPlaylist_X* Playlist );
	void OnNewSettingsChosen (int PlaylistId );
	void UpdateGameSettingsPlayerCount (int NumPlayers );
	void UpdateGameSettings (class UOnlineGameSettings_X* InGameSettings, struct FString& Options );
	class UOnlineGameSettings_X* CreateOnlineGameSettings (struct FString& Options );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	void InitOnlineSubsystemInterfaces ( );
	void OnInit ( );
	void eventConstruct ( );
	void EventInternetConnectionChanged (unsigned long bConnected );
};

// Class ProjectX.OnlineGame_X
// 0x009C (0x0174 - 0x00D8)
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                          		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                     		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                    		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                       		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                     		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePopulation_X*                     Population;                                       		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameBlog_X*                           Blog;                                             		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameVoice_X*                          Voice;                                            		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameParty_X*                          Party;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameInvite_X*                         GameInvite;                                       		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameJoinGame_X*                       JoinGame;                                         		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameRegions_X*                        Regions;                                          		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePrivileges_X*                     Privileges;                                       		// 0x010C (0x0004) [0x0000000000000000]              
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                              		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameVersion_X*                        GameVersion;                                      		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlinePlayer_X*                             PlayerArchetype;                                  		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UOnlinePlayer_X* >                   OnlinePlayers;                                    		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineLegalText_X*                          Eula;                                             		// 0x0128 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineLegalText_X*                          PrivacyPolicy;                                    		// 0x012C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineLegalText_X*                          ToS;                                              		// 0x0130 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bRequestPublicIP : 1;                             		// 0x0134 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	struct FString                                     PublicIP;                                         		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventConnectionError__Delegate;                 		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0148 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;               		// 0x0154 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0158 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;              		// 0x0164 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0168 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAME_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void HandlePublicIPComplete (class URPC_GetPublicIP_X* RPC );
	void HandlePsyNetLogin (class UPsyNetConnection_X* Connection );
	void NotifyPlayerPsyNetLogout (struct FScriptDelegate& Callback );
	void NotifyPlayerPsyNetLogin (struct FScriptDelegate& Callback );
	bool IsSignedIn (int ControllerId );
	bool CheckUpToDate ( class UError** Error );
	bool CheckNotTooYoung ( class UError** Error );
	class UError* GetPsyNetLoginError (class UOnlinePlayer_X* OnlinePlayer );
	void HandleLoginCompleted (class UOnlinePlayerAuthentication_X* Auth, class UAsyncTask* Task );
	class UAsyncTask* CheckPsyNetConnection ( );
	bool ValidateUserOnlineAccount ( class UError** Error );
	bool CheckInternetConnection ( class UError** Error );
	bool IsOnlinePlayerID (struct FUniqueNetId& PlayerID );
	class UOnlinePlayer_X* eventGetOnlinePlayerByID (struct FUniqueNetId& PlayerID );
	void OnNewSettingsChosen (int PlaylistId );
	struct FUniqueNetId eventGetPrimaryPlayerID ( );
	class UOnlinePlayer_X* eventGetPrimaryPlayer ( );
	void RemoveOnlinePlayer (class ULocalPlayer_X* LocalPlayer );
	void AddOnlinePlayer (class UOnlinePlayer_X* OnlinePlayer );
	class UOnlinePlayer_X* CreateOnlinePlayer (class ULocalPlayer_X* LocalPlayer );
	void SetPlayedWith (struct FUniqueNetId& PlayerID );
	void GetPlayerAvatars (TArray< struct FUniqueNetId > PlayerIDs, struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, unsigned char Size, struct FUniqueNetId* StructInitializer_6D4A167844AC7F1C55ED0F8EE43E3A3C );
	void ClearPendingAvatarDownloads ( );
	void SetVoiceVolume (float NewValue );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	void OnMainMenuOpened ( );
	void HandlePlayerLogin (class UOnlinePlayer_X* OnlinePlayer, class UError* Error );
	void HandlePsyNetLoginChanged (class UOnlinePlayerAuthentication_X* Auth );
	bool IsLoggedInToPsyNet (class UOnlinePlayer_X* OnlinePlayer );
	void OnInit ( );
	void EventPlayerPsyNetLogout (class UOnlinePlayer_X* Player );
	void EventPlayerPsyNetLogin (class UOnlinePlayer_X* Player );
	void EventConnectionError (class UError* Error, class UOnlinePlayer_X* Player );
};

// Class ProjectX.OnlineGameServer_X
// 0x0004 (0x00DC - 0x00D8)
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x00D8 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESERVER_X ];

		return pClassPointer;
	};

	void OnExit ( );
	void OnInit ( );
};

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0174 (0x0250 - 0x00DC)
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned long long                                 GameServerID;                                     		// 0x00DC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     GameServerHost;                                   		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                EnvironmentZone;                                  		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameStats_X*                          GameStats;                                        		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                     		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameReservations_X*                   Reservations;                                     		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClanforgeReservation_X*                     Clanforge;                                        		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Region;                                           		// 0x0104 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentPlaylistId;                                		// 0x0110 (0x0004) [0x0000000000000000]              
	int                                                MutatorIndex;                                     		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              AverageMMR;                                       		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AverageConservativeMMR;                           		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MachineId;                                        		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x0124 (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x0190 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	unsigned long long                                 CustomMatchClubID;                                		// 0x01C0 (0x0008) [0x0000000000000000]              
	unsigned long                                      bQueuedShutdown : 1;                              		// 0x01C8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFindingReplacementServer : 1;                    		// 0x01C8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDisableMatchmakingBan : 1;                       		// 0x01C8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bBotTest : 1;                                     		// 0x01C8 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x01C8 (0x0004) [0x0000000000000000] [0x00000010] 
	class UServerPlayerTracker_X*                      PlayerTracker;                                    		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      MatchRecorderClass;                               		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMatchRecorder_X*                            MatchRecorder;                                    		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UMatchLog_X*                                 MatchLog;                                         		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UServerConfig_X*                             Config;                                           		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;		// 0x01E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;               		// 0x01F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x01F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                     		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0204 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;     		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInactive__Delegate;                        		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0224 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventActive__Delegate;                          		// 0x0230 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x0240 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0244 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEDEDICATEDSERVER_X ];

		return pClassPointer;
	};

	void HandlePsyNetDataLoaded (class UPsyNetStaticData_X* D );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void InitLogUpload (class URPC_RecordMatch_X* RPC, class UMatchLog_X* Log );
	class URPC_RecordMatch_X* SendRecordMatchRPC ( );
	void ReportMatch ( );
	void HandleTrackerPlayerRemoved (class UServerPlayerTracker_X* Tracker, struct FUniqueNetId& PlayerID );
	void CreateMatchRecorder ( );
	void HandleTrackerPlayerAdded (class UServerPlayerTracker_X* Tracker, struct FUniqueNetId& PlayerID );
	struct FString MatchGUID ( );
	struct FName GetCurrentMapName ( );
	void ClearMatchmakingBan (struct FUniqueNetId& PlayerID );
	void IssueMatchmakingBan (struct FUniqueNetId& PlayerID, struct FString& Reason );
	unsigned char GetTeamNum (struct FUniqueNetId& PlayerID );
	bool KickPlayersOnGameEventDestroyed ( );
	bool IsRankedMatch ( );
	class UGameSettingPlaylist_X* GetPlaylist ( );
	void OnExit ( );
	void HandleNewServerIPRPC (class URPC_CheckReplacementDedicatedServer_X* RPC );
	void CheckNewServerIP ( );
	void CheckNewServerTimeout ( );
	void CheckStartShutdown (int GameTimeRemaining );
	bool AllowServerMigration ( );
	void UpdateGameTime (int TimeSeconds );
	void FindNewDedicatedServerForPlayers (struct FScriptDelegate& InDelegate );
	bool IsInactive ( );
	bool IsInPostGameLobby ( );
	void UpdateOnlineGame ( );
	bool AllowSplitscreenJoinRankedMatch ( );
	bool AllowSplitscreenJoin (class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FString* Error );
	void PlayerLoggedOut (class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn (class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin (struct FString& Options, struct FUniqueNetId& PlayerID, struct FString* ErrorMessage );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	void TravelToMap (struct FString& ServerCommand );
	void GotoPrivateMatchMap (struct FName& MapName, int GameMode, struct FString& GameTags );
	void GotoNextPrivateMatchMap ( );
	void OnPrivateEventDestroyed ( );
	struct FString GetStartServerCommand ( );
	struct FName GetNextRandomMapName (int GameMode );
	struct FName GetNextMapName (int GameMode );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	struct FUniqueNetId GetCustomMatchOwner ( );
	void UpdateCustomMatchOwner (struct FUniqueNetId& NewOwner );
	void SetCustomSettings (struct FCustomMatchSettings& Settings );
	void SetupPrivateMatch (struct FCustomMatchSettings& Settings, struct FUniqueNetId& Creator );
	void GoToNextMap ( );
	struct FName GetNextMutatorMapName ( );
	void GoToMap (struct FString& MapName );
	struct FString GetPlaylistTags ( );
	void UpdateAverageMMR ( );
	void SetCustomMatchClubID (unsigned long long InClubID );
	void ClearSettings ( struct FUniqueNetId* StructInitializer_DA4567AD44C2903A66396487C089B156, struct FCustomMatchSettings* StructInitializer_C21EC5184814EC0662DBA4B8759F84AC );
	void SetPlaylist (int PlaylistId );
	void HandleReservationsUpdated ( );
	void InitClanforge ( );
	void OnInit ( );
	void EventMatchGUIDChanged (class UOnlineGameDedicatedServer_X* Server );
	void EventActive (class UOnlineGameDedicatedServer_X* Server );
	void EventInactive (class UOnlineGameDedicatedServer_X* Server );
	void EventPrivateMatchSettingsChanged (class UOnlineGameDedicatedServer_X* Server, struct FCustomMatchSettings& NewSettings );
	void EventPlaylistSet (class UOnlineGameDedicatedServer_X* Server );
	void EventAverageMMRChanged (class UOnlineGameDedicatedServer_X* Server );
	void EventFoundNewDedicatedServerForPlayers (struct FString& NewIP );
};

// Class ProjectX.OnlineGameDLC_X
// 0x0030 (0x0078 - 0x0048)
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                     		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerOwnershipSyncInterval;                      		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerDLCInfo >                    PlayerDLCInfos;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSteamWebRequestData >              SteamWebRequests;                                 		// 0x005C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventValidationReady__Delegate;                 		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEDLC_X ];

		return pClassPointer;
	};

	bool DoesPlayerOwnDLC ( struct FUniqueNetId* PlayerID, struct FName* DLCName );
	void HandleGetPublisherAppOwnership (class UWebRequest_X* Request );
	void OnMatchFinished ( );
	void SyncPlayerDLC (struct FUniqueNetId& PlayerID, struct FScriptDelegate& Callback );
	void UpdatePlayerDLCInfo (int PlayerInfoIndex );
	int CreatePlayerDLCInfo ( struct FUniqueNetId* PlayerID );
	bool IsPlayerReadyForValidation ( struct FUniqueNetId* PlayerID );
	void EventValidationReady ( );
};

// Class ProjectX.OnlineGameLeaderboards_X
// 0x0068 (0x00B0 - 0x0048)
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCachedLeaderboardData >            CachedLeaderboards;                               		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                NumFriendsLeaderboardRequests;                    		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       CurrentLeaderboardID;                             		// 0x005C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentFriendIndex;                               		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bGlobalLeaderboards : 1;                          		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                     		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;          		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                  		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;            		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLeaderboardAvatarFound__Delegate;          		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMELEADERBOARDS_X ];

		return pClassPointer;
	};

	bool IsSkillLeaderboard (struct FString& NewLeaderboardID, int* Playlist );
	TArray< struct FLeaderboardData > SortLeaderboardDataMMR (TArray< struct FLeaderboardData > Leaderboard );
	TArray< struct FLeaderboardData > SortLeaderboardData (TArray< struct FLeaderboardData > Leaderboard );
	void HandleGetLeaderboardFriendsRPC (class URPC_GetLeaderboardRankForUsersBase_X* RPC );
	void DispatchLeaderboardFriendsRequest ( );
	void GetLeaderboardsForAllFriends (struct FName& LeaderboardId );
	void GetLeaderboardFriends (class UOnlinePlayer_X* OnlinePlayer, struct FName& NewLeaderboardID, struct FScriptDelegate& NewDelegate, struct FScriptDelegate& FailedDelegate );
	void HandleGetAvatar (struct FUniqueNetId& PlayerID, class UTexture* Avatar, struct FString& OnlinePlayerName );
	void RequestClearPendingAvatarDownloads ( );
	void HandleGetLeaderboardRPC (class URPC_GetLeaderboardBase_X* RPC );
	void GetLeaderboard (struct FName& NewLeaderboardID, unsigned long bGlobal, struct FScriptDelegate& NewDelegate, struct FScriptDelegate& FailedDelegate );
	bool GetCachedLeaderboardData (struct FName& LeaderboardId, TArray< struct FLeaderboardData >* LeaderboardDataList );
	int CalcDivision (float TopValue, float Value );
	void GetRankForPrimaryPlayer (struct FName& LeaderboardId, int Value, int* Rank, int* Division );
	void HandleGetLeaderboardPlayerValueRPC (class URPC_GetLeaderboardValueForUserBase_X* RPC );
	void GetLeaderboardPlayerValue (struct FName& NewLeaderboardID, struct FScriptDelegate& NewDelegate );
	struct FString GetCurrentPlatformName ( );
	void EventLeaderboardAvatarFound (class UTexture* Avatar, struct FUniqueNetId* PlayerNetId );
	void EventGetLeaderboardFailed (class UError* Error );
	void EventNewLeaderboard (struct FName& NewLeaderboardID, TArray< struct FLeaderboardData >* NewLeaderboardData );
	void OnGetLeaderboardPlayerValue (class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FName& LeaderboardId, class UError* Error, struct FLeaderboardData* PlayerLeaderboardData );
};

// Class ProjectX.OnlineGameReservations_X
// 0x007C (0x00C4 - 0x0048)
class UOnlineGameReservations_X : public UOnline_X
{
public:
	TArray< class URPC_GetKeys_X* >                    GetKeysRPCs;                                      		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              ExtraMapLoadTime;                                 		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaitForReservationsTimeout;                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;           		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSkipReservationCheck : 1;                        		// 0x005C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSinglePlayerMatchmaking : 1;                     		// 0x005C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bServerTraveling : 1;                             		// 0x005C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bScrambleTeams : 1;                               		// 0x005C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bMatchStarted : 1;                                		// 0x005C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bLockTeams : 1;                                   		// 0x005C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x0060 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FReservationData >                  Players;                                          		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTeamPairHistory >                  TeamPairHistories;                                		// 0x0070 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UCrossplayConfig_X*                          Crossplay;                                        		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                   		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingReservation >               PendingReservations;                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTAsyncResult__ClubDetails_X*                GetClubTask;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FString                                     RankedMatchReservationID;                         		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineClubProvider_X*                       Clubs;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;           		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMERESERVATIONS_X ];

		return pClassPointer;
	};

	void __OnlineGameReservations_X__HandlePublicReservation (struct FReservationData& P );
	bool __OnlineGameReservations_X__HasTimeoutPlayers (struct FReservationData& P );
	bool __OnlineGameReservations_X__HasMultipleReservedTeams (int TeamID );
	bool __OnlineGameReservations_X__AllPlayersReserved (struct FReservationData& P );
	bool __OnlineGameReservations_X__AllPlayersInGame (struct FReservationData& P );
	void __OnlineGameReservations_X__SetServerTraveling (struct FPendingReservation& P );
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs (struct FReservationData& Player );
	TArray< struct FUniqueNetId > GetPlayerIDs ( TArray< struct FUniqueNetId >* MapLocal_08CAE3D641496BC221471182237130E6 );
	float GetMapLoadTimeout (unsigned char Platform );
	void GetAccumulatedPrefs ( TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	class UReservationsMetrics_X* GetMetrics ( );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	bool HasSplitscreenPlayers ( );
	void SetParty (struct FUniqueNetId& MemberId, struct FUniqueNetId& PartyID );
	struct FUniqueNetId GetPartyID (struct FUniqueNetId& PlayerID );
	unsigned char GetTeamNum (struct FUniqueNetId& PlayerID );
	struct FString GetPlayersPlatformsString ( );
	struct FString GetPlatformsString ( TArray< unsigned char >* Platforms );
	TArray< unsigned char > GetPlayerPlatforms ( );
	bool CanPlayTogether (unsigned char Platform1, unsigned char Platform2 );
	bool CanAcceptReservationsForPlatform (class UAddReservationMessagePublic_X* Message );
	bool ShouldCheckPlatformRestrictions (class UAddReservationMessagePublic_X* Message );
	unsigned char GetExclusivePlatform ( );
	bool CanAcceptReservations (class UAddReservationMessagePublic_X* Message );
	void GetPlayerCounts ( int* Team0Reserved, int* Team0Joined, int* Team1Reserved, int* Team1Joined );
	void NotifyReservationsUpdated ( );
	void OnReservationsUpdated ( );
	void CheckMapLoadTimeout ( );
	void StartMapLoadTimeout ( );
	void SyncSkills ( );
	void HackForceNotServerTravelling ( );
	void SwapTeams ( );
	void SetServerTraveling (unsigned long bTraveling );
	void CloseConnection (int Index );
	void RemoveReservationIndex (int Index );
	int AddSpecialReservation (struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FUniqueNetId& PartyID );
	void HandleTeamChanged (class APRI_X* PRI );
	void RemoveReservation (struct FUniqueNetId& PlayerID );
	void PlayerLoggedOut (class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn (class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin (struct FString& Options, struct FUniqueNetId& PlayerID, struct FString* ErrorMessage );
	bool AllPlayersInGame ( );
	bool AllPlayersReserved ( );
	bool HasGameEnded ( );
	bool HasGameStarted ( );
	bool CanStartMatch ( );
	bool HasMultipleReservedTeams ( TArray< int >* MapLocal_19F045C844B81AA6AC52A6AC8FBA4D02, TArray< int >* FilterLocal_3DD28288440576D58F562B9F6B0A7F20, TArray< int >* DistinctLocal_0407391A4C7EFBEC6B6AC3A4DFB776D0 );
	bool HasTimeoutPlayers ( );
	bool HasJoiningPlayers ( );
	bool IsEmpty ( );
	bool IsNearlyFull ( );
	bool IsFull ( );
	int GetNumReservedPlayers ( );
	bool IsCustomMatch ( );
	void HandleReservationDisconnected (class UTcpConnection* Connection );
	void ClearGetKeysRPCs ( );
	void ClearTeamHistory ( );
	void ClearReservations ( );
	void Reset ( );
	void RecordTeamHistory ( TArray< struct FReservationData >* TestPlayers, TArray< struct FTeamPairHistory >* History );
	void ScrambleTeams ( );
	void UpdateTeams ( );
	void AssignTeamsByPartySize ( );
	bool AssignScrambledTeams (int TeamSize, TArray< struct FTeamPairHistory >* History, TArray< struct FReservationData >* TestPlayers );
	bool AssignTeams (int TeamSize, unsigned long bKeepTeams, TArray< struct FReservationData >* TestPlayers );
	void HandleSkillSynced (class UOnlineGameSkill_X* SkillSystem, struct FUniqueNetId& PlayerID, class UError* Error );
	bool AllowSplitscreenJoin (class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FString* Error );
	bool IsCheatingSplitscreenReservation (class UAddReservationMessage_X* Message );
	bool IsCheatingSplitscreen (struct FUniqueNetId& PrimaryPlayerID, struct FUniqueNetId& SplitscreenPlayerID );
	struct FReservationData CreateReservationData (struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FUniqueNetId& PartyID, unsigned char Status );
	void HandlePlayerCancel (class UTcpConnection* Connection, class UObject* Message );
	struct FUniqueNetId GetConnectionPlayerID (class UTcpConnection* Connection, struct FUniqueNetId* StructInitializer_BFFEB46A40EB4069CB8CAEACF6DA8CF7 );
	void NotAllPlayersJoined ( );
	void DisconnectExistingPlayers (class UAddReservationMessage_X* ReservationMessage );
	void SetPlayers ( TArray< struct FReservationData >* TempPlayers );
	void HandleClubSyncComplete (class UOnlineClubProvider_X* _ );
	TArray< struct FReservationData > AddPlayersFromReservationMessage (class UAddReservationMessage_X* ReservationMessage, class UTcpConnection* Connection, struct FReservationData* StructInitializer_C13C20254A38FEDD4E54C58A0FD4CDC9 );
	bool IsUnique ( TArray< struct FName >* Prefs );
	void ForcePrivateMatch (struct FCustomMatchSettings& InSettings, struct FUniqueNetId* StructInitializer_F110C58E43726217BFCECE8B44667E83 );
	void SetClubServer (class UClubDetails_X* Details );
	bool HandlePrivateReservation (class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message, struct FPendingReservation* StructInitializer_0E03AC0E43A21384F8C989B518AA7782 );
	void SendGetKeysRPCs (class UTcpConnection* Connection, class UAddReservationMessage_X* Message );
	void HandlePrivateReservationMessage (class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message );
	bool CanAcceptReservationsForServerKey (class UAddReservationMessagePublic_X* Message, unsigned long bServerKey );
	void RemoveKeysRPC (class URPC_GetKeys_X* RPC );
	void HandleGetKeysRPCFail (class URPC_GetKeys_X* RPC );
	void AddNetworkKeys (class URPC_GetKeys_X* RPC );
	void ProcessReservationMessage (class UTcpConnection* Connection, class UAddReservationMessage_X* Message );
	void HandleGetKeysRPCSuccess (class URPC_GetKeys_X* RPC );
	void HandleGetKeysRPC (class URPC_GetKeys_X* RPC );
	void StartMatch ( );
	class UReservationsReadyMessage_X* CreateReadyMessage ( );
	void SendReadyMessage (class UTcpConnection* Connection );
	void SendNetworkNextReadyMessage (class UTcpConnection* Connection, struct FString& Route );
	void CheckRouteTimeout (class UTAsyncResult__String* Task );
	bool NotifyReadyNetworkNext (class UTcpConnection* Connection );
	void NotifyReady (class UTcpConnection* Connection );
	void BroadcastReady ( );
	bool ShouldSyncSkills ( );
	bool IsSoloPlaylist (int PlaylistId );
	bool HandlePublicReservation (class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message, struct FPendingReservation* StructInitializer_E6E97CD244635DA0181FFC864D7BB924 );
	void HandlePublicReservationMessage (class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message );
	void RecordReservation (class UAddReservationMessage_X* Message );
	void HandlePingMessage (class UTcpConnection* Connection, class UObject* Message );
	void StartReservationBeacon ( );
	void OnInit ( );
	void EventMigrationJoinOccurred ( );
	void EventReservationsUpdated ( );
};

// Class ProjectX.OnlineGameStats_X
// 0x0010 (0x0058 - 0x0048)
class UOnlineGameStats_X : public UOnline_X
{
public:
	struct FString                                     MatchGUID;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlaylistId;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESTATS_X ];

		return pClassPointer;
	};

	void UploadStats (struct FString& StatType, TArray< struct FUploadStatDataSet >* DataSet );
	void SetPlaylistID (int InID );
	void SetMatchGUID (struct FString& InGuid );
};

// Class ProjectX.OnlinePlayer_X
// 0x0118 (0x0160 - 0x0048)
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlinePlayerAuthentication_X*               Authentication;                                   		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlinePlayerStorage_X*                      Storage;                                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlinePlayerRegionRestrictions_X*           RegionRestrictions;                               		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PlayerName;                                       		// 0x005C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0068 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                CleanPlayerID;                                    		// 0x0098 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      LoginStatus;                                      		// 0x00C8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                LocalPlayerNum;                                   		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLoggingIn : 1;                                   		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoggingOut : 1;                                  		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UError*                                      LoginError;                                       		// 0x00D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UError*                                      LoginStatusError;                                 		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UError*                                      BannedError;                                      		// 0x00DC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                   		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                  		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;              		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0104 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                  		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0114 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;            		// 0x0120 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;            		// 0x0130 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0134 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreFlushExit__Delegate;                    		// 0x0140 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0144 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;               		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0154 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYER_X ];

		return pClassPointer;
	};

	void GetPlayersLikesDislikes (class UGameSettingPlaylist_X* Playlist, TArray< struct FName >* PlayerLikes, TArray< struct FName >* PlayerDislikes );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool IsGuestAccount ( );
	void SetPlayerName (struct FString& InName );
	void UpdateSplitscreenId ( );
	bool IsUpdateRequired ( );
	struct FString GetOnlineName ( );
	struct FString GetLocalName ( );
	struct FString GetRemoteName (int LocalPlayerIndex );
	void HandleCanPlayOnlineChanged (unsigned char LocalUserNum );
	void OnExit ( );
	unsigned char CanPlayOnline ( );
	void HandlePlayerCountryReceived (struct FUniqueNetId& InPlayerId, struct FString& Country );
	void GetPlayerCountry (struct FScriptDelegate& Handler );
	unsigned char CanCommunicateText (unsigned long bTryToResolve );
	void OpenErrorDialog (unsigned char ErrorCode );
	void OpenPS4DisplayMode (unsigned char DisplayMode, TArray< struct FString > Targets, int ServiceLabel );
	void ResetControllerColor (int InControllerID );
	void SetControllerColor (int InControllerID, struct FColor& NewColor );
	void PostActivityFeedMessage (struct FString& Id, TArray< struct FString > StringReplaceList );
	TArray< unsigned long > GetSyncedAchievements (unsigned char LocalUserNum );
	void UnlockAchievement (unsigned char LocalUserNum, int AchievementId, float PercentComplete );
	void UpdateStat (struct FName& StatName, int Points );
	void HandleShowKeyboardComplete (unsigned long bWasSuccessful );
	void HideKeyboard ( );
	bool ShowKeyboard (struct FString& TitleText, struct FString& DescriptionText, unsigned long bIsPassword, struct FString& DefaultText, int MaxLength, struct FScriptDelegate& OnCompleteDelegate, int LocalPlayerNumOverride );
	void OnNewGame ( );
	void HandleControllerChange (int InControllerID, unsigned long bIsConnected );
	void HandleUserLoginStatusChange (unsigned char NewStatus, struct FUniqueNetId& NewId );
	bool IsLoggedIn (unsigned long bRequireOnlineLogin );
	void HandleLogoutComplete (unsigned long bWasSuccessful );
	void HandleLoginChanged (unsigned char PlayerNum );
	struct FString GetSanitizedPlayerName ( );
	void HandleLoginFailed (unsigned char PlayerNum, unsigned char ErrorCode );
	void Logout (struct FScriptDelegate& Callback );
	void Login (struct FString& LoginName, struct FString& LoginPassword, struct FScriptDelegate& Callback );
	void OnRemoved ( );
	void InitPlayer ( );
	bool eventIsPrimaryPlayer ( );
	void HandleErrorRPC (class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error );
	void HandlePsyNetDisconnect (class UPsyNetConnection_X* Connection );
	void UpdatePsyNetEnabled ( );
	void HandleBanned (class UOnlinePlayerAuthentication_X* Auth );
	void HandleAuthLoginChange (class UOnlinePlayerAuthentication_X* Auth );
	bool UseWebSocket (class URPC_LoginAuthPlayer_X* RPC );
	void OnInit ( );
	void eventConstruct ( );
	class UOnlineGame_X* GetOnlineGame ( );
	void EventOnlineNameChanged (class UOnlinePlayer_X* Player );
	void EventPreFlushExit ( );
	void EventShowKeyboardComplete (struct FString& NewText, unsigned long bCanceled );
	void EventCanPlayOnlineChanged (class UOnlinePlayer_X* Player );
	void EventCountryUpdated (struct FString& Country );
	void EventLoginStatusChanged (class UOnlinePlayer_X* Player );
	void EventLogoutComplete (class UOnlinePlayer_X* Player );
	void EventLoginComplete (class UOnlinePlayer_X* Player, class UError* Error );
};

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0104 (0x014C - 0x0048)
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URPC_LoginAuthPlayer_X*                      LoginSuccessRPC;                                  		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0050 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     LoggedInPlayerName;                               		// 0x0080 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long long                                 PlayerUID;                                        		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Platform;                                         		// 0x0094 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bLoggedIn : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;           		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSkipAuth : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	class UError*                                      AuthLoginError;                                   		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned char                                      BanType;                                          		// 0x00A8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      PlayerAuthState;                                  		// 0x00A9 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              BannedUntilTime;                                  		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BannedReason;                                     		// 0x00B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           BannedCitations;                                  		// 0x00BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPsyTag                                     PsyTag;                                           		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EncryptedAuthTicket;                              		// 0x00D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                AuthRequestFailureMax;                            		// 0x00E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AuthRequestRetryTime;                             		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AuthRequestFailureCount;                          		// 0x00EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     AuthenticatedName;                                		// 0x00F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LoginRetryDelay;                                  		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBetweenAuthRPCs;                             		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSendAuthRPCTime;                              		// 0x0104 (0x0004) [0x0000000000000000]              
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                    		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0110 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBanned__Delegate;                          		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0120 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerAuthStateChanged__Delegate;          		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0130 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoginResult__Delegate;                     		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0140 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERAUTHENTICATION_X ];

		return pClassPointer;
	};

	struct FString GetDebugName ( );
	void GotoAuthState (struct FName& AuthStateName );
	bool IsLoginAttemptActive ( );
	bool IsBanned ( );
	int GetGameVersion ( );
	struct FName GetFeatureSet ( );
	struct FString GetBuildRegion ( );
	void HandleTrialStatusChanged (class UOnlineGameTrial_X* InTrial );
	void OnChangeAuthenticatedName (struct FString& NewName );
	bool NeedToAuthenticateName ( );
	void HandleAuthTicket (unsigned long bSuccess, struct FString& AuthTicket );
	void RequestAuthTicket ( );
	bool RequiresAuthTicket ( );
	void ReLogin ( );
	void Logout ( );
	void SetAuthLoginError (class UError* E );
	void UpdateLoginState ( );
	void UpdateAuthLoginError ( );
	void HandlePsyNetLoginChanged (class UOnlinePlayerAuthentication_X* Auth );
	void HandleLinkStatusChanged (unsigned long B );
	void HandleConnectionChanged (class UPsyNetConnection_X* C );
	void HandleLoginStatusChanged (class UOnlinePlayer_X* Player );
	int GetBannedMinutesRemaining ( );
	bool ParseBanned (class URPC_LoginAuthPlayer_X* RPC, TArray< struct FString >* ArrayInitializer_FF28FB334AEEC7BA6748DC8BC95D155B );
	void SetDefaultPlayerAuthState ( );
	void SetPlayerAuthState (unsigned char InPlayerAuthState );
	void OnLoginFail (class UError* Error );
	void OnLoginFailRPC (class URPC_LoginAuthPlayer_X* RPC );
	void OnLoginSuccessRPC (class URPC_LoginAuthPlayer_X* RPC );
	void SendLoginRPC ( );
	void PsyNetLogin (struct FScriptDelegate& Callback );
	void OnRemoved ( );
	void OnInit ( );
	void EventLoginResult (class UOnlinePlayerAuthentication_X* Auth );
	void EventPlayerAuthStateChanged (class UOnlinePlayerAuthentication_X* Auth );
	void EventBanned (class UOnlinePlayerAuthentication_X* Auth );
	void EventLoginChanged (class UOnlinePlayerAuthentication_X* Auth );
};

// Class ProjectX.TickableStateObject_X
// 0x0018 (0x0058 - 0x0040)
class UTickableStateObject_X : public UStateObject_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoTick : 1;                                    		// 0x0044 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	TArray< struct FTimerData >                        Timers;                                           		// 0x0048 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              LatentFloat;                                      		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TICKABLESTATEOBJECT_X ];

		return pClassPointer;
	};

	void Sleep (float Seconds );
	void eventTick (float DeltaTime );
	void ProcessState (float DeltaSeconds );
	void UpdateTimers (float DeltaSeconds );
	void NativeTick (float DeltaTime );
	void Destroy ( );
	void SetTickable (unsigned long bTick );
	bool IsTimerActive (struct FName& inTimerFunc, class UObject* inObj );
	void PauseTimer (unsigned long bPause, struct FName& inTimerFunc, class UObject* inObj );
	void ClearAllTimers (class UObject* inObj );
	void ClearTimer (struct FName& inTimerFunc, class UObject* inObj );
	void SetStateTimer (float InRate, unsigned long inbLoop, struct FName& inTimerFunc );
	void SetTimer (float InRate, unsigned long inbLoop, struct FName& inTimerFunc, class UObject* inObj );
};

// Class ProjectX.SystemInfo_X
// 0x0000 (0x003C - 0x003C)
class USystemInfo_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SYSTEMINFO_X ];

		return pClassPointer;
	};

	struct FString GetComputerName ( );
	void GetNetworkInfo ( TArray< struct FString >* Types );
	void GetOSInfo ( struct FString* Type, struct FString* Bit );
	void GetVideoCardInfo ( struct FString* CardName, int* RAM );
	void GetMemoryInfo ( float* Physical, float* PageFile, float* Virtual, int* Used, int* Allocated );
	void GetCPUInfo ( struct FString* Type, struct FString* Description, struct FString* Cores, struct FString* Threads );
	bool IsSupported ( );
};

// Class ProjectX.TickActorComponent_X
// 0x0023 (0x0088 - 0x0065)
class UTickActorComponent_X : public UActorComponent
{
public:
	TArray< struct FTimerData >                        Timers;                                           		// 0x0068 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bTick : 1;                                        		// 0x0074 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FScriptDelegate                             __EventTick__Delegate;                            		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TICKACTORCOMPONENT_X ];

		return pClassPointer;
	};

	void SetTickable (unsigned long bWantsTick );
	void ClearAllTimers (class UObject* inObj );
	void ClearTimer (struct FName& inTimerFunc, class UObject* inObj );
	void SetTimer (float InRate, unsigned long inbLoop, struct FName& inTimerFunc, class UObject* inObj );
	void EventTick (float DeltaTime );
};

// Class ProjectX.Timers_X
// 0x0014 (0x0050 - 0x003C)
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                    		// 0x003C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __TickDelegate__Delegate;                         		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TIMERS_X ];

		return pClassPointer;
	};

	void ClearTick (struct FScriptDelegate& Callback );
	void SetTick (struct FScriptDelegate& Callback );
	bool IsActive (struct FScriptDelegate& Callback );
	float GetElapsedTime (struct FScriptDelegate& Callback );
	float GetRemainingTime (struct FScriptDelegate& Callback );
	float GetRate (struct FScriptDelegate& Callback );
	void ClearAll (class UObject* Obj );
	void Clear (struct FScriptDelegate& Callback );
	void SetStateTimer (struct FScriptDelegate& Callback, float Rate, unsigned long bLoop );
	void Set (struct FScriptDelegate& Callback, float Rate, unsigned long bLoop );
	void TickDelegate (float DeltaTime );
};

// Class ProjectX.TimersComponent_X
// 0x000C (0x0054 - 0x0048)
class UTimersComponent_X : public UComponent
{
public:
	TArray< struct FTimerData >                        Timers;                                           		// 0x0048 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TIMERSCOMPONENT_X ];

		return pClassPointer;
	};

	void UpdateTimers (float DeltaSeconds );
	bool IsActive (struct FScriptDelegate& Callback );
	float GetElapsedTime (struct FScriptDelegate& Callback );
	float GetRemainingTime (struct FScriptDelegate& Callback );
	float GetRate (struct FScriptDelegate& Callback );
	void ClearAll (class UObject* Obj );
	void Clear (struct FScriptDelegate& Callback );
	void SetStateTimer (struct FScriptDelegate& Callback, float Rate, unsigned long bLoop );
	void Set (struct FScriptDelegate& Callback, float Rate, unsigned long bLoop );
};

// Class ProjectX.TickComponent_X
// 0x0018 (0x006C - 0x0054)
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0054 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTick : 1;                                        		// 0x0058 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	struct FScriptDelegate                             __TickDelegate__Delegate;                         		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TICKCOMPONENT_X ];

		return pClassPointer;
	};

	void SetTickable (unsigned long bWantsTick );
	void TickDelegate (float DeltaTime );
};

// Class ProjectX.UIStrings_X
// 0x0000 (0x003C - 0x003C)
class UUIStrings_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_UISTRINGS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.WebRequest_X
// 0x0054 (0x0090 - 0x003C)
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bZipResponse : 1;                                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLogRequest : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bLogResponse : 1;                                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bConnectionReset : 1;                             		// 0x003C (0x0004) [0x0000000000002002] [0x00000010] ( CPF_Const | CPF_Transient )
	unsigned char                                      RequestState;                                     		// 0x0040 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     URL;                                              		// 0x0044 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< unsigned char >                            Content;                                          		// 0x0058 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StringContent;                                    		// 0x0064 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            ResponseData;                                     		// 0x0070 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UError*                                      Error;                                            		// 0x007C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventCompleted__Delegate;                       		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBREQUEST_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void SetError (class UError* InError );
	bool eventHasInternetConnection ( );
	void HandleHttpRequestComplete (class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void eventConstructHttpRequest ( );
	struct FString GetResponseHeader (struct FString& Key );
	struct FString GetResponseString ( );
	bool HasNewData ( );
	bool IsSuccess ( );
	bool IsError ( );
	bool IsComplete ( );
	bool IsSent ( );
	class UHttpRequestInterface* GetHttpRequest ( );
	class UWebRequest_X* Send (struct FString& InURL, struct FScriptDelegate& OnCompleteCallback );
	void PrepareRequest (struct FString& InURL );
	void SetContentFromString (struct FString& ContentString );
	void SetContent ( TArray< unsigned char >* ContentBytes );
	struct FString GetETag ( );
	void SetETag (struct FString& ETag );
	class UWebRequest_X* SetHeader (struct FString& Key, struct FString& Value );
	class UWebRequest_X* AddPlayerIDParam (struct FUniqueNetId& PlayerID );
	class UWebRequest_X* AddStringParam (struct FString& Key, struct FString& Value );
	class UWebRequest_X* AddFloatParam (struct FString& Key, float Value );
	class UWebRequest_X* AddQwordParam (struct FString& Key, unsigned long long Value );
	class UWebRequest_X* AddIntParam (struct FString& Key, int Value );
	void FlushWebRequests (float TimeoutSeconds );
	class UWebRequest_X* Create ( );
	void EventCompleted (class UWebRequest_X* Request );
};

// Class ProjectX.WordFilterTypes_X
// 0x0020 (0x005C - 0x003C)
class UWordFilterTypes_X : public UObject
{
public:
	struct FScriptDelegate                             __CommentSanitizedDelegate__Delegate;             		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __CommentErrorDelegate__Delegate;                 		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WORDFILTERTYPES_X ];

		return pClassPointer;
	};

	void SortRequestTimeAscending ( TArray< struct FWordFilterPair >* Filtered );
	void SortPendingFront ( TArray< struct FWordFilterPair >* Filtered );
	void CommentErrorDelegate (struct FString& OriginalPhrase, class UError* Error );
	void CommentSanitizedDelegate (struct FString& Original, struct FString& Sanitized );
};

// Class ProjectX.AnimNodeBlendBase_X
// 0x0014 (0x0128 - 0x0114)
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                        		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    ChildBlendTimes;                                  		// 0x0118 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bRebuildChildren : 1;                             		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bChildrenUpdated : 1;                             		// 0x0124 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNODEBLENDBASE_X ];

		return pClassPointer;
	};

	void SetActiveChildNamed (struct FName& ChildName, unsigned long bForce );
	float GetAnimDuration (int ChildIndex );
	float GetBlendTime (int ChildIndex, unsigned long bGetDefault );
};

// Class ProjectX.AnimNodeSeries_X
// 0x000C (0x0134 - 0x0128)
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned long                                      bActive : 1;                                      		// 0x0128 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bInitialized : 1;                                 		// 0x0128 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           IntroAnim;                                        		// 0x012C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           OutroAnim;                                        		// 0x0130 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNODESERIES_X ];

		return pClassPointer;
	};

};

// Class ProjectX.AnimNodeSequence_X
// 0x0014 (0x0154 - 0x0140)
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                 		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bResetOnRelevant : 1;                             		// 0x0144 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UAnimSequence*                               PrevAnimSeq;                                      		// 0x0148 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PrevAnimLinkupIndex;                              		// 0x014C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendTimeLeft;                                    		// 0x0150 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNODESEQUENCE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.AnimNodePose_X
// 0x0000 (0x0154 - 0x0154)
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNODEPOSE_X ];

		return pClassPointer;
	};

	void PlayAnim (unsigned long bLoop, float InRate, float StartTime );
};

// Class ProjectX.AnimNodeSlot_X
// 0x0000 (0x0114 - 0x0114)
class UAnimNodeSlot_X : public UAnimNodeSlot
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNODESLOT_X ];

		return pClassPointer;
	};

	void AddNodeToGroup (struct FName& GroupName );
	float PlaySettings (struct FCustomAnimSettings& Settings );
};

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0008 (0x006C - 0x0064)
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                              		// 0x0064 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeSequence*                           CachedAnimSequence;                               		// 0x0068 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ANIMNOTIFY_PLAYPARTICLEEFFECT_X ];

		return pClassPointer;
	};

	void OnParticleSystemFinished (class UParticleSystemComponent* Component );
	void eventNotifyEnd (class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
	void eventNotify (class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

// Class ProjectX.TcpConnection
// 0x009C (0x00D8 - 0x003C)
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              InitialConnectionTimeout;                         		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0048 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      ConnectionState;                                  		// 0x004C (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      WebSocketState;                                   		// 0x004D (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              LastReceiveTime;                                  		// 0x0050 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< unsigned char >                            InBytes;                                          		// 0x0054 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            OutBytes;                                         		// 0x0060 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      OutMessageLengths;                                		// 0x006C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            QueuedWebSocketBytes;                             		// 0x0078 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      QueuedWebSocketMessageLengths;                    		// 0x0084 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            InBytesDecoded;                                   		// 0x0090 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            BunchBytes;                                       		// 0x009C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                   		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TCPCONNECTION ];

		return pClassPointer;
	};

	void eventOnDisconnected ( );
	void eventOnConnected ( );
	void Close ( );
	struct FString GetRemoteAddress ( );
	struct FString GetAddress ( );
	void EventReceivedBunch (class UTcpConnection* Connection );
	void EventDisconnected (class UTcpConnection* Connection );
	void EventConnected (class UTcpConnection* Connection );
};

// Class ProjectX.WebSocketConnection_X
// 0x0014 (0x00EC - 0x00D8)
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                     		// 0x00D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ClosedReason;                                     		// 0x00DC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ClosedCode;                                       		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBSOCKETCONNECTION_X ];

		return pClassPointer;
	};

	void PretendClose (int Code, struct FString& Reason );
	void Close ( );
	bool BeginWebSocketConnect (struct FString& Address, class UStringMap* HandshakeHeaders );
	bool BeginConnect (struct FString& Address );
};

// Class ProjectX.NetworkNextDriver_X
// 0x0000 (0x01A0 - 0x01A0)
class UNetworkNextDriver_X : public UNetDriver
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTDRIVER_X ];

		return pClassPointer;
	};

};

// Class ProjectX.NetworkNextConnection_X
// 0x000C (0x9140 - 0x9134)
class UNetworkNextConnection_X : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x9134 (0x000C) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTCONNECTION_X ];

		return pClassPointer;
	};

};

// Class ProjectX.NetworkNextDriverProxy_X
// 0x0000 (0x0240 - 0x0240)
class UNetworkNextDriverProxy_X : public UTcpNetDriver
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTDRIVERPROXY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.NetworkNextConnectionProxy_X
// 0x0000 (0x9150 - 0x9150)
class UNetworkNextConnectionProxy_X : public UTcpipConnection
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETWORKNEXTCONNECTIONPROXY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PrivilegeCheck_X
// 0x0060 (0x009C - 0x003C)
class UPrivilegeCheck_X : public UObject
{
public:
	TArray< int >                                      ControllerIDs;                                    		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bHasRestriction : 1;                              		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFinished : 1;                                    		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UError*                                      FailReason;                                       		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned char >                            PendingPrivileges;                                		// 0x0050 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                FailedControllerID;                               		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FailedPrivilege;                                  		// 0x0060 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      PendingControllerIDs;                             		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CheckDelegates;                                   		// 0x0070 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             EventFinished;                                    		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __CheckDelegate__Delegate;                        		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PRIVILEGECHECK_X ];

		return pClassPointer;
	};

	bool HasFeatureRestriction ( int* OutControllerID, unsigned char* OutFailedPrivilege );
	void OnFinished ( );
	void Fail (struct FString& Reason );
	void HandlePrivilege (unsigned char LocalUserNum, unsigned char Privilege, unsigned char Level, class UError* InFailReason );
	void CheckPrivilege ( );
	void CheckPsyNetComplete (class UError* ConnectionError );
	void CheckPsyNet ( );
	void ValidateUserOnlineAccount ( );
	void CheckInternet ( );
	class UPrivilegeCheck_X* RequirePrivilege (unsigned char Privilege );
	class UPrivilegeCheck_X* RequirePsyNet ( );
	class UPrivilegeCheck_X* RequireUserOnlineAccount ( );
	class UPrivilegeCheck_X* RequireInternet ( );
	void StartNextCheck ( );
	void Start ( );
	void Init (int ControllerId );
	void CheckDelegate ( );
};

// Class ProjectX.AddReservationMessage_X
// 0x0058 (0x0094 - 0x003C)
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray< struct FReservationPlayerData >            Players;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x0048 (0x0030) [0x0000000000000000]              
	struct FString                                     ReservationID;                                    		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NetworkNextClientData;                            		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADDRESERVATIONMESSAGE_X ];

		return pClassPointer;
	};

	struct FUniqueNetId __AddReservationMessage_X__GetPlayerIDs (struct FReservationPlayerData& P );
	TArray< struct FUniqueNetId > GetPlayerIDs ( TArray< struct FUniqueNetId >* MapLocal_169144414EF9114A790E9E9EA190060A );
	void GetPlayerMapPrefs (struct FUniqueNetId& PlayerID, TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	class UAddReservationMessage_X* SetDisableCrossPlay (unsigned long bValue );
	class UAddReservationMessage_X* AddPlayer (struct FUniqueNetId& PlayerID, struct FString& PlayerName, unsigned long bRemotePlayer );
	class UAddReservationMessage_X* AddOnlinePlayer (class UOnlinePlayer_X* Player, unsigned long bFriendJoin );
	class UAddReservationMessage_X* AddPlayers ( );
	class UAddReservationMessage_X* SetReservationID (struct FString& Id );
};

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x0008 (0x0074 - 0x006C)
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	struct FName                                       AnimNodeName;                                     		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ACTIVATEANIMSERIESCOMPONENT_X ];

		return pClassPointer;
	};

	void SetAnimSeriesActiveInComponent (class USkeletalMeshComponent* SKC, unsigned long bActive );
	void SetAnimSeriesActive (unsigned long bActive );
	void eventDetached ( );
	void eventAttached ( );
};

// Class ProjectX.OnlineGameParty_X
// 0x0278 (0x02C0 - 0x0048)
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray< struct FPartyMember >                      PartyMembers;                                     		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueLobbyId                              PartyID;                                          		// 0x0054 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0060 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxPartySize;                                     		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0094 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                              		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                PartyTimeout;                                     		// 0x00A0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                CurrentPartySize;                                 		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      LastbSearchingStatus : 1;                         		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      LastLockStatus : 1;                               		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FName                                       LastSearchState;                                  		// 0x00AC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPartyJoinMatchSettings                     MatchSettings;                                    		// 0x00B4 (0x0038) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      ProcessingStatus;                                 		// 0x00EC (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     NotInSameOnlineGameError;                         		// 0x00F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MissingLicenseAgreementError;                     		// 0x00FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UPartySequence_InvitedToPlatformParty_X*     SequenceInvitedToPlatformParty;                   		// 0x0108 (0x0004) [0x0000000000000000]              
	class UPartySequence_PsyNetPartyUpgrade_X*         SequencePsyNetPartyUpgrade;                       		// 0x010C (0x0004) [0x0000000000000000]              
	class UPartySequence_InvitedToPsyNetParty_X*       SequenceInvitedToPsyNetParty;                     		// 0x0110 (0x0004) [0x0000000000000000]              
	class UPartyConfig_X*                              PartyConfig;                                      		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNetConfig_X*                             Config;                                           		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineLobbyInterface*                       PlatformLobbyInterface;                           		// 0x0120 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UParties_X*                                  PsyNetLobbyInterface;                             		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                CreatePartyLocalPlayerNum;                        		// 0x012C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                    		// 0x0130 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0134 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPartyInviteAccepted__Delegate;                		// 0x0140 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0144 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                   		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0154 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                    		// 0x0160 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0164 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                		// 0x0170 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0174 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyLeaderChanged__Delegate;              		// 0x0180 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0184 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;             		// 0x0190 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0194 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyError__Delegate;                      		// 0x01A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x01A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;              		// 0x01B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x01B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;            		// 0x01C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x01C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                  		// 0x01D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x01D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;          		// 0x01E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x01E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;            		// 0x01F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x01F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;         		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0204 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;         		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;            		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x0224 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                   		// 0x0230 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;           		// 0x0240 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x0244 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;              		// 0x0250 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x0254 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReadyToTrade__Delegate;                    		// 0x0260 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x0264 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNotReadyToTrade__Delegate;                 		// 0x0270 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x0274 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTradeReady__Delegate;                      		// 0x0280 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x0284 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;            		// 0x0290 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x0294 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;            		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x02A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;        		// 0x02B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x02B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEPARTY_X ];

		return pClassPointer;
	};

	bool __OnlineGameParty_X__HasMultiplePlatforms (struct FPartyMember& P );
	struct FUniqueNetId __OnlineGameParty_X__GetLocalMemberIDs (struct FPartyMember& Member );
	void HandlePlatformPartyIdChanged (class UPartyPlatformSession_X* Session );
	void HandleSetPlatformPartyMessage (class UOnlineMessageComponent_X* Component, class UPartyMessage_SetPlatformParty_X* Message );
	void RequestRejoinPartyInfo ( );
	void SendPartyInvite (struct FUniqueNetId& PlayerID );
	void HandlePartyConfigChanged ( );
	void HandleMessageForMetrics (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void HandlePlayerTradeComplete (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void SendPlayerTradeComplete ( );
	void SendPlayerTradeCompleteAndClear (unsigned long bWasCanceled );
	void HandleReadyToTrade (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void ReadyToTrade (unsigned long bReadyToTrade );
	void SetPartyMessageHandlerTradeProductUpdate (unsigned long bAddHandler );
	void ClearLocalTradingPlayer (unsigned long bWasCanceled );
	bool ClearTradingPlayer (struct FUniqueNetId& PartyMemberID );
	void HandleAcceptInviteToTrade (class UOnlineMessageComponent_X* Component, class UObject* Message );
	bool CanAcceptTrade ( );
	void AcceptInviteToTrade (unsigned long bAccepted );
	struct FGuid ResolveGuids ( struct FGuid* A, struct FGuid* B );
	struct FGuid GetTradingPlayerTradeID ( );
	struct FUniqueNetId GetTradingPlayerID ( );
	struct FString GetTradingPlayerName ( );
	void HandleInviteToTradeMessage (class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message );
	void InvitePlayerToTrade (struct FUniqueNetId& InMemberId );
	bool IsPlayerTrading (struct FUniqueNetId& InMemberId );
	void SetPlayersTrading (struct FUniqueNetId& InMember1Id, struct FUniqueNetId& InMember2Id, unsigned long bTrading );
	struct FString GetMemberName (struct FUniqueNetId& InMemberId );
	TArray< struct FUniqueNetId > GetLocalMemberIDs ( TArray< struct FPartyMember >* FilterLocal_A891F63E4A017C74E64B028A78F59BBF, TArray< struct FUniqueNetId >* MapLocal_0964EF7E412492AF64C3BFB428C38430 );
	TArray< struct FUniqueNetId > GetOrderedPartyMemberIDs ( );
	TArray< struct FUniqueNetId > GetPartyMemberIDs ( );
	void HandleSessionCreated ( );
	bool IsProcessing ( );
	void SetProcessingStatus (unsigned char Status );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	struct FString GetPlayerRatingString (struct FUniqueNetId& PlayerID, int Playlist );
	void OnPartyError (class UError* Error );
	void HandlePartyError (struct FString& Error );
	void OnPartyChanged ( );
	bool TryGetValueInt (struct FString& Key, TArray< struct FLobbyMetaData >* MetaData, int* Value );
	bool PartyHasDisableCrossPlay ( );
	void KickForCrossplayDisabled (struct FUniqueNetId& MemberId );
	bool HasMultiplePlatforms ( );
	void KickCrossplayDisabledMembers ( );
	void SetCrossPlayTextChatForMember (struct FUniqueNetId& PartyMemberID, unsigned char CrossChatState );
	void BroadcastCrossTextChatState ( );
	void HandleFindCrossplayChatState (unsigned char CrossplayChatState );
	void AddCrossplayChatStateHandler ( );
	void HandleCrossPlayTextChatMessage (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void SetDisableCrossPlayForMember (struct FUniqueNetId& PartyMemberID, unsigned long bDisableCrossPlay );
	void HandleDisableCrossPlayMessage (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void BroadcastDisableCrossPlay ( );
	struct FString GetAnyLoggedInRestrictionPlayerName ( );
	struct FString GetAnyAppOwnerRestrictionPlayerName ( );
	struct FString GetMatchmakingRestrictionError ( );
	bool IsPlayerInMainMenu (struct FUniqueNetId& MemberId );
	bool IsPlayerInMatch (struct FUniqueNetId& MemberId );
	void SetAvailableForMatchmakingForMember (struct FUniqueNetId& PartyMemberID, int MatchmakeRestrictions );
	void HandleMatchmakingAvailability (class UOnlineMessageComponent_X* Component, class UObject* Message );
	int BuildMatchmakingRestrictions ( );
	void BroadcastMatchmakingAvailabilityDelayed ( );
	void BroadcastMatchmakingAvailability ( );
	void BroadcastAllLocalPlayers ( );
	void BroadcastLocalPlayersDelayed ( );
	void BroadcastLocalPlayers ( );
	bool ShouldLeavePartyOnDisconnect ( );
	void HandlePsyNetLoginChanged (class UOnlinePlayerAuthentication_X* Auth );
	void HandleLocalPlayerLoginStatusChanged (class UOnlinePlayer_X* Player );
	void HandleLocalPlayerLeave (class ULocalPlayer* Player );
	void UpdatePartyMember (class ULocalPlayer_X* Player );
	void HandleOnlinePlayerNameChanged (class UOnlinePlayer_X* Player );
	void HandleLocalPlayerJoin (class ULocalPlayer* Player );
	void ProcessLocalPlayersMessage (class UPartyMessage_LocalPlayers_X* Message );
	void HandleLocalPlayers (class UOnlineMessageComponent_X* Component, class UObject* ObjMessage );
	bool AllowSplitScreenPlayer (int ControllerId, class UError** OutError );
	bool HasPartyMembers ( );
	int GetPartySize ( );
	void HandleSearchStatus (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void BroadcastSearchStatus ( );
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage ( );
	bool TogglePartyLock ( );
	int GetMaxPartySize ( );
	bool AllowPartySize (int InSize );
	bool IsPartyOverFull ( );
	bool AllowNewMember ( );
	void UpdatePartyLock ( );
	void HandleFindGameStateChanged (struct FName& NewState );
	void ClearLastServerAddress ( struct FPartyJoinMatchSettings* StructInitializer_11C2ED824E1E8D2C464DB4BA0788A2C8, struct FPartyMemberServer* StructInitializer_0F361FE949DF0550EA03369BA6940E12, struct FPartyMemberServer* StructInitializer_91953F4C438CB19C024BA18B907388A7 );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	void OnNewSettingsChosen (int PlaylistId );
	void OnNewGame ( );
	void SetMatchmakingSearching (unsigned long bState );
	void SetSearchState (struct FName& SearchState );
	struct FUniqueNetId GetLocalMemberId ( );
	bool IsMemberLocal (struct FUniqueNetId& MemberId );
	bool HasRemoteMember ( );
	void OnPartyLeaderChanged ( );
	void KickedFromParty (unsigned char Reason );
	void HandleKickMessage (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void HandleLobbySettingsUpdateMessage (class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage );
	void HandleLobbyDestroyed (unsigned char Reason, struct FUniqueLobbyId* LobbyId );
	void HandleLobbyReceiveBinaryData (int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray< unsigned char >* Data );
	void RemoveAllPartyMembers ( );
	void RemovePartyMemberByLocalPlayer (class ULocalPlayer* Player );
	void RemovePartyMemberByIDWithNotify (struct FUniqueNetId& MemberId );
	void RemovePartyMemberByID (struct FUniqueNetId& MemberId );
	int AddPartyMember (struct FUniqueNetId& PrimaryMemberId, struct FUniqueNetId& MemberId, struct FString& MemberName, int ControllerId );
	void OnEditExistingPartyMember (int PartyMemberIdx );
	void OnAddNewPartyMember (int PartyMemberIdx );
	void UpdatePartyInfo ( struct FActiveLobbyInfo* Lobby );
	void UpdatePartyLeader ( struct FActiveLobbyInfo* Lobby );
	void HandleLobbySettingsUpdated ( struct FActiveLobbyInfo* Lobby );
	void OnNewLobby ( );
	void BroadcastPartyInfo ( );
	void HandleJoinLobby_ConnectionValid (struct FString& LobbyError );
	void HandleJoinLobby (unsigned long bWasSuccessful, struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID );
	void BroadcastStateDelayed ( );
	void BroadcastState ( );
	void HandleLobbyMemberStatusUpdate (int MemberIndex, int InstigatorIndex, struct FString& Status, struct FActiveLobbyInfo* LobbyInfo );
	void CancelJoinGameFromPartyDestroyed (class UOnlineGameParty_X* PartyObject );
	void HandlePartyJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	void HandleConfirmJoinGame_ConnectionValid (struct FPartyJoinMatchSettings& InSettings );
	void HandleConfirmJoinGame (struct FPartyJoinMatchSettings& InSettings );
	bool JoinFriend (struct FUniqueNetId& PartyMemberID );
	bool WantsToFollowTheLeaderOutOfGame ( );
	bool IsInSameMatch (struct FUniqueNetId& PartyMemberA, struct FUniqueNetId& PartymemberB );
	void HandlePartyJoinGame (class UOnlineMessageComponent_X* Component, class UPartyMessage_JoinGame_X* Message );
	bool CanBroadcastMatchmakingMessages ( );
	void BroadcastPartyServer ( );
	void HandleServerReserved ( );
	void HandleJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	struct FPartyMemberServer GetPartyMemberServer ( struct FPartyMemberServer* StructInitializer_EF5A292A446A6C37A35B5D945C0B85AE );
	void HandlePartyMemberJoinGame (class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject );
	bool SetPartyMemberJoinGame ( struct FUniqueNetId* PlayerID, struct FPartyMemberServer* Server );
	void BroadcastPartyMember (struct FUniqueNetId& PlayerID, struct FPartyMemberServer& Server );
	void BroadcastLobbySettings (struct FActiveLobbyInfo& LobbyInfo );
	bool SetLeader (struct FUniqueNetId& NewLeader );
	bool IsPrimaryPlayerIndex (int MemberIdx );
	bool IsPrimaryPlayer ( struct FUniqueNetId* PlayerID );
	bool IsPlayerInParty ( struct FUniqueNetId* PlayerID );
	bool KickPlayer (struct FUniqueNetId& PlayerID, unsigned char Reason );
	bool ShowPlatformInviteUI (unsigned char LocalUserNum );
	struct FString GetShowPlatformInviteUIError ( );
	bool CanShowPlatformInviteUI ( );
	bool ShowInviteUI (unsigned char LocalUserNum );
	bool LeaveParty (struct FString& Reason, struct FUniqueLobbyId* StructInitializer_90E025EB40ACD1BA0211AAB378F5CEFE );
	bool IsInCurrentGame (struct FUniqueNetId& MemberId );
	bool IsPartyLeader ( );
	bool IsInPartyID (struct FUniqueLobbyId& InPartyId );
	bool IsInParty ( struct FUniqueLobbyId* StructInitializer_AD02378947EC35DCBAB319B5CEF2F685 );
	void JoinParty (int LocalPlayerNum, struct FUniqueLobbyId* InPartyId );
	void CheckPartyTimeout ( );
	void StartPartyTimeout ( );
	void OnPartyCreated (unsigned long bWasSuccessful, struct FString& Error, struct FUniqueLobbyId* InPartyId );
	void CreatePartyInternal_ConnectionChecked (class UError* ConnectionError, class UOnlineLobbyInterface* LobbyInterface, int LocalPlayerNum, struct FScriptDelegate& Handler );
	void CreatePartyInternal (class UOnlineLobbyInterface* LobbyInterface, int LocalPlayerNum, struct FScriptDelegate& Handler );
	void CreatePlatformParty (int LocalPlayerNum, struct FScriptDelegate& Handler );
	void CreateParty (int LocalPlayerNum, struct FScriptDelegate& Handler );
	class UOnlineLobbyInterface* GetCreatePartyLobbyInterface ( );
	bool ShouldCreatePsyNetParty ( );
	void SetLobbyInterfacePsyNet ( );
	void SetLobbyInterfacePlatform ( );
	void ShortCircuitPartyInvitedPrompt ( struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId );
	void HandlePartySizeTracker (class UOnlineGameParty_X* PartyObject );
	void HandlePrimaryPlayerIdChanged (class UOnlineGameAccount_X* InAccount, struct FUniqueNetId& PlayerID );
	class UPartyMetrics_X* GetMetrics ( );
	void SetLobbyInterface (class UOnlineLobbyInterface* Lobby );
	bool IsUsingPsyNetParty ( );
	void InitLobbyInterfaces ( );
	void OnExit ( );
	void OnInit ( );
	void EventPlayerIsCurrentlyTrading (class UOnlineGameParty_X* PartyObject, struct FUniqueNetId& InMemberId );
	void EventPlayerInMatchChanged (class UOnlineGameParty_X* PartyObject, struct FUniqueNetId& InMemberId );
	void EventAnotherInviteToTrade (class UOnlineGameParty_X* PartyObject, struct FUniqueNetId& InMemberId );
	void EventTradeReady (class UOnlineGameParty_X* PartyObject );
	void EventNotReadyToTrade (class UOnlineGameParty_X* PartyObject );
	void EventReadyToTrade (class UOnlineGameParty_X* PartyObject );
	void EventCloseInviteToTrade (class UOnlineGameParty_X* PartyObject, unsigned long bWasCanceled );
	void EventAcceptedInviteToTrade (class UOnlineGameParty_X* PartyObject );
	void EventInviteToTrade (class UOnlineGameParty_X* PartyObject, struct FUniqueNetId& InMemberId );
	void EventPlayerTradingChanged (class UOnlineGameParty_X* PartyObject, struct FUniqueNetId& InMemberId, unsigned long bIsPlayerTrading );
	void EventDisableCrossPlayChanged (class UOnlineGameParty_X* PartyObject );
	void EventProcessingStatusChanged (class UOnlineGameParty_X* PartyObject );
	void EventLeaderLeftOnlineGame (class UOnlineGameParty_X* PartyObject );
	void EventConfirmJoinGameMessage (class UOnlineGameParty_X* PartyObject );
	void EventPartyDestroyed (class UOnlineGameParty_X* PartyObject );
	void EventPartyJoinGameSuccess (class UOnlineGameParty_X* PartyObject );
	void EventPartyJoinGameError (class UOnlineGameParty_X* PartyObject, struct FString& LocalizedErrorString );
	void EventPartyError (class UOnlineGameParty_X* PartyObject, class UError* Error );
	void EventSearchStatusChanged (class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage );
	void EventPartyLeaderChanged (class UOnlineGameParty_X* PartyObject );
	void EventPartySizeChanged (class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize );
	void EventPartyChanged (class UOnlineGameParty_X* PartyObject );
	void EventPlayerInvited (class UOnlineGameParty_X* PartyObject, struct FScriptDelegate& Callback, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* FriendId );
	void OnPartyInviteAccepted (int LocalPlayerNum, struct FUniqueLobbyId* InPartyId );
	void EventPartyCreated (class UOnlineGameParty_X* PartyObject, unsigned long bWasSuccessful );
};

// Class ProjectX.OnlineGameAccount_X
// 0x002C (0x0074 - 0x0048)
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                    		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UpdateCurrentGameTaskTimer;                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentPlaylistId;                                		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;          		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;              		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEACCOUNT_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void OnMainMenuOpened ( );
	int GetNumLocalPlayers ( );
	void SendUpdatePlayerCurrentGameRPC ( );
	void SendUpdatePlayerCurrentGameRequest ( );
	void UpdateCurrentGame ( );
	void ClearCurrentPlaylist ( );
	void SetCurrentPlaylist (int PlaylistId );
	void HandleServerAddressChanged ( );
	void HandlePsyNetConnectionChanged (class UPsyNetConnection_X* C );
	void HandlePlayerLoginStatusChanged (class UOnlinePlayer_X* Player );
	void OnPrimaryPlayerIdChanged ( );
	void SetPrimaryPlayer (class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventCurrentPlaylistSet (class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist );
	void EventPrimaryPlayerIdChanged (class UOnlineGameAccount_X* InAccount, struct FUniqueNetId& PlayerID );
};

// Class ProjectX.OnlineClubCache_X
// 0x001C (0x0064 - 0x0048)
class UOnlineClubCache_X : public UComponent
{
public:
	TArray< class UClubDetails_X* >                    ClubDetailsCache;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventClubUpdated__Delegate;                     		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECLUBCACHE_X ];

		return pClassPointer;
	};

	unsigned long long __OnlineClubCache_X__ClearAllExcept (class UClubDetails_X* C );
	void ClearAllExcept ( TArray< unsigned long long >* KeepClubs, TArray< unsigned long long >* MapLocal_40A0BCEF4A9BDE069ECEDB93079879AF, TArray< unsigned long long >* DifferenceLocal_8CE8A147493C5F2173817F9C3D434007 );
	void Clear ( );
	void Destroy (unsigned long long ClubID );
	void Add (class UClubDetails_X* ClubDetails );
	unsigned long long GetPlayerClubID (struct FUniqueNetId& PlayerID );
	class UClubDetails_X* GetPlayerClubDetails (struct FUniqueNetId& PlayerID );
	class UClubDetails_X* GetClubDetails (unsigned long long ClubID );
	void NotifyWhenClubUpdated (struct FScriptDelegate& Callback );
	void EventClubUpdated (class UOnlineClubCache_X* Cache, class UClubDetails_X* ClubDetails );
};

// Class ProjectX.AddReservationMessagePrivate_X
// 0x006C (0x0100 - 0x0094)
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	struct FCustomMatchSettings                        Settings;                                         		// 0x0094 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADDRESERVATIONMESSAGEPRIVATE_X ];

		return pClassPointer;
	};

	struct FString GetDebugString ( );
	class UAddReservationMessagePrivate_X* SetSettings ( struct FCustomMatchSettings* InSettings );
};

// Class ProjectX.AddReservationMessagePublic_X
// 0x0030 (0x00C4 - 0x0094)
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	struct FJoinMatchSettings                          Settings;                                         		// 0x0094 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlinePlayerMapPrefs >             MapPrefs;                                         		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADDRESERVATIONMESSAGEPUBLIC_X ];

		return pClassPointer;
	};

	class UAddReservationMessage_X* AddPlayers ( );
	void SetPlayerPref (class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer );
	void GetPlayerMapPrefs (struct FUniqueNetId& PlayerID, TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	class UAddReservationMessage_X* AddPlayer (struct FUniqueNetId& PlayerID, struct FString& PlayerName, unsigned long bRemotePlayer );
	struct FString GetDebugString ( );
	struct FString GetPlayerDebugString (struct FReservationPlayerData& Player );
	class UAddReservationMessagePublic_X* SetSettings ( struct FJoinMatchSettings* InSettings );
};

// Class ProjectX.OnlineGameSkill_X
// 0x0040 (0x0088 - 0x0048)
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray< class UPlaylistSkillCache_X* >             Playlists;                                        		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPlayerSeasonRewardProgress >       SeasonRewards;                                    		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSkillSyncRequest >                 SyncRequests;                                     		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      SkillsSyncedPlayers;                              		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                     		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESKILL_X ];

		return pClassPointer;
	};

	bool SkillsSynced (struct FUniqueNetId& PlayerID );
	int GetHighestSkillTier (struct FUniqueNetId& PlayerID );
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress (struct FUniqueNetId& PlayerID );
	class UPlaylistSkillCache_X* GetPlaylistSkillCache (int Playlist );
	void HandleSkillsUpdateFailed (class URPC_X* RPC );
	void SetPlayerSeasonReward (struct FPlayerSeasonRewardProgress& Reward );
	void ReplicateSeasonReward (struct FPlayerSeasonRewardProgress& Reward );
	void HandleSkillsUpdated (class URPC_X* RPC, struct FPlayerSeasonRewardProgress* StructInitializer_ED2A1B1B4B229A7DD76EE0908D0A6179 );
	void SubmitMatch (class UMatchData_X* Match, struct FString& MatchGUID );
	void Clear ( );
	float GetConservativeMMR (float Mu, float Sigma );
	float GetPlayerConservativeMMR (struct FUniqueNetId& PlayerID, int Playlist );
	float GetMMR (float Mu, float Sigma );
	float GetPlayerMMR (struct FUniqueNetId& PlayerID, int Playlist );
	struct FPlayerSkillRating GetPlayerRating (struct FUniqueNetId& PlayerID, int Playlist );
	void OnSkillSynced (struct FUniqueNetId& PlayerID, class UError* Error );
	void CacheSeasonReward (struct FPlayerSeasonRewardProgress& Reward );
	void HandleSkillRequestCompleteRPC (class URPC_GetPlayerSkill_X* RPC );
	void SyncPlayerSkill (struct FUniqueNetId& PlayerID, struct FScriptDelegate& Callback );
	void CacheSkill (struct FPlayerSkillRating& Rating, int Playlist );
	void PreCacheSkill (struct FPlayerSkillRating& Rating, int Playlist );
	int GetSkillPlaylistID (int PlaylistId );
	void EventSkillSynced (class UOnlineGameSkill_X* Skill, struct FUniqueNetId& PlayerID, class UError* Error );
};

// Class ProjectX.OnlineGamePlaylists_X
// 0x0024 (0x006C - 0x0048)
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UGameSettingPlaylist_X* >            DownloadedPlaylists;                              		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class URankedConfig_X*                             RankedConfig;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEPLAYLISTS_X ];

		return pClassPointer;
	};

	bool __OnlineGamePlaylists_X__GetPrivateMatch (class UGameSettingPlaylist_X* P );
	bool __OnlineGamePlaylists_X__GetLanMatch (class UGameSettingPlaylist_X* P );
	class UGameSettingPlaylist_X* GetLanMatch ( );
	class UGameSettingPlaylist_X* GetPrivateMatch ( );
	TArray< struct FName > GetAccessiblePlaylists ( TArray< struct FName >* SelectedPlaylists );
	bool IsRankedEnabled ( );
	bool IsRankedPlaylistID (int PlaylistId );
	bool IsRankedPlaylistName (struct FName& PlaylistName );
	bool IsUnankedPlaylistName (struct FName& PlaylistName );
	bool IsStandardPlaylistID (int PlaylistId );
	bool IsStandardPlaylistName (struct FName& PlaylistName );
	bool IsNonStandardPlaylistName (struct FName& PlaylistName );
	void NamesToIDs ( TArray< struct FName >* Names, TArray< int >* Ids );
	struct FString GetPlaylistFriendlyName (int PlaylistId );
	void CopyPlaylistGameTags ( );
	void HandlePlaylistsChanged (class UObjectProvider* Provider );
	int NameToID (struct FName& PlaylistName );
	int GetTimeRemaining (int PlaylistId );
	bool IsTimeConstrained (int PlaylistId );
	class UGameSettingPlaylist_X* GetPlaylistByID (int PlaylistId );
	class UGameSettingPlaylist_X* GetPlaylistByName (struct FName& PlaylistName );
	bool IsPlaylistEnabled (class UGameSettingPlaylist_X* Playlist );
	void NotifyWhenChanged (struct FScriptDelegate& Callback );
	void OnInit ( );
	void EventPlaylistsChanged (class UOnlineGamePlaylists_X* PlaylistsObj );
};

// Class ProjectX.GameSettingPlaylist_X
// 0x0048 (0x0088 - 0x0040)
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	struct FString                                     Title;                                            		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlayerCount;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStandard : 1;                                    		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRanked : 1;                                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSolo : 1;                                        		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x005C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowForfeit : 1;                                		// 0x005C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bDisableRankedReconnect : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bIgnoreAssignTeams : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bKickOnMigrate : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bAllowClubs : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bPlayersVSBots : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	int                                                PlaylistId;                                       		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTimeWindow*                                 PlaylistTimeWindow;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPresetMutators_X* >                 PresetMutators;                                   		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MapName;                                          		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ServerCommand;                                    		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMESETTINGPLAYLIST_X ];

		return pClassPointer;
	};

	bool IsLanMatch ( );
	bool IsPrivateMatch ( );
	bool ShouldUpdateSkills ( );
	bool IsValidID (int InPlaylistID );
	bool IsValid ( );
	struct FString GetLocalizedDescription ( );
	struct FString GetLocalizedName ( );
	void Setup (class UPlaylistSettings_X* Settings );
};

// Class ProjectX.SeqEvent_Spawned_X
// 0x0004 (0x0118 - 0x0114)
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	class AActor*                                      Spawned;                                          		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SEQEVENT_SPAWNED_X ];

		return pClassPointer;
	};

	void TriggerFor (class AActor* A );
};

// Class ProjectX.CameraStateBlender_X
// 0x0088 (0x00D0 - 0x0048)
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                       		// 0x0048 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          TransitionDelta;                                  		// 0x0090 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	class UCameraState_X*                              CameraState;                                      		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;             		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERASTATEBLENDER_X ];

		return pClassPointer;
	};

	bool IsTransitioning ( );
	void BlendCameraState (float DeltaTime, struct FCameraOrientation* OutPOV );
	void PostProcessPOV (float DeltaTime, struct FCameraOrientation* OutPOV );
	void UpdatePOV (float DeltaTime, struct FCameraOrientation* OutPOV );
	void Tick (float DeltaTime );
	void ClearTransitionDelta ( );
	void ClearTransition ( );
	bool TransitionToState (class UCameraState_X* NewState );
	void Snap ( );
	void EventBlenderStateChanged (class UCameraStateBlender_X* CameraBender );
};

// Class ProjectX.CameraState_X
// 0x001C (0x005C - 0x0040)
class UCameraState_X : public UStateObject_X
{
public:
	struct FViewTargetTransitionParams                 DefaultBlendParams;                               		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ACamera_X*                                   Camera;                                           		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCanSwivel : 1;                                   		// 0x0058 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERASTATE_X ];

		return pClassPointer;
	};

	void OnSnap ( );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void ProcessViewRotation (float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot );
	void UpdatePOV (float DeltaTime, struct FCameraOrientation* OutPOV );
	void Tick (float DeltaTime );
	void EndCameraState ( );
	void BeginCameraState ( );
	struct FViewTargetTransitionParams GetEndBlendParams (class UCameraState_X* NewState );
	struct FViewTargetTransitionParams GetStartBlendParams (class UCameraState_X* PreviousState );
	bool ShouldKeepExecuting ( );
	bool ShouldExecute ( );
	void Init (class ACamera_X* InCamera );
};

// Class ProjectX.CameraUtils_X
// 0x0000 (0x003C - 0x003C)
class UCameraUtils_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERAUTILS_X ];

		return pClassPointer;
	};

	void BlendPOVs (struct FCameraOrientation& FromPOV, struct FCameraOrientation& ToPOV, float Percent, struct FCameraOrientation* OutPOV );
	float GetBlendPercent (struct FViewTargetTransitionParams& BlendParams, float Time );
	bool IsPointInView (struct FVector& Point, struct FVector& ViewStart, struct FRotator& ViewRotation, float FOV );
	float GetFrustumDistanceFromWidth (float FOV, float Width, float AspectRatio );
	float GetFrustumDistanceFromHeight (float FOV, float Height );
	void GetFrustumSize (float Dist, float FOV, float AspectRatio, float* OutWidth, float* OutHeight );
	void CalculateDistanceRotation (struct FVector& Focus, struct FVector& Origin, float* OutDistance, struct FRotator* OutRotation );
};

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0000 (0x0068 - 0x0068)
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERAMODIFIER_CAMERASHAKE_X ];

		return pClassPointer;
	};

	void ModifyCameraShakeScale (class UCameraShake* Shake, float NewScale );
	void RemoveCameraShake (class UCameraShake* Shake );
};

// Class ProjectX.CameraState_CamActor_X
// 0x015C (0x01B8 - 0x005C)
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned long                                      bUseOverridePostProcess : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ACameraActor*                                CamActor;                                         		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPostProcessSettings                        PrevPost;                                         		// 0x0064 (0x0150) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              PrevPostAlpha;                                    		// 0x01B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERASTATE_CAMACTOR_X ];

		return pClassPointer;
	};

	void UpdatePOV (float DeltaTime, struct FCameraOrientation* OutPOV );
	void EndCameraState ( );
	void BeginCameraState ( );
	struct FViewTargetTransitionParams GetBlendParams (class UCameraState_X* PrevState );
	bool ShouldExecute ( );
};

// Class ProjectX.CDN_X
// 0x0018 (0x0054 - 0x003C)
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                              		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BlogURL;                                          		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CDN_X ];

		return pClassPointer;
	};

};

// Class ProjectX.HUD_X
// 0x000C (0x0274 - 0x0268)
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                  		// 0x0268 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDebugDrawer_X*                              DebugDrawer;                                      		// 0x026C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTexture*                                    DebugTexture;                                     		// 0x0270 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_HUD_X ];

		return pClassPointer;
	};

	void SetShowDebugObject (class UObject* inObj );
	void ShowDebugInfo ( float* out_YL, float* out_YPos );
	void ShowDebug (struct FName& DebugType );
	void DebugCategory (struct FName& DebugType );
	void DebugCategorySwitch (unsigned long bForward );
	void DrawPauseScreen ( );
	bool ShouldShowConsoleMessage (struct FConsoleMessage& InConsoleMessage );
	void DrawDebugTexture ( );
	void DrawHUD ( );
};

// Class ProjectX.__CheatManager_X__RandomSleep
// 0x0010 (0x004C - 0x003C)
class U__CheatManager_X__RandomSleep : public UObject
{
public:
	float                                              MinDelay;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              MaxDelay;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              MinSleep;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              MaxSleep;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___CHEATMANAGER_X__RANDOMSLEEP ];

		return pClassPointer;
	};

	void __CheatManager_X__RandomSleep ( );
};

// Class ProjectX.DebugDrawer_X
// 0x0030 (0x00B0 - 0x0080)
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              textscale;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCanvas*                                     Canvas;                                           		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             DebugCategories;                                  		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             PossibleDebugCategories;                          		// 0x0094 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              CharWidth;                                        		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastWidestElement;                                		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHideDebug : 1;                                   		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              OffsetX;                                          		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DEBUGDRAWER_X ];

		return pClassPointer;
	};

	void DrawHeader ( );
	void DrawSpacer (float Height );
	void DrawBackground (float Width, float Height );
	void FinishDrawDebug ( );
	void StartDrawDebug (class UCanvas* C );
	void PrintText (struct FString& Text, struct FColor& InColor );
	void PrintProperty (struct FString& PropertyName, struct FString& Value );
	void PrintSeperater ( );
	void UpdateCanvasIndentation ( );
	void EndSection ( );
	void StartSection ( );
	void SetPos (float X, float Y );
	bool ShouldDisplayDebug (struct FName& Category );
};

// Class ProjectX.OnlineGameLanServer_X
// 0x00A0 (0x017C - 0x00DC)
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                     		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x00E0 (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x014C (0x0030) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMELANSERVER_X ];

		return pClassPointer;
	};

	void StartReservationTimeout ( );
	void PlayerLoggedOut (class APlayerReplicationInfo* PRI );
	bool AllowSplitscreenJoin (class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FString* Error );
	void PlayerLoggedIn (class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin (struct FString& Options, struct FUniqueNetId& PlayerID, struct FString* ErrorMessage );
	void TravelToMap (struct FString& ServerCommand );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	void GoToNextMap ( );
	void ClearSettings ( );
	void HandleReservationsTimeout ( );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	struct FUniqueNetId GetCustomMatchOwner ( );
	void UpdateCustomMatchOwner (struct FUniqueNetId& NewOwner );
	void SetupPrivateMatch (struct FCustomMatchSettings& Settings, struct FUniqueNetId& Creator );
	void OnInit ( );
};

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (0x003C - 0x003C)
class UIOnlineGameHost_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_IONLINEGAMEHOST_X ];

		return pClassPointer;
	};

	struct FUniqueNetId GetCustomMatchOwner ( );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	bool AllowSplitscreenJoin (class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId& PlayerID, struct FString& PlayerName, struct FString* Error );
	void PlayerLoggedOut (class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn (class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin (struct FString& Options, struct FUniqueNetId& PlayerID, struct FString* ErrorMessage );
};

// Class ProjectX.Explosion_X
// 0x000C (0x01F4 - 0x01E8)
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                               		// 0x01E8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AFXActor_X*                                  FXActorArchetype;                                 		// 0x01EC (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class AFXActor_X*                                  FXActor;                                          		// 0x01F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_EXPLOSION_X ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventForceNetRelevant ( );
	void SetFXActorArchetype (class AFXActor_X* A );
	void SpawnFX ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent (struct FName& VarName );
};

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      AttachTo;                                         		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SEQACT_TRIGGERFXACTOR_X ];

		return pClassPointer;
	};

};

// Class ProjectX.NetMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UNetMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_NETMETRICS_X ];

		return pClassPointer;
	};

	void UseInputBuffer (struct FUniqueNetId& PlayerID, struct FName& Type );
	void LaunchURL (struct FString& URL );
	void ServerReported (struct FUniqueNetId& PlayerID );
	void RpcSignatureMismatch (int ServiceID );
	void ConnectionChangedIP (struct FUniqueNetId& PlayerID );
	void PlayerNetworkError (struct FUniqueNetId& PlayerID, struct FString& Reason );
	void PlayerTimeout (struct FUniqueNetId& PlayerID );
	void PlayerNetwork (struct FUniqueNetId& PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int InBytesTotal, int OutBpsMax, int OutBpsAvg, int OutBytesTotal );
	void RecordPlayerNetwork (class APlayerController* PC );
};

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (0x0394 - 0x0394)
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GAMEINFO_MAPPROFILER_X ];

		return pClassPointer;
	};

	void GenericPlayerInitialization (class AController* C );
	class APlayerController* SpawnPlayerController (struct FVector& SpawnLocation, struct FRotator& SpawnRotation );
};

// Class ProjectX.PresetMutators_X
// 0x0028 (0x0064 - 0x003C)
class UPresetMutators_X : public UObject
{
public:
	TArray< struct FCategorySettingPair >              PresetTags;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             RequiresMaps;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLockSettings : 1;                                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     OverrideName;                                     		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PRESETMUTATORS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PlaylistSettings_X
// 0x0048 (0x0084 - 0x003C)
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlaylistId;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlayerCount;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStandard : 1;                                    		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRanked : 1;                                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSolo : 1;                                        		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x005C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x005C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bAllowForfeit : 1;                                		// 0x005C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDisableRankedReconnect : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bIgnoreAssignTeams : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bKickOnMigrate : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bAllowClubs : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bPlayersVSBots : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	class UTimeWindow*                                 PlaylistTimeWindow;                               		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPresetMutators_X* >                 PresetMutators;                                   		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MapName;                                          		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ServerCommand;                                    		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PLAYLISTSETTINGS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GFxModal_X
// 0x0048 (0x0084 - 0x003C)
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                            		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UGFxObject*                                  GFxPopup;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   Callbacks;                                        		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ConfirmString;                                    		// 0x0058 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __ClickDelegate__Delegate;                        		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GFXMODAL_X ];

		return pClassPointer;
	};

	class UGFxModal_X* NotifyOnClosed (struct FScriptDelegate& Callback );
	void Close ( );
	void FlashAddButton (struct FString& Label );
	void FlashAddCancelButton (struct FString& LocalizedText );
	void HandleButtonClicked (int Index );
	class UGFxModal_X* AddButtonCallback (int Index, struct FScriptDelegate& OnClick );
	class UGFxModal_X* AddButton (struct FString& Label, struct FScriptDelegate& OnClick );
	class UGFxModal_X* AddCancelButton (struct FString& LocalizedText, struct FScriptDelegate& OnClick );
	class UGFxModal_X* SetCancellable (unsigned long bCancellable );
	class UGFxModal_X* SetDefaultSelectedButtonIndex (int buttonIndex );
	class UGFxModal_X* SetIcon (struct FString& IconName );
	class UGFxModal_X* SetBody (struct FString& LocalizedText );
	class UGFxModal_X* SetTitle (struct FString& LocalizedText );
	void SetGFxObject (class UGFxObject* Obj );
	void EventClosed (class UGFxModal_X* Modal );
	void ClickDelegate (class UGFxModal_X* Modal );
};

// Class ProjectX.GRI_X
// 0x0280 (0x04B8 - 0x0238)
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                           		// 0x0238 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                ReplicatedGameMutatorIndex;                       		// 0x023C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FReplicatedReservationData                  Reservations[ 0x8 ];                              		// 0x0240 (0x0200) [0x0000000000402020]              ( CPF_Net | CPF_Transient | CPF_NeedCtorLink )
	unsigned long long                                 GameServerID;                                     		// 0x0440 (0x0008) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned long                                      bGameStarted : 1;                                 		// 0x0448 (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bGameEnded : 1;                                   		// 0x0448 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FString                                     MatchGUID;                                        		// 0x044C (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x0458 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x045C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                		// 0x0468 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x046C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x0478 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x047C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;               		// 0x0488 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x048C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameStarted__Delegate;                     		// 0x0498 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x049C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x04A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x04AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GRI_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void SetMatchGUID (struct FString& Id );
	void HandleMatchGUIDChanged (class UOnlineGameDedicatedServer_X* OnlineGameDS );
	bool IsPlaylistRanked ( );
	class UGameSettingPlaylist_X* GetPlaylist ( );
	bool PlayerIsInCurrentGame (struct FUniqueNetId& MemberId );
	struct FString GetReservationDebugString (struct FReplicatedReservationData& Data );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated ( );
	class UOnlineGame_Base_X* GetOnlineGameBase ( );
	class UOnlineGame_X* GetOnlineGame ( );
	bool HasSelectedGameData ( );
	void SetGameStarted ( );
	void SetOfflineGameData (struct FName& PlaylistName );
	void NotifyOnGameDataSelected (struct FScriptDelegate& Callback );
	void SetGameData (int NewPlaylistID, int MutatorIndex );
	void HandleGamePlaylistSet (class UOnlineGameDedicatedServer_X* DedicatedServer );
	void OnReservationsUpdated ( );
	void SetReservations (TArray< struct FReplicatedReservationData > InReservations, struct FReplicatedReservationData* StructInitializer_0E6B57C84682F8B57C93989D07522E06 );
	struct FReplicatedReservationData ConvertReservation (struct FReservationData& Data, struct FReplicatedReservationData* StructInitializer_57E768844D470C020BDCDE8ADF8A1DCD );
	void UpdateReservations ( TArray< struct FReplicatedReservationData >* MapLocal_016312934A337D44D2EBD69A39A7FC12 );
	void eventReplicatedEvent (struct FName& VarName );
	void eventPostBeginPlay ( );
	void EventMatchGUIDChanged (class AGRI_X* GRI );
	void EventGameStarted (class AGRI_X* GRI );
	void EventServerNameChanged (class AGRI_X* GRI );
	void EventReservationsUpdated (class AGRI_X* GRI );
	void EventGameDataSelected (int PlaylistId, int MutatorIndex );
	void EventSpawned (class AGRI_X* GRI );
};

// Class ProjectX.LanMessage_X
// 0x0008 (0x0044 - 0x003C)
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned long long                                 Nonce;                                            		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANMESSAGE_X ];

		return pClassPointer;
	};

	bool Broadcast ( );
	class ULanMessage_X* SetNonce (unsigned long long InNonce );
};

// Class ProjectX.LanMessage_HostQuery_X
// 0x0074 (0x00B8 - 0x0044)
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct FCustomMatchSettings                        Filter;                                           		// 0x0044 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuildID;                                          		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHost : 1;                                        		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANMESSAGE_HOSTQUERY_X ];

		return pClassPointer;
	};

	class ULanMessage_HostQuery_X* SetHost (unsigned long bValue );
	class ULanMessage_HostQuery_X* SetBuildID (int InBuildID );
	class ULanMessage_HostQuery_X* SetFilter (struct FCustomMatchSettings& InFilter );
};

// Class ProjectX.LanMessage_HostResponse_X
// 0x009C (0x00E0 - 0x0044)
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                           		// 0x0044 (0x0084) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerID;                                         		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MetaData;                                         		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANMESSAGE_HOSTRESPONSE_X ];

		return pClassPointer;
	};

	struct FString GetDebugString ( );
	class ULanMessage_HostResponse_X* SetMetaData (struct FString& InMetaData );
	class ULanMessage_HostResponse_X* SetServerID (struct FString& InServerID );
	class ULanMessage_HostResponse_X* SetResult (struct FServerResult& InResult );
};

// Class ProjectX.LanMessage_Ping_X
// 0x0000 (0x0044 - 0x0044)
class ULanMessage_Ping_X : public ULanMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANMESSAGE_PING_X ];

		return pClassPointer;
	};

};

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (0x003C - 0x003C)
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHENDEDMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.MaterialEffect_X
// 0x0030 (0x0098 - 0x0068)
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                    		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInFalloff;                                    		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutFalloff;                                   		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTime;                                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueMin;                                         		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueMax;                                         		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Stage;                                            		// 0x0090 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StageTime;                                        		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATERIALEFFECT_X ];

		return pClassPointer;
	};

	struct FString GetActiveEffects ( );
	bool HasAnyEffectsActive ( );
	float GetMaterialParameterValue (struct FName& MaterialParamName );
	void SetMaterialParameterLinearColorValue (struct FName& MaterialParamName, struct FLinearColor& NewValue );
	void SetMaterialParameterValue (struct FName& MaterialParamName, float NewValue );
	void HandleParametersChanged ( );
	void UpdateFade (float Alpha );
	void SetStage (unsigned char NewStage );
	bool Tick (float dt );
	void End ( );
	void Start ( );
	void Init ( );
	bool IsInitialized ( );
};

// Class ProjectX.OnlineClubProvider_X
// 0x0048 (0x0084 - 0x003C)
class UOnlineClubProvider_X : public UObject
{
public:
	class UOnlineClubCache_X*                          Cache;                                            		// 0x003C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class URPC_GetClubDetails_X* >             SyncingClubs;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class URPC_GetPlayerClubDetails_X* >       SyncingPlayers;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerClubSyncResult >             PlayerClubSyncResults;                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                    		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerSynced__Delegate;                    		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECLUBPROVIDER_X ];

		return pClassPointer;
	};

	void ClubSynced (class UClubDetails_X* Club );
	bool IsSyncing ( );
	void NotifyWhenSyncComplete (struct FScriptDelegate& Callback );
	struct FPlayerClubSyncResult GetPlayerClubSyncResult (struct FUniqueNetId& PlayerID, struct FPlayerClubSyncResult* StructInitializer_D8D66215474D48E6CE73C7B2E26083AC );
	void SetPlayerClubSyncResult (struct FUniqueNetId& PlayerID, class UError* Error, struct FPlayerClubSyncResult* StructInitializer_829B035D457E1A5146CF828BF3FF9A3A );
	void HandlePlayerSynced (class URPC_GetPlayerClubDetails_X* RPC );
	class UTAsyncResult__ClubDetails_X* SyncPlayerClubDetails (struct FUniqueNetId& PlayerID );
	class UTAsyncResult__ClubDetails_X* GetPlayerClubDetails (struct FUniqueNetId& PlayerID );
	void HandleClubSynced (class URPC_GetClubDetails_X* RPC );
	class UTAsyncResult__ClubDetails_X* SyncClubDetails (unsigned long long ClubID );
	class UTAsyncResult__ClubDetails_X* GetClubDetails (unsigned long long ClubID );
	void EventPlayerSynced (class UOnlineClubProvider_X* Provider, struct FUniqueNetId& PlayerID );
	void EventSyncComplete (class UOnlineClubProvider_X* Provider );
};

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (0x0040 - 0x003C)
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECONFIGDISPATCHER_X ];

		return pClassPointer;
	};

	struct FString GetDebugString (class UOnlineConfig_X* Config );
	void UndoConfigObject (class UOnlineConfig_X* Config );
	void ApplyConfigObject (class UOnlineConfig_X* Config );
	void eventConstruct ( );
};

// Class ProjectX.WebCache_X
// 0x001C (0x0058 - 0x003C)
class UWebCache_X : public UObject
{
public:
	TArray< struct FCachedDataRequest >                Requests;                                         		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __CachedDataCallback__Delegate;                   		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBCACHE_X ];

		return pClassPointer;
	};

	struct FString GetRequestDebugString (struct FCachedDataRequest& Request );
	void HandleWebRequest (class UWebRequest_X* WebRequest );
	void DownloadData (struct FString& URL, struct FString& ETag, unsigned long bZipResponse );
	void HandleLoadFromCache (class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error );
	void RaiseUrlEmptyError (struct FScriptDelegate& Callback );
	void SyncDataInternal (struct FString& URL, struct FScriptDelegate& Callback, unsigned long bZipResponse );
	void SyncDataZipped (struct FString& URL, struct FScriptDelegate& Callback );
	void SyncData (struct FString& URL, struct FScriptDelegate& Callback );
	struct FString GetCachedPath (struct FString& URL );
	void CachedDataCallback (class UCachedWebData_X* CachedData );
};

// Class ProjectX.WebImageCache_X
// 0x0008 (0x0044 - 0x003C)
class UWebImageCache_X : public UObject
{
public:
	class UImageDecoder*                               Decoder;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UStringObjectMap*                            Downloads;                                        		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBIMAGECACHE_X ];

		return pClassPointer;
	};

	void HandleImageDecoded (class UWebImageDownload_X* Download, struct FImageLayout& Image );
	void SetDownloadError (class UWebImageDownload_X* Download, class UError* Error );
	void HandleImageData (class UWebImageDownload_X* Download, class UCachedWebData_X* Data );
	class UWebImageDownload_X* StartSync (struct FString& URL );
	void HandleUncachedImageDownload (class UTAsyncResult__Texture2DDynamic* Task, class UTexture2DDynamic* Texture );
	class UTAsyncResult__Texture2DDynamic* SyncUncachedImage (struct FString& URL, unsigned long bSRGB, TArray< struct FString >* ArrayInitializer_A882C95E4043FB71753E9F802CCB3D08 );
	class UWebImageDownload_X* GetDownload (struct FString& URL );
	class UTAsyncResult__Texture2DDynamic* SyncImageSRGB (struct FString& URL );
	class UTAsyncResult__Texture2DDynamic* SyncImage (struct FString& URL );
	void eventConstruct ( );
};

// Class ProjectX.OnlineGameWordFilter_X
// 0x0014 (0x005C - 0x0048)
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray< struct FWordFilterPair >                   Filtered;                                         		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UWordFilterConfig_X*                         Config;                                           		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNetWordFilter_X*                         PsyNetWordFilter;                                 		// 0x0058 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEWORDFILTER_X ];

		return pClassPointer;
	};

	struct FString SanitizePhraseAndNotify (struct FString& Comment, struct FScriptDelegate& Callback );
	struct FString SanitizePhrase (struct FString& Comment );
	class UError* CreateError (unsigned char Usage, struct FWordFilterResult* Result );
	bool IsChat (unsigned char Usage );
	void HandleCommentSanitized (struct FString& Id, struct FWordFilterResult* Result );
	bool StartWordFilterTask (unsigned char Usage, struct FString& Comment, struct FScriptDelegate& SanitizeDelegate, struct FUniqueNetId& PlayerID );
	struct FString InternalSanitize (struct FString& Comment, struct FScriptDelegate& Callback, struct FScriptDelegate& ErrorCallback, unsigned char Usage, struct FUniqueNetId& PlayerID );
	bool IsPending (struct FString& Comment );
	struct FString Sanitize (unsigned char Usage, struct FString& Comment, struct FScriptDelegate& Callback, struct FScriptDelegate& ErrorCallback, struct FUniqueNetId& PlayerID );
	struct FString SanitizePlayerName (unsigned char PlayerPlatform, struct FString& PlayerName, struct FScriptDelegate& Callback, struct FScriptDelegate& ErrorCallback, struct FUniqueNetId& PlayerID );
	void OnMainMenuOpened ( );
};

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0020 (0x0068 - 0x0048)
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                    		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FWordFilterRequest >                SanitizeCallbacks;                                		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;             		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEWORDFILTERPROCESSOR_X ];

		return pClassPointer;
	};

	void TriggerCallbacks (int Index );
	void ProcessSanitizedDelayed ( );
	void HandleWordSanitized (class UWebRequest_X* Request );
	bool SanitizeString (struct FString& Comment, struct FScriptDelegate& SanitizeDelegate );
	void OnSanitizeStringComplete (struct FString& Original, struct FString& Sanitized );
};

// Class ProjectX.OnlineGamePrivileges_X
// 0x0030 (0x0078 - 0x0048)
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray< class UPrivilegeCheck_X* >                 PendingChecks;                                    		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsCheckingPrivileges : 1;                        		// 0x0054 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;       		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;       		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEPRIVILEGES_X ];

		return pClassPointer;
	};

	bool IsCheckingPrivileges ( );
	void RemoveCallback (struct FScriptDelegate& Callback );
	void HandlePrivilegeCheckFinished (class UPrivilegeCheck_X* PrivilegeCheck );
	class UPrivilegeCheck_X* CreatePrivilegeCheck (int ControllerId, struct FScriptDelegate& Callback );
	void TryToUseUGC (int ControllerId, struct FScriptDelegate& Callback );
	void TryToPlayOnline (int ControllerId, struct FScriptDelegate& Callback );
	void TryToUsePsyNet (int ControllerId, struct FScriptDelegate& Callback );
	void TryToViewLeaderboards (int ControllerId, struct FScriptDelegate& Callback );
	void TryToBrowseInternet (int ControllerId, struct FScriptDelegate& Callback );
	void EventPrivilegeCheckRestriction (class UPrivilegeCheck_X* Check );
	void EventCheckingPrivilegesChanged (class UOnlineGamePrivileges_X* PrivilegesObject );
};

// Class ProjectX.OnlineGameRegions_X
// 0x006C (0x00B4 - 0x0048)
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                             		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPingRegionsTime;                              		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RegionIdxPingCur;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FRegionData >                       RegionList;                                       		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      SortedRegions;                                    		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCachedRegionPing >                 CachedRegionPings;                                		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x0078 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bWaitingToPingRegions : 1;                        		// 0x007C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bPingingRegions : 1;                              		// 0x007C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bServersPinged : 1;                               		// 0x007C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                NumServersPinged;                                 		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                   		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                   		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventRegionsError__Delegate;                    		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEREGIONS_X ];

		return pClassPointer;
	};

	struct FString GetLocalizedName (struct FString& RegionID );
	bool Exists (struct FString& RegionName );
	void SetCachedRegionPings ( TArray< struct FCachedRegionPing >* InCachedRegionPings );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	void NotifyWhenSynced (struct FScriptDelegate& Callback );
	struct FString GetRegionsDebugString ( );
	struct FString GetFriendlyRegionsString ( );
	struct FString GetFriendlySortedRegionsString ( );
	struct FString GetSortedRegionsString ( );
	int SortRegionDelegate (int A, int B );
	void OnAllRegionsPinged ( );
	void HandlePingMessage (class UTcpConnection* Connection, class UObject* PingMessage );
	void PingRegionsPieceWise (int PingCount );
	void HandleGetPingRegionListRPC (class URPC_GetGameServerPingList_X* RPC );
	void PingRegions (struct FScriptDelegate& Callback );
	void OnRegionsSynced ( );
	void AddRegion (struct FString& RegionName, struct FString& RegionLabel );
	void HandleRegionListChanged (class URegionList_X* List );
	void eventOnInit ( );
	void EventRegionsError (class UOnlineGameRegions_X* RegionsObj, class UError* Error );
	void EventRegionsPinged (class UOnlineGameRegions_X* RegionsObj );
	void EventRegionsSynced (class UOnlineGameRegions_X* RegionsObj );
};

// Class ProjectX.OnlineGameJoinGame_X
// 0x025C (0x02A4 - 0x0048)
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FailCommand;                                      		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreenCommand;                             		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UShakeComponent_X*                           JoinGameShake;                                    		// 0x0064 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTcpMessageBeacon*                           ReservationBeacon;                                		// 0x0068 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     WaitingForPlayersString;                          		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReservationNotRespondingString;                   		// 0x0078 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReservationFullString;                            		// 0x0084 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PartyTeamReservationFullString;                   		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoFriendJoinPrivateMatchString;                   		// 0x009C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BeaconTimedOutString;                             		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotAllPlayersJoinedString;                        		// 0x00B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanceledString;                                   		// 0x00C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SecurityKeyAcquisitionFailed;                     		// 0x00CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SecurityKeyVerificationFailed;                    		// 0x00D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SendingReservationMessage;                        		// 0x00E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     JoiningPartyLeadersGame;                          		// 0x00F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     InvalidPassword;                                  		// 0x00FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WrongPlaylistString;                              		// 0x0108 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WrongRankedMatchString;                           		// 0x0114 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchEndedString;                                 		// 0x0120 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CrossplayDisabled;                                		// 0x012C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AnotherPlayerCanceled;                            		// 0x0138 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ServerBeaconAddress;                              		// 0x0144 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ServerGameAddress;                                		// 0x0150 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FJoinMatchSettings                          Settings;                                         		// 0x0160 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PendingFailMessage;                               		// 0x0184 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UPlayer* >                           JoinedPlayers;                                    		// 0x0190 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x019C (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class URPC_GenerateKeys_X* >               GenerateKeysRPCs;                                 		// 0x0208 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                		// 0x0214 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0218 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                    		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0228 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0238 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                  		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0248 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerBeaconAddressChanged__Delegate;      		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0258 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerReserved__Delegate;                  		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0268 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0278 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                     		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;               		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x0298 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEJOINGAME_X ];

		return pClassPointer;
	};

	void HandleCanPlayOnline (class UPrivilegeCheck_X* PrivilegeCheck );
	void RemoveKeysRPC (class URPC_X* RPC );
	void SendGenerateKeysRPCs ( );
	void HandleGenerateKeys (class URPC_GenerateKeys_X* RPC );
	void SetNetworkKeys (class URPC_GenerateKeys_X* RPC );
	void GoToNextState ( );
	void HandleCancelJoin (class UTcpConnection* Connection, class UObject* Message );
	void SendReservation ( );
	void SendReservationMessage ( );
	class UMatchmakingMetrics_X* GetMetrics ( );
	void HandleConnection (class UTcpBeacon* Beacon, class UTcpConnection* Connection );
	void HandleDisconnection (class UTcpBeacon* Beacon, class UTcpConnection* Connection );
	void JoinServer (class UReservationsReadyMessage_X* Message );
	void TravelToServer ( );
	class UAddReservationMessage_X* CreateReservationMessage ( );
	void SendServerReservedEvent ( );
	void StartConnectToServer ( );
	void CheckAllLocalPlayersHaveJoined (class UPlayer* JoinedPlayer );
	void HandleInternetConnectionChanged (unsigned long bConnected );
	void OnAllPlayersJoined ( );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool IsInTransition ( );
	void SendPing ( );
	void GotoJoinGameState (struct FName& NewStateName );
	void HandleConnectionResponse (class UTcpConnection* Connection, class UObject* Message );
	void HandleReservationResponse (class UTcpConnection* Connection, class UObject* Message );
	void HandleConnectionFailed (unsigned char MessageType, struct FString& Title, struct FString& Message );
	void OnJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	void SetServerBeaconAddress (struct FString& NewValue );
	void ClearServerData ( );
	void HandleGameInfoSpawned (class AGameInfo_X* InGameInfo );
	bool IsJoiningGame ( );
	void CancelJoin ( );
	bool StartJoinPrivateMatch (struct FString& BeaconAddress, struct FJoinMatchSettings& JoinSettings, struct FCustomMatchSettings* InSettings );
	bool StartJoin (struct FString& BeaconAddress, struct FJoinMatchSettings& JoinSettings );
	void OnInit ( );
	void EventMaxPlayersChanged (class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers );
	void EventJoiningGame (class UOnlineGameJoinGame_X* OnlineGameJoinGame );
	void EventPasswordRequired ( );
	void EventServerReserved ( );
	void EventServerBeaconAddressChanged ( );
	void EventCountdownEnded ( );
	void EventCountdownStarted ( );
	void EventStatusUpdate (struct FString& NewStatus );
	void EventJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
};

// Class ProjectX.OnlineGameInvite_X
// 0x00BC (0x0104 - 0x0048)
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                               		// 0x0048 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     UnableToFindFriendsGameString;                    		// 0x0078 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AlreadyInSameServerString;                        		// 0x0084 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendNotJoinable;                                		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteBeaconAddress;                          		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       ActionRequired;                                   		// 0x00A8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;              		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;              		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;            		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;       		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEINVITE_X ];

		return pClassPointer;
	};

	void HandleJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	void HandlePasswordRequired ( );
	void OnGameInviteComplete (unsigned long bSuccess, struct FString& FailReason );
	void JoinGameInviteGame (struct FJoinMatchSettings& Settings );
	void OnGameInviteAccepted (struct FString& ErrorString, struct FOnlineGameSearchResult* InviteResult );
	void OnInit ( );
	void EventPsyNetPartyInviteAccepted (struct FString& PartyID );
	void EventPasswordRequired ( );
	void EventConfirmationRequired (struct FName& ConfirmationReason );
	void EventGameInviteComplete (unsigned long bSuccess, struct FString& FailReason );
	void EventGameInviteAccepted ( );
};

// Class ProjectX.OnlineGameVoice_X
// 0x0010 (0x0058 - 0x0048)
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                   		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEVOICE_X ];

		return pClassPointer;
	};

	unsigned char GetControllerID (class APlayerReplicationInfo* PRI );
	int GetNumTalkers ( );
	bool IsRemotePlayerTalking (class APlayerReplicationInfo* PRI );
	void HandlePlayerTalkingStateChange (struct FUniqueNetId& PlayerID, unsigned long bTalking );
	void UnregisterTalker (class UOnlinePlayer_X* Player );
	void RegisterTalker (class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventPlayerTalking (class UOnlineGameVoice_X* SelfRef, struct FUniqueNetId& PlayerID, unsigned long bTalking );
};

// Class ProjectX.OnlineGamePopulation_X
// 0x002C (0x0074 - 0x0048)
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                            		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastUpdatePopulationTime;                         		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URPC_X*                                      GetPopulationRPC;                                 		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalPlayers;                                     		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FGetPopulationData >                Populations;                                      		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;          		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEPOPULATION_X ];

		return pClassPointer;
	};

	int __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC (struct FGetPopulationData& P );
	void HandleGotAllPopulationPlaylistsRPC (class URPC_GetPopulation_X* RPC, TArray< struct FGetPopulationData >* FilterLocal_A47B91D74DDFF4B7E767A5A869499E54, TArray< int >* MapLocal_A89AEA8347C2E3B5D32717A9800D6806, int* ReduceLocal_24D720BB49FF5FB180AAB69C4F1E6F43 );
	void GetPlaylistPopulations (struct FScriptDelegate& Callback );
	void EventGetPlaylistPopulations (class UOnlineGamePopulation_X* PopulationsObject );
};

// Class ProjectX.OnlineGameLanBrowser_X
// 0x00EC (0x0134 - 0x0048)
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                            		// 0x0048 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x0054 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x0060 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Filter;                                           		// 0x006C (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsHostQuery : 1;                                 		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              SearchTimeout;                                    		// 0x00DC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x00E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;               		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                    		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;              		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0128 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMELANBROWSER_X ];

		return pClassPointer;
	};

	void HandleGameStarted (class AGRI_X* GRI );
	void PerformSearch ( );
	void UpdateStatusMessage ( );
	void HandleSearchTimeout ( );
	void HandleStatusUpdate (struct FString& NewStatus );
	void HandleJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	void CreateLanGame (struct FCustomMatchSettings& MatchSettings, struct FServerResult* HostResponse );
	void HandleHostResponse (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void OnSearchComplete (unsigned long bCancelled );
	void OnSearchError (struct FString& Message );
	bool IsSearching ( );
	void Cancel ( );
	bool StartSearch (struct FCustomMatchSettings& InFilter, unsigned long bHostQuery );
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* ClearStatusDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* ClearErrorDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* SetCompleteDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* SetStatusDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameLanBrowser_X* SetErrorDelegate (struct FScriptDelegate& Callback );
	void OnInit ( );
	void EventSearchError (struct FString& NewStatus );
	void EventSearchComplete (unsigned long bCancelled );
	void EventSearchStateChanged (struct FName& SearchState );
	void EventSearchStatus (struct FString& NewStatus );
	void EventSearchNewResponse ( struct FServerResult* Result );
};

// Class ProjectX.OnlineGameServerBrowser_X
// 0x00D0 (0x0118 - 0x0048)
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Filter;                                           		// 0x0054 (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00C0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoResultsFound;                                   		// 0x00CC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotLoggedInToPsynet;                              		// 0x00D8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x00E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBrowserError__Delegate;                    		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMESERVERBROWSER_X ];

		return pClassPointer;
	};

	void HandleGameStarted (class AGRI_X* GRI );
	void PerformSearch ( );
	void HandleSearchTimeout ( );
	void HandleGameServerList (class URPC_CustomGameServerGet_X* RPC );
	struct FString GetFriendlyRegionString ( );
	struct FString GetRegionsString ( );
	void OnSearchComplete ( TArray< struct FServerResult >* Results );
	void OnSearchError (struct FString& Message );
	bool IsSearching ( );
	void Cancel ( );
	bool StartSearch (struct FCustomMatchSettings& InFilter, struct FString& InPreferredRegion );
	class UOnlineGameServerBrowser_X* SetCompleteDelegate (struct FScriptDelegate& Callback );
	class UOnlineGameServerBrowser_X* SetErrorDelegate (struct FScriptDelegate& Callback );
	void EventBrowserError (class UOnlineGameServerBrowser_X* Browser, class UError* Error );
	void EventSearchError (struct FString& NewStatus );
	void EventSearchComplete ( TArray< struct FServerResult >* Results );
};

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0054 (0x009C - 0x0048)
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                 		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAsyncTask*                                  StartMatchmakingTask;                             		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     PingingRegionsString;                             		// 0x0050 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                  		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameError__Delegate;                   		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;            		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEMATCHMAKINGBASE_X ];

		return pClassPointer;
	};

	void WaitForRegionsPinged ( );
	void StopListeningRegionsPinged ( );
	void HandleRegionsPinged (class UOnlineGameRegions_X* InRegions );
	void HandleGameStarted (class AGRI_X* GRI );
	void HandleStatusUpdate (struct FString& NewStatus );
	void HandleJoinGameComplete (unsigned long bSuccess, struct FString& FailReason );
	class UCheckReservation_X* CreateCheckReservation ( );
	void GotoMatchmakingState (struct FName& StateName );
	void ClearStartMatchmakingRPC ( );
	void ClearCheckReservation ( );
	void OnSearchComplete (unsigned long bCanceled );
	void Cancel ( );
	bool IsSearching ( );
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate (struct FScriptDelegate& NewDelegate );
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate (struct FScriptDelegate& HandleFindGameComplete );
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate (struct FScriptDelegate& HandleFindGameError );
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate (struct FScriptDelegate& HandleFindGameStatusChanged );
	void EventFindGameStateChanged (struct FName& NewState );
	void EventFindGameError (struct FString& NewStatus );
	void EventFindGameStatus (struct FString& NewStatus );
	void EventFindGameComplete (unsigned long bCancelled );
};

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x00D4 (0x0170 - 0x009C)
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x00A8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00B4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x00C0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AlreadyJoiningGameString;                         		// 0x00CC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimeoutString;                                    		// 0x00D8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WrongRegionString;                                		// 0x00E4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Settings;                                         		// 0x00F0 (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x015C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;               		// 0x0160 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0164 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEPRIVATEMATCH_X ];

		return pClassPointer;
	};

	void UpdateStatusMessage ( );
	void HandleError (class UError* Error );
	void OnStartMatchmakingSucceededRPC (class URPC_PlayerSearchPrivateMatch_X* RPC );
	void HandleStartSearch (class UAsyncTask* Task );
	void OnReceiveGameServer (struct FCheckReservationData& Reservation );
	void HandleSearchTimeout ( );
	struct FString GetFriendlyRegionString ( );
	void OnPrivateMatchError (struct FString& Message );
	bool StartSearch (struct FString& InPreferredRegion, struct FCustomMatchSettings& InSettings );
	void EventPrivateMatchError (class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error );
};

// Class ProjectX.OnlineGameMatchmaking_X
// 0x00B0 (0x014C - 0x009C)
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray< int >                                      PreferredPlaylists;                               		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           PreferredRegions;                                 		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x00B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x00CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PlaylistsHaveChangedString;                       		// 0x00D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RegionsHaveChangedString;                         		// 0x00E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchmakingAttemptString;                         		// 0x00F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              MatchmakingStartTime;                             		// 0x00FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MatchmakingBanTime;                               		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIgnoreSkill : 1;                                 		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              MatchmakingDisabledDuration;                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatchmakingDisabledUntilTime;                     		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     LastReservationID;                                		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStartSearch__Delegate;                     		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0120 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0130 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0140 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEMATCHMAKING_X ];

		return pClassPointer;
	};

	bool AddRecommendedServers (float PingThreshold, float PingIncrement, float MaxPing );
	void RecordStart ( );
	void StartMatchmaking ( );
	void UpdateMatchmaking ( );
	void SendMatchmakingState ( );
	void HandleError (class UError* Error );
	void HandleMatchmakingStartSuccessRPC (class URPC_StartMatchmaking_X* RPC );
	void HandleStartSearch (class UAsyncTask* Task );
	void OnReceiveGameServer (struct FCheckReservationData& Reservation );
	void SetupForTimeConstraints ( );
	void OnPlaylistTimeEnded ( );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	bool IsMatchmakingDisabled ( );
	class UMatchmakingMetrics_X* GetMetrics ( );
	void SetSkillIgnored (unsigned long bIgnore );
	void ToggleSkill ( );
	void ClearMatchmakingBanTime ( );
	void SetMatchmakingBanTime (int Duration );
	void HandlePartyLeaderChanged (class UOnlineGameParty_X* PartyObject );
	void HandlePartySizeChanged (class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize );
	void HandlePartyDestroyed (class UOnlineGameParty_X* PartyObject );
	void OnFindGameWarning (struct FString& FailReason );
	unsigned long long GetGameServerID ( );
	int SortPlaylists (int A, int B );
	struct FString GetPartyMembersString ( );
	struct FString GetLocalizedRegionsString ( );
	struct FString GetRegionsString ( );
	struct FString GetLocalizedPlaylistsString ( );
	struct FString GetPlaylistsString ( );
	void OnExit ( );
	bool StartSearch (TArray< int > InPreferredPlaylists, TArray< struct FString > InPreferredRegions, TArray< int >* SortLocal_0CC4C9524D135359CDCCD39BA9A45092 );
	void OnInit ( );
	void EventMatchmakingCanceledOnPartySizeChanged (class UOnlineGameMatchmaking_X* InMatchMaking );
	void EventMatchmakingError (class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error );
	void EventStartSearch (class UOnlineGameMatchmakingBase_X* InMatchMaking );
};

// Class ProjectX.OnlineGameBlog_X
// 0x002C (0x0074 - 0x0048)
class UOnlineGameBlog_X : public UOnline_X
{
public:
	class UOnlineResource_X*                           TextSync;                                         		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UBlogTiles_X*                                BlogTiles;                                        		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FMotDMessage >                      MotDAdditionalMessages;                           		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUrlConfig_X*                                UrlConfig;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	class UWebConfig_X*                                WebConfig;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventBlogUpdated__Delegate;                     		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEBLOG_X ];

		return pClassPointer;
	};

	struct FString __OnlineGameBlog_X__GetMotD (struct FMotDMessage& M );
	void AddUniqueMotDMessage (struct FString& NewMessage, struct FName& NewMessageTag );
	void AddAdditionalMotDMessage (struct FString& NewMessage, struct FName& NewMessageTag, struct FMotDMessage* StructInitializer_2F5F687248B0231E16AEEE9E8BBFA048 );
	void RemoveAdditionalMessagesByTag (struct FName& MessageTag, TArray< struct FMotDMessage >* FilterLocal_7E4813C340AFAEA9D263B3BFF6666FF3 );
	struct FString GetMotD ( TArray< struct FString >* MapLocal_2BE08E66448E86EDDF2AC899C68A164E );
	void HandleTextSynced (class UOnlineResource_X* _ );
	void HandleDataChanged (class UOnlineResource_X* _ );
	void Sync (struct FScriptDelegate& Callback );
	void HandleUrlChanged ( );
	void HandleWebConfigChanged ( );
	void eventConstruct ( );
	void EventBlogUpdated (class UOnlineGameBlog_X* Blog );
};

// Class ProjectX.OnlineGameTrial_X
// 0x0024 (0x006C - 0x0048)
class UOnlineGameTrial_X : public UOnline_X
{
public:
	unsigned long                                      bForceTrial : 1;                                  		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTrialEnabled : 1;                                		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPsyNetTrialDataSet : 1;                          		// 0x0048 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                MinutesRemaining;                                 		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long long                                 LastPlayedTime;                                   		// 0x0050 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                SecondsPlayed;                                    		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventUpdated__Delegate;                         		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMETRIAL_X ];

		return pClassPointer;
	};

	void OnChanged ( );
	void HandleMapChanged ( );
	void OverrideTrialMode (unsigned long bTrial );
	void SetUpdateTimer ( );
	void SetTime (int InMinutesRemaining, unsigned long long InLastPlayTime );
	void CommitTimePlayed ( );
	void AccummulateTimePlayed (int InSecondsPlayed );
	float GetSecondsSinceLastPlayTime ( );
	void HandleGetTrialDataRPC (class URPC_GetTrialData_X* RPC );
	void SyncTrialData ( );
	void HandlePsyNetLogin ( );
	void UpdateTrialStatus ( );
	bool IsTrialExpired ( );
	bool IsFullVersion ( );
	bool IsTrialVersion ( );
	void OnInit ( );
	void EventUpdated (class UOnlineGameTrial_X* Trial );
};

// Class ProjectX.LanBrowser_X
// 0x0000 (0x003C - 0x003C)
class ULanBrowser_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANBROWSER_X ];

		return pClassPointer;
	};

	class UAsyncTask* JoinServer (struct FString& ServerID, struct FString& Options );
	class UTAsyncResult__array_LanServerRecord_X* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData (struct FString& MetaData );
	class UAsyncTask* CreateServer (struct FString& MetaData );
	void HandleGameInfoSpawned (class AGameInfo_X* G );
	void eventConstruct ( );
};

// Class ProjectX.UdpLanBrowser_X
// 0x001C (0x0058 - 0x003C)
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                    		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< class ULanServerRecord_X* >                SearchResults;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUdpLanServer_X*                             LocalServer;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_UDPLANBROWSER_X ];

		return pClassPointer;
	};

	class UAsyncTask* JoinServer (struct FString& ServerID, struct FString& Options );
	void HandleSearchTimeout ( );
	void HandleHostResponse (class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response );
	void SearchTaskDisposed ( );
	class UTAsyncResult__array_LanServerRecord_X* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData (struct FString& MetaData );
	class UAsyncTask* CreateServer (struct FString& MetaData );
};

// Class ProjectX.SystemMetrics_X
// 0x0000 (0x0054 - 0x0054)
class USystemMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SYSTEMMETRICS_X ];

		return pClassPointer;
	};

	void Specs (struct FOSMetrics& OS, struct FCpuMetrics& CPU, struct FMemoryMetrics& Memory, struct FVideoCardMetrics& Video, struct FNetworkAdapterMetrics& Network );
	void RecordSpecs ( );
};

// Class ProjectX.__OnlineGame_X__CheckPsyNetConnection
// 0x0004 (0x0040 - 0x003C)
class U__OnlineGame_X__CheckPsyNetConnection : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAME_X__CHECKPSYNETCONNECTION ];

		return pClassPointer;
	};

	void __OnlineGame_X__CheckPsyNetConnection (class UOnlinePlayerAuthentication_X* Auth );
};

// Class ProjectX.RPC_GetPublicIP_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                               		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPUBLICIP_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlineGameVersion_X
// 0x0004 (0x004C - 0x0048)
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                              		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEVERSION_X ];

		return pClassPointer;
	};

	void __OnlineGameVersion_X__OnInit (class UOnlineGameServerBrowser_X* _, class UError* Error );
	void HandleError (class UError* Error );
	void OnInit ( );
};

// Class ProjectX.UrlConfig_X
// 0x0048 (0x0084 - 0x003C)
class UUrlConfig_X : public UObject
{
public:
	struct FString                                     CDN;                                              		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BlogURL;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ESportsURL;                                       		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChinaPaymentURL;                                  		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CrossPlatformSupportURL;                          		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LegalTextWebFolder;                               		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_URLCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                NumLocalPlayers;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATEPLAYERPLAYLIST_X ];

		return pClassPointer;
	};

	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers (int InNumLocalPlayers );
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag
// 0x0008 (0x0044 - 0x003C)
class U__OnlineGameBlog_X__RemoveAdditionalMessagesByTag : public UObject
{
public:
	struct FName                                       MessageTag;                                       		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEBLOG_X__REMOVEADDITIONALMESSAGESBYTAG ];

		return pClassPointer;
	};

	bool __OnlineGameBlog_X__RemoveAdditionalMessagesByTag (struct FMotDMessage& M );
};

// Class ProjectX.BlogTiles_X
// 0x0034 (0x0070 - 0x003C)
class UBlogTiles_X : public UObject
{
public:
	TArray< class UBlogTile_X* >                       CarouselTiles;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBlogTile_X* >                       RLCSTiles;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBlogTile_X* >                       CommunityTiles;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MotD;                                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumOfCarouselTiles;                               		// 0x006C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_BLOGTILES_X ];

		return pClassPointer;
	};

	void __BlogTiles_X__UTCtoEpochArray (class UBlogTile_X* BlogTile );
	void UTCtoEpochArray ( TArray< class UBlogTile_X* >* BlogTiles );
	void UTCtoEpoch ( );
};

// Class ProjectX.OnlineResource_X
// 0x004C (0x0094 - 0x0048)
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                              		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    RetryDelays;                                      		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CacheSeconds;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bZipResponse : 1;                                 		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSyncing : 1;                                     		// 0x0064 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UCachedWebData_X*                            CachedData;                                       		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RetryCount;                                       		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastSyncTime;                                     		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                    		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDataChanged__Delegate;                     		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINERESOURCE_X ];

		return pClassPointer;
	};

	void SetCachedData (class UCachedWebData_X* NewData );
	bool IsValidNewData (class UCachedWebData_X* Data );
	void ClearRetryTimer ( );
	void SetRetryTimer (float Delay );
	void HandleSync (class UCachedWebData_X* Data );
	void RetrySync ( );
	void SyncData (struct FScriptDelegate& Callback );
	void EventDataChanged (class UOnlineResource_X* DataSync );
	void EventSyncComplete (class UOnlineResource_X* DataSync );
};

// Class ProjectX.WebConfig_X
// 0x000C (0x0058 - 0x004C)
class UWebConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCacheWebImages : 1;                              		// 0x004C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bZipPsyNetStaticData : 1;                         		// 0x004C (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bZipBlog : 1;                                     		// 0x004C (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	float                                              PsyNetStaticDataCacheMinutes;                     		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              BlogCacheMinutes;                                 		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x0018 (0x0060 - 0x0048)
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             MyConfig;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCacheTimer_X*                               HeartbeatTimer;                                   		// 0x004C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                GameTimeTimer;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GameTimeSeconds;                                  		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URPC_UpdateGameServer_X*                     UpdateGameServerRPC;                              		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PsyNetDisconnectShutdownTime;                     		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMEDEDICATEDSERVERREGISTRATION_X ];

		return pClassPointer;
	};

	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces (class UCacheTimer_X* Timer );
	void HandleCrashed ( );
	class UServerMetrics_X* GetServerMetrics ( );
	struct FString GetExclusivePlatformString (unsigned char Platform );
	void UpdateGameTime (int TimeSeconds );
	bool ShouldShutdownWhenEmpty ( );
	void TimerShutdownWhenEmpty ( );
	void HandleUpdateServerFailed (class URPC_UpdateGameServer_X* RPC );
	void HandleUpdateServerSucces (class URPC_UpdateGameServer_X* RPC );
	void HandleCreateServerFailed (class URPC_CreateGameServer_X* RPC );
	void HandleCreateServerSucces (class URPC_CreateGameServer_X* RPC, struct FCustomMatchSettings* StructInitializer_F559A6614AF90F2523FE75B493913268 );
	void SetServerNotJoinable ( );
	void SendUpdateServerRPC ( );
	struct FString GetServerType ( );
	void SendCreateServerRPC ( );
	void SendUpdateRequest ( );
	void UpdateServer ( );
	void HandleConfigUpdate ( );
	void UnregisterServer ( );
	void RegisterServer ( );
	void OnInit ( );
};

// Class ProjectX.ServerPlayerTracker_X
// 0x003C (0x0084 - 0x0048)
class UServerPlayerTracker_X : public UComponent
{
public:
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UAddReservationMessage_X* >          Messages;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameReservations_X*                   Reservations;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPlayerAdded__Delegate;                     		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerRemoved__Delegate;                   		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SERVERPLAYERTRACKER_X ];

		return pClassPointer;
	};

	TArray< struct FUniqueNetId > __ServerPlayerTracker_X__Refresh (class UAddReservationMessage_X* Message );
	struct FString GetPlayerName (struct FUniqueNetId& PlayerID );
	void Reset ( );
	void Refresh ( TArray< struct FReservationData >* FilterLocal_182A73DA4DD05B48E2C8E3A66831607F, TArray< struct FUniqueNetId >* MapLocal_B667741B415F27360402B9BFF26515C3, TArray< struct FUniqueNetId >* MapManyLocal_B0D58E8D40D3CA3589A08CB7E80A1362, TArray< struct FUniqueNetId >* UnionLocal_919CAEA743244031A9A123A9846DDDDA, TArray< struct FUniqueNetId >* DifferenceLocal_FC70818F4EC1A130B0E096BFC3E90B27, TArray< struct FUniqueNetId >* DifferenceLocal_BE01855B46A31093063B368BD4607D94 );
	void RemoveReservationMessage (class UAddReservationMessage_X* Message );
	void AddReservationMessage (class UAddReservationMessage_X* Message );
	void RemovePlayer (struct FUniqueNetId& PlayerID );
	void AddPlayer (struct FUniqueNetId& PlayerID );
	void EventPlayerRemoved (class UServerPlayerTracker_X* Tracker, struct FUniqueNetId& PlayerID );
	void EventPlayerAdded (class UServerPlayerTracker_X* Tracker, struct FUniqueNetId& PlayerID );
};

// Class ProjectX.OnlinePlayerPermissions_X
// 0x002C (0x0068 - 0x003C)
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FUniqueNetId >                      PendingPlayerRequests;                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerPermissionsList >            PlayerPermissions;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventUpdated__Delegate;                         		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERPERMISSIONS_X ];

		return pClassPointer;
	};

	bool HasPermission (struct FUniqueNetId& PlayerID, unsigned char Permission );
	void HandlePlayerPermissions (class URPC_GetPlayerPermissions_X* RPC );
	void SendRequest ( );
	void SyncPermissions (struct FUniqueNetId& PlayerID );
	void EventUpdated (class UOnlinePlayerPermissions_X* Permissions );
};

// Class ProjectX.MatchRecorder_X
// 0x000C (0x0048 - 0x003C)
class UMatchRecorder_X : public UObject
{
public:
	class UClass*                                      MatchDataClass;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PlayerDataClass;                                  		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMatchData_X*                                Match;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHRECORDER_X ];

		return pClassPointer;
	};

	void Finished ( );
	void UpdateServer (class UOnlineGameDedicatedServer_X* Server );
	class UMatchPlayerData_X* CreatePlayer (struct FUniqueNetId& PlayerID, struct FString& PlayerName );
	class UMatchPlayerData_X* GetPlayerData (struct FUniqueNetId& PlayerID );
	void RemovePlayer (struct FUniqueNetId& PlayerID );
	void ReservePlayer (struct FUniqueNetId& PlayerID, struct FUniqueNetId& PartyID );
	void AddPlayer (struct FUniqueNetId& PlayerID, struct FString& PlayerName );
	struct FString MatchGUID ( );
	void eventConstruct ( );
};

// Class ProjectX.MatchData_X
// 0x00A8 (0x00E4 - 0x003C)
class UMatchData_X : public UObject
{
public:
	struct FString                                     MatchGUID;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 RecordStartTimestamp;                             		// 0x0048 (0x0008) [0x0000000000000000]              
	unsigned long long                                 RecordEndTimestamp;                               		// 0x0050 (0x0008) [0x0000000000000000]              
	unsigned long long                                 MatchStartTimestamp;                              		// 0x0058 (0x0008) [0x0000000000000000]              
	unsigned long long                                 MatchEndTimestamp;                                		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       MapName;                                          		// 0x0068 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Playlist;                                         		// 0x0070 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ClubID;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClubVsClub : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverTime : 1;                                    		// 0x0078 (0x0004) [0x0000000040000000] [0x00000002] ( CPF_EditInlineNotify )
	unsigned long                                      bNoContest : 1;                                   		// 0x0078 (0x0004) [0x0000000040000000] [0x00000004] ( CPF_EditInlineNotify )
	unsigned long                                      bForfeit : 1;                                     		// 0x0078 (0x0004) [0x0000000040000000] [0x00000008] ( CPF_EditInlineNotify )
	struct FUniqueNetId                                CustomMatchCreatorPlayerID;                       		// 0x007C (0x0030) [0x0000000000000000]              
	struct FString                                     CustomServerName;                                 		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomServerPassword;                             		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SecondsPlayed;                                    		// 0x00C4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              OvertimeSecondsPlayed;                            		// 0x00C8 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                WinningTeam;                                      		// 0x00CC (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Team0Score;                                       		// 0x00D0 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Team1Score;                                       		// 0x00D4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	TArray< class UMatchPlayerData_X* >                Players;                                          		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHDATA_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0028 (0x00D0 - 0x00A8)
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerID;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bFoundReplacement : 1;                            		// 0x00B0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FCheckReplacementDedicatedServerData        Server;                                           		// 0x00B4 (0x001C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CHECKREPLACEMENTDEDICATEDSERVER_X ];

		return pClassPointer;
	};

	struct FString GetServerAddress ( );
	class URPC_CheckReplacementDedicatedServer_X* SetServerID (unsigned long long InServerID );
};

// Class ProjectX.RPC_AddQuitter_X
// 0x003C (0x00E4 - 0x00A8)
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FString                                     Reason;                                           		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_ADDQUITTER_X ];

		return pClassPointer;
	};

	class URPC_AddQuitter_X* SetReason (struct FString& InReason );
	class URPC_AddQuitter_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_RemoveQuitter_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REMOVEQUITTER_X ];

		return pClassPointer;
	};

	class URPC_RemoveQuitter_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.__OnlineGameDedicatedServer_X__InitLogUpload
// 0x0008 (0x0044 - 0x003C)
class U__OnlineGameDedicatedServer_X__InitLogUpload : public UObject
{
public:
	class URPC_RecordMatch_X*                          RPC;                                              		// 0x003C (0x0004) [0x0000000000000000]              
	class UMatchLog_X*                                 Log;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEDEDICATEDSERVER_X__INITLOGUPLOAD ];

		return pClassPointer;
	};

	void __OnlineGameDedicatedServer_X__InitLogUpload (class URPC_X* _ );
};

// Class ProjectX.RPC_RecordMatch_X
// 0x0038 (0x00E0 - 0x00A8)
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UObject*                                     Match;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSaveReplay : 1;                                  		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSaveLog : 1;                                     		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     ReplayContentType;                                		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LogContentType;                                   		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UploadReplayUrl;                                  		// 0x00C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     UploadLogUrl;                                     		// 0x00D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_RECORDMATCH_X ];

		return pClassPointer;
	};

	class URPC_RecordMatch_X* SetSaveLog (struct FString& ContentType );
	class URPC_RecordMatch_X* SetSaveReplay (struct FString& ContentType );
	class URPC_RecordMatch_X* SetMatch (class UObject* InMatch );
};

// Class ProjectX.MatchLog_X
// 0x0008 (0x0044 - 0x003C)
class UMatchLog_X : public UObject
{
public:
	int                                                LogFileStartSize;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                LogFileEndSize;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHLOG_X ];

		return pClassPointer;
	};

	void Upload (struct FString& URL, int MaxSize );
	int Size ( );
	struct FString GetLogFileName ( );
	int GetLogFileSize ( );
	void End ( );
	void Start ( );
};

// Class ProjectX.ClanforgeReservation_X
// 0x0048 (0x0084 - 0x003C)
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[ 0x3 ];                               		// 0x003C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReserveState;                                     		// 0x0060 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    RetryDelays;                                      		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SendFailures;                                     		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UWebRequest_X* >                     QueuedRequests;                                   		// 0x0074 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UWebRequest_X*                               PendingRequest;                                   		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLANFORGERESERVATION_X ];

		return pClassPointer;
	};

	void HandleRetry ( );
	void Retry ( );
	void HandleSendComplete (class UWebRequest_X* Request );
	void ProcessNextRequest ( );
	void Send (struct FString& URL );
	void SetReserveState (unsigned char NewState );
	void HandleActivate (class UOnlineGameDedicatedServer_X* Server );
	void HandleInactive (class UOnlineGameDedicatedServer_X* Server );
	void Init (class UOnlineGameDedicatedServer_X* Server, struct FString& ReserveURL, struct FString& UnreserveURL );
};

// Class ProjectX.ServerMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UServerMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SERVERMETRICS_X ];

		return pClassPointer;
	};

	void Crashed ( );
	void ShutDown ( );
	void Created (unsigned long long ServerID, struct FString& Host );
};

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerID;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_DEACTIVATEGAMESERVER_X ];

		return pClassPointer;
	};

	class URPC_DeactivateGameServer_X* SetServerID (unsigned long long InServerID );
};

// Class ProjectX.CacheTimer_X
// 0x001C (0x0064 - 0x0048)
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CacheExpireTime;                                  		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnabled : 1;                                     		// 0x0050 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventExpired__Delegate;                         		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CACHETIMER_X ];

		return pClassPointer;
	};

	float GetRandomCacheTimeoutTime ( );
	void OnExpired ( );
	void OnDisabled ( );
	void OnEnabled ( );
	void SetEnabled (unsigned long bEnableExpiration );
	void Reset ( );
	bool IsExpired ( );
	void EventExpired (class UCacheTimer_X* Timer );
};

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned long long                                 ServerID;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETSERVERNOTJOINABLE_X ];

		return pClassPointer;
	};

	class URPC_SetServerNotJoinable_X* SetServerID (unsigned long long InServerID );
};

// Class ProjectX.RPC_UpdateGameServer_X
// 0x0068 (0x0110 - 0x00A8)
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerID;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
	int                                                Playlist;                                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                NumPlayersTeam1;                                  		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                NumPlayersTeam2;                                  		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                ReservationsTeam1;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                ReservationsTeam2;                                		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPostGame : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TimeRemaining;                                    		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FString                                     ExclusivePlatform;                                		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PlayersPlatforms;                                 		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomServerName;                                 		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomServerPassword;                             		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClubID;                                           		// 0x010C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATEGAMESERVER_X ];

		return pClassPointer;
	};

	class URPC_UpdateGameServer_X* SetClubID (unsigned long long InClubID );
	class URPC_UpdateGameServer_X* SetCustomServerPassword (struct FString& InCustomServerPassword );
	class URPC_UpdateGameServer_X* SetCustomServerName (struct FString& InCustomServerName );
	class URPC_UpdateGameServer_X* SetPlayersPlatforms (TArray< struct FString > InPlayersPlatforms );
	class URPC_UpdateGameServer_X* SetExclusivePlatform (struct FString& InExclusivePlatform );
	class URPC_UpdateGameServer_X* SetTimeRemaining (int InTimeRemaining );
	class URPC_UpdateGameServer_X* SetIsPostGame (unsigned long bInIsPostGame );
	class URPC_UpdateGameServer_X* SetPlayerIDs (TArray< struct FUniqueNetId > InPlayerIDs );
	class URPC_UpdateGameServer_X* SetReservationsTeam2 (int InReservationsTeam2 );
	class URPC_UpdateGameServer_X* SetReservationsTeam1 (int InReservationsTeam1 );
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2 (int InNumPlayersTeam2 );
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1 (int InNumPlayersTeam1 );
	class URPC_UpdateGameServer_X* SetMaxPlayers (int InMaxPlayers );
	class URPC_UpdateGameServer_X* SetPlaylist (int InPlaylist );
	class URPC_UpdateGameServer_X* SetServerID (unsigned long long InServerID );
};

// Class ProjectX.RPC_CreateGameServer_X
// 0x0050 (0x00F8 - 0x00A8)
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MachineId;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FString                                     IP;                                               		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Region;                                           		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuildID;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerType;                                       		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 ServerID;                                         		// 0x00E0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Host;                                             		// 0x00E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Zone;                                             		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CREATEGAMESERVER_X ];

		return pClassPointer;
	};

	class URPC_CreateGameServer_X* SetBuildID (int InBuildID );
	class URPC_CreateGameServer_X* SetRegion (struct FString& InRegion );
	class URPC_CreateGameServer_X* SetIP (struct FString& InIP );
	class URPC_CreateGameServer_X* SetMachineID (int InMachineID );
	class URPC_CreateGameServer_X* SetServerType (struct FString& InServerType );
	class URPC_CreateGameServer_X* SetServerName (struct FString& InServerName );
};

// Class ProjectX.PartyErrors_X
// 0x0080 (0x00D4 - 0x0054)
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CreatePartyFailedTeamFull;                        		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CreatePlayerFailedPartyFull;                      		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;               		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyFull;                         		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                  		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyInGame;                       		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  KickedFromParty;                                  		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyDestroyedConnectionError;                    		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyDestroyedSignedOut;                          		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailed;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedNotAllowed;                        		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedNotJoinable;                       		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyBuildID;                                     		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyNotFound;                                    		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserNotOwner;                                     		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyIsFull;                                      		// 0x0094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotAddToParty;                                 		// 0x0098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserListInvalid;                                  		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidOwner;                                     		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ChatDisabled;                                     		// 0x00A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MissingOrExpiredInvite;                           		// 0x00A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MemberNotFound;                                   		// 0x00AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyIdConflict;                                  		// 0x00B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotKickSelf;                                   		// 0x00B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  RegionRestrictedTrade;                            		// 0x00B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotCrossPlatformTrade;                         		// 0x00BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotCrossPlayInvite;                            		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  RestrictedPlatformInvite;                         		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlatformNotSupported;                             		// 0x00C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  KickedCrossplayDisabled;                          		// 0x00CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UsePlatformPartySystem;                           		// 0x00D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYERRORS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSFULLMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSTEAMFULLMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSWAITINGMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsReadyMessage_X
// 0x0028 (0x0064 - 0x003C)
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ProductIDs;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NetworkNextRouteData;                             		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSREADYMESSAGE_X ];

		return pClassPointer;
	};

	class UReservationsReadyMessage_X* SetProductIDs (TArray< int > InProductIDs );
	class UReservationsReadyMessage_X* SetServerAddress (struct FString& InAddress );
};

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSTIMEDOUTMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSPRIVATEMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (0x003D - 0x003C)
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	unsigned char                                      Reason;                                           		// 0x003C (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSPASSWORDMESSAGE_X ];

		return pClassPointer;
	};

	class UReservationsPasswordMessage_X* SetReason (unsigned char InReason );
};

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSWRONGPLAYLISTMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsWrongRankedMatchMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWrongRankedMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSWRONGRANKEDMATCHMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSKEYSFAILEDMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONCROSSPLAYDISABLEDMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (0x0040 - 0x003C)
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                   		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSMAXPLAYERSMESSAGE_X ];

		return pClassPointer;
	};

	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount (int inMaxPlayerCount );
};

// Class ProjectX.PingMessage_X
// 0x0004 (0x0040 - 0x003C)
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PINGMESSAGE_X ];

		return pClassPointer;
	};

	class UPingMessage_X* SetIsResponse ( );
};

// Class ProjectX.RPC_KeysBase_X
// 0x0044 (0x00EC - 0x00A8)
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ServerPort;                                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FString                                     Key;                                              		// 0x00B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     IV;                                               		// 0x00C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     HMACKey;                                          		// 0x00D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SessionId;                                        		// 0x00DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bPrimaryPlayer : 1;                               		// 0x00E8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_KEYSBASE_X ];

		return pClassPointer;
	};

	class URPC_KeysBase_X* SetPrimaryPlayer ( );
	class URPC_KeysBase_X* SetServerAddress (struct FString& ServerAddress );
};

// Class ProjectX.RPC_GenerateKeys_X
// 0x0000 (0x00EC - 0x00EC)
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GENERATEKEYS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.CancelJoinMessage_X
// 0x0000 (0x003C - 0x003C)
class UCancelJoinMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CANCELJOINMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.MatchmakingMetrics_X
// 0x0004 (0x0058 - 0x0054)
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:
	float                                              StartTime;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHMAKINGMETRICS_X ];

		return pClassPointer;
	};

	void SendReservationRetryFail ( );
	void SendReservationRetrySuccess ( );
	void SendReservationRetry ( );
	void RankedReconnect (struct FString& Address );
	void End (float ElapsedTime );
	void RecordEnd ( );
	void FoundServer (struct FString& Address, struct FString& ServerName, int Playlist, struct FString& ReservationID, unsigned long bFromNotification, float ElapsedTime );
	void RecordFoundServer (unsigned long bFromNotification, struct FCheckReservationData* Reservation );
	void Cancel ( );
	void ErrorID (int Error );
	void ErrorUnknown (struct FString& Message );
	void RecordError (struct FString& Error );
	void Start (TArray< struct FString > Regions, TArray< int > Playlists, unsigned long bDisableCrossPlay );
};

// Class ProjectX.OnlineGameLanReservations_X
// 0x0020 (0x0068 - 0x0048)
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ReservationTimeout;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bServerTraveling : 1;                             		// 0x0054 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;             		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMELANRESERVATIONS_X ];

		return pClassPointer;
	};

	void HandleReservationDisconnected (class UTcpConnection* Connection );
	void HackForceNotServerTravelling ( );
	void SetServerTraveling (unsigned long bTraveling );
	void OnNewGameInfoCreated (class AGameInfo_X* Game );
	int GetNumPlayers ( );
	void AllowPlayerLogin (struct FString& Options, struct FUniqueNetId& PlayerID, struct FString* ErrorMessage );
	void PlayerLoggedOut (class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn (class APlayerReplicationInfo* PRI );
	void Reset ( );
	void CheckReservationTimeout ( );
	bool HandlePublicReservation (class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message );
	void HandlePublicReservationMessage (class UTcpConnection* Connection, class UObject* Message );
	void StartReservationTimeout ( );
	bool HandlePrivateReservation (class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message );
	void HandlePrivateReservationMessage (class UTcpConnection* Connection, class UObject* Message );
	void HandlePingMessage (class UTcpConnection* Connection, class UObject* Message );
	void HandleLanQueryMessage (class UOnlineMessageComponent_X* Component, class UObject* Message );
	void OnInit ( );
	void EventReservationsTimeout ( );
};

// Class ProjectX.BugMetrics_X
// 0x000C (0x0060 - 0x0054)
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray< struct FName >                             ReportedIDs;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_BUGMETRICS_X ];

		return pClassPointer;
	};

	void Report (struct FName& Id, struct FString& Details, struct FString& Trace );
	void BugReport (struct FName& Id, struct FString& Details );
	void StaticReport (struct FName& Id, struct FString& Details );
};

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0048 (0x00F0 - 0x00A8)
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FString                                     LeaderboardId;                                    		// 0x00D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bHasSkill : 1;                                    		// 0x00E4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bHasValue : 1;                                    		// 0x00E4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                Value;                                            		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MMR;                                              		// 0x00EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARDVALUEFORUSERBASE_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0004 (0x00F4 - 0x00F0)
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	int                                                Playlist;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETSKILLLEADERBOARDVALUEFORUSER_X ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x000C (0x00FC - 0x00F0)
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARDVALUEFORUSER_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardValueForUser_X* SetStat (struct FString& InStat );
};

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x001C (0x00C4 - 0x00A8)
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     LeaderboardId;                                    		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGetLeaderboardPlatformBaseData >   Platforms;                                        		// 0x00B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARDBASE_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay (unsigned long InDisableCrossplay );
};

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (0x00C8 - 0x00C4)
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETSKILLLEADERBOARD_X ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboard_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.RPC_GetLeaderboard_X
// 0x000C (0x00D0 - 0x00C4)
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARD_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboard_X* SetStat (struct FString& InStat );
};

// Class ProjectX.OnlinePlayerFriends_X
// 0x00FC (0x0144 - 0x0048)
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	unsigned long                                      bAllowSamePlatformPsyNetFriends : 1;              		// 0x0048 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bRepeatFriendsListDownloadsUntilSuccess : 1;      		// 0x0048 (0x0004) [0x0000000000004002] [0x00000002] ( CPF_Const | CPF_Config )
	class UOnlineFriendMap_X*                          CachedFriends;                                    		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineFriendMap_X*                          PlatformFriends;                                  		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineFriendMap_X*                          PsyNetFriends;                                    		// 0x0054 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URetryDelayer_X*                             PlatformFriendsDownloadDelayer;                   		// 0x0058 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URetryDelayer_X*                             PsyNetFriendsDownloadDelayer;                     		// 0x005C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOSSConfig_X*                                OSSConfig;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;              		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPlayerSearch__Delegate;              		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPendingFriendRequests__Delegate;     		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedPlayers__Delegate;            		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAcceptFriendRequest__Delegate;             		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventChatMessage__Delegate;                     		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedFriendRequest__Delegate;           		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetStatusUpdate__Delegate;              		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x00D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPsyTagUpdate__Delegate;              		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlatformStatusUpdate__Delegate;            		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventIncomingFriendRequest__Delegate;           		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerUnfriended__Delegate;                		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlatformFriendsListDownloadCompleted__Delegate;		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0128 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetFriendsListDownloadCompleted__Delegate;		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0138 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERFRIENDS_X ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__OnInit (class UPsyNetService_IncomingFriendRequest_X* N );
	void RebuildFriendsCache ( );
	void RemovePsyNetFriendLocally (struct FUniqueNetId& RemovedID );
	void HandlePsyNetPlayerUnfriended (class UPsyNetService_PlayerUnfriended_X* Service );
	void HandlePsyNetAcceptRequest (class URPC_PsyNetFriendRequestAccept_X* RPC );
	void HandlePsyNetFriendAcceptedRequest (class UPsyNetService_FriendAcceptedRequest_X* Service );
	void SendChatMessage (struct FString& InMessage, struct FUniqueNetId& Recipient );
	void ShowPlayerCard (struct FUniqueNetId& FriendId, struct FString& FriendName );
	void SetPlatformRichPresence (unsigned char LocalUserNum, struct FString& PresenceString, struct FString& GameDataString );
	void HandleRemovePsyNetFriendSuccess (class URPC_PsyNetRemoveFriend_X* RPC );
	void RemovePsyNetFriend (struct FUniqueNetId& FriendId );
	void DeclinePsyNetFriendRequest (struct FUniqueNetId& FriendId );
	class UAsyncTask* AcceptPsyNetFriendRequest (struct FUniqueNetId& FriendId, struct FScriptDelegate& Callback );
	class UAsyncTask* AddPsyNetFriend (struct FUniqueNetId& FriendId );
	bool UsePlatformFriendSystem (struct FUniqueNetId& FriendId );
	void DownloadPendingFriendRequests (struct FScriptDelegate& Callback );
	class UAsyncTask* SearchForPlayerByName (struct FString& FriendName, struct FScriptDelegate& Callback );
	bool IsFriend (struct FUniqueNetId& FriendId );
	bool IsPsyNetFriend (struct FUniqueNetId& FriendId );
	void HandleFriendsChange ( );
	void ConditionalUpdateFriendInMap (class UOnlineFriendMap_X* FriendMap, struct FOnlineFriend& NewFriendData );
	void HandlePsyTagUpdated (class UPsyNetService_FriendPsyTagUpdated_X* Notification );
	void HandlePlatformPresenceChange (struct FUniqueNetId& FriendId );
	struct FOnlineStatus ExtractStatusData (struct FOnlineFriend& InFriend );
	void HandleReadPsyNetFriendsAbandoned ( );
	void HandleReadPsyNetFriendsFail (class URPC_PsyNetReadFriends_X* RPC );
	void HandleReadPsyNetFriendsSuccess (class URPC_PsyNetReadFriends_X* RPC );
	void DownloadPsyNetFriendsList ( );
	void BeginPsyNetFriendsDownloadAttempts ( );
	void UpdateFriendsFromOnlineSub ( );
	void OnPlatformFriendsDownloadAbandoned ( );
	void HandleDownloadPlatformFriendsTryComplete (unsigned long bSuccess );
	void DownloadPlatformFriendsList ( );
	void BeginDownloadPlatformFriendsListAttempts ( );
	void DownloadBlockedList (struct FScriptDelegate& Callback );
	void HandlePsyNetConnected (class UPsyNetConnection_X* C );
	unsigned char GetFriendState (struct FString& PresenceState );
	struct FOnlineFriend ConvertPsyNetResponseToOnlineFriend (struct FPsyNetPersonaData& InData, struct FOnlineFriend* StructInitializer_439F66674EB7C4D8A684998136B2D143 );
	void eventConstruct ( );
	void HandleOSSConfigChanged (class UOSSConfig_X* InOSSConfig );
	void OnInit ( );
	void EventPsyNetFriendsListDownloadCompleted (unsigned long bSuccess );
	void EventPlatformFriendsListDownloadCompleted (unsigned long bSuccess );
	void EventPlayerUnfriended (struct FUniqueNetId& SenderId );
	void EventIncomingFriendRequest (struct FOnlineFriend& FriendData );
	void EventPlatformStatusUpdate (struct FOnlineStatus& StatusData );
	void EventPsyNetPsyTagUpdate ( struct FOnlineFriend* FriendData );
	void EventPsyNetStatusUpdate (struct FOnlineStatus& StatusData );
	void EventAcceptedFriendRequest (struct FOnlineFriend& FriendData );
	void EventChatMessage (struct FString& InMessage, struct FUniqueNetId& SenderId, unsigned long bIsLocal );
	void EventAcceptFriendRequest (struct FOnlineFriend& FriendData, class UError* RequestError );
	void EventPsyNetBlockedPlayers ( TArray< struct FOnlineFriend >* PlayerData );
	void EventPsyNetPendingFriendRequests ( TArray< struct FOnlineFriend >* FriendData );
	void EventPsyNetPlayerSearch (struct FString& SearchString, TArray< struct FOnlineFriend >* FriendData );
	void EventFriendsListChanged (class UOnlinePlayerFriends_X* FriendsRef, class UError* Error );
};

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0024 (0x00CC - 0x00A8)
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaderboardId;                                    		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGetLeaderboardRankForUserData >    Players;                                          		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARDRANKFORUSERSBASE_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs (TArray< struct FUniqueNetId > InPlayerIDs );
};

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (0x00D0 - 0x00CC)
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                         		// 0x00CC (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETSKILLLEADERBOARDRANKFORUSERS_X ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x000C (0x00D8 - 0x00CC)
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETLEADERBOARDRANKFORUSERS_X ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardRankForUsers_X* SetStat (struct FString& InStat );
};

// Class ProjectX.CheckReservation_X
// 0x0048 (0x0084 - 0x003C)
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rate;                                             		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeartbeatDelay;                                   		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastMatchmakingHeartbeatTime;                     		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAsyncTask*                                  CheckReservationTask;                             		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             FoundReservationCallback;                         		// 0x0050 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UPsyNetConfig_X*                             Config;                                           		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnStartSearch__Delegate;                        		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                   		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CHECKRESERVATION_X ];

		return pClassPointer;
	};

	void HandleCheckReservation (class URPC_CheckReservation_X* RPC );
	void HandleReservationNotification (class UPsyNetService_Reservation_X* Service );
	void SendRequest ( );
	void HandlePreLoadMap (struct FString& _ );
	void Cancel ( );
	bool IsSearching ( );
	void StartSearch (struct FScriptDelegate& Callback );
	class UCheckReservation_X* NotifyOnStartSearch (struct FScriptDelegate& Callback );
	void OnFoundReservation (struct FCheckReservationData& Reservation );
	void OnStartSearch (class UAsyncTask* Task );
};

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PLAYERCANCELMATCHMAKING_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_StartMatchmaking_X
// 0x0044 (0x00EC - 0x00A8)
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray< struct FString >                           Regions;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Playlists;                                        		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SecondsSearching;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	unsigned long long                                 CurrentServerId;                                  		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PartyID;                                          		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PartyMembers;                                     		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BannedSecondsRemaining;                           		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_STARTMATCHMAKING_X ];

		return pClassPointer;
	};

	class URPC_StartMatchmaking_X* SetIgnoreSkill (unsigned long bInIgnoreSkill );
	class URPC_StartMatchmaking_X* SetPartyId (struct FString& InPartyId );
	class URPC_StartMatchmaking_X* SetPartyMembers (TArray< struct FUniqueNetId > InPartyMembers );
	class URPC_StartMatchmaking_X* SetDisableCrossPlay (unsigned long bInDisableCrossplay );
	class URPC_StartMatchmaking_X* SetCurrentServerID (unsigned long long InCurrentServerID );
	class URPC_StartMatchmaking_X* SetSecondsSearching (int InSecondsSearching );
	class URPC_StartMatchmaking_X* SetPlaylists (TArray< int > InPlaylists );
	class URPC_StartMatchmaking_X* SetRegions (TArray< struct FString > InRegions );
};

// Class ProjectX.Parties_X
// 0x01CC (0x0208 - 0x003C)
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                      		// 0x003C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueLobbyId                              LastActiveLobby;                                  		// 0x0060 (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x006C (0x0030) [0x0000000000000000]              
	class UPsyNet_X*                                   PsyNet;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UPartyMessageQueue_X*                        MessageQueue;                                     		// 0x00A4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UPsyNetChannel_X*                            PsyNetChannel;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x00B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPartyPlatformSession_X*                     PlatformSession;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UPartySequence_CreateParty_X*                SequenceCreateParty;                              		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UPartySequence_JoinParty_X*                  SequenceJoinParty;                                		// 0x00BC (0x0004) [0x0000000000000000]              
	class UPartySequence_LeaveParty_X*                 SequenceLeaveParty;                               		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UPartySequence_InviteToParty_X*              SequenceInviteToParty;                            		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRejoiningParty : 1;                              		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SecondToWaitForPerConReconnect;                   		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PartySetting_PsyNetPartyId;                       		// 0x00D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PartySetting_JoinKey;                             		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                    		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInviteComplete__Delegate;             		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyError__Delegate;                         		// 0x0118 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x011C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                		// 0x0128 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x012C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                		// 0x0138 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x013C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                  		// 0x0148 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x014C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                		// 0x0158 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x015C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;          		// 0x0168 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x016C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;            		// 0x0178 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x017C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                		// 0x0188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x018C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;             		// 0x0198 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x019C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                      		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x01AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                        		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x01BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;              		// 0x01C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x01CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                     		// 0x01D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x01DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;               		// 0x01E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x01EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;              		// 0x01F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x01FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTIES_X ];

		return pClassPointer;
	};

	void __Parties_X__CreateLobby (class UError* Error, struct FUniqueLobbyId* StructInitializer_761FF9ED40622C8084CEEE9128499C61 );
	void __Parties_X__HandlePsyNetPartyJoined (struct FPsyNetPartyMember& Member );
	void __Parties_X__SetLobbyOwner (class URPC_PartyChangeOwner_X* RPC );
	int __Parties_X__HandlePartyInfoSuccess (struct FPartyInvite& L, struct FPartyInvite& R );
	void HandlePsyNetPartyInviteAccepted (struct FString& PartyID, struct FUniqueNetId* StructInitializer_B64741CF4AAFB785908ADDA10284AA3C );
	struct FString GetPsyNetPartyID ( );
	struct FUniqueNetId FindPartyLeaderID ( TArray< struct FPsyNetPartyMember >* Members, struct FUniqueNetId* StructInitializer_378E717646FEDAEC923D2DAAAAA3C10C );
	void HandleOwnerChanged (class UPsyNetService_PartyOwnerChanged_X* Notification );
	void HandleChatNotification (class UPsyNetService_PartyChat_X* Notifications );
	void HandleSystemNotification (class UPsyNetService_PartySystem_X* Notifications );
	void HandleUserKicked (class UPsyNetService_PartyUserKicked_X* Notification );
	void HandleUserDisconnected (class UPsyNetService_PartyUserDisconnected_X* Notification );
	void HandleUserLeft (class UPsyNetService_PartyUserLeft_X* Notification );
	void HandleUserJoined (class UPsyNetService_PartyUserJoined_X* Notification );
	void HandleMemberStatusUpdate (struct FUniqueNetId& MemberUID, struct FString& Status );
	void HandleUserInvitedResponse (struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ForUserId, unsigned long bAccepted );
	void HandleUserInvited (class UPsyNetService_PartyUserInvited_X* Notifications );
	void SetRejoiningParty (unsigned long bRejoining );
	void HandleChannelClosed (class UPsyNetChannel_X* InChannel );
	class UPsyNetChannel_X* CreatePsyNetChannel (struct FUniqueLobbyId& PsyNetPartyId );
	void SetPsyNetSubscriptions (class UPsyNetServiceSubscriptions_X* InSubscriptions );
	void SetPsyNetChannel (class UPsyNetChannel_X* InChannel );
	void TimeoutPerconReconnect ( );
	void SetPsyNetConnection (class UPsyNetConnection_X* InConnection );
	void ClearLobbyData ( struct FActiveLobbyInfo* StructInitializer_D51F8F5C4D022C848E5885A99728AB79 );
	void DestroyLobby (unsigned char Reason );
	void HandlePerConDisconnected (class UPsyNetConnection_X* Connection );
	void HandlePerConConnected (class UPsyNetConnection_X* Connection );
	void HandlePartyInfoFail (class URPC_X* RPC );
	void HandlePartyInfoSuccess (class URPC_PartyInfo_X* RPC_PartyInfo, TArray< struct FPartyInvite >* FilterLocal_4EFE8AE1453BBC8BFC5748925707A0EE, TArray< struct FPartyInvite >* SortLocal_44BD3B4A482D69C0F8F99EB3BA78339A );
	void GetPartyInfo ( );
	class UOnlinePlayer_X* GetPrimaryPlayer ( );
	bool IsInLobby ( );
	struct FUniqueLobbyId CreatePsyNetPartyID (struct FString& S, struct FUniqueLobbyId* StructInitializer_7A00F6944AA0F98B0D9B3BA814D9BEF7 );
	void ClearHostStartPlayTogetherDelegate (struct FScriptDelegate& InDelegate );
	void AddHostStartPlayTogetherDelegate (struct FScriptDelegate& InDelegate );
	void OnHostStartPlayTogether (unsigned char LocalUserNum );
	int FindMemberId ( struct FLobbyMember* MemberData );
	int PlayerIdToMemberId ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, int* MemberIndex );
	struct FUniqueNetId MemberIdToPlayerId (int MemberId, struct FUniqueLobbyId* LobbyId, int* MemberIndex );
	bool KickPlayer (unsigned char Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool ShowInviteUI (unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId );
	bool InviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool CanInviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool InviteToActiveLobby ( struct FUniqueNetId* PlayerID );
	bool SetLobbyOwner ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwnerId );
	bool SetLobbyLock (unsigned long bLocked, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyType (unsigned char Type, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyServer (struct FString& ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID );
	bool RemoveLobbySetting (struct FString& Key, struct FUniqueLobbyId* LobbyId );
	bool SetLobbySetting (struct FString& Key, struct FString& Value, struct FUniqueLobbyId* LobbyId );
	bool GetLobbyAdmin ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId );
	bool SendLobbyBinaryData ( struct FUniqueLobbyId* LobbyId, TArray< unsigned char >* Data );
	bool SendLobbyMessage (struct FString& Message, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyUserSetting (struct FString& Key, struct FString& Value, struct FUniqueLobbyId* LobbyId );
	bool LeaveLobby ( struct FUniqueLobbyId* LobbyId );
	void RemoveLobbyMember (struct FUniqueNetId& PlayerUID );
	void AddLobbyMember (struct FUniqueNetId& PlayerUID, struct FString& UserName, struct FLobbyMember* StructInitializer_A6B519434830D23314A5AB82648D916C );
	void HandleLobbyJoinFailed (class UError* InError, struct FActiveLobbyInfo* StructInitializer_65A97D9A4F5C9288A01FCAAE67463B78, struct FUniqueLobbyId* StructInitializer_C5ECA28A4F5914332613F0822028DF30 );
	void HandlePsyNetPartyJoined (struct FUniqueLobbyId& PsyNetPartyId, TArray< struct FPsyNetPartyMember >* Members );
	void HandlePsyNetPartyCreated (struct FUniqueLobbyId& PsyNetPartyId, TArray< struct FPsyNetPartyMember >* Members );
	bool JoinLobbyWithKey (struct FString& PsyNetPartyId, struct FString& JoinKey );
	bool JoinLobby (int LocalPlayerNum, struct FUniqueLobbyId* LobbyId );
	bool UpdateFoundLobbies (struct FUniqueLobbyId& LobbyId );
	int FindMemberIndex (struct FUniqueNetId& MemberId );
	bool FindLobbies (int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance );
	bool CreateLobby (int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings );
	void EventPartyChatRecieved (struct FUniqueNetId& PlayerID, struct FString& Text );
	void ClearLobbyDestroyedDelegate (struct FScriptDelegate& LobbyDestroyedDelegate );
	void AddLobbyDestroyedDelegate (struct FScriptDelegate& LobbyDestroyedDelegate );
	void OnLobbyDestroyed (unsigned char Reason, struct FUniqueLobbyId* LobbyId );
	void RemoveLocalPlayerFromSession ( struct FUniqueNetId* PartyMember );
	void AddLocalPartyMemberToSession ( struct FUniqueNetId* NewPartyMember );
	bool GetLobbyMembers ( struct FUniqueLobbyId* LobbyId, TArray< struct FLobbyMember >* Members );
	void PlayTogether_Invite (struct FString& InviteMessage, struct FUniqueLobbyId* LobbyId );
	void EventLobbyInvitePending (struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FromUserId, struct FString& FromUserName );
	void ClearLobbyInviteDelegate (struct FScriptDelegate& LobbyInviteDelegate );
	void AddLobbyInviteDelegate (struct FScriptDelegate& LobbyInviteDelegate );
	void OnLobbyInvite (unsigned long bAccepted, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId );
	void ClearLobbyJoinGameDelegate (struct FScriptDelegate& LobbyJoinGameDelegate );
	void AddLobbyJoinGameDelegate (struct FScriptDelegate& LobbyJoinGameDelegate );
	void OnLobbyJoinGame (struct FString& ServerIP, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerID );
	void TriggerLobbyReceiveBinaryDataDelegate (int MemberIndex, TArray< unsigned char > Data );
	void ClearLobbyReceiveBinaryDataDelegate (struct FScriptDelegate& LobbyReceiveBinaryDataDelegate );
	void AddLobbyReceiveBinaryDataDelegate (struct FScriptDelegate& LobbyReceiveBinaryDataDelegate );
	void OnLobbyReceiveBinaryData (int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray< unsigned char >* Data );
	void ClearLobbyReceiveMessageDelegate (struct FScriptDelegate& LobbyReceiveMessageDelegate );
	void AddLobbyReceiveMessageDelegate (struct FScriptDelegate& LobbyReceiveMessageDelegate );
	void OnLobbyReceiveMessage (int MemberIndex, struct FString& Type, struct FString& Message, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbyMemberStatusUpdateDelegate (struct FScriptDelegate& LobbyMemberStatusUpdateDelegate );
	void AddLobbyMemberStatusUpdateDelegate (struct FScriptDelegate& LobbyMemberStatusUpdateDelegate );
	void eventTriggerLobbyMemberStatusUpdateDelegates (int MemberIndex, int InstigatorIndex, struct FString& Status );
	void OnLobbyMemberStatusUpdate (int MemberIndex, int InstigatorIndex, struct FString& Status, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbyMemberSettingsUpdateDelegate (struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate );
	void AddLobbyMemberSettingsUpdateDelegate (struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate );
	void OnLobbyMemberSettingsUpdate (int MemberIndex, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbySettingsUpdateDelegate (struct FScriptDelegate& LobbySettingsUpdateDelegate );
	void AddLobbySettingsUpdateDelegate (struct FScriptDelegate& LobbySettingsUpdateDelegate );
	void OnLobbySettingsUpdate ( struct FActiveLobbyInfo* LobbyInfo );
	void ClearJoinLobbyCompleteDelegate (struct FScriptDelegate& JoinLobbyCompleteDelegate );
	void AddJoinLobbyCompleteDelegate (struct FScriptDelegate& JoinLobbyCompleteDelegate );
	void OnJoinLobbyComplete (unsigned long bWasSuccessful, struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyId );
	void ClearFindLobbiesCompleteDelegate (struct FScriptDelegate& FindLobbiesCompleteDelegate );
	void AddFindLobbiesCompleteDelegate (struct FScriptDelegate& FindLobbiesCompleteDelegate );
	void OnFindLobbiesComplete (unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList );
	void ClearLobbySessionCreatedDelegate (struct FScriptDelegate& LobbySessionCreatedDelegate );
	void AddLobbySessionCreatedDelegate (struct FScriptDelegate& LobbySessionCreatedDelegate );
	void OnLobbySessionCreated ( );
	void ClearLobbyErrorDelegate (struct FScriptDelegate& LobbyErrorDelegate );
	void AddLobbyErrorDelegate (struct FScriptDelegate& LobbyErrorDelegate );
	void OnLobbyError (struct FString& Error );
	void ClearCreateLobbyCompleteDelegate (struct FScriptDelegate& CreateLobbyCompleteDelegate );
	void AddCreateLobbyCompleteDelegate (struct FScriptDelegate& CreateLobbyCompleteDelegate );
	void OnCreateLobbyComplete (unsigned long bWasSuccessful, struct FString& Error, struct FUniqueLobbyId* LobbyId );
	void OnExit ( );
	void Init ( );
	void eventConstruct ( );
	void EventLobbyInviteComplete (unsigned long bSucceeded, struct FUniqueNetId& InviteeID, struct FString& Error );
	void EventShowInviteUI ( );
};

// Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer
// 0x0034 (0x0070 - 0x003C)
class U__OnlineGameMatchmaking_X__OnReceiveGameServer : public UObject
{
public:
	struct FCheckReservationData                       Reservation;                                      		// 0x003C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEMATCHMAKING_X__ONRECEIVEGAMESERVER ];

		return pClassPointer;
	};

	bool __OnlineGameMatchmaking_X__OnReceiveGameServer (struct FString& R );
};

// Class ProjectX.PartyMessage_X
// 0x0030 (0x006C - 0x003C)
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                           		// 0x003C (0x0030) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_X ];

		return pClassPointer;
	};

	bool BroadcastOn (class UOnlineLobbyInterface* LobbyInterface, struct FUniqueLobbyId& LobbyId );
	bool Broadcast ( );
};

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000C (0x0078 - 0x006C)
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                      		// 0x006C (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsSearching : 1;                                 		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_SEARCHSTATUS_X ];

		return pClassPointer;
	};

	class UPartyMessage_SearchStatus_X* SetIsSearching (unsigned long bValue );
	class UPartyMessage_SearchStatus_X* SetSearchState (struct FName& InSearchState );
};

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (0x0070 - 0x006C)
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                          		// 0x006C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_LOBBYSETTINGS_X ];

		return pClassPointer;
	};

	class UPartyMessage_LobbySettings_X* SetBuildID (int InBuildID );
};

// Class ProjectX.PartyMessage_Kick_X
// 0x0061 (0x00CD - 0x006C)
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                       		// 0x006C (0x0030) [0x0000000000000000]              
	struct FUniqueNetId                                Instigator;                                       		// 0x009C (0x0030) [0x0000000000000000]              
	unsigned char                                      KickReason;                                       		// 0x00CC (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_KICK_X ];

		return pClassPointer;
	};

	class UPartyMessage_Kick_X* SetReason (unsigned char InKickReason );
	class UPartyMessage_Kick_X* SetInstigator (struct FUniqueNetId& InPlayer );
	class UPartyMessage_Kick_X* SetKicked (struct FUniqueNetId& InPlayer );
};

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x0040 (0x00AC - 0x006C)
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                  		// 0x006C (0x0030) [0x0000000000000000]              
	TArray< struct FSimplePartyMember >                Members;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFromLeader : 1;                                  		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_LOCALPLAYERS_X ];

		return pClassPointer;
	};

	class UPartyMessage_LocalPlayers_X* SetFromLeader (unsigned long bIsLeader );
	void AddMember (struct FPartyMember& Member );
	class UPartyMessage_LocalPlayers_X* AddPlayer (struct FUniqueNetId& PlayerID, struct FString& PlayerName );
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer (class UOnlinePlayer_X* Player );
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId (struct FUniqueNetId& InPrimaryMemberId );
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers ( );
};

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x0034 (0x00A0 - 0x006C)
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x006C (0x0030) [0x0000000000000000]              
	int                                                MatchmakeRestrictions;                            		// 0x009C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_MATCHMAKINGAVAILABILITY_X ];

		return pClassPointer;
	};

	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions (int InRestrictions );
	class UPartyMessage_MatchmakingAvailability_X* SetMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_JoinGame_X
// 0x0038 (0x00A4 - 0x006C)
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                         		// 0x006C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_JOINGAME_X ];

		return pClassPointer;
	};

	class UPartyMessage_JoinGame_X* SetSettings ( struct FPartyJoinMatchSettings* InSettings );
};

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x004C (0x00B8 - 0x006C)
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x006C (0x0030) [0x0000000000000000]              
	struct FPartyMemberServer                          Server;                                           		// 0x009C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_PARTYMEMBERJOINGAME_X ];

		return pClassPointer;
	};

	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberID (struct FUniqueNetId& InPlayerId );
	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer ( struct FPartyMemberServer* InServer );
};

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x0034 (0x00A0 - 0x006C)
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x006C (0x0030) [0x0000000000000000]              
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_DISABLECROSSPLAY_X ];

		return pClassPointer;
	};

	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay (unsigned long InDisableCrossplay );
	class UPartyMessage_DisableCrossPlay_X* SetMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_CrossPlayTextChat_X
// 0x0031 (0x009D - 0x006C)
class UPartyMessage_CrossPlayTextChat_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x006C (0x0030) [0x0000000000000000]              
	unsigned char                                      CrossChatState;                                   		// 0x009C (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_CROSSPLAYTEXTCHAT_X ];

		return pClassPointer;
	};

	class UPartyMessage_CrossPlayTextChat_X* SetCrossPlayTextChatState (unsigned char InCrossChatState );
	class UPartyMessage_CrossPlayTextChat_X* SetMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0030 (0x009C - 0x006C)
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x006C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_INVITETOTRADE_X ];

		return pClassPointer;
	};

	class UPartyMessage_InviteToTrade_X* SetInviteMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x0044 (0x00B0 - 0x006C)
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x006C (0x0030) [0x0000000000000000]              
	unsigned long                                      bInviteAccepted : 1;                              		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       TradeId;                                          		// 0x00A0 (0x0010) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_ACCEPTINVITETOTRADE_X ];

		return pClassPointer;
	};

	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId (struct FGuid& InTradeId );
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted (unsigned long bInInviteAccepted );
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0030 (0x009C - 0x006C)
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x006C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_PLAYERTRADECOMPLETE_X ];

		return pClassPointer;
	};

	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId (struct FUniqueNetId& InMemberId );
};

// Class ProjectX.PartyMessage_SetPlatformParty_X
// 0x000C (0x0078 - 0x006C)
class UPartyMessage_SetPlatformParty_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                  		// 0x006C (0x000C) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_SETPLATFORMPARTY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PartyMetrics_X
// 0x000C (0x0060 - 0x0054)
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                        		// 0x0054 (0x000C) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMETRICS_X ];

		return pClassPointer;
	};

	void PartyChannelBroken (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, int MissingMessageID );
	void PartyMessage (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FName& MessageType );
	void PartyChanged (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, unsigned long bLeader, int PartySize, int LocalPlayers, int RemotePlayers );
	struct FPartyMetricsData CreatePartyMetricsData (class UOnlineGameParty_X* Party );
	void RecordPartyChanged (class UOnlineGameParty_X* Party );
	void PartyError (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FString& Error );
	void PartyKickRemotePlayer (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FString& Reason );
	void PartyKickLocalPlayer (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FString& Reason );
	void PartyLeave (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FString& Reason );
	void PartyCreationFailed (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID, struct FString& Error );
	void PartyCreated (struct FUniqueLobbyId& PartyID, struct FUniqueNetId& LeaderID );
};

// Class ProjectX.__OnlineGameParty_X__JoinParty
// 0x0010 (0x004C - 0x003C)
class U__OnlineGameParty_X__JoinParty : public UObject
{
public:
	int                                                LocalPlayerNum;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	struct FUniqueLobbyId                              InPartyId;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEPARTY_X__JOINPARTY ];

		return pClassPointer;
	};

	void __OnlineGameParty_X__JoinParty (class UPrivilegeCheck_X* PrivilegeCheck );
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame
// 0x0038 (0x0074 - 0x003C)
class U__OnlineGameParty_X__HandleConfirmJoinGame : public UObject
{
public:
	struct FPartyJoinMatchSettings                     InSettings;                                       		// 0x003C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEPARTY_X__HANDLECONFIRMJOINGAME ];

		return pClassPointer;
	};

	void __OnlineGameParty_X__HandleConfirmJoinGame ( );
};

// Class ProjectX.__OnlineGameParty_X__HandleJoinLobby
// 0x000C (0x0048 - 0x003C)
class U__OnlineGameParty_X__HandleJoinLobby : public UObject
{
public:
	struct FString                                     Error;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEPARTY_X__HANDLEJOINLOBBY ];

		return pClassPointer;
	};

	void __OnlineGameParty_X__HandleJoinLobby ( );
};

// Class ProjectX.PartyPlatformSession_X
// 0x001C (0x0058 - 0x003C)
class UPartyPlatformSession_X : public UObject
{
public:
	struct FUniqueLobbyId                              PartyID;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPartyIdChanged__Delegate;                  		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYPLATFORMSESSION_X ];

		return pClassPointer;
	};

	void ClearPlatformParty ( struct FUniqueLobbyId* StructInitializer_FA89FBBE49DDBDEF21362E9CECF0F9A0 );
	void LeaveParty ( );
	void BroadcastPlatformParty ( class UPartyMessage_SetPlatformParty_X** ObjectInitializer_937EEBDE49526FE9FD1D38A203F82399 );
	void HandleJoinPlatformParty (struct FUniqueLobbyId& InPartyId );
	bool IsInParty ( );
	void EventPartyIdChanged (class UPartyPlatformSession_X* Session );
};

// Class ProjectX.PartyConfig_X
// 0x0004 (0x0050 - 0x004C)
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                            		// 0x004C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PartyMessage_ReadyToTrade_X
// 0x0034 (0x00A0 - 0x006C)
class UPartyMessage_ReadyToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x006C (0x0030) [0x0000000000000000]              
	unsigned long                                      bReadyToTrade : 1;                                		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_READYTOTRADE_X ];

		return pClassPointer;
	};

	class UPartyMessage_ReadyToTrade_X* SetReadyToTrade (unsigned long bInReadyToTrade );
	class UPartyMessage_ReadyToTrade_X* SetTradingMemberId (struct FUniqueNetId& InTradingMemberId );
};

// Class ProjectX.OnlinePlayerRegionRestrictions_X
// 0x000C (0x0054 - 0x0048)
class UOnlinePlayerRegionRestrictions_X : public UOnline_X
{
public:
	TArray< unsigned char >                            Restrictions;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERREGIONRESTRICTIONS_X ];

		return pClassPointer;
	};

	unsigned char __OnlinePlayerRegionRestrictions_X__HandleLoginChanged (struct FName& S );
	bool IsRestricted (unsigned char Restriction );
	void HandleLoginChanged (class UOnlinePlayerAuthentication_X* Auth, TArray< unsigned char >* MapLocal_9B6F9D0443B0F868491CB792DDCE76FC );
	void OnExit ( );
	void OnInit ( );
};

// Class ProjectX.PartyMessage_InviteToTradeError_X
// 0x0008 (0x0074 - 0x006C)
class UPartyMessage_InviteToTradeError_X : public UPartyMessage_X
{
public:
	struct FName                                       ErrorTypeName;                                    		// 0x006C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_INVITETOTRADEERROR_X ];

		return pClassPointer;
	};

	class UPartyMessage_InviteToTradeError_X* SetError (class UErrorType* Type );
};

// Class ProjectX.__OnlineGameParty_X__GetLocalMemberIDs
// 0x0030 (0x006C - 0x003C)
class U__OnlineGameParty_X__GetLocalMemberIDs : public UObject
{
public:
	struct FUniqueNetId                                PrimaryPlayerID;                                  		// 0x003C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEPARTY_X__GETLOCALMEMBERIDS ];

		return pClassPointer;
	};

	bool __OnlineGameParty_X__GetLocalMemberIDs (struct FPartyMember& Member );
};

// Class ProjectX.__OnlineGameParty_X__CreatePartyInternal
// 0x001C (0x0058 - 0x003C)
class U__OnlineGameParty_X__CreatePartyInternal : public UObject
{
public:
	class UOnlineLobbyInterface*                       LobbyInterface;                                   		// 0x003C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                LocalPlayerNum;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Handler;                                          		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x004C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEPARTY_X__CREATEPARTYINTERNAL ];

		return pClassPointer;
	};

	void __OnlineGameParty_X__CreatePartyInternal (class UError* ConnectionError );
};

// Class ProjectX.PartySequence_InvitedToPsyNetParty_X
// 0x0000 (0x003C - 0x003C)
class UPartySequence_InvitedToPsyNetParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_INVITEDTOPSYNETPARTY_X ];

		return pClassPointer;
	};

	void JoinPsyNetPartyCallback (int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId );
	void HandlePlayerInvited (unsigned long bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId );
	void Init ( );
};

// Class ProjectX.PartySequence_InvitedToPlatformParty_X
// 0x0000 (0x003C - 0x003C)
class UPartySequence_InvitedToPlatformParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_INVITEDTOPLATFORMPARTY_X ];

		return pClassPointer;
	};

	void HandleJoinPlatformLobby (unsigned long bWasSuccessful, struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID );
	void JoinPlatformPartyCallback (int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId );
	void HandlePlayerInvited (unsigned long bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId );
	void Init ( );
};

// Class ProjectX.PartySequence_PsyNetPartyUpgrade_X
// 0x0000 (0x003C - 0x003C)
class UPartySequence_PsyNetPartyUpgrade_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_PSYNETPARTYUPGRADE_X ];

		return pClassPointer;
	};

	void HandleJoinPsyNetLobby (unsigned long bWasSuccessful, struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, struct FActiveLobbyInfo* StructInitializer_9F6C69AA422B15A992AC13A5AF5B46D8, struct FUniqueLobbyId* StructInitializer_E9C0EC6440963F1C6A17F3AC71666B14 );
	void TryUpgrade ( struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* PlatformLobbyUID );
};

// Class ProjectX.RankedConfig_X
// 0x0028 (0x0074 - 0x004C)
class URankedConfig_X : public UOnlineConfig_X
{
public:
	int                                                ReconnectTimeoutSeconds;                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      SkillTierToSeasonRewardLevel;                     		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SeasonRewardRequiredWinsPerLevel;                 		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCheckReservationID : 1;                          		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long long                                 SeasonEndTimeSeconds;                             		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RANKEDCONFIG_X ];

		return pClassPointer;
	};

	bool HasSeasonEnded ( );
	int GetSeasonTimeRemaining ( );
};

// Class ProjectX.RPC_GetPopulation_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray< struct FGetPopulationData >                Playlists;                                        		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPOPULATION_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PLAYERCANCELPRIVATEMATCH_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                           		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PLAYERSEARCHPRIVATEMATCH_X ];

		return pClassPointer;
	};

	class URPC_PlayerSearchPrivateMatch_X* SetRegion (struct FString& InRegion );
};

// Class ProjectX.RegionList_X
// 0x000C (0x0048 - 0x003C)
class URegionList_X : public UObject
{
public:
	TArray< struct FRegionItem >                       Regions;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_REGIONLIST_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray< struct FGetGameServerPingListData >        Servers;                                          		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETGAMESERVERPINGLIST_X ];

		return pClassPointer;
	};

	void eventOnSuccess ( );
};

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (0x003C - 0x003C)
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEGAMERESERVATIONS_ASSIGNTEAMSBYPARTY_X ];

		return pClassPointer;
	};

	int PartySort (struct FPartyByTeam& Left, struct FPartyByTeam& Right );
	void AssignTeams (int TeamSize, TArray< struct FReservationData >* TestPlayers );
};

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSMETRICS_X ];

		return pClassPointer;
	};

	void PlayerCanceled ( );
	void NotAllPlayersJoined ( );
	void GetKeysInvalidOrigin ( );
	void GetKeysFailed ( );
	void ReservationsFull ( );
	void PlatformExclusiveReservation ( );
	void WrongReservationRankedMatch ( );
	void WrongReservationPlaylist ( );
	void InvalidReservationPlaylist ( );
	void RankedReconnect ( );
	void RankedReconnectFinished ( );
	void PrivateMatchFinished ( );
	void FriendJoin ( );
	void FriendJoinEmpty ( );
	void FriendJoinRanked ( );
	void AddReservation (struct FUniqueNetId& PlayerID, int Playlist, struct FString& ReservationID );
	void FirstReservation (int Playlist, struct FString& ReservationID );
};

// Class ProjectX.TAsyncResult__ClubDetails_X
// 0x0034 (0x00B8 - 0x0084)
class UTAsyncResult__ClubDetails_X : public UAsyncTask
{
public:
	class UClubDetails_X*                              Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__CLUBDETAILS_X ];

		return pClassPointer;
	};

	class UTAsyncResult__ClubDetails_X* CreateResultError (class UError* InError );
	class UTAsyncResult__ClubDetails_X* CreateResult (class UClubDetails_X* InResult );
	class UTAsyncResult__ClubDetails_X* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__ClubDetails_X* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__ClubDetails_X* eventSetResult (class UClubDetails_X* InResult, class UError* InError );
	class UTAsyncResult__ClubDetails_X* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__ClubDetails_X* NotifyOnResult (struct FScriptDelegate& Callback );
	class UClubDetails_X* ResultDelegate ( );
	void EventResultComplete (class UClubDetails_X* OutResult, class UError* OutError );
	void EventResult (class UClubDetails_X* OutResult );
};

// Class ProjectX.MapPrefsConfig_X
// 0x000C (0x0058 - 0x004C)
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLikes;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxDislikes;                                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MAPPREFSCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PRI_X
// 0x0040 (0x0338 - 0x02F8)
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;               		// 0x02F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                 		// 0x0308 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x030C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTeamChanged__Delegate;                     		// 0x0318 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x031C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x0328 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x032C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PRI_X ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void OnUniqueIdChanged ( );
	void SetUniqueId (struct FUniqueNetId& PlayerUniqueId );
	void UnregisterPlayerFromSession ( );
	void RegisterPlayerWithSession ( );
	void AddPlayerHistoryKey (class UOnlineRecentPlayersList* PlayersList );
	void OnTeamChanged ( );
	void SetPlayerTeam (class ATeamInfo* NewTeam );
	void eventOnOwnerChanged ( );
	void eventSetPlayerName (struct FString& S );
	void eventReplicatedEvent (struct FName& VarName );
	void EventDestroyed (class APRI_X* PRI );
	void EventTeamChanged (class APRI_X* PRI );
	void EventUniqueIdChanged (class APRI_X* PRI );
	void EventPlayerNameChanged (class APRI_X* PRI );
};

// Class ProjectX.ClubSettings_X
// 0x0020 (0x005C - 0x003C)
class UClubSettings_X : public UObject
{
public:
	struct FString                                     ClubName;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClubTag;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PrimaryColor;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                AccentColor;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBSETTINGS_X ];

		return pClassPointer;
	};

	bool IsAccentColorSet ( );
	bool IsPrimaryColorSet ( );
	class UClubSettings_X* Create (struct FString& InName, struct FString& InTag, int InPrimaryColor, int InSecondaryColor );
};

// Class ProjectX.ClubDetails_X
// 0x005C (0x00B8 - 0x005C)
class UClubDetails_X : public UClubSettings_X
{
public:
	unsigned long long                                 ClubID;                                           		// 0x005C (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                OwnerPlayerID;                                    		// 0x0064 (0x0030) [0x0000000000000000]              
	struct FString                                     MotD;                                             		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bVerified : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 LastUpdatedTime;                                  		// 0x00A4 (0x0008) [0x0000000000000000]              
	TArray< struct FClubMember >                       Members;                                          		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBDETAILS_X ];

		return pClassPointer;
	};

	struct FString GetMemberDebugString (struct FClubMember& Member );
	struct FString GetMembersDebugString ( );
	struct FString GetDebugString ( );
	bool IsMember (struct FUniqueNetId& PlayerID );
	bool IsDestroyed ( );
	void Destroy ( struct FUniqueNetId* StructInitializer_1564E4B14AFB4EB17DD41EBEF6CC5C97 );
};

// Class ProjectX.RPC_GetKeys_X
// 0x003C (0x0128 - 0x00EC)
class URPC_GetKeys_X : public URPC_KeysBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00EC (0x0030) [0x0000000000000000]              
	unsigned long                                      bServerKey : 1;                                   		// 0x011C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UAddReservationMessage_X*                    Message;                                          		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTcpConnection*                              Connection;                                       		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETKEYS_X ];

		return pClassPointer;
	};

	class URPC_GetKeys_X* SetPlayer (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.TAsyncResult__String
// 0x003C (0x00C0 - 0x0084)
class UTAsyncResult__String : public UAsyncTask
{
public:
	struct FString                                     Result;                                           		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__STRING ];

		return pClassPointer;
	};

	class UTAsyncResult__String* CreateResultError (class UError* InError );
	class UTAsyncResult__String* CreateResult (struct FString& InResult );
	class UTAsyncResult__String* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__String* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__String* eventSetResult (struct FString& InResult, class UError* InError );
	class UTAsyncResult__String* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__String* NotifyOnResult (struct FScriptDelegate& Callback );
	struct FString ResultDelegate ( );
	void EventResultComplete (struct FString& OutResult, class UError* OutError );
	void EventResult (struct FString& OutResult );
};

// Class ProjectX.__OnlineGameReservations_X__NotifyReadyNetworkNext
// 0x0008 (0x0044 - 0x003C)
class U__OnlineGameReservations_X__NotifyReadyNetworkNext : public UObject
{
public:
	class UTcpConnection*                              Connection;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class UTAsyncResult__String*                       Task;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMERESERVATIONS_X__NOTIFYREADYNETWORKNEXT ];

		return pClassPointer;
	};

	void __OnlineGameReservations_X__NotifyReadyNetworkNext ( );
};

// Class ProjectX.__OnlineGameReservations_X__RecordReservation
// 0x0004 (0x0040 - 0x003C)
class U__OnlineGameReservations_X__RecordReservation : public UObject
{
public:
	class UAddReservationMessage_X*                    Message;                                          		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMERESERVATIONS_X__RECORDRESERVATION ];

		return pClassPointer;
	};

	void __OnlineGameReservations_X__RecordReservation (struct FReservationPlayerData& P );
};

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFindPrivateServerResult >          Servers;                                          		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FServerResult >                     Results;                                          		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CUSTOMGAMESERVERGET_X ];

		return pClassPointer;
	};

	void eventOnSuccess ( );
	class URPC_CustomGameServerGet_X* SetPassword (struct FString& InPassword );
	class URPC_CustomGameServerGet_X* SetServerName (struct FString& InServerName );
};

// Class ProjectX.PlaylistSkillCache_X
// 0x000C (0x0048 - 0x003C)
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray< struct FPlayerSkillRating >                Players;                                          		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PLAYLISTSKILLCACHE_X ];

		return pClassPointer;
	};

	int GetPlayerIndex (struct FUniqueNetId& PlayerID );
	struct FPlayerSkillRating GetPlayerRating (struct FUniqueNetId& PlayerID );
	void ClearSkill (struct FUniqueNetId& PlayerID );
	void CacheSkill (struct FPlayerSkillRating& Rating );
	void PreCacheSkill (struct FPlayerSkillRating& Rating );
};

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x0044 (0x00EC - 0x00A8)
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	TArray< struct FGetPlayerSkillData >               Skills;                                           		// 0x00D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRPCRewardLevelData                         RewardLevels;                                     		// 0x00E4 (0x0008) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPLAYERSKILL_X ];

		return pClassPointer;
	};

	class URPC_GetPlayerSkill_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_RecordMatchResults_X
// 0x006C (0x0114 - 0x00A8)
class URPC_RecordMatchResults_X : public URPC_X
{
public:
	struct FString                                     MatchGUID;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSkillMatchData                             Match;                                            		// 0x00B4 (0x001C) [0x0000000000000000]              
	struct FString                                     MatchName;                                        		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPlayer >                 Winners;                                          		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPlayer >                 Losers;                                           		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       AppSessionID;                                     		// 0x00F4 (0x0010) [0x0000000000000000]              
	struct FGuid                                       LevelSessionID;                                   		// 0x0104 (0x0010) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_RECORDMATCHRESULTS_X ];

		return pClassPointer;
	};

	int GetPartyIndex (struct FUniqueNetId& LeaderID, TArray< struct FUniqueNetId >* PartyIDs );
	void InitSkillMatchPlayers (class UMatchData_X* MatchData );
	struct FSkillMatchPlayer InitSkillMatchPlayer (class UMatchData_X* MatchData, class UMatchPlayerData_X* Player, TArray< struct FUniqueNetId >* PartyIDs );
	class URPC_RecordMatchResults_X* SetMetrics (class UMetricsSystem_X* MetricsSystem );
	class URPC_RecordMatchResults_X* SetMatchName (struct FString& InName );
	class URPC_RecordMatchResults_X* SetMatch (class UMatchData_X* InMatch );
	class URPC_RecordMatchResults_X* SetMatchGUID (struct FString& InGuid );
};

// Class ProjectX.RPC_UpdateSkills_X
// 0x0020 (0x0134 - 0x0114)
class URPC_UpdateSkills_X : public URPC_RecordMatchResults_X
{
public:
	int                                                Playlist;                                         		// 0x0114 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerSkillRating >                NewSkills;                                        		// 0x0118 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRPCPlayerRewardLevelData >         NewRewardLevels;                                  		// 0x0124 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UMatchData_X*                                MatchData;                                        		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATESKILLS_X ];

		return pClassPointer;
	};

	class URPC_RecordMatchResults_X* SetMatch (class UMatchData_X* InMatch );
};

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x001C (0x00C4 - 0x00A8)
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray< struct FUploadStatDataSet >                Updates;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchGUID;                                        		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlaylistId;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATELEADERBOARD_X ];

		return pClassPointer;
	};

	class URPC_UpdateLeaderboard_X* SetPlaylistID (int InID );
	class URPC_UpdateLeaderboard_X* SetMatchGUID (struct FString& InGuid );
	class URPC_UpdateLeaderboard_X* SetUpdates ( TArray< struct FUploadStatDataSet >* InUpdates );
};

// Class ProjectX.WordFilterConfig_X
// 0x0028 (0x0074 - 0x004C)
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                        		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PsyNetFilterEnabled : 1;                          		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                NameHistoryCacheLength;                           		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            IgnoreFilterList;                                 		// 0x0054 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< unsigned char >                            PlatformFilterList;                               		// 0x0060 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	float                                              PsyNetWordFilterBatchDelay;                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PsyNetWordFilterBatchMaxSize;                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WORDFILTERCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize
// 0x000C (0x0048 - 0x003C)
class U__OnlineGameWordFilter_X__InternalSanitize : public UObject
{
public:
	struct FString                                     Id;                                               		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEGAMEWORDFILTER_X__INTERNALSANITIZE ];

		return pClassPointer;
	};

	void __OnlineGameWordFilter_X__InternalSanitize (struct FWordFilterResult& Result );
};

// Class ProjectX.PsyNetWordFilter_X
// 0x0008 (0x0050 - 0x0048)
class UPsyNetWordFilter_X : public UComponent
{
public:
	class UWordFilterConfig_X*                         Config;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URPC_FilterContent_X*                        PendingFilterRPC;                                 		// 0x004C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETWORDFILTER_X ];

		return pClassPointer;
	};

	void __PsyNetWordFilter_X__WordFilterSanitizeString (class URPC_FilterContent_X* RPC );
	void HandlePsyNetWordFilterFail (class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_E3F6A9AE4E6368CF20C7F6B19524451F );
	void HandlePsyNetWordFilterSuccess (class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_A56985B746A4D150D33224BCADEBAE55 );
	void HandlePsyNetWordFilter (class URPC_FilterContent_X* RPC );
	void SendPendingFilterRPC ( );
	bool WordFilterSanitizeString (struct FString& Comment, struct FScriptDelegate& SanitizeDelegate, struct FUniqueNetId& PlayerID );
};

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x00C4 (0x016C - 0x00A8)
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerID;                                         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameVersion;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FString                                     Language;                                         		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AuthTicket;                                       		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BuildRegion;                                      		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       FeatureSet;                                       		// 0x00F4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bTrial : 1;                                       		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipAuth : 1;                                    		// 0x00FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseWebSocket : 1;                                 		// 0x00FC (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FString                                     SessionId;                                        		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PsyToken;                                         		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      BanType;                                          		// 0x0118 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                BannedMinutes;                                    		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BannedMessage;                                    		// 0x0120 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     VerifiedPlayerName;                               		// 0x012C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PerConURL;                                        		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           BannedCitations;                                  		// 0x0144 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPsyTag                                     PsyTag;                                           		// 0x0150 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             CountryRestrictions;                              		// 0x0160 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_LOGINAUTHPLAYER_X ];

		return pClassPointer;
	};

	class URPC_LoginAuthPlayer_X* SetTrial (unsigned long bIsTrial );
	class URPC_LoginAuthPlayer_X* SetFeatureSet (struct FName& InFeatureSet );
	class URPC_LoginAuthPlayer_X* SetBuildRegion (struct FString& InBuildRegion );
	class URPC_LoginAuthPlayer_X* SetAuthTicket (struct FString& InAuthTicket );
	class URPC_LoginAuthPlayer_X* SetLanguage (struct FString& InLanguage );
	class URPC_LoginAuthPlayer_X* SetGameVersion (int InGameVersion );
	class URPC_LoginAuthPlayer_X* SetPlayerID (unsigned long long InPlayerId );
	class URPC_LoginAuthPlayer_X* SetPlayerName (struct FString& InPlayerName );
	class URPC_LoginAuthPlayer_X* SetPlatform (struct FString& InPlatform );
};

// Class ProjectX.OnlinePlayerStorage_X
// 0x0010 (0x0058 - 0x0048)
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	class UOnlinePlayerStorageSync_X*                  Sync;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	class UOnlinePlayerStorageManifest_X*              Manifest;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	class USerializer_X*                               Serializer;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERSTORAGE_X ];

		return pClassPointer;
	};

	void OnInit ( );
};

// Class ProjectX.PsyNetServiceProvider_X
// 0x0024 (0x0060 - 0x003C)
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                		// 0x003C (0x0004) [0x0000000000000000]              
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UPsyNetChannel_X* >                  Channels;                                         		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                 		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICEPROVIDER_X ];

		return pClassPointer;
	};

	void FinalizeServiceTask (class UPsyNetClientService_X* Service, class UTAsyncResult__PsyNetClientService_X* Task, class UError* Error );
	void PrintServiceResult (struct FString& ServiceName, class UError* Error );
	class UTAsyncResult__PsyNetClientService_X* ExecuteServiceMessage (class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message );
	bool IsServiceRequest (class UPsyNetMessage_X* Message );
	class UTAsyncResult__PsyNetClientService_X* ExecuteNotification (class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message );
	void SetResponse (class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response );
	class UTAsyncResult__PsyNetClientService_X* ExecuteRequest (class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response );
	void HandleChannelClosed (class UPsyNetChannel_X* Channel );
	class UPsyNetChannel_X* CreateChannel (struct FString& ChannelName );
	void Unsubscribe (struct FScriptDelegate& Callback );
	void Subscribe (class UClass* ServiceClass, struct FScriptDelegate& Callback );
	void eventConstruct ( );
	void EventServiceExecuted (class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service );
};

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0048 (0x00A4 - 0x005C)
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                     		// 0x005C (0x0030) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsLocalMessage : 1;                               		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 TimeStamp;                                        		// 0x009C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_FRIENDCHATRECEIVED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x0064 (0x00C0 - 0x005C)
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                       		// 0x005C (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PERSONAINFO_X ];

		return pClassPointer;
	};

	struct FOnlineFriend GetData ( );
};

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_FRIENDACCEPTEDREQUEST_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0048 (0x00A4 - 0x005C)
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetOnlineStatus                         FromPlayer;                                       		// 0x005C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_FRIENDSTATUSUPDATE_X ];

		return pClassPointer;
	};

	struct FOnlineStatus GetData ( );
};

// Class ProjectX.PsyNetService_FriendPsyTagUpdated_X
// 0x0040 (0x009C - 0x005C)
class UPsyNetService_FriendPsyTagUpdated_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x005C (0x0030) [0x0000000000000002]              ( CPF_Const )
	struct FPsyTag                                     PsyTag;                                           		// 0x008C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_FRIENDPSYTAGUPDATED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_INCOMINGFRIENDREQUEST_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0030 (0x008C - 0x005C)
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x005C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PLAYERUNFRIENDED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OSSConfig_X
// 0x0004 (0x0050 - 0x004C)
class UOSSConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnablePresence : 1;                              		// 0x004C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_OSSCONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_PsyNetFriendRequestAccept_X
// 0x0104 (0x01AC - 0x00A8)
class URPC_PsyNetFriendRequestAccept_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FPsyNetPersonaData                          Requester;                                        		// 0x00D8 (0x0064) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FOnlineFriend                               NewFriend;                                        		// 0x013C (0x0070) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETFRIENDREQUESTACCEPT_X ];

		return pClassPointer;
	};

	class URPC_PsyNetFriendRequestAccept_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
	void eventOnSuccess ( );
};

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x003C (0x00E4 - 0x00A8)
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETSENDINDIVIDUALCHAT_X ];

		return pClassPointer;
	};

	class URPC_PsyNetSendIndividualChat_X* SetMessage (struct FString& InMessage );
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_PsyNetRemoveFriend_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_PsyNetRemoveFriend_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETREMOVEFRIEND_X ];

		return pClassPointer;
	};

	class URPC_PsyNetRemoveFriend_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_PsyNetFriendRequestDecline_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_PsyNetFriendRequestDecline_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETFRIENDREQUESTDECLINE_X ];

		return pClassPointer;
	};

	class URPC_PsyNetFriendRequestDecline_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.__OnlinePlayerFriends_X__AcceptPsyNetFriendRequest
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerFriends_X__AcceptPsyNetFriendRequest : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERFRIENDS_X__ACCEPTPSYNETFRIENDREQUEST ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__AcceptPsyNetFriendRequest (class URPC_PsyNetFriendRequestAccept_X* RPC );
};

// Class ProjectX.RPC_PsyNetSendFriendRequest_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_PsyNetSendFriendRequest_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETSENDFRIENDREQUEST_X ];

		return pClassPointer;
	};

	class URPC_PsyNetSendFriendRequest_X* SetFriendRequestedID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadPendingFriendRequests
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerFriends_X__DownloadPendingFriendRequests : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERFRIENDS_X__DOWNLOADPENDINGFRIENDREQUESTS ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadPendingFriendRequests (class URPC_PsyNetGetPendingFriendRequests_X* R );
};

// Class ProjectX.RPC_PsyNetGetPendingFriendRequests_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_PsyNetGetPendingFriendRequests_X : public URPC_X
{
public:
	TArray< struct FPsyNetPersonaData >                FriendRequests;                                   		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FOnlineFriend >                     FriendsData;                                      		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETGETPENDINGFRIENDREQUESTS_X ];

		return pClassPointer;
	};

	void eventOnSuccess ( TArray< struct FOnlineFriend >* MapLocal_15414668401FCF17023FA39FD62A4F58 );
};

// Class ProjectX.__OnlinePlayerFriends_X__SearchForPlayerByName
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerFriends_X__SearchForPlayerByName : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERFRIENDS_X__SEARCHFORPLAYERBYNAME ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__SearchForPlayerByName (class URPC_PsyNetSearchPlayerByName_X* R );
};

// Class ProjectX.RPC_PsyNetSearchPlayerByName_X
// 0x0048 (0x00F0 - 0x00A8)
class URPC_PsyNetSearchPlayerByName_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriend >                     Players;                                          		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETSEARCHPLAYERBYNAME_X ];

		return pClassPointer;
	};

	class URPC_PsyNetSearchPlayerByName_X* SetSearchName (struct FString& InPlayerName );
	class URPC_PsyNetSearchPlayerByName_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RetryDelayer_X
// 0x0040 (0x0088 - 0x0048)
class URetryDelayer_X : public UComponent
{
public:
	TArray< float >                                    RetryDelays;                                      		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RepeatBackoff;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RepeatCycleCount;                                 		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRepeatUntilSuccess : 1;                          		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                FailedAttempts;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                FailedCycles;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __RepeatedDelegate__Delegate;                     		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __NotifyAbandondedDelegate__Delegate;             		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RETRYDELAYER_X ];

		return pClassPointer;
	};

	void Abandon ( );
	void ExecuteNextStep ( );
	void Cancel ( );
	void RetryOrAbandon ( );
	void Start (struct FScriptDelegate& ToRepeat, struct FScriptDelegate& Abandoned );
	void NotifyAbandondedDelegate ( );
	void RepeatedDelegate ( );
};

// Class ProjectX.RPC_PsyNetReadFriends_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_PsyNetReadFriends_X : public URPC_X
{
public:
	TArray< struct FPsyNetPersonaData >                Friends;                                          		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FOnlineFriend >                     FriendsData;                                      		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PSYNETREADFRIENDS_X ];

		return pClassPointer;
	};

	void eventOnSuccess ( TArray< struct FOnlineFriend >* MapLocal_AE62AE934F3C14B15AD59CB034FD9EF0 );
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerFriends_X__DownloadBlockedList : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERFRIENDS_X__DOWNLOADBLOCKEDLIST ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadBlockedList (class URPC_GetBlockList_X* R );
};

// Class ProjectX.RPC_GetBlockList_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_GetBlockList_X : public URPC_X
{
public:
	TArray< struct FBlockedListRequestData >           BlockedPlayerData;                                		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FOnlineFriend >                     FriendsData;                                      		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETBLOCKLIST_X ];

		return pClassPointer;
	};

	struct FOnlineFriend ConvertToBlockedOnlineFriend (struct FBlockedListRequestData& FromPlayer );
	void eventOnComplete ( TArray< struct FOnlineFriend >* MapLocal_E237241A4E4003C8F6793E80C3B6B514 );
};

// Class ProjectX.PostProcessManager_X
// 0x0050 (0x008C - 0x003C)
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UMaterialEffect_X* >                 ActiveEffects;                                    		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bNeedsReset : 1;                                  		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FPPEffectDefaults >                 EffectDefaults;                                   		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPPPersistentEffectDefaults >       PersistentEffectDefaults;                         		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPPChainInfo >                      ActiveChains;                                     		// 0x0068 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPPChainInfo >                      ChainDefaults;                                    		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPostProcessOverride >              PostProcessOverrides;                             		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_POSTPROCESSMANAGER_X ];

		return pClassPointer;
	};

	int GetNextPostProcessOverride ( );
	void TogglePostProcessSettings (struct FName& Id, unsigned long bEnabled );
	void SetMaterialEffectValue (struct FName& EffectName, float NewValue );
	void ResetEffectsToDefaults (unsigned long bRebuildPostProcessChains );
	void ToggleChainNamed (class UPostProcessChain* Chain, struct FName& ChainName, unsigned long bEnabled );
	void StopChainNamed (struct FName& ChainName );
	void StartChainNamed (class UPostProcessChain* Chain, struct FName& ChainName );
	bool RemovePostProcessChain (int OldChain );
	int AddPostProcessChain (class UPostProcessChain* NewChain, struct FName& ChainName );
	class UMaterialEffect_X* GetEffect (struct FName& EffectName );
	void TickPostProcess (float dt );
	void ToggleEffect (class UMaterialEffect_X* Effect, unsigned long bEnabled );
	void StopEffectNamed (struct FName& EffectName );
	void StartEffectNamed (struct FName& EffectName );
	void ToggleEffectNamed (struct FName& EffectName, unsigned long bEnabled );
	void PrintDebugInfo (class UDebugDrawer* Drawer );
	class UUberPostProcessEffect* GetUberPostProcessEffect ( );
	class UPostProcessChain* GetPlayerChain ( );
	void Exit ( );
	void Init (class APlayerController_X* NewOwner );
};

// Class ProjectX.PsyNetMetrics_X
// 0x0018 (0x006C - 0x0054)
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray< struct FServiceMetricsData >               ServiceData;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServiceErrorData >                 ErrorData;                                        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETMETRICS_X ];

		return pClassPointer;
	};

	void ServiceErrors (TArray< struct FServiceErrorData > Errors );
	void ServiceCalls (TArray< struct FServiceMetricsData > Services );
	void HandleMapChange (struct FString& M );
	void RecordServiceError (struct FString& Service, class UError* Error );
	void RecordServiceCall (struct FString& Service, float Latency );
};

// Class ProjectX.__RPCQueue_X__CreateBatch
// 0x0004 (0x0040 - 0x003C)
class U__RPCQueue_X__CreateBatch : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                            		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___RPCQUEUE_X__CREATEBATCH ];

		return pClassPointer;
	};

	void __RPCQueue_X__CreateBatch (class UPsyNetMessage_X* Response, class UError* Error );
};

// Class ProjectX.TAsyncResult__PsyNetMessage_X
// 0x0034 (0x00B8 - 0x0084)
class UTAsyncResult__PsyNetMessage_X : public UAsyncTask
{
public:
	class UPsyNetMessage_X*                            Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__PSYNETMESSAGE_X ];

		return pClassPointer;
	};

	class UTAsyncResult__PsyNetMessage_X* CreateResultError (class UError* InError );
	class UTAsyncResult__PsyNetMessage_X* CreateResult (class UPsyNetMessage_X* InResult );
	class UTAsyncResult__PsyNetMessage_X* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__PsyNetMessage_X* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__PsyNetMessage_X* eventSetResult (class UPsyNetMessage_X* InResult, class UError* InError );
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResult (struct FScriptDelegate& Callback );
	class UPsyNetMessage_X* ResultDelegate ( );
	void EventResultComplete (class UPsyNetMessage_X* OutResult, class UError* OutError );
	void EventResult (class UPsyNetMessage_X* OutResult );
};

// Class ProjectX.RPC_ReportCheater_X
// 0x003C (0x00E4 - 0x00A8)
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FString                                     Reason;                                           		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REPORTCHEATER_X ];

		return pClassPointer;
	};

	class URPC_ReportCheater_X* SetReason (struct FString& InReason );
	class URPC_ReportCheater_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RESERVATIONSSETTINGUPMATCHMESSAGE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__RPC_X__CreateTask
// 0x0010 (0x004C - 0x003C)
class U__RPC_X__CreateTask : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                       		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___RPC_X__CREATETASK ];

		return pClassPointer;
	};

	void __RPC_X__CreateTask (class UError* Err );
};

// Class ProjectX.RPC_Test_X
// 0x0108 (0x01B0 - 0x00A8)
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                         		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TestParamString;                                  		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRPCTestParam                               TestParamStruct;                                  		// 0x00C0 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRPCTestParam >                     TestParamStructs;                                 		// 0x0120 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TestResultLocalizedString;                        		// 0x012C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     TestResultString;                                 		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRPCTestParam                               TestResultStruct;                                 		// 0x0144 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRPCTestParam >                     TestResultStructs;                                		// 0x01A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_TEST_X ];

		return pClassPointer;
	};

	bool Check (unsigned long Assertion, struct FString& Message );
	bool CheckParamArraysMatch (TArray< struct FRPCTestParam > A, TArray< struct FRPCTestParam > B, struct FString& Message );
	bool CheckItemArraysMatch (TArray< struct FRPCTestItem > A, TArray< struct FRPCTestItem > B, struct FString& Message );
	bool CheckStringArraysMatch (TArray< struct FString > A, TArray< struct FString > B, struct FString& Message );
	bool CheckItemsMatch (struct FRPCTestItem& A, struct FRPCTestItem& B, struct FString& Message );
	bool CheckParamsMatch (struct FRPCTestParam& A, struct FRPCTestParam& B, struct FString& Message );
	bool ValidateResults ( );
	void eventOnComplete ( );
	TArray< struct FRPCTestParam > GetRandomTestParams ( );
	struct FRPCTestParam GetRandomTestParam ( );
	TArray< struct FRPCTestItem > GetRandomTestItems ( );
	struct FRPCTestItem GetRandomTestItem ( );
	void Init ( );
};

// Class ProjectX.TestsHelper_X
// 0x0000 (0x003C - 0x003C)
class UTestsHelper_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TESTSHELPER_X ];

		return pClassPointer;
	};

	struct FString GetRandomUppercaseString ( );
	TArray< struct FString > GetRandomStringArray ( );
	struct FString GetRandomString ( );
};

// Class ProjectX.MatchPlayerData_X
// 0x00B4 (0x00F0 - 0x003C)
class UMatchPlayerData_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PlayerName;                                       		// 0x006C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long long                                 ConnectTimestamp;                                 		// 0x0078 (0x0008) [0x0000000000000000]              
	unsigned long long                                 JoinTimestamp;                                    		// 0x0080 (0x0008) [0x0000000000000000]              
	unsigned long long                                 LeaveTimestamp;                                   		// 0x0088 (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x0090 (0x0030) [0x0000000000000000]              
	unsigned long                                      bAbandoned : 1;                                   		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMvp : 1;                                         		// 0x00C0 (0x0004) [0x0000000040000000] [0x00000002] ( CPF_EditInlineNotify )
	int                                                LastTeam;                                         		// 0x00C4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              SecondsPlayed;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                Goals;                                            		// 0x00CC (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Assists;                                          		// 0x00D0 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Saves;                                            		// 0x00D4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Shots;                                            		// 0x00D8 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Demolishes;                                       		// 0x00DC (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Score;                                            		// 0x00E0 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                OwnGoals;                                         		// 0x00E4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long long                                 ClubID;                                           		// 0x00E8 (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_MATCHPLAYERDATA_X ];

		return pClassPointer;
	};

};

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0030 (0x012C - 0x00FC)
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                   		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Velocity;                                         		// 0x0100 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            SpawnOwners;                                      		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            SpawnPoints;                                      		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      Spawned;                                          		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SEQACT_SPAWNARCHETYPE_X ];

		return pClassPointer;
	};

	void Init (class AActor* SpawnedActor );
	void eventActivated ( );
};

// Class ProjectX.RPC_TestPlayerID_X
// 0x0060 (0x0108 - 0x00A8)
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	struct FUniqueNetId                                ResponsePlayerID;                                 		// 0x00D8 (0x0030) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_TESTPLAYERID_X ];

		return pClassPointer;
	};

	void OnSuccess ( );
	void Init ( );
};

// Class ProjectX.__MatchRecorder_X__GetPlayerData
// 0x0030 (0x006C - 0x003C)
class U__MatchRecorder_X__GetPlayerData : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___MATCHRECORDER_X__GETPLAYERDATA ];

		return pClassPointer;
	};

	bool __MatchRecorder_X__GetPlayerData (class UMatchPlayerData_X* P );
};

// Class ProjectX.LoginResponse_X
// 0x0010 (0x004C - 0x003C)
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                    		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                BannedMinutes;                                    		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LOGINRESPONSE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.LocalCacheTests_X
// 0x000C (0x0048 - 0x003C)
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LOCALCACHETESTS_X ];

		return pClassPointer;
	};

	void HandleLocalCacheImported (class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void ImportTest ( );
	void HandleLocalCacheExported (class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void ToCacheAndBack (int RandomSeed );
};

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x0008 (0x0074 - 0x006C)
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	struct FName                                       SkelControlName;                                  		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SKELCONTROLBLENDTARGETCOMPONENT_X ];

		return pClassPointer;
	};

	void SetControlActiveInComponent (class USkeletalMeshComponent* SKC, unsigned long bActive );
	void SetControlActive (unsigned long bActive );
	void eventDetached ( );
	void eventAttached ( );
};

// Class ProjectX.AprilConfig_X
// 0x0034 (0x0080 - 0x004C)
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     StartTime;                                        		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     EndTime;                                          		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bChangeRankedIcons : 1;                           		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bChangePlaylists : 1;                             		// 0x0064 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              HatScale;                                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AntennaScale;                                     		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long long                                 StartTimeSeconds;                                 		// 0x0070 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long long                                 EndTimeSeconds;                                   		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_APRILCONFIG_X ];

		return pClassPointer;
	};

	bool IsActive ( );
	void Apply ( );
};

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0000 (0x01B8 - 0x01B8)
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CAMERASTATE_CAMACTORCINEMATIC_X ];

		return pClassPointer;
	};

	void UpdatePOV (float DeltaTime, struct FCameraOrientation* OutPOV );
	void EndCameraState ( );
};

// Class ProjectX.PsyNetService_Reservation_X
// 0x0050 (0x00AC - 0x005C)
class UPsyNetService_Reservation_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                      		// 0x005C (0x0050) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_RESERVATION_X ];

		return pClassPointer;
	};

	struct FCheckReservationData GetReservation ( );
};

// Class ProjectX.RPC_CheckReservation_X
// 0x0054 (0x00FC - 0x00A8)
class URPC_CheckReservation_X : public URPC_X
{
public:
	unsigned long                                      bIsHeartbeat : 1;                                 		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFoundReservation : 1;                            		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FCheckReservationResponse                   Reservation;                                      		// 0x00AC (0x0050) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CHECKRESERVATION_X ];

		return pClassPointer;
	};

	struct FCheckReservationData GetReservation ( );
	class URPC_CheckReservation_X* SetIsHeartbeat (unsigned long bInIsHeartbeat );
};

// Class ProjectX.RPC_ReservationHeartbeat_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_ReservationHeartbeat_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_RESERVATIONHEARTBEAT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_GetTrialData_X
// 0x0010 (0x00B8 - 0x00A8)
class URPC_GetTrialData_X : public URPC_X
{
public:
	int                                                MinutesRemaining;                                 		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AdditionalMinutesRemaining;                       		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long long                                 LastPlayedTime;                                   		// 0x00B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETTRIALDATA_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_UpdateTrialData_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_UpdateTrialData_X : public URPC_X
{
public:
	int                                                MinutesToRemove;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                AdditionalMinutesToRemove;                        		// 0x00AC (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATETRIALDATA_X ];

		return pClassPointer;
	};

	class URPC_UpdateTrialData_X* SetAdditionalMinutesToRemove (int InAdditionalMinutesToRemove );
	class URPC_UpdateTrialData_X* SetMinutesToRemove (int InMinutesToRemove );
};

// Class ProjectX.RPC_CheckKeys_X
// 0x000C (0x0134 - 0x0128)
class URPC_CheckKeys_X : public URPC_GetKeys_X
{
public:
	struct FString                                     KeyToCheck;                                       		// 0x0128 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CHECKKEYS_X ];

		return pClassPointer;
	};

	bool KeysMatch ( );
	class URPC_CheckKeys_X* SetKeyToCheck (struct FString& InKey );
};

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray< struct FGetGenericDataAllData >            GenericData;                                      		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETGENERICDATAALL_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x003C (0x00E4 - 0x00A8)
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	TArray< struct FString >                           Titles;                                           		// 0x00D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPLAYERTITLES_X ];

		return pClassPointer;
	};

	class URPC_GetPlayerTitles_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_GetStaticDataURL_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetStaticDataURL_X : public URPC_X
{
public:
	struct FString                                     URL;                                              		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETSTATICDATAURL_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_ReportLowFPS_X
// 0x002C (0x00D4 - 0x00A8)
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                               		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MachineId;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned long long                                 ServerID;                                         		// 0x00B8 (0x0008) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumHumans;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                NumBots;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REPORTLOWFPS_X ];

		return pClassPointer;
	};

	class URPC_ReportLowFPS_X* SetNumBots (int InNumBots );
	class URPC_ReportLowFPS_X* SetNumHumans (int InNumHumans );
	class URPC_ReportLowFPS_X* SetServerName (struct FString& InServerName );
	class URPC_ReportLowFPS_X* SetServerID (unsigned long long InServerID );
	class URPC_ReportLowFPS_X* SetMachineID (int InMachineID );
	class URPC_ReportLowFPS_X* SetIP (struct FString& InIP );
};

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              Mu;                                               		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              Sigma;                                            		// 0x00B0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETPLAYERSKILL_X ];

		return pClassPointer;
	};

	class URPC_SetPlayerSkill_X* SetSigma (float InSigma );
	class URPC_SetPlayerSkill_X* SetMu (float InMu );
	class URPC_SetPlayerSkill_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                Tier;                                             		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                MatchesPlayed;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETPLAYERSKILLTIER_X ];

		return pClassPointer;
	};

	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed (int InMatchesPlayed );
	class URPC_SetPlayerSkillTier_X* SetTier (int InTier );
	class URPC_SetPlayerSkillTier_X* SetPlaylist (int InPlaylist );
};

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerPermissionsReponse >         PlayerPermissions;                                		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPLAYERPERMISSIONS_X ];

		return pClassPointer;
	};

	struct FPlayerPermissionsList __RPC_GetPlayerPermissions_X__GetPlayerPermissions (struct FUniqueNetId& P );
	bool GetPermissionFromString (struct FName& PermissionName, unsigned char* Permission );
	TArray< unsigned char > ConvertPermissions (TArray< struct FName > PermissionNames );
	struct FPlayerPermissionsList ConvertPlayerPermissions (struct FUniqueNetId& PlayerID );
	TArray< struct FPlayerPermissionsList > GetPlayerPermissions ( TArray< struct FPlayerPermissionsList >* MapLocal_8A5C715344689D0AA4DED3834A229568 );
	class URPC_GetPlayerPermissions_X* SetPlayers ( TArray< struct FUniqueNetId >* InPlayerIDs );
};

// Class ProjectX.RPC_ClientGetStaticDataURL_X
// 0x0018 (0x00CC - 0x00B4)
class URPC_ClientGetStaticDataURL_X : public URPC_GetStaticDataURL_X
{
public:
	struct FString                                     Platform;                                         		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Language;                                         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CLIENTGETSTATICDATAURL_X ];

		return pClassPointer;
	};

	class URPC_ClientGetStaticDataURL_X* Init (struct FString& InPlatform, struct FString& InLanguage );
};

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (0x00AC - 0x00A8)
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x00A8 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_ADDPLAYERTOROLE_X ];

		return pClassPointer;
	};

	class URPC_AddPlayerToRole_X* SetRole (unsigned char Role );
};

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (0x00AC - 0x00A8)
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x00A8 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REMOVEPLAYERFROMROLE_X ];

		return pClassPointer;
	};

	class URPC_RemovePlayerFromRole_X* SetRole (unsigned char Role );
};

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                SeasonLevelWins;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETSEASONREWARD_X ];

		return pClassPointer;
	};

	class URPC_SetSeasonReward_X* SetReward (int Level, int Wins );
};

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate
// 0x0014 (0x0050 - 0x003C)
class U__AdHocBrowser_X__CreateErrorDelegate : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             ErrorDelegate;                                    		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ADHOCBROWSER_X__CREATEERRORDELEGATE ];

		return pClassPointer;
	};

	void __AdHocBrowser_X__CreateErrorDelegate ( );
};

// Class ProjectX.AdHocBrowser_X
// 0x0030 (0x006C - 0x003C)
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FAdHocAccessPointInfo >             AdHocNodesOnNetwork;                              		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ULanServerRecord_X* >                SearchResults;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAdHocAccessPointInfo >             AdHocAccessPointsAvailable;                       		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADHOCBROWSER_X ];

		return pClassPointer;
	};

	void __AdHocBrowser_X__GetServerList ( );
	void HandleSearchTimeout ( );
	void AdHocHandleOnNetworkChanged (TArray< struct FAdHocAccessPointInfo > Ahapis );
	int FindIndexFromServerID (struct FString& InServerID );
	class UAsyncTask* JoinServer (struct FString& ServerID, struct FString& Options );
	void CreateErrorDelegate (class UAsyncTask* Task );
	class UTAsyncResult__array_LanServerRecord_X* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData (struct FString& MetaData );
	class UAsyncTask* CreateServer (struct FString& MetaData );
};

// Class ProjectX.__AdHocBrowser_X__CreateServer
// 0x0020 (0x005C - 0x003C)
class U__AdHocBrowser_X__CreateServer : public UObject
{
public:
	struct FString                                     MetaData;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAsyncTask*                                  Task;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             ApcDelegate;                                      		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ADHOCBROWSER_X__CREATESERVER ];

		return pClassPointer;
	};

	void __AdHocBrowser_X__CreateServer ( );
};

// Class ProjectX.__AdHocBrowser_X__JoinServer
// 0x001C (0x0058 - 0x003C)
class U__AdHocBrowser_X__JoinServer : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     ServerID;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ADHOCBROWSER_X__JOINSERVER ];

		return pClassPointer;
	};

	void __AdHocBrowser_X__JoinServer ( );
};

// Class ProjectX.__AdHocInterface_X__DisableAdHoc
// 0x0014 (0x0050 - 0x003C)
class U__AdHocInterface_X__DisableAdHoc : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DestroyedDelegate;                                		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ADHOCINTERFACE_X__DISABLEADHOC ];

		return pClassPointer;
	};

	void __AdHocInterface_X__DisableAdHoc ( );
};

// Class ProjectX.AdHocInterface_X
// 0x0010 (0x004C - 0x003C)
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ADHOCINTERFACE_X ];

		return pClassPointer;
	};

	void CreateErrorDelegate (class UAsyncTask* Task );
	class UAsyncTask* DisableAdHoc ( );
	void HandleGameInfoSpawned (class AGameInfo_X* InGameInfo );
	class UAsyncTask* EnableAdHoc ( );
};

// Class ProjectX.__AdHocInterface_X__EnableAdHoc
// 0x0014 (0x0050 - 0x003C)
class U__AdHocInterface_X__EnableAdHoc : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             InitDelegate;                                     		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ADHOCINTERFACE_X__ENABLEADHOC ];

		return pClassPointer;
	};

	void __AdHocInterface_X__EnableAdHoc ( );
};

// Class ProjectX.__PartyMessageQueue_X__SendMessage
// 0x0004 (0x0040 - 0x003C)
class U__PartyMessageQueue_X__SendMessage : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTYMESSAGEQUEUE_X__SENDMESSAGE ];

		return pClassPointer;
	};

	void __PartyMessageQueue_X__SendMessage (class UError* _ );
};

// Class ProjectX.PartyMessageQueue_X
// 0x0030 (0x0078 - 0x0048)
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray< struct FPendingMessage >                   Pending;                                          		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UAsyncTask* >                        CurrentBatch;                                     		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bPaused : 1;                                      		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BatchDelayTime;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;           		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGEQUEUE_X ];

		return pClassPointer;
	};

	void __PartyMessageQueue_X__CancelAll (class UAsyncTask* Task );
	void HandleTaskComplete (class UAsyncTask* Task );
	class UAsyncTask* SendMessage (struct FUniqueLobbyId& LobbyId, struct FString& Message );
	void SendBatch ( );
	void SendBatchTimer ( );
	void QueueBatch ( );
	void CancelAll ( );
	void QueueMessage (struct FUniqueLobbyId& LobbyId, struct FString& Message );
	void SetPaused (unsigned long bPause );
	class UAsyncTask* SendMessageServiceDelegate (struct FUniqueLobbyId& LobbyId, struct FString& Message );
};

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetConnection_X__ProcessServiceCall : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETCONNECTION_X__PROCESSSERVICECALL ];

		return pClassPointer;
	};

	void __PsyNetConnection_X__ProcessServiceCall (class UError* _ );
};

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage
// 0x0010 (0x004C - 0x003C)
class U__PsyNetMessengerHttp_X__SendMessage : public UObject
{
public:
	struct FString                                     PsyRequestID;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAsyncTask*                                  Task;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETMESSENGERHTTP_X__SENDMESSAGE ];

		return pClassPointer;
	};

	void __PsyNetMessengerHttp_X__SendMessage (class UWebRequest_X* Request );
};

// Class ProjectX.__PsyNetRequestQue_X__SendRequest
// 0x0008 (0x0044 - 0x003C)
class U__PsyNetRequestQue_X__SendRequest : public UObject
{
public:
	struct FName                                       RequestID;                                        		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETREQUESTQUE_X__SENDREQUEST ];

		return pClassPointer;
	};

	void __PsyNetRequestQue_X__SendRequest ( );
};

// Class ProjectX.PsyNetRequestQue_X
// 0x0020 (0x005C - 0x003C)
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPsyNetRequest >                    Requests;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                  		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETREQUESTQUE_X ];

		return pClassPointer;
	};

	void FailAllPending (class UError* Error );
	void TimeoutRequests ( );
	bool ProcessResponseMessage (class UPsyNetMessage_X* Message );
	void RemoveRequest (struct FName& RequestID );
	void SetRequestComplete (struct FName& RequestID, class UPsyNetMessage_X* Response, class UError* Error );
	class UTAsyncResult__PsyNetMessage_X* eventSendRequest (class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessageDelegate (class UPsyNetMessage_X* Message );
};

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel
// 0x000C (0x0048 - 0x003C)
class U__PsyNetServiceProvider_X__CreateChannel : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETSERVICEPROVIDER_X__CREATECHANNEL ];

		return pClassPointer;
	};

	bool __PsyNetServiceProvider_X__CreateChannel (class UPsyNetChannel_X* C );
};

// Class ProjectX.PsyNetChannel_X
// 0x0038 (0x0074 - 0x003C)
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOpen : 1;                                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReceivedFirstMessage : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClosed : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTimedOut : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                NextMessageID;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              WaitForMessageTime;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingChannelService >            ServiceQueue;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0060 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETCHANNEL_X ];

		return pClassPointer;
	};

	struct FString GetDebugName ( );
	void Close ( );
	void Timeout ( );
	void ClearTimeout ( );
	void UpdateTimeout ( );
	void ExecuteService (class UPsyNetClientService_X* Service );
	void ExecuteNext ( );
	class UAsyncTask* CreatePendingService (class UPsyNetClientService_X* Service, int MessageId );
	class UAsyncTask* QueueServiceCall (class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message );
	void Open ( );
	void Unsubscribe (struct FScriptDelegate& Callback );
	void Subscribe (class UClass* ServiceClass, struct FScriptDelegate& Callback );
	void Init (struct FString& InChannelName );
	void EventClosed (class UPsyNetChannel_X* Channel );
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteRequest : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETSERVICEPROVIDER_X__EXECUTEREQUEST ];

		return pClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteRequest (class UPsyNetClientService_X* Result, class UError* Error );
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage
// 0x0014 (0x0050 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteServiceMessage : public UObject
{
public:
	struct FString                                     ServiceName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetClientService_X*                      Service;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTAsyncResult__PsyNetClientService_X*        Task;                                             		// 0x004C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PSYNETSERVICEPROVIDER_X__EXECUTESERVICEMESSAGE ];

		return pClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteServiceMessage (class UError* Err );
};

// Class ProjectX.TAsyncResult__PsyNetClientService_X
// 0x0034 (0x00B8 - 0x0084)
class UTAsyncResult__PsyNetClientService_X : public UAsyncTask
{
public:
	class UPsyNetClientService_X*                      Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__PSYNETCLIENTSERVICE_X ];

		return pClassPointer;
	};

	class UTAsyncResult__PsyNetClientService_X* CreateResultError (class UError* InError );
	class UTAsyncResult__PsyNetClientService_X* CreateResult (class UPsyNetClientService_X* InResult );
	class UTAsyncResult__PsyNetClientService_X* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__PsyNetClientService_X* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__PsyNetClientService_X* eventSetResult (class UPsyNetClientService_X* InResult, class UError* InError );
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResult (struct FScriptDelegate& Callback );
	class UPsyNetClientService_X* ResultDelegate ( );
	void EventResultComplete (class UPsyNetClientService_X* OutResult, class UError* OutError );
	void EventResult (class UPsyNetClientService_X* OutResult );
};

// Class ProjectX.__TaskGate_X__Add
// 0x0004 (0x0040 - 0x003C)
class U__TaskGate_X__Add : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASKGATE_X__ADD ];

		return pClassPointer;
	};

	void __TaskGate_X__Add ( );
};

// Class ProjectX.TaskGate_X
// 0x0010 (0x004C - 0x003C)
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                        		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UAsyncTask* >                        Tasks;                                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASKGATE_X ];

		return pClassPointer;
	};

	class UAsyncTask* AddWithTimeout (float TimeoutSeconds, class UErrorType* TimeoutError, struct FString& ErrorMessage );
	class UAsyncTask* Add ( );
	void CompleteTasks ( );
	void SetOpen (unsigned long bIsOpen );
};

// Class ProjectX.__TaskGate_X__AddWithTimeout
// 0x0024 (0x0060 - 0x003C)
class U__TaskGate_X__AddWithTimeout : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	class UErrorType*                                  TimeoutError;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     ErrorMessage;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             TimeoutDelegate;                                  		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASKGATE_X__ADDWITHTIMEOUT ];

		return pClassPointer;
	};

	void __TaskGate_X__AddWithTimeout ( );
};

// Class ProjectX.TAsyncResult__array_LanServerRecord_X
// 0x003C (0x00C0 - 0x0084)
class UTAsyncResult__array_LanServerRecord_X : public UAsyncTask
{
public:
	TArray< class ULanServerRecord_X* >                Result;                                           		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__ARRAY_LANSERVERRECORD_X ];

		return pClassPointer;
	};

	class UTAsyncResult__array_LanServerRecord_X* CreateResultError (class UError* InError );
	class UTAsyncResult__array_LanServerRecord_X* CreateResult (TArray< class ULanServerRecord_X* > InResult );
	class UTAsyncResult__array_LanServerRecord_X* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__array_LanServerRecord_X* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__array_LanServerRecord_X* eventSetResult (TArray< class ULanServerRecord_X* > InResult, class UError* InError );
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResult (struct FScriptDelegate& Callback );
	TArray< class ULanServerRecord_X* > ResultDelegate ( );
	void EventResultComplete (TArray< class ULanServerRecord_X* > OutResult, class UError* OutError );
	void EventResult (TArray< class ULanServerRecord_X* > OutResult );
};

// Class ProjectX.LanServerRecord_X
// 0x0018 (0x0054 - 0x003C)
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerID;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MetaData;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LANSERVERRECORD_X ];

		return pClassPointer;
	};

};

// Class ProjectX.BlogTile_X
// 0x0070 (0x00AC - 0x003C)
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x003C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     DescriptionHeader;                                		// 0x0048 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0054 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     WebURL;                                           		// 0x0060 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     CarName;                                          		// 0x006C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     ImageURL;                                         		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TileStartTimeUTC;                                 		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LiveStartTimeUTC;                                 		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 TileStartTimeSecondsUTC;                          		// 0x009C (0x0008) [0x0000000000000000]              
	unsigned long long                                 LiveStartTimeSecondsUTC;                          		// 0x00A4 (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_BLOGTILE_X ];

		return pClassPointer;
	};

	void UTCtoEpoch ( );
	struct FString GetTileID ( );
};

// Class ProjectX.CountTrigger_X
// 0x0018 (0x0060 - 0x0048)
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventTriggered__Delegate;                       		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_COUNTTRIGGER_X ];

		return pClassPointer;
	};

	void Reset ( );
	void Increment ( );
	void EventTriggered (class UCountTrigger_X* Trigger );
};

// Class ProjectX.RPC_PartyBase_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYBASE_X ];

		return pClassPointer;
	};

	class URPC_PartyBase_X* SetPartyIdStr (struct FString& InPartyId );
	class URPC_PartyBase_X* SetPartyId (struct FUniqueLobbyId& InLobbyId );
};

// Class ProjectX.RPC_PartyMessage_X
// 0x000C (0x00C0 - 0x00B4)
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYMESSAGE_X ];

		return pClassPointer;
	};

	class URPC_PartyMessage_X* SetMessage (struct FString& InMessage );
};

// Class ProjectX.PartySequence_CreateParty_X
// 0x0014 (0x0050 - 0x003C)
class UPartySequence_CreateParty_X : public UObject
{
public:
	class URPC_PartyCreate_X*                          PendingRPC;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                    		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_CREATEPARTY_X ];

		return pClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty (class URPC_X* _ );
	void HandlePlatformPartyCreated (unsigned long bWasSuccessful, struct FString& Error, struct FUniqueLobbyId* PlatformPartyID );
	class UAsyncTask* CreateParty (int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings );
	void EventPartyCreated (struct FUniqueLobbyId& PsyNetPartyId, TArray< struct FPsyNetPartyMember >* Members );
};

// Class ProjectX.PartySequence_JoinParty_X
// 0x0010 (0x004C - 0x003C)
class UPartySequence_JoinParty_X : public UObject
{
public:
	struct FScriptDelegate                             __EventJoinedParty__Delegate;                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_JOINPARTY_X ];

		return pClassPointer;
	};

	void HandlePlatformPartyCreated (unsigned long bWasSuccessful, struct FString& Error, struct FUniqueLobbyId* PlatformPartyID );
	void HandleJoinLobby (unsigned long bWasSuccessful, struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID );
	void HandleGetPlatformPartyResponseMessage (class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformPartyResponse_X* Message, struct FUniqueLobbyId* StructInitializer_D51EEE044EA3E212455D2281A91E523D );
	void HandleGetPlatformPartyMessage (class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformParty_X* Message, class UPartyMessage_GetPlatformPartyResponse_X** ObjectInitializer_C8AC4FB849BCB121BBC7D687949C8660 );
	void HandlePsyNetLobbyJoinSucceeded (class URPC_PartyJoin_X* RpcPartyJoin );
	class UAsyncTask* JoinLobbyWithKey (struct FString& PsyNetPartyId, struct FString& JoinKey );
	class UAsyncTask* JoinLobby ( struct FUniqueLobbyId* LobbyId );
	void Init ( );
	void EventJoinedParty (struct FUniqueLobbyId& PsyNetPartyId, TArray< struct FPsyNetPartyMember >* Members );
};

// Class ProjectX.PartySequence_LeaveParty_X
// 0x0000 (0x003C - 0x003C)
class UPartySequence_LeaveParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_LEAVEPARTY_X ];

		return pClassPointer;
	};

	void LeaveParty ( struct FUniqueLobbyId* LobbyId );
};

// Class ProjectX.RPC_PartyChat_X
// 0x000C (0x00C0 - 0x00B4)
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYCHAT_X ];

		return pClassPointer;
	};

	class URPC_PartyChat_X* SetText (struct FString& InText );
};

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x008C (0x0140 - 0x00B4)
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                       		// 0x00B4 (0x0030) [0x0000000000000000]              
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00E4 (0x0050) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x0134 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYCHANGEOWNER_X ];

		return pClassPointer;
	};

	class URPC_PartyChangeOwner_X* SetNewOwnerId (struct FUniqueNetId& InNewOwnerId );
};

// Class ProjectX.PartySequence_InviteToParty_X
// 0x0000 (0x003C - 0x003C)
class UPartySequence_InviteToParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYSEQUENCE_INVITETOPARTY_X ];

		return pClassPointer;
	};

	void __PartySequence_InviteToParty_X__InviteToParty (class URPC_PartySendInvite_X* RPC );
	bool InviteToParty ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
};

// Class ProjectX.RPC_PartyKickMember_X
// 0x000D (0x00C1 - 0x00B4)
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray< struct FString >                           Members;                                          		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      KickReason;                                       		// 0x00C0 (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYKICKMEMBER_X ];

		return pClassPointer;
	};

	class URPC_PartyKickMember_X* SetReason (unsigned char InReason );
	class URPC_PartyKickMember_X* AddMember (struct FString& InMemberId );
};

// Class ProjectX.RPC_PartyInfo_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray< struct FPartyInvite >                      Invites;                                          		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Member;                                           		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYINFO_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__Parties_X__HandlePartyInfoSuccess
// 0x0004 (0x0040 - 0x003C)
class U__Parties_X__HandlePartyInfoSuccess : public UObject
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                    		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTIES_X__HANDLEPARTYINFOSUCCESS ];

		return pClassPointer;
	};

	bool __Parties_X__HandlePartyInfoSuccess (struct FPartyInvite& Invite );
};

// Class ProjectX.PsyNetService_Party_X
// 0x0094 (0x00F0 - 0x005C)
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Content;                                          		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                FromUserId;                                       		// 0x0080 (0x0030) [0x0000000000000000]              
	struct FString                                     FromUserName;                                     		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CreatedAt;                                        		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x00C0 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYUSERINVITED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYSYSTEM_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYUSERJOINED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x00AD (0x0109 - 0x005C)
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                Content;                                          		// 0x0074 (0x0030) [0x0000000000000000]              
	struct FUniqueNetId                                FromUserId;                                       		// 0x00A4 (0x0030) [0x0000000000000000]              
	int                                                CreatedAt;                                        		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x00D8 (0x0030) [0x0000000000000000]              
	unsigned char                                      KickReason;                                       		// 0x0108 (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYUSERKICKED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYUSERLEFT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYUSERDISCONNECTED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x00AC (0x0108 - 0x005C)
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                Content;                                          		// 0x0074 (0x0030) [0x0000000000000000]              
	struct FUniqueNetId                                FromUserId;                                       		// 0x00A4 (0x0030) [0x0000000000000000]              
	int                                                CreatedAt;                                        		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x00D8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYOWNERCHANGED_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (0x00F0 - 0x00F0)
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_PARTYCHAT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PerConMetrics_X
// 0x001C (0x0070 - 0x0054)
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                            		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ConnectFailCount;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                DisconnectCount;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                RPCErrorCount;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                InvalidMessageCount;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bConnected : 1;                                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                        		// 0x006C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PERCONMETRICS_X ];

		return pClassPointer;
	};

	void ServiceFail (struct FUniqueNetId& PlayerID, int Count, struct FString& Service, struct FName& Error );
	void InvalidMessage (struct FUniqueNetId& PlayerID, int Count, struct FString& Substring );
	void Disconnected (struct FUniqueNetId& PlayerID, int Count, int Code, struct FString& Reason, float ElapsedSeconds );
	void Connected (struct FUniqueNetId& PlayerID, float ElapsedSeconds );
	void ConnectFail (struct FUniqueNetId& PlayerID, int Count, int Code, struct FString& Reason, float ElapsedSeconds );
	void StartConnectFail (struct FUniqueNetId& PlayerID, int Count );
	void StartConnect (struct FUniqueNetId& PlayerID );
	void Broken (struct FUniqueNetId& PlayerID, struct FString& Reason );
	void Disabled (struct FUniqueNetId& PlayerID );
	void Enabled (struct FUniqueNetId& PlayerID );
	void HandleRPCError (class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error );
	void HandleInvalidMessage (class UPsyNetMessengerWebSocket_X* InMessenger, struct FString& Substring );
	void HandleDisconnected (class UPsyNetMessengerWebSocket_X* Socket, int Code, struct FString& Reason );
	void HandleConnected (class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStartConnectFail (class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStartConnect (class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStatusChanged (class UPerCon_X* PerCon );
	struct FUniqueNetId GetPlayerID ( struct FUniqueNetId* StructInitializer_F0F8276B411722B51A7CDEAA2A47FF60 );
	void SetMessenger (class UPsyNetMessengerWebSocket_X* PerConMessenger );
	void eventConstruct ( );
};

// Class ProjectX.PerConMonitor_X
// 0x0024 (0x0060 - 0x003C)
class UPerConMonitor_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	class UPerCon_X*                                   PerCon;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	class UPsyNetMessengerWebSocket_X*                 Messenger;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	class URPCQueue_X*                                 RPCQueue;                                         		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                Disconnections;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                InvalidMessages;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< float >                                    ErrorTimestamps;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PERCONMONITOR_X ];

		return pClassPointer;
	};

	bool __PerConMonitor_X__HandleBatchError (float RemoveTime );
	bool IsPerConRelevantError (class UError* Error );
	void HandleBatchError (class URPCQueue_X* InQueue, class UError* Error, TArray< float >* FilterLocal_3B4C512748B1CA2C9D38C5AA893A13DD );
	void HandleInvalidMessage (class UPsyNetMessengerWebSocket_X* InMessenger, struct FString& Substring );
	void HandleDisconnected (class UPsyNetMessengerWebSocket_X* InMessenger, int Code, struct FString& Reason );
	void HandleConnectFail (class UPsyNetMessengerWebSocket_X* InMessenger );
	void eventDispose ( );
	void SetMessenger (class UPsyNetMessengerWebSocket_X* InMessenger );
	void Init (class UPerCon_X* InPerCon, class URPCQueue_X* InRpcQueue );
};

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (0x005C - 0x005C)
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_DUPLICATELOGIN_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (0x0064 - 0x005C)
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                OnlineHours;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_AAS_X ];

		return pClassPointer;
	};

	int GetOnlineHours ( );
};

// Class ProjectX.PsyNetService_Echo_X
// 0x0018 (0x0074 - 0x005C)
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                    		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ResponseString;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYNETSERVICE_ECHO_X ];

		return pClassPointer;
	};

	void Execute ( );
};

// Class ProjectX.RPC_PartyChatMessage_X
// 0x000C (0x00C0 - 0x00B4)
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYCHATMESSAGE_X ];

		return pClassPointer;
	};

	class URPC_PartyChatMessage_X* SetMessage (struct FString& InMessage );
};

// Class ProjectX.RPC_PartyCreate_X
// 0x0060 (0x0108 - 0x00A8)
class URPC_PartyCreate_X : public URPC_X
{
public:
	unsigned long                                      bForcePartyonix : 1;                              		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00AC (0x0050) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x00FC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYCREATE_X ];

		return pClassPointer;
	};

	class URPC_PartyCreate_X* SetRequirePsyNetParty (unsigned long bValue );
};

// Class ProjectX.RPC_PartyJoin_X
// 0x0068 (0x011C - 0x00B4)
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FString                                     JoinID;                                           		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00C0 (0x0050) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYJOIN_X ];

		return pClassPointer;
	};

	class URPC_PartyBase_X* SetJoinKey (struct FString& InJoinKey );
};

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (0x00B4 - 0x00B4)
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYLEAVE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.UdpLanServer_X
// 0x0010 (0x004C - 0x003C)
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                           		// 0x003C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     MetaData;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_UDPLANSERVER_X ];

		return pClassPointer;
	};

	void HandleLanQueryMessage (class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query );
	void Destroy ( );
	class UAsyncTask* SetServerMetaData (struct FString& InMetaData );
	void eventConstruct ( );
};

// Class ProjectX.SetPlayerStorageResult_X
// 0x000C (0x0048 - 0x003C)
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray< struct FSetPlayerStorageResultItem >       Items;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SETPLAYERSTORAGERESULT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerStorageQueue_X__MapResultItem : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                             		// 0x003C (0x0010) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERSTORAGEQUEUE_X__MAPRESULTITEM ];

		return pClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__MapResultItem (struct FPendingStorage& P );
};

// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x005C (0x0098 - 0x003C)
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingStorage >                   QueuedObjects;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPendingStorage >                   PendingObjects;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DefaultStorageMaxSizeBytes;                       		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FStorageMaxSize >                   StorageMaxSizes;                                  		// 0x005C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;                  		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventOutOfSync__Delegate;                       		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventStorageError__Delegate;                    		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERSTORAGEQUEUE_X ];

		return pClassPointer;
	};

	void __OnlinePlayerStorageQueue_X__Construct (struct FString& _ );
	void __OnlinePlayerStorageQueue_X__SendBatch_Internal (struct FPendingStorage& P );
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess (struct FPendingStorage& P );
	void __OnlinePlayerStorageQueue_X__HandleStorageError (struct FPendingStorage& P );
	int GetStorageMaxSizeBytes (struct FName& Category );
	void HandleStorageError (class UError* Error, TArray< struct FPendingStorage >* FilterLocal_B12330F543BE565ECA7E13AAEE35533A );
	struct FPendingStorage MapResultItem (struct FSetPlayerStorageResultItem& Item, struct FPendingStorage* StructInitializer_CFA00AE94246FD5955A713B162C74DD8 );
	void HandleStorageSuccess (class URPC_PlayerStorageSet_X* RPC, TArray< struct FSetPlayerStorageResultItem >* FilterLocal_FA81C8B446DA44F0875A44AE72CFB69F, TArray< struct FSetPlayerStorageResultItem >* DifferenceLocal_AA47DACE4ABAD8570F003CA35FC723EF, TArray< struct FPendingStorage >* MapLocal_CE5230EF40C671BDD5FE43AEF3AB9F72, TArray< struct FSetPlayerStorageRequestItem >* FilterLocal_5E1B920B46E99AD1382735AEA1981159, TArray< struct FPendingStorage >* DifferenceLocal_A8EE6F4D413358E5B8934C83334AF345, TArray< struct FPendingStorage >* MapLocal_F25B0A3441E28451D6A26C9E5EBD764E );
	void PartitionStorageRequests ( TArray< struct FPendingStorage >* OutQueue, TArray< struct FSetPlayerStorageRequestItem >* OutOfDate, TArray< struct FPendingStorage >* UpToDate, struct FSetPlayerStorageRequestItem* StructInitializer_D3114B68459864ADCD94E3B2298CB18F );
	void SendBatch_Internal ( TArray< struct FPendingStorage >* OutQueue );
	void SendBatch ( TArray< struct FPendingStorage >* UnionLocal_0EB24CCF4E030A16F4CF0A9DF31D50DB );
	void QueueBatch ( );
	void SendImmediate (class UObject* DataObj, int ClientTick, TArray< struct FPendingStorage >* ArrayInitializer_7AE8516D4776E1B7DEAE6DBD1B8B9807, TArray< struct FPendingStorage >* UnionLocal_11C23B874831C49F7D3DC98EB820ECF9 );
	void QueueObject (class UObject* DataObj, int ClientTick );
	void HandleLocalPlayerLeave (class ULocalPlayer_X* OldPlayer );
	void eventConstruct ( );
	void EventStorageError (class UError* Error );
	void EventOutOfSync ( TArray< struct FPendingStorage >* FailedObjects );
	void EventStorageSuccess (class UObject* Data, int ServerTick );
};

// Class ProjectX.DynamicValue_X
// 0x0020 (0x005C - 0x003C)
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClampMax : 1;                                    		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bClampMin : 1;                                    		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UDynamicValueModifier_X* >           Modifiers;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CachedValue;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DYNAMICVALUE_X ];

		return pClassPointer;
	};

	void PrintDebugInfo (class UDebugDrawer* Drawer );
	struct FString GetDebugValue ( );
	float GetValue ( );
	void Tick (float DeltaTime );
	void RemoveAllModifiers ( );
	void RemoveModifier (class UDynamicValueModifier_X* Mod );
	class UDynamicValueModifier_X* AddModifier (class UDynamicValueModifier_X* Mod );
	void eventConstruct ( );
};

// Class ProjectX.DynamicValueModifier_X
// 0x0014 (0x0050 - 0x003C)
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DYNAMICVALUEMODIFIER_X ];

		return pClassPointer;
	};

	struct FString GetDebugValue ( );
	struct FString GetDebugString ( );
	bool Expired ( );
	float GetValue ( );
	void Tick (float DeltaTime );
};

// Class ProjectX.DynamicValueModifierCurve_X
// 0x0020 (0x0070 - 0x0050)
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                            		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                     		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DYNAMICVALUEMODIFIERCURVE_X ];

		return pClassPointer;
	};

	struct FString GetDebugValue ( );
	float GetValue ( );
	float GetValueDelegate ( );
};

// Class ProjectX.DynamicValueModifierDuration_X
// 0x001C (0x006C - 0x0050)
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           CurveValue;                                       		// 0x0058 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseCurve : 1;                                    		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_DYNAMICVALUEMODIFIERDURATION_X ];

		return pClassPointer;
	};

	struct FString GetDebugString ( );
	float GetValue ( );
	bool Expired ( );
	void Tick (float DeltaTime );
};

// Class ProjectX.GetPlayerStorageResult_X
// 0x000C (0x0048 - 0x003C)
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray< class UGetPlayerStorageResultItem_X* >     Items;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GETPLAYERSTORAGERESULT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.GetPlayerStorageResultItem_X
// 0x0020 (0x005C - 0x003C)
class UGetPlayerStorageResultItem_X : public UObject
{
public:
	struct FName                                       Category;                                         		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                Tick;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Checksum;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bChecksumMatch : 1;                               		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_GETPLAYERSTORAGERESULTITEM_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x000C (0x0048 - 0x003C)
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray< struct UOnlinePlayerStorageManifest_X_FStorageMetadata > MetaData;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERSTORAGEMANIFEST_X ];

		return pClassPointer;
	};

	int GetChecksum (struct FName& Category );
	void SetChecksum (struct FName& Category, int Checksum );
	int GetIndex (struct FName& Category );
};

// Class ProjectX.OnlinePlayerStorageSync_X
// 0x0010 (0x004C - 0x003C)
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERSTORAGESYNC_X ];

		return pClassPointer;
	};

	void __OnlinePlayerStorageSync_X__HandleSyncSuccess (struct FOnlinePlayerStorageSyncResult& Result );
	class UObject* InstanceSyncData (class UObject* LocalObject, TArray< unsigned char >* Bytes );
	void HandleSyncSuccess (class URPC_PlayerStorageGet_X* RPC, class UAsyncTask* ResponseTask, struct FOnlinePlayerStorageSyncResult* StructInitializer_E03207EE47104671DE2CAFB7E7E73F75 );
	int CrcObject (class UObject* Data );
	struct FGetPlayerStorageRequestItem MapRequestItem (struct FOnlinePlayerStorageSyncRequest& Request, struct FGetPlayerStorageRequestItem* StructInitializer_B6A8987643249C5AAC96C181E776959E );
	class UAsyncTask* SyncObjects ( TArray< struct FOnlinePlayerStorageSyncRequest >* Requests, class URPC_PlayerStorageGet_X** ObjectInitializer_A458F2F14E350919D44118B27D847B48, TArray< struct FGetPlayerStorageRequestItem >* MapLocal_749D4AD74EE00B8893C2F6849E5CEADA );
	void EventSyncSuccess ( struct FOnlinePlayerStorageSyncResult* Result );
};

// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0004 (0x0050 - 0x004C)
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                                  		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINEPLAYERSTORAGECONFIG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.SaveLock_X
// 0x0004 (0x0040 - 0x003C)
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                        		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SAVELOCK_X ];

		return pClassPointer;
	};

	bool StaticAllowSave ( );
	bool AllowSave ( );
};

// Class ProjectX.RPC_PlayerStorageSet_X
// 0x0040 (0x00E8 - 0x00A8)
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	TArray< struct FSetPlayerStorageRequestItem >      Items;                                            		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USetPlayerStorageResult_X*                   Result;                                           		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PLAYERSTORAGESET_X ];

		return pClassPointer;
	};

	class UObject* eventGetResponseObject ( );
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess
// 0x000C (0x0048 - 0x003C)
class U__OnlinePlayerStorageQueue_X__HandleStorageSuccess : public UObject
{
public:
	TArray< struct FSetPlayerStorageResultItem >       OutOfSync;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERSTORAGEQUEUE_X__HANDLESTORAGESUCCESS ];

		return pClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess (struct FSetPlayerStorageRequestItem& R );
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes
// 0x0008 (0x0044 - 0x003C)
class U__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes : public UObject
{
public:
	struct FName                                       Category;                                         		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERSTORAGEQUEUE_X__GETSTORAGEMAXSIZEBYTES ];

		return pClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes (struct FStorageMaxSize& C );
};

// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects
// 0x0004 (0x0040 - 0x003C)
class U__OnlinePlayerStorageSync_X__SyncObjects : public UObject
{
public:
	class UAsyncTask*                                  ResponseTask;                                     		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINEPLAYERSTORAGESYNC_X__SYNCOBJECTS ];

		return pClassPointer;
	};

	void __OnlinePlayerStorageSync_X__SyncObjects (class URPC_X* RPC );
};

// Class ProjectX.RPC_PlayerStorageGet_X
// 0x0040 (0x00E8 - 0x00A8)
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
	TArray< struct FGetPlayerStorageRequestItem >      Items;                                            		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGetPlayerStorageResult_X*                   Result;                                           		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PLAYERSTORAGEGET_X ];

		return pClassPointer;
	};

	class UObject* eventGetResponseObject ( );
};

// Class ProjectX.SmoothDynamicValue_X
// 0x000C (0x0068 - 0x005C)
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	float                                              LerpUpSpeed;                                      		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LerpDownSpeed;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SmoothedCachedValue;                              		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_SMOOTHDYNAMICVALUE_X ];

		return pClassPointer;
	};

	struct FString GetDebugValue ( );
	float GetValue ( );
	void Tick (float DeltaTime );
	void eventConstruct ( );
};

// Class ProjectX.__ClubUtil_X__IsClubTeam
// 0x000C (0x0048 - 0x003C)
class U__ClubUtil_X__IsClubTeam : public UObject
{
public:
	TArray< unsigned long long >                       TeamClubs;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___CLUBUTIL_X__ISCLUBTEAM ];

		return pClassPointer;
	};

	bool __ClubUtil_X__IsClubTeam (unsigned long long Id );
};

// Class ProjectX.ClubUtil_X
// 0x0000 (0x003C - 0x003C)
class UClubUtil_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBUTIL_X ];

		return pClassPointer;
	};

	int Wrap (int Column, int Count );
	struct FClubColorSet SwapPrimaryAccentColors (struct FClubColorSet& Colors, class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette );
	bool AreColorsDifferent (class UColorPalette_X* Palette, int Color0, int Color1 );
	unsigned char EnsureDifferentColors (class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette, int DefaultColorID0, int DefaultColorID1, struct FClubColorSet* Set0, struct FClubColorSet* Set1 );
	bool IsClubTeam (int TeamSize, TArray< unsigned long long >* TeamClubs );
	bool IsClubMatch (int TeamSize, TArray< unsigned long long >* Team0Clubs, TArray< unsigned long long >* Team1Clubs );
};

// Class ProjectX.__LocalClubData_X__GetClubByID
// 0x0008 (0x0044 - 0x003C)
class U__LocalClubData_X__GetClubByID : public UObject
{
public:
	unsigned long long                                 Id;                                               		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___LOCALCLUBDATA_X__GETCLUBBYID ];

		return pClassPointer;
	};

	bool __LocalClubData_X__GetClubByID (class UClubDetails_X* C );
};

// Class ProjectX.LocalClubData_X
// 0x001C (0x0058 - 0x003C)
class ULocalClubData_X : public UObject
{
public:
	TArray< class UClubDetails_X* >                    Clubs;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerClubPair >                   Invites;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NextClubID;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_LOCALCLUBDATA_X ];

		return pClassPointer;
	};

	class UClubDetails_X* GetClubForPlayer (struct FUniqueNetId& PlayerID );
	class UClubDetails_X* GetClubByID (unsigned long long Id );
	void Save ( );
	void Load ( );
};

// Class ProjectX.__LocalClubData_X__GetClubForPlayer
// 0x0030 (0x006C - 0x003C)
class U__LocalClubData_X__GetClubForPlayer : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___LOCALCLUBDATA_X__GETCLUBFORPLAYER ];

		return pClassPointer;
	};

	bool __LocalClubData_X__GetClubForPlayer (class UClubDetails_X* C );
};

// Class ProjectX.__NetworkNextServer_X__RequestRoute
// 0x0008 (0x0044 - 0x003C)
class U__NetworkNextServer_X__RequestRoute : public UObject
{
public:
	class UWebRequest_X*                               Request;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UTAsyncResult__String*                       Task;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___NETWORKNEXTSERVER_X__REQUESTROUTE ];

		return pClassPointer;
	};

	void __NetworkNextServer_X__RequestRoute (class UWebRequest_X* _ );
};

// Class ProjectX.__OnlineClubCache_X__GetClubDetails
// 0x0008 (0x0044 - 0x003C)
class U__OnlineClubCache_X__GetClubDetails : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINECLUBCACHE_X__GETCLUBDETAILS ];

		return pClassPointer;
	};

	bool __OnlineClubCache_X__GetClubDetails (class UClubDetails_X* C );
};

// Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails
// 0x0030 (0x006C - 0x003C)
class U__OnlineClubCache_X__GetPlayerClubDetails : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINECLUBCACHE_X__GETPLAYERCLUBDETAILS ];

		return pClassPointer;
	};

	bool __OnlineClubCache_X__GetPlayerClubDetails (class UClubDetails_X* C );
};

// Class ProjectX.__OnlineClubManager_X__LeaveClub
// 0x0008 (0x0044 - 0x003C)
class U__OnlineClubManager_X__LeaveClub : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x003C (0x0008) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINECLUBMANAGER_X__LEAVECLUB ];

		return pClassPointer;
	};

	void __OnlineClubManager_X__LeaveClub ( );
};

// Class ProjectX.OnlineClubManager_X
// 0x0014 (0x0050 - 0x003C)
class UOnlineClubManager_X : public UObject
{
public:
	class UPsyNetConnection_X*                         Connection;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventClubChanged__Delegate;                     		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECLUBMANAGER_X ];

		return pClassPointer;
	};

	void OnLeaveClub (unsigned long long ClubID );
	void OnClubChanged (class UClubDetails_X* Club );
	class UAsyncTask* LeaveClub (unsigned long long ClubID );
	class UAsyncTask* RejectClubInvite (unsigned long long ClubID );
	class UTAsyncResult__ClubDetails_X* AcceptClubInvite (unsigned long long ClubID );
	class UTAsyncResult__array_ClubInvite_X* SyncClubInvites ( );
	class UTAsyncResult__ClubDetails_X* SetClubOwner (struct FUniqueNetId& NewOwner );
	class UTAsyncResult__ClubDetails_X* RemoveFromClub (struct FUniqueNetId& PlayerID );
	class UAsyncTask* InviteToClub (struct FUniqueNetId& PlayerID );
	class UTAsyncResult__ClubDetails_X* UpdateClubMotD (struct FString& Text );
	class UTAsyncResult__ClubDetails_X* UpdateClubColors (int Primary, int Accent );
	class UTAsyncResult__ClubDetails_X* UpdateClubName (struct FString& ClubName, struct FString& ClubTag );
	class UTAsyncResult__ClubDetails_X* CreateClub (class UClubSettings_X* Settings );
	void EventClubChanged (class UOnlineClubManager_X* Manager, unsigned long long ClubID );
};

// Class ProjectX.__OnlineClubProvider_X__SyncClubDetails
// 0x000C (0x0048 - 0x003C)
class U__OnlineClubProvider_X__SyncClubDetails : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x003C (0x0008) [0x0000000000000000]              
	class URPC_GetClubDetails_X*                       RPC;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINECLUBPROVIDER_X__SYNCCLUBDETAILS ];

		return pClassPointer;
	};

	void __OnlineClubProvider_X__SyncClubDetails (class URPC_X* _ );
};

// Class ProjectX.RPC_ClubDetailsBase_X
// 0x0008 (0x00B0 - 0x00A8)
class URPC_ClubDetailsBase_X : public URPC_X
{
public:
	class UClubDetails_X*                              ClubDetails;                                      		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTAsyncResult__ClubDetails_X*                ClubDetailsTask;                                  		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CLUBDETAILSBASE_X ];

		return pClassPointer;
	};

	class UClubDetails_X* __RPC_ClubDetailsBase_X__CreateClubDetailsTask ( );
	class UTAsyncResult__ClubDetails_X* CreateClubDetailsTask ( );
};

// Class ProjectX.RPC_GetClubDetails_X
// 0x0004 (0x00B4 - 0x00B0)
class URPC_GetClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                           		// 0x00B0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETCLUBDETAILS_X ];

		return pClassPointer;
	};

	class URPC_GetClubDetails_X* SetClubID (unsigned long long InClubID );
};

// Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails
// 0x0034 (0x0070 - 0x003C)
class U__OnlineClubProvider_X__SyncPlayerClubDetails : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
	class URPC_GetPlayerClubDetails_X*                 RPC;                                              		// 0x006C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___ONLINECLUBPROVIDER_X__SYNCPLAYERCLUBDETAILS ];

		return pClassPointer;
	};

	void __OnlineClubProvider_X__SyncPlayerClubDetails (class URPC_X* _ );
};

// Class ProjectX.RPC_GetPlayerClubDetails_X
// 0x0030 (0x00E0 - 0x00B0)
class URPC_GetPlayerClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00B0 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETPLAYERCLUBDETAILS_X ];

		return pClassPointer;
	};

	class URPC_GetPlayerClubDetails_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.__ServerPlayerTracker_X__AddPlayer
// 0x0030 (0x006C - 0x003C)
class U__ServerPlayerTracker_X__AddPlayer : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___SERVERPLAYERTRACKER_X__ADDPLAYER ];

		return pClassPointer;
	};

	bool __ServerPlayerTracker_X__AddPlayer (struct FUniqueNetId& P );
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__array_ClubInvite_X__Copy : public UObject
{
public:
	class UTAsyncResult__array_ClubInvite_X*           Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_CLUBINVITE_X__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__Copy (TArray< class UClubInvite_X* > R, class UError* E );
};

// Class ProjectX.TAsyncResult__array_ClubInvite_X
// 0x003C (0x00C0 - 0x0084)
class UTAsyncResult__array_ClubInvite_X : public UAsyncTask
{
public:
	TArray< class UClubInvite_X* >                     Result;                                           		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__ARRAY_CLUBINVITE_X ];

		return pClassPointer;
	};

	class UTAsyncResult__array_ClubInvite_X* CreateResultError (class UError* InError );
	class UTAsyncResult__array_ClubInvite_X* CreateResult (TArray< class UClubInvite_X* > InResult );
	class UTAsyncResult__array_ClubInvite_X* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__array_ClubInvite_X* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__array_ClubInvite_X* eventSetResult (TArray< class UClubInvite_X* > InResult, class UError* InError );
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResult (struct FScriptDelegate& Callback );
	TArray< class UClubInvite_X* > ResultDelegate ( );
	void EventResultComplete (TArray< class UClubInvite_X* > OutResult, class UError* OutError );
	void EventResult (TArray< class UClubInvite_X* > OutResult );
};

// Class ProjectX.ClubInvite_X
// 0x005C (0x0098 - 0x003C)
class UClubInvite_X : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x003C (0x0008) [0x0000000000000000]              
	struct FString                                     ClubName;                                         		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClubTag;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FClubMember                                 InvitedBy;                                        		// 0x005C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBINVITE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_CLUBINVITE_X__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_CLUBINVITE_X__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_ClubInvite_X__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_CLUBINVITE_X__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__SetResultWhen ( );
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__array_LanServerRecord_X__Copy : public UObject
{
public:
	class UTAsyncResult__array_LanServerRecord_X*      Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__Copy (TArray< class ULanServerRecord_X* > R, class UError* E );
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__array_LanServerRecord_X__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__SetResultWhen ( );
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__ClubDetails_X__Copy : public UObject
{
public:
	class UTAsyncResult__ClubDetails_X*                Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__CLUBDETAILS_X__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__Copy (class UClubDetails_X* R, class UError* E );
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__ClubDetails_X__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__CLUBDETAILS_X__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__ClubDetails_X__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__CLUBDETAILS_X__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__ClubDetails_X__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__CLUBDETAILS_X__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__SetResultWhen ( );
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__PsyNetClientService_X__Copy : public UObject
{
public:
	class UTAsyncResult__PsyNetClientService_X*        Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETCLIENTSERVICE_X__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__Copy (class UPsyNetClientService_X* R, class UError* E );
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETCLIENTSERVICE_X__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETCLIENTSERVICE_X__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetClientService_X__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETCLIENTSERVICE_X__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__SetResultWhen ( );
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__PsyNetMessage_X__Copy : public UObject
{
public:
	class UTAsyncResult__PsyNetMessage_X*              Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETMESSAGE_X__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__Copy (class UPsyNetMessage_X* R, class UError* E );
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETMESSAGE_X__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETMESSAGE_X__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__PsyNetMessage_X__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__PSYNETMESSAGE_X__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__SetResultWhen ( );
};

// Class ProjectX.__TAsyncResult__String__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__String__Copy : public UObject
{
public:
	class UTAsyncResult__String*                       Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__STRING__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__String__Copy (struct FString& R, class UError* E );
};

// Class ProjectX.__TAsyncResult__String__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__String__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__STRING__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__String__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__String__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__String__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__STRING__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__String__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__String__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__String__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__STRING__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__String__SetResultWhen ( );
};

// Class ProjectX.ActionQueue_X
// 0x0024 (0x006C - 0x0048)
class UActionQueue_X : public UComponent
{
public:
	float                                              ActionsPerSecond;                                 		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FScriptDelegate >                   Queue;                                            		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                QueueIndex;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __ActionDelegate__Delegate;                       		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ACTIONQUEUE_X ];

		return pClassPointer;
	};

	void Tick ( );
	void Add (struct FScriptDelegate& Callback );
	void ActionDelegate ( );
};

// Class ProjectX.AppConfig_X
// 0x0004 (0x0050 - 0x004C)
class UAppConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSpinSleep : 1;                                   		// 0x004C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_APPCONFIG_X ];

		return pClassPointer;
	};

	void Undo ( );
	void Apply ( );
};

// Class ProjectX.ClubErrors_X
// 0x004C (0x00A0 - 0x0054)
class UClubErrors_X : public UErrorList
{
public:
	class UErrorType*                                  ClubNotFound;                                     		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerAlreadyInClub;                              		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerInSameClub;                                 		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerInDifferentClub;                            		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NotClubOwner;                                     		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubNameChangeNotAllowed;                         		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubFull;                                         		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubMemberNotFound;                               		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubInviteNotFound;                               		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubInvalidParameters;                            		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubNameInvalid;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubTagInvalid;                                   		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubTagPlusNameInvalid;                           		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubMotdInvalid;                                  		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubNameTaken;                                    		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubOwnerCannotLeaveUnlessEmpty;                  		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CrossPlatformClubsDisabled;                       		// 0x0094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubInviteCrossPlatformClubsDisabled;             		// 0x0098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ClubBanned;                                       		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBERRORS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.ClubServerResult_X
// 0x0034 (0x0070 - 0x003C)
class UClubServerResult_X : public UObject
{
public:
	struct FString                                     Host;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomServerName;                                 		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomServerPassword;                             		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_CLUBSERVERRESULT_X ];

		return pClassPointer;
	};

	struct FString GetAddress ( );
};

// Class ProjectX.RouteResponse_X
// 0x0018 (0x0054 - 0x003C)
class URouteResponse_X : public UObject
{
public:
	struct FString                                     RouteRelays;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RouteData;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ROUTERESPONSE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_CreateClub_X
// 0x0020 (0x00D0 - 0x00B0)
class URPC_CreateClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClubTag;                                          		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PrimaryColor;                                     		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                AccentColor;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CREATECLUB_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_CreateClub_X* SetSettings (class UClubSettings_X* Settings );
};

// Class ProjectX.RPC_UpdateClubName_X
// 0x0018 (0x00C8 - 0x00B0)
class URPC_UpdateClubName_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClubTag;                                          		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATECLUBNAME_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_UpdateClubName_X* SetName (struct FString& InName, struct FString& InTag );
};

// Class ProjectX.RPC_UpdateClubColors_X
// 0x0008 (0x00B8 - 0x00B0)
class URPC_UpdateClubColors_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                PrimaryColor;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                AccentColor;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATECLUBCOLORS_X ];

		return pClassPointer;
	};

	class URPC_UpdateClubColors_X* SetColors (int InPrimary, int InAccent );
};

// Class ProjectX.RPC_UpdateClubMotD_X
// 0x000C (0x00BC - 0x00B0)
class URPC_UpdateClubMotD_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     MotD;                                             		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATECLUBMOTD_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_UpdateClubMotD_X* SetMotD (struct FString& InMotD );
};

// Class ProjectX.RPC_InviteToClub_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_InviteToClub_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_INVITETOCLUB_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_InviteToClub_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_RemoveFromClub_X
// 0x0030 (0x00E0 - 0x00B0)
class URPC_RemoveFromClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00B0 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REMOVEFROMCLUB_X ];

		return pClassPointer;
	};

	class URPC_RemoveFromClub_X* SetPlayerID (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_SetClubOwner_X
// 0x0030 (0x00E0 - 0x00B0)
class URPC_SetClubOwner_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00B0 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETCLUBOWNER_X ];

		return pClassPointer;
	};

	class URPC_SetClubOwner_X* SetNewOwner (struct FUniqueNetId& InPlayerId );
};

// Class ProjectX.RPC_GetClubInvites_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetClubInvites_X : public URPC_X
{
public:
	TArray< class UClubInvite_X* >                     ClubInvites;                                      		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETCLUBINVITES_X ];

		return pClassPointer;
	};

	TArray< class UClubInvite_X* > __RPC_GetClubInvites_X__CreateClubInvitesTask ( );
	class UTAsyncResult__array_ClubInvite_X* CreateClubInvitesTask ( );
};

// Class ProjectX.RPC_AcceptClubInvite_X
// 0x0004 (0x00B4 - 0x00B0)
class URPC_AcceptClubInvite_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                           		// 0x00B0 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_ACCEPTCLUBINVITE_X ];

		return pClassPointer;
	};

	class URPC_AcceptClubInvite_X* SetClubID (unsigned long long InClubID );
};

// Class ProjectX.RPC_RejectClubInvite_X
// 0x0004 (0x00AC - 0x00A8)
class URPC_RejectClubInvite_X : public URPC_X
{
public:
	int                                                ClubID;                                           		// 0x00A8 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_REJECTCLUBINVITE_X ];

		return pClassPointer;
	};

	class URPC_RejectClubInvite_X* SetClubID (unsigned long long InClubID );
};

// Class ProjectX.RPC_LeaveClub_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_LeaveClub_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_LEAVECLUB_X ];

		return pClassPointer;
	};

};

// Class ProjectX.OnlineClubServerList_X
// 0x0014 (0x0050 - 0x003C)
class UOnlineClubServerList_X : public UObject
{
public:
	TArray< class UClubServerResult_X* >               Servers;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class URPC_GetClubPrivateMatches_X*                RPC;                                              		// 0x0048 (0x0004) [0x0000000000000000]              
	class UError*                                      Error;                                            		// 0x004C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_ONLINECLUBSERVERLIST_X ];

		return pClassPointer;
	};

	void __OnlineClubServerList_X__Refresh (class URPC_X* _ );
	class UAsyncTask* Refresh ( );
};

// Class ProjectX.RPC_GetClubPrivateMatches_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_GetClubPrivateMatches_X : public URPC_X
{
public:
	TArray< class UClubServerResult_X* >               Servers;                                          		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_GETCLUBPRIVATEMATCHES_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PlayerTitleConfig_X
// 0x0018 (0x0064 - 0x004C)
class UPlayerTitleConfig_X : public UOnlineConfig_X
{
public:
	TArray< struct FPlayerTitleCategory >              Categories;                                       		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPlayerTitleData >                  Titles;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PLAYERTITLECONFIG_X ];

		return pClassPointer;
	};

	struct FPlayerTitleData InitTitleColors (struct FPlayerTitleData& Data );
	struct FPlayerTitleData GetTitleData (struct FName& TitleId, struct FPlayerTitleData* StructInitializer_1A945506467B56CD1700558D740336C4 );
	struct FPlayerTitleCategory GetCategory (struct FName& CategoryID, struct FPlayerTitleCategory* StructInitializer_1D8E0B2446F72A7F0DA12992C8D01872 );
	void Apply ( struct FPlayerTitleCategory* StructInitializer_C548A17445A5F8C742CA93885BB85C60, struct FPlayerTitleCategory* StructInitializer_C2A818E748FEAF804EA1DBB5EE18861C, struct FPlayerTitleData* StructInitializer_844CDE9C4D5BD5DF9CE8F282F6CA111A, struct FPlayerTitleData* StructInitializer_6DF709BC4949449BB89E1BA46B1F3B10, TArray< struct FPlayerTitleData >* MapLocal_33C57BE34B8F7C29DE7B919CEAB823CA );
};

// Class ProjectX.RPC_FilterContent_X
// 0x0030 (0x00D8 - 0x00A8)
class URPC_FilterContent_X : public URPC_X
{
public:
	TArray< struct FString >                           Content;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FilteredContent;                                  		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   Callbacks;                                        		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_FILTERCONTENT_X ];

		return pClassPointer;
	};

	class URPC_FilterContent_X* AddComment (struct FString& Comment, struct FScriptDelegate& Callback, struct FUniqueNetId& PlayerID );
};

// Class ProjectX.RPC_PartySendInvite_X
// 0x0030 (0x00E4 - 0x00B4)
class URPC_PartySendInvite_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                InviteeID;                                        		// 0x00B4 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_PARTYSENDINVITE_X ];

		return pClassPointer;
	};

	class URPC_PartySendInvite_X* Invite (struct FUniqueNetId& InInviteeUserId );
};

// Class ProjectX.RPC_SetClubMotD_X
// 0x000C (0x00DC - 0x00D0)
class URPC_SetClubMotD_X : public URPC_CreateClub_X
{
public:
	struct FString                                     Text;                                             		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETCLUBMOTD_X ];

		return pClassPointer;
	};

	class URPC_SetClubMotD_X* SetText (struct FString& InText );
};

// Class ProjectX.RPC_SetRichPresence_X
// 0x0018 (0x00C0 - 0x00A8)
class URPC_SetRichPresence_X : public URPC_X
{
public:
	struct FString                                     PresenceInfo;                                     		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PresenceState;                                    		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SETRICHPRESENCE_X ];

		return pClassPointer;
	};

	class URPC_SetRichPresence_X* SetPresenceState (struct FString& InState );
	class URPC_SetRichPresence_X* SetPresenceInfo (struct FString& InInfo );
};

// Class ProjectX.RPC_UpdateClub_X
// 0x0000 (0x00D0 - 0x00D0)
class URPC_UpdateClub_X : public URPC_CreateClub_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_UPDATECLUB_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__PartySequence_CreateParty_X__CreateParty
// 0x0015 (0x0051 - 0x003C)
class U__PartySequence_CreateParty_X__CreateParty : public UObject
{
public:
	TArray< struct FLobbyMetaData >                    InitialSettings;                                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LocalPlayerNum;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0050 (0x0001) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTYSEQUENCE_CREATEPARTY_X__CREATEPARTY ];

		return pClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty (class URPC_PartyCreate_X* RPC, struct FLobbyMetaData* StructInitializer_5D3F9502401197F31BB8AFA97ABB85C0, struct FLobbyMetaData* StructInitializer_BEC65D2E4D39180A49E2CD934E9739CE, struct FUniqueLobbyId* StructInitializer_6E6871184E06AABD3BDFC692053CDF7B );
};

// Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage
// 0x0004 (0x0040 - 0x003C)
class U__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage : public UObject
{
public:
	class UPartyMessage_GetPlatformParty_X*            Message;                                          		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTYSEQUENCE_JOINPARTY_X__HANDLEGETPLATFORMPARTYMESSAGE ];

		return pClassPointer;
	};

	bool __PartySequence_JoinParty_X__HandleGetPlatformPartyMessage (struct FPartyMember& M );
};

// Class ProjectX.PartyMessage_GetPlatformParty_X
// 0x0000 (0x006C - 0x006C)
class UPartyMessage_GetPlatformParty_X : public UPartyMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_GETPLATFORMPARTY_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy
// 0x0004 (0x0040 - 0x003C)
class U__TAsyncResult__Texture2DDynamic__Copy : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Instance;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__TEXTURE2DDYNAMIC__COPY ];

		return pClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__Copy (class UTexture2DDynamic* R, class UError* E );
};

// Class ProjectX.TAsyncResult__Texture2DDynamic
// 0x0034 (0x00B8 - 0x0084)
class UTAsyncResult__Texture2DDynamic : public UAsyncTask
{
public:
	class UTexture2DDynamic*                           Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TASYNCRESULT__TEXTURE2DDYNAMIC ];

		return pClassPointer;
	};

	class UTAsyncResult__Texture2DDynamic* CreateResultError (class UError* InError );
	class UTAsyncResult__Texture2DDynamic* CreateResult (class UTexture2DDynamic* InResult );
	class UTAsyncResult__Texture2DDynamic* Copy ( );
	void eventClearCallbacks ( );
	class UTAsyncResult__Texture2DDynamic* eventSetResultWhen (class UAsyncTask* Other, struct FScriptDelegate& GetResultDelegate );
	class UTAsyncResult__Texture2DDynamic* eventSetResult (class UTexture2DDynamic* InResult, class UError* InError );
	class UTAsyncResult__Texture2DDynamic* NotifyOnResultComplete (struct FScriptDelegate& Callback );
	class UTAsyncResult__Texture2DDynamic* NotifyOnResult (struct FScriptDelegate& Callback );
	class UTexture2DDynamic* ResultDelegate ( );
	void EventResultComplete (class UTexture2DDynamic* OutResult, class UError* OutError );
	void EventResult (class UTexture2DDynamic* OutResult );
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__TEXTURE2DDYNAMIC__NOTIFYONRESULT ];

		return pClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResult ( );
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__TEXTURE2DDYNAMIC__NOTIFYONRESULTCOMPLETE ];

		return pClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResultComplete (class UError* Err );
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__TAsyncResult__Texture2DDynamic__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___TASYNCRESULT__TEXTURE2DDYNAMIC__SETRESULTWHEN ];

		return pClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__SetResultWhen ( );
};

// Class ProjectX.__WebImageCache_X__HandleImageData
// 0x0004 (0x0040 - 0x003C)
class U__WebImageCache_X__HandleImageData : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___WEBIMAGECACHE_X__HANDLEIMAGEDATA ];

		return pClassPointer;
	};

	void __WebImageCache_X__HandleImageData (struct FString& _, struct FImageLayout& Image );
};

// Class ProjectX.WebImageDownload_X
// 0x0018 (0x0054 - 0x003C)
class UWebImageDownload_X : public UObject
{
public:
	struct FString                                     URL;                                              		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSRGB : 1;                                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	class UTAsyncResult__Texture2DDynamic*             AsyncResult;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_WEBIMAGEDOWNLOAD_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__WebImageCache_X__StartSync
// 0x0004 (0x0040 - 0x003C)
class U__WebImageCache_X__StartSync : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                         		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___WEBIMAGECACHE_X__STARTSYNC ];

		return pClassPointer;
	};

	void __WebImageCache_X__StartSync (class UCachedWebData_X* Data );
};

// Class ProjectX.__WebImageCache_X__SyncUncachedImage
// 0x0004 (0x0040 - 0x003C)
class U__WebImageCache_X__SyncUncachedImage : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___WEBIMAGECACHE_X__SYNCUNCACHEDIMAGE ];

		return pClassPointer;
	};

	void __WebImageCache_X__SyncUncachedImage (struct FOnlineImageDownload& ImageInfo );
};

// Class ProjectX.PartyMessage_GetPlatformPartyResponse_X
// 0x003C (0x00A8 - 0x006C)
class UPartyMessage_GetPlatformPartyResponse_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                  		// 0x006C (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                OriginalSender;                                   		// 0x0078 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PARTYMESSAGE_GETPLATFORMPARTYRESPONSE_X ];

		return pClassPointer;
	};

};

// Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited
// 0x003C (0x0078 - 0x003C)
class U__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                FriendId;                                         		// 0x0048 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTYSEQUENCE_INVITEDTOPLATFORMPARTY_X__HANDLEPLAYERINVITED ];

		return pClassPointer;
	};

	void __PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited ( );
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvited
// 0x003C (0x0078 - 0x003C)
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvited : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                FriendId;                                         		// 0x0048 (0x0030) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___PARTYSEQUENCE_INVITEDTOPSYNETPARTY_X__HANDLEPLAYERINVITED ];

		return pClassPointer;
	};

	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvited ( );
};

// Class ProjectX.PsyTagErrors_X
// 0x0018 (0x006C - 0x0054)
class UPsyTagErrors_X : public UErrorList
{
public:
	class UErrorType*                                  PsyTagProfane;                                    		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PsyTagUnavailable;                                		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PsyTagInvalidCharacters;                          		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PsyTagInvalidWhitespace;                          		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PsyTagInvalidParameters;                          		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PsyTagCrossPlatformDisabled;                      		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYTAGERRORS_X ];

		return pClassPointer;
	};

};

// Class ProjectX.PsyTagSearchResult_X
// 0x006C (0x00A8 - 0x003C)
class UPsyTagSearchResult_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x003C (0x0030) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPsyTag                                     PsyTag;                                           		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 PsyTagLastUpdatedTime;                            		// 0x0088 (0x0008) [0x0000000000000000]              
	struct FString                                     PresenceState;                                    		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long long                                 LastLoginTime;                                    		// 0x009C (0x0008) [0x0000000000000000]              
	int                                                NumFriendsInCommon;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_PSYTAGSEARCHRESULT_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_CheckPsyTag_X
// 0x0038 (0x00E0 - 0x00A8)
class URPC_CheckPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPsyTag                                     PsyTag;                                           		// 0x00B4 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsValid : 1;                                     		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsProfane : 1;                                   		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsAvailable : 1;                                 		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIsUpdated : 1;                                   		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	TArray< struct FString >                           InvalidCharacters;                                		// 0x00C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           SuggestedNames;                                   		// 0x00D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CHECKPSYTAG_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_CheckPsyTag_X* SetPsyTagName (struct FString& InName );
};

// Class ProjectX.RPC_ClaimPsyTag_X
// 0x0000 (0x00E0 - 0x00E0)
class URPC_ClaimPsyTag_X : public URPC_CheckPsyTag_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_CLAIMPSYTAG_X ];

		return pClassPointer;
	};

};

// Class ProjectX.RPC_SearchPsyTag_X
// 0x0034 (0x00DC - 0x00A8)
class URPC_SearchPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PsyTagCode;                                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                PageIndex;                                        		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                PageSize;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FString                                     SortType;                                         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalRows;                                        		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UPsyTagSearchResult_X* >             MatchedPlayers;                                   		// 0x00D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_RPC_SEARCHPSYTAG_X ];

		return pClassPointer;
	};

	class UErrorType* eventOverrideErrorType (class UErrorType* ErrorType );
	class URPC_SearchPsyTag_X* SetPage (int InPage );
	class URPC_SearchPsyTag_X* SetTag (struct FString& InName, int InCode );
};

// Class ProjectX.__StatusObserver_X__FindByAcceptedType
// 0x0004 (0x0040 - 0x003C)
class U__StatusObserver_X__FindByAcceptedType : public UObject
{
public:
	class UClass*                                      InType;                                           		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___STATUSOBSERVER_X__FINDBYACCEPTEDTYPE ];

		return pClassPointer;
	};

	bool __StatusObserver_X__FindByAcceptedType (class UTriggerInfo* TT );
};

// Class ProjectX.StatusTrigger_X
// 0x0014 (0x0050 - 0x003C)
class UStatusTrigger_X : public UObject
{
public:
	unsigned long                                      bTriggered : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             EventPropertyChange;                              		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_STATUSTRIGGER_X ];

		return pClassPointer;
	};

	void EventPropertyChangeFunc ( );
	void EvaluateCondition (unsigned long InConditionalValue );
	bool IsTriggered ( );
	void ToggleTriggered ( );
	void DebugPrint ( );
};

// Class ProjectX.TriggerInfo
// 0x0030 (0x006C - 0x003C)
class UTriggerInfo : public UObject
{
public:
	class UClass*                                      AcceptedType;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class UStatusTrigger_X* >                  Triggers;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Callback;                                         		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __UpdateTrigger__Delegate;                        		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_TRIGGERINFO ];

		return pClassPointer;
	};

	class UTriggerInfo* SetType (class UClass* InType );
	void UpdateTrigger (class UStatusTrigger_X* InTrigger );
};

// Class ProjectX.StatusObserver_X
// 0x0018 (0x0054 - 0x003C)
class UStatusObserver_X : public UObject
{
public:
	TArray< class UTriggerInfo* >                      TriggerTypes;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            AcceptedTypes;                                    		// 0x0048 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS_STATUSOBSERVER_X ];

		return pClassPointer;
	};

	class UTriggerInfo* __StatusObserver_X__Init (class UClass* T );
	void DebugPrint ( );
	bool ObservesTriggerType (class UStatusTrigger_X* InTrigger );
	void UpdateTriggers (class UClass* InType );
	void UnRegisterTriggers ( TArray< class UStatusTrigger_X* >* InTriggers, TArray< class UStatusTrigger_X* >* FilterLocal_4E5C6B09407BC0E81D6C25B74ADD5961 );
	void RegisterTriggers ( TArray< class UStatusTrigger_X* >* InTriggers, TArray< class UStatusTrigger_X* >* FilterLocal_5EC43D85455EEC61BC838F9C51EC30B9 );
	void AddCallback (class UClass* InType, struct FScriptDelegate& InCallback );
	class UTriggerInfo* FindByAcceptedType (class UClass* InType );
	void Init (class ULocalPlayer_X* LP, TArray< class UClass* >* DistinctLocal_434C42AD428894B72FE9AD8D02B8F82B, TArray< class UTriggerInfo* >* MapLocal_51B8C1B64A878387300893A517FAC377 );
};

// Class ProjectX.__StatusObserver_X__ObservesTriggerType
// 0x0004 (0x0040 - 0x003C)
class U__StatusObserver_X__ObservesTriggerType : public UObject
{
public:
	class UStatusTrigger_X*                            InTrigger;                                        		// 0x003C (0x0004) [0x0000000000000000]              
public:
	static UClass* StaticClass()
	{
		static UClass* pClassPointer = NULL;

		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ IDX_CLASS___STATUSOBSERVER_X__OBSERVESTRIGGERTYPE ];

		return pClassPointer;
	};

	bool __StatusObserver_X__ObservesTriggerType (class UClass* C );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif