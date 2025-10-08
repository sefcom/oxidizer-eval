__int64 __fastcall linera_indexer_plugins::operations::Operations<C>::register_operation(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _OWORD *a4,
        __int128 *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm2
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = a2;
  v5 = *a3;
  v6 = a3[1];
  *(_OWORD *)(a1 + 96) = a3[2];
  *(_OWORD *)(a1 + 80) = v6;
  *(_OWORD *)(a1 + 64) = v5;
  v7 = a4[1];
  *(_OWORD *)(a1 + 112) = *a4;
  *(_OWORD *)(a1 + 128) = v7;
  v8 = *a5;
  v9 = a5[2];
  *(_OWORD *)(a1 + 16) = a5[1];
  *(_OWORD *)(a1 + 32) = v9;
  result = *((_QWORD *)a5 + 6);
  *(_QWORD *)(a1 + 48) = result;
  *(_OWORD *)a1 = v8;
  *(_BYTE *)(a1 + 288) = 0;
  return result;
}