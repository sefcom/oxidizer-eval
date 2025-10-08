__int64 __fastcall linera_exporter::common::BlockId::from_confirmed_block(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax

  v2 = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 208);
  *(_OWORD *)(a1 + 32) = v2;
  v3 = *(_OWORD *)(a2 + 616);
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 600);
  *(_OWORD *)(a1 + 16) = v3;
  result = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}