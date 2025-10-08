__int64 __fastcall linera_exporter::common::BlockId::from_incoming_bundle(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax

  v2 = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)a1 = v2;
  v3 = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 48) = v3;
  result = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}