void __fastcall linera_indexer_plugins::operations::ChainOperation::previous_operation(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 16) = 0;
}