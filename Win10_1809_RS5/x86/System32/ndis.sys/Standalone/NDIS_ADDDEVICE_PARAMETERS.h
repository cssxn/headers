typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

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

class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0004 */

struct NDIS_ADDDEVICE_PARAMETERS
{
  /* 0x0000 */ struct _GUID InterfaceGuid;
  /* 0x0010 */ union _NET_LUID_LH NetLuid;
  /* 0x0018 */ BOOL IsPhysicalMediumAvailable;
  /* 0x001c */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMedium;
  /* 0x0020 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > ComponentId;
  /* 0x0024 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > ExportName;
  /* 0x0028 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > LegacyImFilterClass;
  /* 0x002c */ BOOL IsImMiniport;
  /* 0x002d */ BOOL IsSoftwareEnumerated;
  /* 0x002e */ BOOL IsVirtual;
  /* 0x002f */ BOOL IsPhysical;
  /* 0x0030 */ BOOL HideInUi;
  /* 0x0034 */ void* MiniportAdapterContext;
  /* 0x0038 */ unsigned char IsHardwareLoopbackSupported;
  /* 0x0039 */ BOOL IsLightWeight;
  /* 0x003c */ struct _NDIS_M_DRIVER_BLOCK* MiniBlock;
  /* 0x0040 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > IfDescr;
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */

