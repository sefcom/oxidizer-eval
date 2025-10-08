void __fastcall linera_exporter::storage::BlockProcessorStorage<S>::index_block(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 32) = 0;
}