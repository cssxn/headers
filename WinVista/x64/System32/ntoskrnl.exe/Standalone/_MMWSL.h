typedef struct _MMWSL
{
  /* 0x0000 */ unsigned long FirstFree;
  /* 0x0004 */ unsigned long FirstDynamic;
  /* 0x0008 */ unsigned long LastEntry;
  /* 0x000c */ unsigned long NextSlot;
  /* 0x0010 */ struct _MMWSLE* Wsle;
  /* 0x0018 */ void* LowestPagableAddress;
  /* 0x0020 */ unsigned long LastInitializedWsle;
  /* 0x0024 */ unsigned long NextEstimationSlot;
  /* 0x0028 */ unsigned long NextAgingSlot;
  /* 0x002c */ unsigned long EstimatedAvailable;
  /* 0x0030 */ unsigned long GrowthSinceLastEstimate;
  /* 0x0034 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0038 */ unsigned long VadBitMapHint;
  /* 0x003c */ unsigned long NonDirectCount;
  /* 0x0040 */ struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
  /* 0x0048 */ struct _MMWSLE_HASH* HashTableStart;
  /* 0x0050 */ struct _MMWSLE_HASH* HighestPermittedHashAddress;
  /* 0x0058 */ void* HighestUserAddress;
  /* 0x0060 */ unsigned long MaximumUserPageTablePages;
  /* 0x0064 */ unsigned long MaximumUserPageDirectoryPages;
  /* 0x0068 */ unsigned long* CommittedPageTables;
  /* 0x0070 */ unsigned long NumberOfCommittedPageDirectories;
  /* 0x0078 */ unsigned __int64 CommittedPageDirectories[128];
  /* 0x0478 */ unsigned long NumberOfCommittedPageDirectoryParents;
  /* 0x0480 */ unsigned __int64 CommittedPageDirectoryParents[1];
} MMWSL, *PMMWSL; /* size: 0x0488 */

