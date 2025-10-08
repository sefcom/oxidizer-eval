void __fastcall linera_exporter::storage::BlockProcessorStorage<S>::save(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
  *(_BYTE *)(a1 + 81) = 0;
}