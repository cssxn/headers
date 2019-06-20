typedef enum
{
  KTMOH_CommitTransaction_Result = 1,
  KTMOH_RollbackTransaction_Result = 2,
} TAG_UNNAMED_122, *PTAG_UNNAMED_122;

typedef struct _KTRANSACTION_HISTORY
{
  /* 0x0000 */ enum _TAG_UNNAMED_122 RecordType;
  /* 0x0004 */ unsigned long Payload;
} KTRANSACTION_HISTORY, *PKTRANSACTION_HISTORY; /* size: 0x0008 */

