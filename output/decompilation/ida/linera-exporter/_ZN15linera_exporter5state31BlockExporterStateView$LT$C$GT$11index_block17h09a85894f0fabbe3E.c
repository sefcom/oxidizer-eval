__int64 __fastcall linera_exporter::state::BlockExporterStateView<C>::index_block(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v3 = *(_OWORD *)(a3 + 16);
  v4 = *(_OWORD *)(a3 + 32);
  v5 = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = v4;
  *(_OWORD *)(a1 + 56) = v5;
  result = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a1 + 72) = result;
  *(_BYTE *)(a1 + 432) = 0;
  return result;
}