typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_BYTE_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumOfBytes;
  /* 0x0008 */ unsigned long uTotalNumOfBytes;
  /* 0x000c */ unsigned char ucBuffer[1];
  /* 0x000d */ char __PADDING__[3];
}; /* size: 0x0010 */

