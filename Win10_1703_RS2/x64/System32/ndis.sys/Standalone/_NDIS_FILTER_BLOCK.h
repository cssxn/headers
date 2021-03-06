typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0008 */

typedef enum _NDIS_FILTER_STATE
{
  NdisFilterDetached = 0,
  NdisFilterAttaching = 1,
  NdisFilterPaused = 2,
  NdisFilterRestarting = 3,
  NdisFilterRunning = 4,
  NdisFilterPausing = 5,
  NdisFilterDetaching = 6,
} NDIS_FILTER_STATE, *PNDIS_FILTER_STATE;

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ unsigned char ZeroBased;
  /* 0x0010 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t> > >
{
}; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _PENDING_STACK_EXPANSION_FALLBACK_WORK
{
  /* 0x0000 */ unsigned char IssueOidRequest;
  /* 0x0001 */ unsigned char CompleteOidRequest;
  /* 0x0008 */ struct _NDIS_OID_REQUEST* DirectOidRequestsToComplete;
  /* 0x0010 */ struct _NDIS_STATUS_INDICATION* StatusIndications;
  /* 0x0018 */ struct _NET_PNP_EVENT_NOTIFICATION* NetPnPEvents;
  /* 0x0020 */ struct _NET_DEVICE_PNP_EVENT* DevicePnPEvents;
  /* 0x0028 */ struct _NET_BUFFER_LIST* SentNblsToComplete;
  /* 0x0030 */ struct _NET_BUFFER_LIST* ReceivedNblsToComplete;
} PENDING_STACK_EXPANSION_FALLBACK_WORK, *PPENDING_STACK_EXPANSION_FALLBACK_WORK; /* size: 0x0038 */

typedef enum _NDIS_MEDIUM
{
  NdisMedium802_3 = 0,
  NdisMedium802_5 = 1,
  NdisMediumFddi = 2,
  NdisMediumWan = 3,
  NdisMediumLocalTalk = 4,
  NdisMediumDix = 5,
  NdisMediumArcnetRaw = 6,
  NdisMediumArcnet878_2 = 7,
  NdisMediumAtm = 8,
  NdisMediumWirelessWan = 9,
  NdisMediumIrda = 10,
  NdisMediumBpc = 11,
  NdisMediumCoWan = 12,
  NdisMedium1394 = 13,
  NdisMediumInfiniBand = 14,
  NdisMediumTunnel = 15,
  NdisMediumNative802_11 = 16,
  NdisMediumLoopback = 17,
  NdisMediumWiMAX = 18,
  NdisMediumIP = 19,
  NdisMediumMax = 20,
} NDIS_MEDIUM, *PNDIS_MEDIUM;

typedef enum _NDIS_PHYSICAL_MEDIUM
{
  NdisPhysicalMediumUnspecified = 0,
  NdisPhysicalMediumWirelessLan = 1,
  NdisPhysicalMediumCableModem = 2,
  NdisPhysicalMediumPhoneLine = 3,
  NdisPhysicalMediumPowerLine = 4,
  NdisPhysicalMediumDSL = 5,
  NdisPhysicalMediumFibreChannel = 6,
  NdisPhysicalMedium1394 = 7,
  NdisPhysicalMediumWirelessWan = 8,
  NdisPhysicalMediumNative802_11 = 9,
  NdisPhysicalMediumBluetooth = 10,
  NdisPhysicalMediumInfiniband = 11,
  NdisPhysicalMediumWiMax = 12,
  NdisPhysicalMediumUWB = 13,
  NdisPhysicalMedium802_3 = 14,
  NdisPhysicalMedium802_5 = 15,
  NdisPhysicalMediumIrda = 16,
  NdisPhysicalMediumWiredWAN = 17,
  NdisPhysicalMediumWiredCoWan = 18,
  NdisPhysicalMediumOther = 19,
  NdisPhysicalMediumNative802_15_4 = 20,
  NdisPhysicalMediumMax = 21,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

typedef enum _NET_IF_MEDIA_CONNECT_STATE
{
  MediaConnectStateUnknown = 0,
  MediaConnectStateConnected = 1,
  MediaConnectStateDisconnected = 2,
} NET_IF_MEDIA_CONNECT_STATE, *PNET_IF_MEDIA_CONNECT_STATE;

typedef enum _NET_IF_MEDIA_DUPLEX_STATE
{
  MediaDuplexStateUnknown = 0,
  MediaDuplexStateHalf = 1,
  MediaDuplexStateFull = 2,
} NET_IF_MEDIA_DUPLEX_STATE, *PNET_IF_MEDIA_DUPLEX_STATE;

typedef enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
  NdisPauseFunctionsUnsupported = 0,
  NdisPauseFunctionsSendOnly = 1,
  NdisPauseFunctionsReceiveOnly = 2,
  NdisPauseFunctionsSendAndReceive = 3,
  NdisPauseFunctionsUnknown = 4,
} NDIS_SUPPORTED_PAUSE_FUNCTIONS, *PNDIS_SUPPORTED_PAUSE_FUNCTIONS;

