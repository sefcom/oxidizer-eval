__int64 __fastcall linera_indexer::common::graphiql(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2

  result = *((_QWORD *)a2 + 10);
  *(_QWORD *)(a1 + 80) = result;
  *(_OWORD *)(a1 + 64) = a2[4];
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}