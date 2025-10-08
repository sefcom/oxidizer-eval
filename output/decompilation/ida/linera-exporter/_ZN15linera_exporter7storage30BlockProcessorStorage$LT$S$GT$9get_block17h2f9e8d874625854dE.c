void __fastcall linera_exporter::storage::BlockProcessorStorage<S>::get_block(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1

  *(_QWORD *)a1 = a2;
  v3 = a3[1];
  *(_OWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 24) = v3;
  *(_BYTE *)(a1 + 240) = 0;
}