typedef struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0010 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0018 */ void* CancelSendNetBufferListsHandler /* function */;
  /* 0x0020 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x0028 */ void* ReturnNetBufferListsHandler /* function */;
} NDIS_FILTER_PARTIAL_CHARACTERISTICS, *PNDIS_FILTER_PARTIAL_CHARACTERISTICS; /* size: 0x0030 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
  /* 0x0010 */ unsigned long MediaSpecificWakeUpEvents;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0014 */

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0010 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x0018 */ void* FilterModuleContext;
  /* 0x0020 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0028 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > FilterInstanceName;
  /* 0x0030 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x0038 */ unsigned long Flags;
  /* 0x003c */ unsigned long StackFlags;
  /* 0x0040 */ enum _NDIS_FILTER_STATE State;
  /* 0x0048 */ struct _REFERENCE_EX Ref;
  /* 0x0060 */ int FakeStatus;
  /* 0x0068 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x0070 */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0078 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x0080 */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0088 */ long NumOfPauseRestartRequests;
  /* 0x0090 */ unsigned __int64 Lock;
  /* 0x0098 */ void* LockThread;
  /* 0x00a0 */ unsigned long LockDbg;
  /* 0x00a8 */ struct _LIST_ENTRY OidRequestList;
  /* 0x00b8 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x00c0 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t> > > PendingOidWatchdog;
  struct
  {
    /* 0x00c8 */ struct _WORK_QUEUE_ITEM WorkItem;
    /* 0x00e8 */ unsigned char WorkItemQueued;
    /* 0x00f0 */ struct _PENDING_STACK_EXPANSION_FALLBACK_WORK PendingWork;
  } /* size: 0x0060 */ StackExpansionFallback;
  /* 0x0128 */ volatile unsigned char StatusIndicationsQueued;
  /* 0x012c */ volatile long DroppedReceiveNbls;
  /* 0x0130 */ volatile long DroppedSendNbls;
  /* 0x0134 */ unsigned long DroppedStatusIndications;
  /* 0x0138 */ unsigned long DroppedUncloneableStatusIndications;
  /* 0x0140 */ struct _REFERENCE_EX PnPRef;
  /* 0x0158 */ enum _NDIS_MEDIUM MediaType;
  /* 0x015c */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x0160 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0164 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0168 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0170 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0178 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x017c */ unsigned long AutoNegotiationFlags;
  /* 0x0180 */ unsigned char XState;
  /* 0x0181 */ unsigned char Reserved1;
  /* 0x0182 */ unsigned char Reserved2;
  /* 0x0183 */ unsigned char Reserved3;
  /* 0x0184 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x0188 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x0190 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x0198 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x01a0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x01a4 */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x01a8 */ void* NextRequestHandle;
  /* 0x01b0 */ struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY* IterativeDataPathTracker[4];
  /* 0x01b8 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x01c0 */ void* NextSendNetBufferListsContext;
  /* 0x01c8 */ struct NDIS_NBL_TRACKER_HANDLE__* NextSendNetBufferListsTracker;
  /* 0x01d0 */ struct _NDIS_OBJECT_HEADER* NextSendNetBufferListsObject;
  /* 0x01d8 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x01e0 */ void* NextSendNetBufferListsCompleteContext;
  /* 0x01e8 */ struct NDIS_NBL_TRACKER_HANDLE__* NextSendNetBufferListsCompleteTracker;
  /* 0x01f0 */ struct _NDIS_OBJECT_HEADER* NextSendNetBufferListsCompleteObject;
  /* 0x01f8 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0200 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x0208 */ struct NDIS_NBL_TRACKER_HANDLE__* NextIndicateReceiveNetBufferListsTracker;
  /* 0x0210 */ struct _NDIS_OBJECT_HEADER* NextIndicateReceiveNetBufferListsObject;
  /* 0x0218 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0220 */ void* NextReturnNetBufferListsContext;
  /* 0x0228 */ struct NDIS_NBL_TRACKER_HANDLE__* NextReturnNetBufferListsTracker;
  /* 0x0230 */ struct _NDIS_OBJECT_HEADER* NextReturnNetBufferListsObject;
  /* 0x0238 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0240 */ void* NextCancelSendNetBufferListsContext;
  /* 0x0248 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x0278 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x0280 */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0288 */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0290 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0298 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x02a0 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x02a8 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x02b0 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x02b8 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x02c0 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x02c8 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x02d0 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x02d8 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x02e0 */ void* TcpOffloadEventHandler /* function */;
  /* 0x02e8 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x02f0 */ void* InitiateOffloadHandler /* function */;
  /* 0x02f8 */ void* TerminateOffloadHandler /* function */;
  /* 0x0300 */ void* UpdateOffloadHandler /* function */;
  /* 0x0308 */ void* InvalidateOffloadHandler /* function */;
  /* 0x0310 */ void* QueryOffloadHandler /* function */;
  /* 0x0318 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x0320 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x0328 */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x0330 */ struct _GUID InterfaceGuid;
  /* 0x0340 */ unsigned long IfIndex;
  /* 0x0348 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0350 */ void* NextDirectRequestHandle;
  /* 0x0358 */ unsigned long DirectOidRequestCount;
  /* 0x0360 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x0368 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0370 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x0388 */ struct NDIS_BIND_FILTER_LINK* Bind;
  /* 0x0390 */ void* VerifierContext;
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x0398 */

